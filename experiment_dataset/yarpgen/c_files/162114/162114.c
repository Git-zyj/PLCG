/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((min((!var_10), var_4)))));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        var_14 = (max(var_14, (((32768 ? 0 : (arr_1 [i_0 - 4] [i_0 - 3]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_15 = (!(arr_2 [i_1] [i_0 - 4]));
                    var_16 = ((var_2 * (((arr_4 [i_2 - 1]) / (arr_1 [14] [i_1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_13 [i_4 + 1] [0] [i_2] [5] = (arr_4 [i_3 + 1]);
                                var_17 ^= (((arr_5 [i_2 - 2] [i_0] [i_0 + 1]) % var_9));
                            }
                        }
                    }
                    var_18 = (arr_0 [i_0 - 1] [i_0 - 1]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_19 = var_3;
                                arr_18 [1] [i_5] [22] [i_1] [i_0 - 4] = (arr_17 [i_6] [i_2 - 1] [i_0 + 1] [12] [i_0]);
                                var_20 = (min(var_20, (-29712 * 36)));
                                var_21 = ((217288858 ? (arr_9 [i_2 - 2] [i_2 - 2] [i_0 + 3] [i_0] [i_0]) : (((arr_17 [i_6] [3] [i_2 - 2] [19] [3]) / var_11))));
                            }
                        }
                    }
                }
            }
        }
        arr_19 [i_0 - 4] [i_0] = 9223372036854775807;
    }
    var_22 = ((((((max(var_2, var_4))))) / (var_5 / var_12)));
    var_23 = var_11;
    #pragma endscop
}
