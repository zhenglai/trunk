//##########################################################################
//#                                                                        #
//#                       CLOUDCOMPARE PLUGIN: qEDL                        #
//#                                                                        #
//#  This program is free software; you can redistribute it and/or modify  #
//#  it under the terms of the GNU General Public License as published by  #
//#  the Free Software Foundation; version 2 of the License.               #
//#                                                                        #
//#  This program is distributed in the hope that it will be useful,       #
//#  but WITHOUT ANY WARRANTY; without even the implied warranty of        #
//#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         #
//#  GNU General Public License for more details.                          #
//#                                                                        #
//#          COPYRIGHT: EDF R&D / TELECOM ParisTech (ENST-TSI)             #
//#                                                                        #
//##########################################################################
//
//*********************** Last revision of this file ***********************
//$Author::                                                                $
//$Rev::                                                                   $
//$LastChangedDate::                                                       $
//**************************************************************************
//
#ifndef Q_EDL_PLUGIN_HEADER
#define Q_EDL_PLUGIN_HEADER

#include <QObject>

#include "../ccGLFilterPluginInterface.h"

class qEDL : public QObject, public ccGLFilterPluginInterface
{
    Q_OBJECT
    Q_INTERFACES(ccGLFilterPluginInterface)

public:

    //inherited from ccPluginInterface
	virtual QString getName() const { return "E.D.L."; }
	virtual QString getDescription() const { return "Eye-dome Lighting GL filter"; }
	virtual QIcon getIcon() const;

    //inherited from ccGLFilterPluginInterface
    ccGlFilter* getFilter();
};

#endif
