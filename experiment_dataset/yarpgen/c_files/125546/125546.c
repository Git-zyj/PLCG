/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_13 = (((((arr_5 [i_1 + 2] [i_2]) && (arr_4 [i_1 + 2]))) ? (arr_6 [i_1 - 1] [i_1 - 1]) : (((var_12 / ((var_9 ? (arr_3 [i_0] [i_2]) : var_5)))))));
                    var_14 = (max(var_14, var_1));
                }
            }
        }
        var_15 = (min(((((max(2851645267, 65534))) ? ((9223372036854775807 ? -21948 : (arr_5 [4] [10]))) : var_1)), ((max(-21945, 21947)))));
    }
    var_16 += (min((var_11 / var_11), var_1));
    #pragma endscop
}
