/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175513
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
    var_14 &= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */int) (unsigned short)10065))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_12))))) : (min((((/* implicit */unsigned int) (short)13004)), (2697625535U))))) < (((/* implicit */unsigned int) var_3))));
    var_15 &= ((/* implicit */unsigned short) (((-(((/* implicit */int) var_2)))) == (((/* implicit */int) max((var_11), (var_11))))));
    var_16 |= var_9;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_4 [i_1] &= var_6;
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) max((min((((/* implicit */int) arr_3 [i_1])), (var_3))), (((/* implicit */int) var_12)))))));
            }
        } 
    } 
}
