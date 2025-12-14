/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139462
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (short)-1)))))))));
    var_15 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_12))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */_Bool) (short)-24747)) || (((/* implicit */_Bool) 2940579579U))))), (arr_1 [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) var_6))) && (((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned int) (unsigned short)65535)))))))) : (((((/* implicit */_Bool) (unsigned short)28607)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)57258)) && (((/* implicit */_Bool) (unsigned short)60111))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) 3065869140U))))))))))));
                var_17 += ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_8)) ? ((+(2856428578U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_6))))))));
                arr_5 [i_1] [i_1] &= min(((+(((2213876721U) + (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (short)-32747)), ((unsigned short)60766)))));
                arr_6 [i_0] [i_0] [i_0] &= var_8;
            }
        } 
    } 
    var_18 = min((((/* implicit */unsigned int) var_4)), (((((/* implicit */_Bool) min((2213876723U), (((/* implicit */unsigned int) var_7))))) ? (((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) <= (4039392919U))))))));
    var_19 |= ((short) max(((-(3065869164U))), (((unsigned int) 2843164651U))));
}
