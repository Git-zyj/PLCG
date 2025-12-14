/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((~(arr_1 [i_0] [i_0])));
        var_20 -= (arr_0 [i_0]);
    }
    /* LoopNest 3 */
    for (int i_1 = 4; i_1 < 14;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    var_21 += (min((max((arr_6 [i_3]), (arr_6 [i_1]))), (max((((arr_7 [i_1] [i_1] [i_1] [i_3]) & (arr_6 [i_1]))), (arr_7 [i_1 - 4] [7] [i_2] [i_3])))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_22 ^= (arr_9 [i_2]);
                                arr_15 [i_5] [i_1] [i_3] [i_1] [i_1] = -1438548624;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            {
                                var_23 = ((!(arr_14 [i_1] [i_2] [i_3])));
                                var_24 = (max(var_24, (arr_1 [i_1] [i_2])));
                                arr_22 [i_1] [i_7] [i_1] [i_1] [i_7] [i_7] [i_1] = (arr_3 [i_1]);
                                var_25 = (max((((arr_3 [i_1]) != (min(var_9, -29)))), (((arr_18 [i_3]) < var_4))));
                                var_26 = (min((((arr_14 [i_6 + 1] [15] [i_6]) - (arr_18 [i_1 + 1]))), ((18446744073709551615 ? (arr_14 [i_6 - 3] [i_6] [i_7]) : (arr_14 [i_6 - 2] [i_7] [i_7])))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        var_27 = -1580724434;
                        var_28 = (max(var_28, ((((arr_1 [i_1] [i_3]) ? var_8 : (25460 && var_9))))));
                        var_29 = ((var_2 > (arr_13 [i_1] [i_1] [i_2] [i_3] [12] [12])));
                    }
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        var_30 = (arr_14 [13] [i_2] [13]);
                        var_31 = var_17;
                        arr_29 [i_1] [i_3] [i_9] [i_2] [i_1] = ((((arr_10 [i_1] [i_1] [i_1] [i_1]) - (((arr_14 [i_2] [i_3] [i_3]) ? (arr_0 [i_9]) : var_13)))));
                        var_32 = (max(((((((arr_12 [i_1] [i_1] [i_2] [i_3] [10]) ? (arr_18 [i_1]) : 64))) ? var_16 : var_12)), (((max((arr_7 [i_1] [i_1] [0] [i_9]), var_1))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
