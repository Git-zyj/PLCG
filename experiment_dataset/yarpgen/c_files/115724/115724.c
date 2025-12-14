/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_13 || var_6);
    var_19 = ((!(((-(~1919268053))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (70368743653376 / 18440683178473293258);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_21 = 31744;
                            var_22 = (((((arr_7 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3]) & (arr_7 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3])))) && ((((arr_7 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1]) << (arr_7 [i_3 - 1] [i_3 - 1] [i_3 - 1] [1])))));
                            var_23 = (arr_6 [i_1] [i_1] [i_3 - 1] [i_3 - 1]);
                        }
                    }
                }

                for (int i_4 = 2; i_4 < 16;i_4 += 1)
                {
                    var_24 = (arr_6 [i_1] [4] [i_4 + 2] [4]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_25 = -var_16;
                                var_26 = (min((max((arr_6 [i_1] [i_1] [1] [i_1]), (!var_7))), ((max(((var_11 ? 65521 : var_16)), (arr_11 [18]))))));
                                arr_20 [i_0] [i_1] [i_1] [i_5] [i_6] = (max((((arr_9 [i_1]) - (arr_9 [i_1]))), (arr_0 [i_4])));
                                arr_21 [i_0] [i_0] [i_1] = (arr_14 [i_0] [13] [i_4] [i_4] [i_4] [i_6]);
                            }
                        }
                    }
                    var_27 = (min(var_15, (min((arr_11 [i_1]), 21884))));
                    var_28 = (max(var_28, (!-31744)));
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_29 &= (arr_6 [i_0] [i_1] [i_4] [i_7 - 3]);
                                var_30 &= (!var_5);
                                var_31 = (max(var_31, (((((!(((~(arr_15 [i_0] [i_0])))))) ? ((((arr_14 [i_8] [i_1] [i_1] [i_1] [i_0] [i_0]) ? (arr_5 [10] [i_0] [i_7 - 1]) : (arr_19 [i_4 + 2] [i_4] [i_0] [i_0] [i_0] [i_7 + 1])))) : ((65504 - (arr_6 [i_0] [i_7 - 2] [i_4 + 1] [i_0]))))))));
                            }
                        }
                    }
                }
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        arr_34 [12] [i_1] = (arr_26 [i_0] [11] [1] [11] [i_10]);
                        var_32 = (arr_16 [i_10] [i_9] [i_9] [i_1] [i_0]);
                    }
                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {

                        for (int i_12 = 2; i_12 < 17;i_12 += 1)
                        {
                            var_33 = ((+(((arr_16 [i_11] [i_12 + 1] [i_12 + 1] [i_11] [i_12]) & 1514407952911710161))));
                            var_34 ^= ((((-(arr_23 [i_9]))) == (((1 << 1) ? (arr_40 [i_0] [i_1] [i_9] [12] [i_12] [i_0]) : (arr_16 [i_0] [2] [2] [2] [i_12])))));
                            var_35 &= ((+(((arr_24 [i_0] [i_12] [i_12] [i_11] [i_12 + 1] [i_9] [i_9]) ? (arr_32 [2] [i_12] [2] [2] [i_12 + 2] [10]) : (arr_24 [i_0] [i_1] [i_1] [i_11] [i_12 - 1] [i_12 - 1] [i_12 - 1])))));
                            var_36 = (max(var_36, -14189016748962694608));
                            var_37 = (min(var_37, ((((~var_10) == (max(var_12, (arr_31 [i_12] [i_0] [6] [i_0] [i_0]))))))));
                        }
                        arr_41 [i_0] [i_1] [i_0] [1] = (~1892179966);

                        for (int i_13 = 4; i_13 < 18;i_13 += 1)
                        {
                            var_38 = var_13;
                            var_39 += arr_28 [i_0] [i_0];
                            var_40 = (arr_39 [5] [i_1] [5]);
                        }
                        var_41 |= ((1514407952911710161 ? 92 : 48185));
                    }

                    for (int i_14 = 1; i_14 < 18;i_14 += 1)
                    {
                        var_42 *= -90;

                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            var_43 = (min(var_43, (arr_23 [i_0])));
                            arr_50 [i_1] [i_1] [i_14] = ((((((arr_35 [i_15] [i_14] [i_1] [2] [i_1] [i_0]) % (min(6060895236258348, (arr_9 [i_1])))))) || (arr_37 [i_1] [i_1] [i_14 - 1] [i_14 - 1] [0] [i_14])));
                        }
                        arr_51 [i_0] [4] [i_9] [i_1] [4] = ((!(arr_24 [i_9] [1] [i_14 + 1] [i_14] [i_14] [i_14 + 1] [i_14 - 1])));
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 19;i_17 += 1)
                        {
                            {
                                var_44 |= -2;
                                var_45 = (arr_6 [i_1] [i_1] [i_9] [i_16]);
                                var_46 = (!-1514407952911710161);
                            }
                        }
                    }
                }
            }
        }
    }
    var_47 = var_5;
    var_48 = (max(var_48, var_6));
    #pragma endscop
}
