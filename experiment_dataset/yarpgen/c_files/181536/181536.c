/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_10 = (!var_7);

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_11 -= (((!var_2) >= var_0));
                        var_12 = (~(arr_6 [8]));
                        var_13 += (arr_5 [i_0] [8] [8] [i_3]);
                    }

                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        var_14 = var_4;
                        arr_12 [i_4 + 1] [i_2] [i_2] [i_0] = (var_3 ? (arr_1 [i_0]) : var_9);
                    }
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_15 += 8;

                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            arr_17 [i_0] [5] [i_2] [i_1] [i_6] [i_1] = (((-9223372036854775807 - 1) >= (arr_11 [i_5] [i_5] [i_5] [i_5])));
                            var_16 ^= ((!(arr_9 [i_0] [i_1] [i_5] [i_6])));
                            var_17 = (~-1121727174);
                        }

                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            var_18 = (arr_14 [1] [i_5] [i_2] [i_1] [i_0]);
                            arr_21 [i_7] [i_0] [i_2] [i_1] [i_0] = (((arr_16 [i_2]) != (arr_16 [i_2])));
                        }
                        for (int i_8 = 2; i_8 < 18;i_8 += 1)
                        {
                            arr_25 [i_0] [i_1] [i_0] [i_2] [i_1] [i_0] = var_9;
                            arr_26 [i_0] [i_2] [i_2] [i_5] [i_5] [i_8] = (arr_19 [i_8] [i_5] [i_2] [i_0] [i_0]);
                            var_19 = (arr_15 [7] [i_0] [i_1] [i_2] [i_5] [i_5] [i_8]);
                            arr_27 [i_0] [i_2] [i_0] = 0;
                            var_20 = (((arr_8 [i_8 - 2] [i_8 - 2] [i_8 + 2]) > var_0));
                        }
                        var_21 = ((var_4 * ((~(arr_19 [i_0] [i_1] [i_1] [i_2] [i_5])))));

                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            var_22 ^= var_8;
                            var_23 = (arr_6 [i_2]);
                        }
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            var_24 += (((~1) != (arr_0 [i_5] [i_5])));
                            var_25 = (((((-(arr_2 [i_5] [14] [i_0])))) * (arr_6 [i_2])));
                            var_26 *= (!28);
                            var_27 *= var_8;
                        }
                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            var_28 = (arr_22 [1] [i_1] [1]);
                            var_29 ^= ((var_7 || (((var_5 >> (209752408 - 209752378))))));
                        }
                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            var_30 = (!((((arr_32 [i_0] [i_2] [0] [16]) ? (arr_4 [i_12]) : (arr_1 [i_2])))));
                            var_31 = ((~(arr_23 [i_0] [i_1] [i_2] [i_5] [i_12])));
                            arr_37 [i_12] [i_2] [i_2] [13] [i_2] [i_0] = (17670 * 31);
                            var_32 += (((arr_16 [i_5]) != (arr_34 [i_0] [i_0] [i_0] [i_5] [i_12] [i_12])));
                        }
                    }
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        var_33 *= (36 || 28);

                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            var_34 = (max(var_34, ((((arr_40 [i_1] [14] [18] [i_1] [i_1]) ? (1047613664 * var_9) : (arr_1 [i_0]))))));
                            var_35 = (max(var_35, (((~4884) & 0))));
                            var_36 = (min(var_36, (((!(arr_9 [i_0] [i_0] [i_0] [2]))))));
                        }
                        for (int i_15 = 1; i_15 < 17;i_15 += 1)
                        {
                            arr_45 [i_15 + 1] [i_13] [i_2] [i_2] [17] [i_0] = var_4;
                            arr_46 [i_15] [i_2] [i_2] [i_2] [i_2] [i_0] = var_4;
                            arr_47 [i_15] [i_2] [2] = ((-23 ? -41 : 65504));
                        }
                        for (int i_16 = 0; i_16 < 20;i_16 += 1)
                        {
                            var_37 = (arr_14 [i_0] [i_1] [i_0] [i_13] [i_16]);
                            arr_50 [i_16] [i_13] [i_2] [i_0] [i_0] = (~var_2);
                            var_38 = (~var_4);
                            var_39 += (var_7 ? (arr_22 [i_0] [i_2] [i_13]) : (arr_7 [i_16] [i_1] [i_16]));
                        }
                        for (int i_17 = 0; i_17 < 20;i_17 += 1)
                        {
                            arr_53 [i_0] [i_1] [i_1] [6] [i_2] [i_13] [i_2] = ((~(arr_6 [i_2])));
                            var_40 = -var_8;
                            var_41 += (arr_7 [i_0] [i_1] [i_2]);
                            var_42 = ((!(var_9 > var_2)));
                        }
                        arr_54 [i_2] [i_2] [i_2] = ((~((var_3 / (arr_19 [i_1] [i_1] [i_1] [i_13] [i_2])))));
                    }
                    var_43 = (arr_13 [i_0] [i_0] [18]);
                }
                var_44 = (((((~14364) & 65507)) << (arr_7 [8] [i_0] [i_0])));

                for (int i_18 = 0; i_18 < 20;i_18 += 1)
                {
                    var_45 = (max(var_3, (arr_56 [15] [17] [15] [i_18])));
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 20;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 20;i_20 += 1)
                        {
                            {
                                arr_63 [i_0] [i_1] [i_18] [i_19] [i_20] = (!(arr_40 [i_20] [i_19] [i_0] [i_19] [i_0]));
                                arr_64 [i_0] = (~(((!(arr_13 [i_18] [i_0] [i_0])))));
                                var_46 -= 1;
                                arr_65 [i_20] [i_19] [i_18] [11] [i_0] = var_6;
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_21 = 0; i_21 < 20;i_21 += 1)
                {
                    var_47 = (((arr_14 [i_0] [i_0] [i_1] [i_0] [i_0]) ^ var_7));
                    var_48 *= ((-(arr_33 [i_0] [i_0] [i_1] [i_1] [i_21])));
                    var_49 = ((((var_7 | (arr_13 [i_0] [i_0] [i_0]))) >= -var_7));
                }
                /* vectorizable */
                for (int i_22 = 3; i_22 < 18;i_22 += 1)
                {
                    arr_72 [i_0] [i_0] [i_0] = ((var_1 * (arr_34 [i_0] [i_0] [i_0] [i_1] [i_1] [i_22 - 3])));

                    for (int i_23 = 0; i_23 < 20;i_23 += 1)
                    {
                        var_50 += (~-var_2);

                        for (int i_24 = 0; i_24 < 20;i_24 += 1)
                        {
                            var_51 = (arr_52 [i_23] [i_22] [i_22 - 2] [i_22 - 3] [i_1] [i_1] [i_0]);
                            var_52 = var_5;
                            arr_79 [i_0] [1] = (arr_36 [i_0] [i_1] [i_1] [i_23] [i_24] [i_24]);
                        }
                        for (int i_25 = 1; i_25 < 18;i_25 += 1)
                        {
                            arr_82 [i_0] [i_1] [i_22] [i_23] [i_25 + 2] = var_5;
                            var_53 = (arr_77 [i_0] [5]);
                            arr_83 [i_25] [i_23] [i_22 + 2] [i_22] [1] [i_0] = ((!(arr_3 [i_0] [i_0])));
                            var_54 = (min(var_54, (var_6 * -41)));
                        }
                        arr_84 [i_0] [3] [i_22] [i_23] = -8170534204485640245;
                    }
                    var_55 ^= ((!(arr_61 [i_0] [i_0] [i_0] [i_1] [i_1] [i_0] [i_0])));
                    var_56 = ((~(arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                }
            }
        }
    }
    var_57 = (~var_5);
    #pragma endscop
}
