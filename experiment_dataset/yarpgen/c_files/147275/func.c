/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147275
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
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) (short)-17759)) + (((/* implicit */int) (short)-17759)))) : (((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1 - 1])) ? (((/* implicit */int) arr_5 [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) var_13)))))))));
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_0 [i_1 - 2] [i_1 - 1]), (arr_5 [i_1 + 1] [i_1 + 1])))) ? (((((/* implicit */_Bool) arr_0 [i_1 - 2] [i_1 - 1])) ? (((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_1 [i_1 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)2047)))))));
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */int) arr_3 [i_1 - 2])) <= (((((/* implicit */_Bool) (short)32766)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_18)))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) max((var_23), (var_9)));
}
