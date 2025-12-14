/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_14 = (min(-39112, (min((arr_0 [i_0]), (arr_6 [i_0])))));
                            var_15 = (max(var_15, ((((((arr_3 [i_1] [i_2 - 2] [i_1]) | (arr_3 [i_2] [i_2 + 2] [i_2 - 2]))) | (arr_3 [i_3] [i_2 - 2] [i_2]))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_16 = (max(var_16, ((var_8 ? (-77 < 267387296) : -267387284))));
                                var_17 = ((((((max((arr_0 [i_0]), (arr_8 [i_0] [i_0]))) << (((min(4583172868611449162, 19813)) - 19810))))) | (min((arr_2 [i_5 + 1] [i_0] [i_4]), (max(11727684643744954107, (arr_13 [i_0 + 4] [i_0 + 4] [i_4] [i_5] [2])))))));
                            }
                        }
                    }
                }
                arr_14 [i_0] = ((75 ? -19814 : 9114393333749130316));
            }
        }
    }
    var_18 = var_5;

    /* vectorizable */
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 12;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        arr_25 [i_8] = (arr_19 [i_9 + 3] [i_8]);
                        var_19 |= (211 | ((~(arr_10 [i_7] [i_8] [i_9 + 2] [i_9] [i_10]))));
                    }
                }
            }
        }
        var_20 = (((arr_0 [i_7]) ? (arr_0 [i_7]) : (arr_0 [i_7])));
    }
    /* LoopNest 2 */
    for (int i_11 = 1; i_11 < 9;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 10;i_12 += 1)
        {
            {
                arr_31 [i_11] [i_11] [i_11] = (arr_29 [i_11 + 1] [1]);
                /* LoopNest 3 */
                for (int i_13 = 0; i_13 < 10;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 10;i_15 += 1)
                        {
                            {
                                arr_40 [i_11] [i_12] [i_15] [i_14] [i_15] &= (((((max(var_1, (arr_5 [i_15] [i_13] [i_14])))) | -var_12)));
                                var_21 = (min(var_21, ((min(0, ((min(64, ((-55 ? 742897923 : (arr_10 [i_11] [i_12] [i_11] [i_14] [i_11])))))))))));
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_16 = 0; i_16 < 10;i_16 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 10;i_17 += 1)
                    {
                        for (int i_18 = 2; i_18 < 9;i_18 += 1)
                        {
                            {
                                var_22 = 13863571205098102454;
                                var_23 = (((arr_8 [i_11 - 1] [i_11 - 1]) ? (arr_39 [i_18 - 2]) : (arr_30 [i_11 + 1] [i_11 + 1] [i_11 + 1])));
                                arr_49 [i_16] [i_16] = (arr_19 [i_16] [i_16]);
                                var_24 -= (((arr_23 [i_18 - 2] [i_12] [i_12] [i_11]) ? 9114393333749130291 : (arr_23 [i_18 + 1] [i_12] [i_12] [i_11 + 1])));
                                arr_50 [i_11] [i_16] [i_16] [i_16] [i_18] [i_18] = (arr_34 [i_12] [i_16] [i_12] [i_11 - 1]);
                            }
                        }
                    }
                    arr_51 [i_11] [i_11] [i_11] [i_16] = (8391615515363793075 * 9114393333749130303);
                    var_25 = ((-7801796537552648293 ? ((var_7 << (((arr_28 [i_16]) - 32352)))) : (arr_5 [i_16] [i_12] [i_16])));
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 10;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 10;i_20 += 1)
                        {
                            {
                                var_26 = (arr_13 [i_11 - 1] [i_16] [i_16] [i_20] [i_20]);
                                var_27 = (max(var_27, (arr_15 [i_11 + 1] [i_11 + 1])));
                                arr_56 [i_16] [i_16] = var_4;
                                var_28 ^= (((((var_2 ? (arr_1 [i_11 - 1]) : 2688064120))) ? var_1 : var_3));
                            }
                        }
                    }

                    for (int i_21 = 0; i_21 < 10;i_21 += 1)
                    {
                        var_29 ^= (((arr_27 [i_12]) < (arr_27 [i_11 + 1])));
                        var_30 = 77;
                    }
                }
                /* vectorizable */
                for (int i_22 = 0; i_22 < 1;i_22 += 1)
                {
                    var_31 = (((arr_8 [i_11 + 1] [i_22]) ? var_13 : (arr_8 [i_11 + 1] [i_22])));
                    /* LoopNest 2 */
                    for (int i_23 = 2; i_23 < 9;i_23 += 1)
                    {
                        for (int i_24 = 1; i_24 < 9;i_24 += 1)
                        {
                            {
                                var_32 ^= (arr_68 [i_11] [i_11] [i_11 - 1] [5] [i_11]);
                                var_33 = (((arr_67 [i_22] [i_12] [i_23] [i_11 - 1] [7]) < (arr_67 [i_22] [i_12] [i_22] [i_23 - 2] [i_24])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
