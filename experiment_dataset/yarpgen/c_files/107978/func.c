/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107978
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        var_16 = ((/* implicit */short) arr_0 [i_0 + 3] [i_0 + 1]);
        arr_2 [(short)8] [(short)0] = arr_0 [i_0 + 3] [i_0 + 1];
    }
    for (unsigned int i_1 = 1; i_1 < 15; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = arr_4 [i_1];
        arr_6 [i_1] = arr_4 [i_1];
    }
    var_17 = ((/* implicit */short) max((((((/* implicit */unsigned int) ((/* implicit */int) (short)-24719))) * (4091212997U))), (min((((/* implicit */unsigned int) var_1)), (((var_11) - (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
    /* LoopSeq 1 */
    for (unsigned int i_2 = 2; i_2 < 17; i_2 += 1) 
    {
        arr_9 [i_2 - 1] [i_2 - 1] |= arr_8 [i_2];
        var_18 -= ((/* implicit */short) (+(((/* implicit */int) var_3))));
        var_19 = (short)895;
    }
}
