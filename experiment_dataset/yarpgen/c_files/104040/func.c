/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104040
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
    for (signed char i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_17 *= ((/* implicit */signed char) ((0U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)18)))));
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_2 [i_1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0 + 1])) / (((/* implicit */int) arr_0 [i_0 + 1]))))) : (((unsigned int) arr_0 [i_0 + 1]))));
            }
        } 
    } 
    var_19 = var_11;
    var_20 = ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_7)) ? ((-(((/* implicit */int) var_3)))) : (((/* implicit */int) var_5)))) : ((+(((/* implicit */int) var_12)))));
}
