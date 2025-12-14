/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177605
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) arr_1 [i_0]);
        var_20 = ((/* implicit */int) ((unsigned long long int) arr_2 [(short)3] [3LL]));
        var_21 |= ((/* implicit */unsigned short) arr_0 [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */int) ((var_10) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1]))))))));
        var_22 = ((/* implicit */unsigned int) max((min((arr_4 [i_1]), (arr_4 [i_1]))), (min((((/* implicit */unsigned short) arr_3 [i_1] [i_1])), (arr_4 [i_1])))));
    }
    /* LoopSeq 1 */
    for (short i_2 = 3; i_2 < 17; i_2 += 1) 
    {
        var_23 *= ((/* implicit */int) ((long long int) arr_3 [i_2 - 2] [i_2 + 1]));
        var_24 = ((/* implicit */unsigned int) var_18);
        var_25 = ((/* implicit */int) (+(((unsigned int) arr_3 [i_2] [i_2 + 2]))));
    }
    var_26 = ((/* implicit */short) var_13);
}
