/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_13 = (((((max((arr_5 [i_1 - 1] [i_1 - 1]), 1)))) < (arr_7 [i_1 - 1] [i_1] [i_2])));
                                arr_11 [i_2] [i_1 - 1] [i_1] [i_1] [i_2] = (arr_6 [i_2] [i_3]);
                                var_14 = (max(3897182554858582534, 53));
                                var_15 = (max(var_15, (((+(((arr_9 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) ? var_9 : (arr_2 [i_2]))))))));
                            }
                        }
                    }
                    var_16 = 29;
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_17 = (min((~53), (((~var_0) ? var_7 : 23037))));

                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 18;i_6 += 1)
                    {

                        for (int i_7 = 1; i_7 < 18;i_7 += 1)
                        {
                            var_18 = (max(var_18, (((1 ? ((((arr_19 [i_0] [4] [i_5] [i_6 + 1]) != var_11))) : (arr_18 [i_0] [i_6 + 3] [i_5] [i_6] [i_7]))))));
                            var_19 += ((!(arr_3 [i_0] [i_1 - 1] [i_5])));
                            arr_21 [i_7] [i_7] [i_7] [i_1] = (((((arr_18 [i_7] [i_7 - 1] [i_7] [i_7 + 1] [i_7 + 1]) + 2147483647)) << (((((arr_18 [i_7] [i_7 + 2] [i_7] [i_7 + 2] [i_7]) + 98)) - 30))));
                        }
                        for (int i_8 = 2; i_8 < 20;i_8 += 1)
                        {
                            var_20 = -2009022971;
                            arr_26 [i_0] [i_1] [i_1] = (arr_15 [7] [i_6] [i_6 + 3]);
                            var_21 += -39;
                            arr_27 [i_0] [i_0] [i_0] [i_6] = var_3;
                        }

                        for (int i_9 = 3; i_9 < 20;i_9 += 1) /* same iter space */
                        {
                            var_22 = ((var_6 + (arr_4 [i_6 + 2] [i_1 + 1] [2])));
                            var_23 = (min(var_23, (((-(((arr_3 [i_6] [i_1] [i_5]) ? (arr_31 [i_0] [i_0] [i_0] [i_5] [i_6] [i_9]) : 1)))))));
                            var_24 = ((!(arr_17 [4] [i_1] [i_5] [i_6] [i_1])));
                            var_25 = (max(var_25, var_10));
                            var_26 = (min(var_26, (((~(arr_2 [i_9 - 3]))))));
                        }
                        for (int i_10 = 3; i_10 < 20;i_10 += 1) /* same iter space */
                        {
                            arr_34 [i_5] [i_1] [i_5] [i_1] [i_0] = (arr_14 [i_1 + 2] [i_1 - 1] [i_1 - 2] [i_1 + 1]);
                            var_27 += -2009022961;
                            var_28 = (!(arr_16 [i_10 - 2] [i_10 - 2] [i_10 + 1]));
                            arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (23 >= 1);
                            arr_36 [i_10] [i_6 + 1] [i_5] [i_0] [i_0] = (arr_28 [i_0] [i_1] [i_6 + 2] [i_1] [i_1 - 1] [i_10 + 1] [i_0]);
                        }
                        for (int i_11 = 3; i_11 < 20;i_11 += 1) /* same iter space */
                        {
                            arr_40 [i_0] [i_11] [i_11] = (((arr_33 [i_0] [i_1] [i_0] [i_1 - 1] [i_11 + 1]) ? 9223372036854775807 : 4294967295));
                            arr_41 [i_11] [i_1] [i_5] [i_11] [i_6] [i_1] [i_11] = ((arr_18 [i_1 + 1] [i_1] [i_5] [i_11 - 2] [i_6]) & (arr_15 [i_6 - 1] [i_1 + 2] [i_1]));
                            var_29 = (arr_8 [i_1 - 2] [i_1] [i_11] [i_11 - 2] [i_11]);
                            var_30 = ((var_8 + (!29)));
                        }
                    }
                    for (int i_12 = 2; i_12 < 19;i_12 += 1)
                    {
                        var_31 = var_5;
                        var_32 += var_8;
                        var_33 += (min(var_7, (arr_12 [i_1 - 2] [i_5] [i_12 + 2])));
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        var_34 = (min(var_34, (((var_3 << (((var_8 - var_0) - 30330)))))));

                        for (int i_14 = 1; i_14 < 20;i_14 += 1)
                        {
                            var_35 = (((arr_30 [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_14]) != ((var_2 ? (arr_16 [i_0] [i_0] [i_0]) : (arr_1 [i_0])))));
                            var_36 = 16352;
                            arr_51 [i_0] [i_13] [i_5] = var_3;
                        }
                    }
                    arr_52 [i_0] [i_0] [i_5] = arr_5 [i_0] [i_0];

                    /* vectorizable */
                    for (int i_15 = 2; i_15 < 19;i_15 += 1)
                    {
                        var_37 = ((~(arr_44 [i_15 + 1] [i_15] [i_1 - 2] [i_15 + 2])));
                        var_38 = var_5;
                        var_39 = (min(var_39, var_2));
                        arr_55 [i_15] [i_15] [i_15] &= (arr_16 [i_0] [i_1 - 1] [i_15 - 1]);
                    }
                    for (int i_16 = 0; i_16 < 21;i_16 += 1)
                    {
                        var_40 = (arr_10 [i_1] [i_1] [i_5] [i_1] [i_1] [i_1]);
                        var_41 = (min(var_41, ((((((2009022980 ? (arr_1 [i_1 + 2]) : (arr_1 [i_1 + 1])))) ? (arr_1 [i_1 + 2]) : (var_6 == var_1))))));
                    }
                    for (int i_17 = 0; i_17 < 21;i_17 += 1)
                    {
                        var_42 = ((18147490591304382399 ? -var_12 : ((((!((min(202, var_8)))))))));
                        arr_61 [i_17] [i_0] = 10006;
                    }
                    for (int i_18 = 0; i_18 < 21;i_18 += 1)
                    {
                        var_43 = (max(((min(58897731504569006, ((max(var_10, var_5)))))), (min(((((arr_32 [i_0] [i_1] [i_5] [i_18] [i_1] [i_1] [5]) > var_5))), (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [4])))));

                        /* vectorizable */
                        for (int i_19 = 0; i_19 < 21;i_19 += 1) /* same iter space */
                        {
                            arr_66 [i_0] [i_0] [i_0] [i_18] [i_0] = 16371;
                            var_44 += 1;
                            var_45 = var_9;
                            var_46 = (((arr_25 [i_18] [i_1] [i_19] [i_18] [i_1 + 2]) * ((-(arr_31 [i_19] [i_18] [3] [i_1] [i_0] [i_0])))));
                        }
                        /* vectorizable */
                        for (int i_20 = 0; i_20 < 21;i_20 += 1) /* same iter space */
                        {
                            var_47 = var_12;
                            var_48 = (arr_25 [i_0] [i_1 - 2] [i_1 - 2] [i_18] [i_20]);
                            var_49 = -50;
                            var_50 = var_9;
                        }
                        for (int i_21 = 0; i_21 < 21;i_21 += 1)
                        {
                            var_51 = var_9;
                            var_52 = var_6;
                            var_53 -= (((!((!(arr_2 [i_18]))))));
                        }
                        for (int i_22 = 0; i_22 < 21;i_22 += 1)
                        {
                            arr_76 [i_22] [i_1] = max(-var_6, var_2);
                            arr_77 [i_22] [i_1] [i_1] [i_18] [i_22] = (i_22 % 2 == 0) ? ((((((((var_10 >> (((arr_43 [i_18] [i_22] [i_22] [i_1]) - 239558575)))) - ((max(var_3, var_11)))))) ? (~6163076852521136791) : (((var_8 ? var_3 : (~-6144924033207638551))))))) : ((((((((var_10 >> (((((arr_43 [i_18] [i_22] [i_22] [i_1]) - 239558575)) - 1748692144)))) - ((max(var_3, var_11)))))) ? (~6163076852521136791) : (((var_8 ? var_3 : (~-6144924033207638551)))))));
                        }
                    }
                    arr_78 [i_0] [i_1] [i_0] [i_0] = var_7;
                }
                var_54 = (((((-((max(var_10, var_11)))))) / (((arr_12 [i_1 - 2] [i_1 + 1] [i_1]) ? var_12 : 60))));
                var_55 = var_8;
                var_56 = (~((4294950952 ? 45 : -9116627295418915736)));
            }
        }
    }
    var_57 += 114;
    #pragma endscop
}
