/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(-96, var_15));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = 9223372036854775807;
        arr_3 [i_0] [9] = (((!(~9223372036854775788))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                {
                    arr_14 [i_1] [4] [i_1] &= (((-(((arr_9 [2]) ? (arr_12 [0] [i_2 + 2]) : (arr_11 [4] [2] [2] [i_1]))))) | (((max((-9223372036854775807 - 1), var_15)) << (((max((arr_9 [2]), var_17)) + 93)))));
                    var_19 *= (max((((arr_10 [i_3 + 1] [i_2 - 1] [i_3 + 1]) / (arr_10 [i_3 - 1] [i_2 + 1] [i_3 + 1]))), (-35 - 119)));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            {
                                arr_22 [7] [i_2] [i_3 - 1] [8] [i_1] = (max((((var_17 | (arr_11 [i_1] [5] [i_1] [i_4])))), var_9));
                                var_20 = (arr_18 [i_1] [7] [i_3 + 1] [3] [3]);
                                var_21 ^= (max((min(-9223372036854775807, (arr_20 [i_2 + 2] [i_2] [i_2 + 2] [i_2 + 3] [i_2]))), (arr_16 [i_2] [i_2 + 1] [i_5] [i_5] [i_3 - 1])));
                                var_22 += ((((max(var_7, ((max((arr_6 [i_1]), -9223372036854775807)))))) ? (var_6 * -45) : (var_17 <= var_11)));
                            }
                        }
                    }
                }
            }
        }
        var_23 = ((+(((arr_13 [i_1] [i_1] [i_1]) ? (arr_10 [1] [i_1] [i_1]) : (arr_10 [i_1] [i_1] [10])))));
    }
    var_24 = ((((min((9223372036854775806 && var_7), (~var_12)))) > var_15));
    #pragma endscop
}
