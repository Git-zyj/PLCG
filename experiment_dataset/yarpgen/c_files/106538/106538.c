/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_14 = var_4;
                var_15 = var_5;
                var_16 ^= ((((((2409088336573423650 < var_8) ? (((arr_1 [i_1]) / (arr_4 [i_0 - 2] [i_1] [i_1]))) : (arr_4 [i_0 + 1] [i_0 - 2] [i_0 - 1])))) ? ((((arr_4 [i_0 - 1] [i_0] [i_1]) != 16384))) : ((((arr_4 [i_0 + 1] [i_0] [i_1]) >= var_13)))));
            }
        }
    }
    var_17 -= var_13;
    var_18 = (min(var_18, var_0));
    var_19 = (max((var_12 * var_0), (((max(var_9, var_7))))));
    var_20 = (max(-var_9, var_3));
    #pragma endscop
}
