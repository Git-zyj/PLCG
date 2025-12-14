/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_21 = (max(var_21, 1));
                    var_22 *= var_10;
                    var_23 -= ((((!17263224497962224160) + (((arr_0 [i_2]) ? 4165352395 : var_0)))));
                    var_24 &= (((1183519575747327446 << (((((arr_7 [1] [i_1] [i_1] [i_2]) ? var_13 : 18446744073709551615)) - 3525134226)))));
                }
            }
        }
    }
    var_25 |= var_6;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 12;i_5 += 1)
            {
                {
                    arr_18 [i_3] [i_3] [i_5] = (min((max(-6048293498951266872, 4664593592410236607)), (((60 >> ((((var_13 - (arr_13 [i_4] [i_3]))) - 2241970738)))))));
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_26 = ((-(min((arr_24 [7] [i_7] [i_7 - 2] [i_5] [i_7] [i_7 + 1] [i_7 + 1]), (arr_24 [i_7] [i_7] [0] [i_5] [i_7] [i_7 - 1] [3])))));
                                var_27 = ((((((arr_0 [i_3]) ? (arr_25 [i_3] [i_3] [i_3] [8] [i_3]) : (arr_25 [i_3] [i_5] [i_5] [i_6 - 3] [1])))) ? (arr_13 [i_3] [i_6 - 3]) : (max(var_13, (arr_25 [i_3] [i_3] [i_3] [i_5 - 1] [i_5 - 1])))));
                                var_28 = (arr_0 [i_7 + 1]);
                                var_29 = (min(var_29, 162498182));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        var_30 = (1 >= 1);
                        var_31 &= (arr_24 [i_8] [1] [i_5] [i_4] [0] [i_4] [i_3]);
                    }
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        var_32 = (((arr_2 [i_3]) ? var_19 : (min(1183519575747327465, 17263224497962224150))));

                        for (int i_10 = 1; i_10 < 11;i_10 += 1)
                        {
                            var_33 |= (((((max(17263224497962224178, -6578724851047015421)))) ? (((-((5980603318179329734 ? var_18 : var_7))))) : (max(-26040, ((13508864353168588897 ? (arr_10 [11]) : var_12))))));
                            var_34 = (max(var_34, var_3));
                        }
                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            var_35 = 1183519575747327437;
                            var_36 -= (arr_11 [i_11]);
                        }
                        var_37 = (((max((arr_28 [i_5 + 1] [i_5] [i_5] [4]), (arr_14 [i_5 + 1]))) + -101));
                        var_38 = (max(var_38, (((1425679673 << (1 - 1))))));
                    }
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {

                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            arr_40 [i_13] [i_5] [1] = ((14540 + (arr_0 [i_5 + 1])));
                            arr_41 [i_3] [i_5] [1] [7] [i_5] [i_3] = 1;
                        }
                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
                        {
                            var_39 = var_7;
                            var_40 = (-(!1183519575747327438));
                        }
                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
                        {
                            var_41 = (arr_26 [7] [i_4] [2] [i_5 + 1] [6] [i_4]);
                            arr_47 [i_5] = (~18183436317604593899);
                        }
                        var_42 = (max((max((min(1183519575747327455, (arr_36 [i_3] [i_3] [i_5] [i_12] [i_5]))), var_9)), (var_16 - var_10)));
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 13;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 1;i_17 += 1)
                        {
                            {
                                arr_52 [i_17] [i_5] [i_5 + 1] [i_4] [3] [i_5] [i_3] = ((~((((max((-2147483647 - 1), 1183519575747327465))) ? ((((var_3 && (arr_8 [i_3] [i_4] [i_4] [i_16]))))) : (max(var_16, 1))))));
                                var_43 = (max(var_43, 15));
                                var_44 = (max(var_44, ((min(511, 4685904831315918911)))));
                                var_45 = (max(var_45, var_1));
                                arr_53 [1] [i_5] [5] [i_5] [i_16] [8] [1] = 124;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 1; i_18 < 12;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 13;i_19 += 1)
                        {
                            {
                                arr_61 [i_18] [i_5] [i_5 + 1] [i_18] [i_19] = ((var_8 ? 65535 : 1260));
                                var_46 = var_11;
                                var_47 = (max(var_47, 10176));
                                var_48 = var_15;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
