/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148483
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
    for (signed char i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] &= ((/* implicit */signed char) min((((short) arr_2 [i_0])), ((short)-4578)));
                var_13 = var_3;
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)109))))) << (((((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((/* implicit */int) arr_2 [i_0 + 2])) : (((/* implicit */int) (short)1022)))) + (10706)))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) max((var_4), (var_11))))) : (((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */long long int) var_1)))))));
}
