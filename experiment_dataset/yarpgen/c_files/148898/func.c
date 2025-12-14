/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148898
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_20 = ((((unsigned int) var_5)) + ((-(arr_3 [i_0] [i_0] [i_0]))));
                arr_7 [i_1] [i_0] = ((/* implicit */short) (-(138165025U)));
            }
        } 
    } 
    var_21 = max((var_2), (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_6)) ? (var_19) : (((/* implicit */unsigned int) ((/* implicit */int) (short)16147))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)16152))))));
    var_22 = ((((/* implicit */_Bool) var_13)) ? (max((((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))), (((unsigned int) (short)-9679)))) : (((/* implicit */unsigned int) (+(((/* implicit */int) ((short) var_11)))))));
}
