/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += ((((max((min(var_9, var_6)), var_15))) && var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_17 *= ((((((arr_3 [i_0] [i_0]) > (arr_0 [i_0])))) % (max(var_4, var_12))));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, (arr_9 [i_3])));
                                var_19 = ((-((-((66 ? var_15 : var_6))))));
                            }
                        }
                    }
                    arr_11 [i_0] &= var_7;
                    arr_12 [i_0] [i_0] [i_0] = (-(((arr_3 [i_2] [i_1]) ? (((arr_2 [i_1]) ? (arr_4 [i_0] [i_2]) : (arr_0 [i_1]))) : var_5)));

                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            arr_17 [i_0] [i_1] [i_5] [i_6] = (max(((((arr_14 [i_0] [i_0] [i_0] [i_0]) >> var_6))), (arr_3 [16] [i_5])));
                            var_20 = (max(var_20, (arr_3 [i_6] [i_1])));
                            arr_18 [i_0] [i_6] [i_2] [i_1] [i_0] = arr_7 [i_6] [i_5] [i_0] [i_0] [i_0] [i_0];
                            arr_19 [i_0] [i_1] [i_2] [2] [i_6] = var_13;
                        }
                        for (int i_7 = 2; i_7 < 18;i_7 += 1)
                        {
                            arr_24 [i_7 - 2] [i_5] [i_2] [i_1] [i_0] [i_0] |= (((min((arr_8 [i_0] [i_0] [i_2] [i_2] [i_2] [i_5]), (14780500845106432018 / 14780500845106432018))) + (arr_13 [i_0] [i_1] [i_1] [i_2] [i_5] [i_7])));
                            var_21 = (max(var_21, (((((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_20 [i_7 + 2] [i_5] [6] [i_1] [6]) : (arr_20 [i_0] [9] [i_2] [i_5] [i_7])))))));
                            arr_25 [i_1] [i_1] [i_2] [i_1] [i_0] = (((arr_15 [i_7] [i_5] [17] [i_1] [i_0] [17]) / (max((((4294967295 ? (arr_3 [i_1] [i_5]) : 4294967295))), (~12)))));
                        }
                        var_22 *= 0;
                        var_23 *= (255 != var_0);
                    }
                    arr_26 [i_2] [i_0] [i_1] [i_2] = (((arr_20 [17] [i_2] [i_2] [i_0] [17]) || (-var_10 + 34)));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
                {
                    var_24 = (min(var_24, (((-(var_1 / -7672264349514913474))))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_25 = (min(var_25, (52 || var_6)));
                                arr_33 [i_8] = (arr_13 [i_8] [1] [i_8] [i_8] [4] [4]);
                                var_26 -= 16016820928696654351;
                                arr_34 [i_8] = (arr_21 [i_9] [i_9] [i_9] [i_9]);
                                arr_35 [i_0] [i_8] [i_8] [i_9] [i_9] = (arr_32 [i_10] [i_8] [i_8] [i_8] [i_0] [i_0]);
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
                {
                    var_27 = ((8 >> (14780500845106432024 - 14780500845106431983)));
                    var_28 = var_1;

                    for (int i_12 = 1; i_12 < 17;i_12 += 1)
                    {
                        var_29 -= (((arr_5 [i_1] [i_1] [i_12 + 4] [3]) != 9));
                        var_30 -= (((arr_31 [i_1] [i_1] [i_11] [i_12 + 3] [i_11] [i_1] [i_1]) ? (arr_29 [i_0] [i_1] [i_1] [i_12 + 1]) : (arr_23 [i_0] [i_1] [15] [i_12 + 4] [i_1])));
                        arr_40 [i_0] [i_0] [i_0] [i_12] [i_0] |= 198;
                    }
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {

                        for (int i_14 = 3; i_14 < 18;i_14 += 1) /* same iter space */
                        {
                            arr_48 [i_0] [0] [i_14] [i_13] [18] = 1;
                            arr_49 [i_14] [i_1] [i_1] [12] [i_1] = (((1 <= var_14) ? var_0 : (arr_13 [i_0] [i_1] [i_11] [i_11] [i_13] [i_14])));
                            arr_50 [i_0] [i_14] [10] [i_13] [i_14 - 1] [i_11] = (((((arr_15 [i_1] [i_1] [14] [i_1] [6] [i_1]) >= 65531)) ? (arr_9 [i_14]) : (((arr_16 [i_14] [i_13]) >> (43 - 17)))));
                            var_31 *= var_12;
                            var_32 *= ((-(arr_7 [i_14 + 1] [17] [i_14] [i_14 + 2] [15] [i_1])));
                        }
                        for (int i_15 = 3; i_15 < 18;i_15 += 1) /* same iter space */
                        {
                            arr_53 [i_0] [i_0] [i_0] [i_0] [i_0] &= (arr_45 [i_13] [i_13]);
                            var_33 = (max(var_33, (arr_23 [i_15 - 3] [i_15 - 3] [i_11] [i_13] [i_15 - 1])));
                            var_34 = (max(var_34, 1));
                            var_35 = (min(var_35, (arr_42 [i_0])));
                        }
                        arr_54 [i_0] [i_1] [i_0] [i_0] = -var_12;
                        arr_55 [i_0] [i_1] [i_11] [i_13] = (((((var_3 ? 255 : 1))) & 0));
                        var_36 &= (((arr_51 [i_11] [i_0] [i_0] [i_1] [i_13] [i_0]) || 106));
                    }
                    arr_56 [3] [i_1] [i_11] [i_1] &= ((-(arr_29 [i_11] [i_0] [i_0] [i_0])));
                }
                arr_57 [2] [i_1] [i_1] = var_14;
            }
        }
    }
    var_37 = var_5;
    #pragma endscop
}
