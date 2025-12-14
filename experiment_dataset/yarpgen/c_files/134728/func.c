/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134728
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            var_12 = ((/* implicit */long long int) arr_0 [i_0] [i_1]);
            var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) arr_5 [(short)3] [i_0] [i_1 - 1]))));
            var_14 = ((/* implicit */unsigned short) arr_2 [14]);
        }
        var_15 = ((/* implicit */int) arr_5 [i_0 + 1] [i_0] [i_0]);
    }
    var_16 &= ((/* implicit */unsigned short) var_2);
}
