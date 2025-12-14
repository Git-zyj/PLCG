/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    var_14 = (max(var_14, var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 = (((((var_2 ? 25950 : (arr_12 [i_3 + 2] [i_4] [i_1 - 2] [i_3])))) ? (min((min((arr_7 [0] [8] [i_4] [i_3 - 1]), var_4)), ((max(332962182, var_6))))) : ((((((var_4 ? (arr_14 [i_2] [i_2] [i_3] [i_3]) : var_7))) ? var_1 : (arr_10 [i_0] [i_2] [i_3 - 1] [i_1 - 1]))))));
                                arr_16 [i_2] [i_2] [i_2] [i_2] = var_12;
                                arr_17 [i_4] [i_2] [5] [i_2] [i_0] = ((~(min((arr_9 [i_1 + 1] [i_1 + 1] [i_3 + 1]), -19855))));
                                arr_18 [4] [i_1 - 2] [8] [20] [i_1 - 2] [i_2] = var_8;
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_5 = 1; i_5 < 21;i_5 += 1)
                {
                    var_16 = 0;
                    arr_23 [i_5] [i_0] [i_0] [i_0] = var_12;

                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        arr_27 [i_0] [i_6] [i_5] [i_6] = ((!(arr_9 [i_0] [i_1] [i_1 - 2])));
                        var_17 = 0;
                    }
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        var_18 = 1047;
                        var_19 = 64565;
                    }
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_9 = 1; i_9 < 19;i_9 += 1) /* same iter space */
                    {
                        arr_34 [i_8] [i_9 + 1] [i_8] [4] [i_0] [i_8] = ((var_3 ^ (arr_20 [i_9 + 2] [i_1 - 1] [i_1 - 2])));
                        arr_35 [i_0] [0] [i_1] [i_1] [16] [i_8] = (-(((!(arr_9 [2] [i_1] [5])))));
                        var_20 = var_1;
                        var_21 = (!var_5);
                    }
                    /* vectorizable */
                    for (int i_10 = 1; i_10 < 19;i_10 += 1) /* same iter space */
                    {

                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            var_22 *= var_8;
                            var_23 = (((arr_41 [i_0] [i_1 + 1] [i_8] [i_10 + 3] [i_8]) ? var_11 : 19855));
                            var_24 = (((arr_8 [i_1 + 1] [i_10 + 2] [i_11]) ? 1 : (((arr_32 [i_10] [i_8] [i_8] [13]) ? 4095 : (arr_30 [i_1 - 2])))));
                        }
                        for (int i_12 = 1; i_12 < 19;i_12 += 1)
                        {
                            var_25 ^= 64489;
                            arr_44 [i_8] [i_8] [i_8] = ((var_3 + (arr_40 [i_8] [i_0])));
                            var_26 = ((!(!var_12)));
                            var_27 = (min(var_27, 64503));
                        }
                        for (int i_13 = 0; i_13 < 22;i_13 += 1)
                        {
                            var_28 = 25250;
                            var_29 = (((arr_7 [i_1 - 2] [i_1 + 1] [i_10 - 1] [i_13]) ? ((19854 ? (arr_0 [21] [i_13]) : var_0)) : (arr_10 [i_0] [i_8] [i_8] [i_13])));
                        }
                        var_30 = (115 / 19855);
                        var_31 |= 128;
                    }
                    var_32 = (max(((-(((!(arr_20 [1] [i_1] [i_8])))))), 2046));
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 21;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 22;i_15 += 1)
                        {
                            {
                                var_33 = ((var_5 ? ((min((arr_25 [i_0] [i_1] [i_8] [i_14]), var_10))) : (((((~(arr_32 [i_0] [i_0] [i_8] [i_14])))) ? (arr_22 [i_1 + 1] [i_1 - 2] [i_14 + 1] [i_14]) : var_1))));
                                arr_54 [i_0] [i_1] [i_8] [i_8] [i_15] = (min((max((arr_14 [i_8] [i_1] [i_8] [i_15]), (arr_14 [i_8] [1] [i_14] [13]))), ((((arr_14 [i_8] [i_1 - 1] [i_1 - 2] [7]) && (arr_14 [i_8] [i_1] [i_8] [i_15]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 22;i_16 += 1)
                    {
                        for (int i_17 = 1; i_17 < 20;i_17 += 1)
                        {
                            {
                                var_34 = (max((min(var_7, var_2)), (max(var_8, 14817))));
                                var_35 = (arr_48 [i_8] [i_17 + 2] [i_17 + 2] [i_1 - 1]);
                            }
                        }
                    }
                }
                for (int i_18 = 0; i_18 < 1;i_18 += 1) /* same iter space */
                {
                    var_36 = ((((max((var_10 > var_8), var_1))) ? (-32767 - 1) : ((((((arr_1 [i_0]) ? var_2 : (arr_8 [i_0] [i_1 - 1] [i_1 - 1]))) == var_4)))));

                    for (int i_19 = 2; i_19 < 20;i_19 += 1)
                    {
                        arr_66 [19] [i_18] [i_18] [i_0] = ((((min((((arr_41 [i_18] [i_0] [i_1] [i_0] [i_18]) ? var_2 : 8386)), -11))) ? ((((((var_7 ? 0 : var_12)) != (arr_4 [i_19 - 2]))))) : ((~((var_1 ? var_11 : -8375233428465602435))))));
                        var_37 = (max(((var_1 ? (((1047005417 ? var_11 : var_0))) : (arr_61 [2] [2]))), ((var_2 & ((var_11 ? var_8 : (arr_55 [i_19] [i_1 - 1] [i_18] [i_19 - 1] [i_18] [i_18])))))));
                        arr_67 [i_18] = var_10;
                    }
                    for (int i_20 = 0; i_20 < 1;i_20 += 1)
                    {
                        var_38 ^= 0;
                        arr_70 [i_0] [i_18] [i_0] [i_20] [17] = (min((((var_5 && (arr_29 [i_0] [i_18] [i_0] [i_0])))), 1047005397));
                    }
                    var_39 *= (arr_38 [i_0] [i_1] [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
