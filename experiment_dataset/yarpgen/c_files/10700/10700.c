/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_14, var_18));
    var_21 += (min((((((var_17 ? var_10 : var_0))) ? ((var_19 ? 252 : 132)) : var_15)), ((((max(362980520, 2147483617))) ? (var_1 ^ var_1) : 0))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 15;i_3 += 1)
                {
                    {
                        var_22 = (((arr_8 [i_3 - 2] [i_3 + 1] [i_2 + 1] [16]) < (arr_8 [i_3 + 2] [i_3 + 1] [i_2 + 2] [i_0])));
                        var_23 = (max(var_23, (((~(arr_3 [i_3 - 1] [i_2 - 1]))))));
                        var_24 = ((126 ? (((arr_0 [i_1]) ? (arr_6 [i_0] [i_1]) : 0)) : (arr_9 [i_3] [i_3] [i_3] [i_3 - 2])));
                    }
                }
            }
        }
        var_25 = (((arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_7 [0] [16] [16] [i_0] [5] [i_0]) : 7563));
    }
    #pragma endscop
}
