/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_1] [i_4] = -1908607838;
                                var_20 = (min(var_20, (((!(((882027407 << (var_14 - 4576964594177571199)))))))));
                                arr_15 [i_4] [1] [i_2] [i_1] = (!(arr_13 [i_3] [i_3] [i_2 - 2] [i_2 - 4] [i_2 - 4] [i_2 - 3]));
                            }
                        }
                    }
                }
                arr_16 [7] [7] = ((max(((min(1, 177)), -var_4))));
                var_21 = (((((var_6 ? (arr_10 [i_1] [i_1] [i_1]) : 0))) | (min(-var_15, (((~(arr_3 [i_1] [i_1]))))))));
                var_22 = (((((arr_6 [i_0]) ^ (arr_6 [i_1]))) << (((min((arr_6 [i_0]), (arr_6 [i_1]))) + 4735640810340885973))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_23 = (max(var_23, (((((((arr_11 [i_7] [i_6] [i_5] [i_7] [i_9] [i_9]) ? var_16 : (arr_30 [i_6] [i_6])))) ? ((var_2 * (arr_3 [i_5] [i_9]))) : (((arr_5 [i_6] [i_6] [i_6]) >> (var_18 - 18391619881048951847))))))));
                                arr_31 [i_5] [i_6] [i_7] [i_9] [i_9] = ((92 ? 177 : 3110068506782311846));
                            }
                        }
                    }
                }

                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    var_24 = ((((max((max(21, (arr_13 [i_10] [i_6] [i_6] [i_6] [i_5] [i_5]))), ((((arr_7 [i_6] [i_6] [1]) >= var_4)))))) ? ((-(arr_23 [i_6] [i_10]))) : (~4)));

                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        arr_38 [i_10] [1] = 1948456137;
                        var_25 = ((-(0 || 101)));
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 22;i_13 += 1)
                        {
                            {
                                arr_43 [i_5] [i_5] [i_5] [i_10] [i_13] = ((-(arr_34 [i_5] [i_5] [i_10] [i_13])));
                                var_26 = ((((max((arr_4 [i_6] [i_12] [i_6]), (arr_4 [9] [i_6] [i_13])))) && (arr_4 [i_6] [i_10] [i_13])));
                            }
                        }
                    }
                    var_27 |= ((((arr_35 [i_10] [i_6] [i_6] [i_5]) || ((max((arr_11 [4] [i_6] [13] [i_5] [i_5] [i_5]), (arr_30 [i_6] [1])))))));
                }
                for (int i_14 = 0; i_14 < 22;i_14 += 1)
                {
                    arr_46 [i_14] [i_14] = 1;
                    var_28 = (min(var_28, (((var_16 && (~8105))))));

                    for (int i_15 = 0; i_15 < 22;i_15 += 1) /* same iter space */
                    {
                        arr_51 [i_14] [15] = ((((arr_2 [i_5] [i_6] [i_14]) ^ var_5)));
                        var_29 -= (max((arr_32 [i_15] [i_5] [i_15]), (((!(((32654 ? -1908607839 : 115))))))));
                        arr_52 [i_15] [i_14] [i_14] [i_14] [i_6] [i_5] = (min(var_13, ((0 >> (arr_18 [i_5])))));
                    }
                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 22;i_16 += 1) /* same iter space */
                    {
                        var_30 = (arr_13 [i_6] [i_16] [i_14] [i_6] [11] [15]);
                        arr_56 [i_16] [i_14] = (((~-1690430194) << ((((var_12 ? var_13 : -478655381)) - 50211))));
                    }
                    /* vectorizable */
                    for (int i_17 = 0; i_17 < 22;i_17 += 1) /* same iter space */
                    {
                        var_31 = (min(var_31, (!-2121178117)));

                        for (int i_18 = 0; i_18 < 1;i_18 += 1)
                        {
                            var_32 = (max(var_32, (arr_53 [i_5] [i_6] [i_17] [i_17])));
                            arr_61 [i_17] [1] [i_14] [i_14] [i_17] [i_14] [i_17] = (((arr_29 [i_5] [i_6] [i_14] [i_5] [19] [i_17] [i_6]) - (arr_30 [i_18] [i_14])));
                            var_33 = ((~(arr_24 [i_5] [i_6] [i_18])));
                            arr_62 [i_5] [4] [4] [4] [i_5] |= -182;
                        }
                        arr_63 [i_14] [12] [i_14] [i_14] [i_14] = 1;
                    }
                    var_34 = (!65531);
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 22;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 22;i_20 += 1)
                        {
                            {
                                var_35 = var_8;
                                var_36 = (((((-(max(2121178117, 1))))) % ((7034387112478069313 ? (((min(177, 80)))) : (arr_60 [i_5] [i_6])))));
                                var_37 -= -var_4;
                            }
                        }
                    }
                }
            }
        }
    }
    var_38 = (min((min(var_0, var_18)), var_11));
    var_39 = (max(1470017977, 18232306355753131862));
    #pragma endscop
}
