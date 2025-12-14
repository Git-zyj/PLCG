/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= ((min((var_10 & var_10), -var_10)));
    var_18 = (((var_8 ^ (((max(9605, 0)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = ((((arr_4 [i_0] [4]) ? (arr_3 [i_0] [i_0]) : (arr_3 [i_0] [i_0]))));
                arr_6 [i_0] [i_0] = (max((((((arr_1 [i_0]) / (arr_1 [i_0]))))), (max((arr_2 [i_0]), (max(var_7, var_12))))));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {

                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_20 = 1647305442;
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_10 [i_2 + 2] [i_2 - 2] [i_2 - 1] [i_2 + 3] [i_2 + 3]);
                        }
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            arr_18 [i_0] [10] [1] [i_3] [i_3] = var_16;
                            var_21 = ((arr_3 [i_0] [i_0]) ? ((((arr_16 [i_0] [i_0] [i_2] [i_3] [i_5] [i_5]) >= 1071403607))) : ((687703212 ? 1 : 687703212)));
                            var_22 = -28318;
                        }
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            var_23 = (arr_19 [i_0] [i_0] [i_0] [i_0] [1] [i_0]);
                            var_24 = (min(var_24, (((-(arr_14 [i_6] [i_6] [i_6] [i_6] [i_6]))))));
                        }
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            var_25 = (arr_16 [i_0] [i_1] [i_2 - 1] [i_3] [i_7] [i_7]);
                            var_26 = ((var_12 ? (((arr_8 [i_0] [i_1] [i_0] [i_3 + 2]) / var_15)) : ((((arr_17 [i_7] [i_3] [i_2 - 2] [i_1] [i_0]) ? (arr_10 [i_0] [i_1] [6] [i_0] [i_7]) : var_10)))));
                        }
                        var_27 = (max(var_27, ((((arr_7 [i_0] [i_1] [i_2 - 2]) ? (arr_11 [i_0] [i_1] [i_2] [i_3 + 2]) : (arr_4 [i_0] [i_0]))))));

                        for (int i_8 = 1; i_8 < 14;i_8 += 1)
                        {
                            var_28 -= (var_11 ? var_7 : var_13);
                            var_29 = (((arr_4 [i_1] [i_2 - 1]) ? (arr_4 [i_2 - 1] [i_3 - 3]) : (arr_4 [i_0] [i_3 - 1])));
                            arr_27 [i_0] [i_0] [11] [i_0] [i_8 - 1] [i_3 - 3] [i_0] = (arr_10 [i_0] [i_0] [i_2 - 1] [6] [i_0]);
                            var_30 *= (arr_2 [i_2]);
                        }
                    }
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        var_31 = (((arr_4 [i_0] [i_2 - 2]) ? var_13 : (0 + var_6)));
                        var_32 = (1945161230 - 235);

                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            arr_34 [i_1] [i_1] [i_0] [i_1] [i_1] = (arr_22 [i_0] [i_0]);
                            var_33 = arr_9 [i_2] [i_2 + 1] [2] [i_9];
                        }
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            var_34 = (max(var_34, (((((((arr_3 [i_9] [i_9]) ? (arr_31 [i_0] [i_1] [i_9] [i_9] [i_0]) : var_2))) ? 35 : var_2)))));
                            var_35 ^= (!0);
                        }
                        for (int i_12 = 0; i_12 < 15;i_12 += 1)
                        {
                            var_36 = (arr_3 [4] [13]);
                            var_37 = (arr_33 [i_0] [8] [i_2] [i_0] [i_12] [i_2 + 3]);
                        }
                        for (int i_13 = 0; i_13 < 15;i_13 += 1)
                        {
                            var_38 = var_0;
                            arr_44 [i_0] [i_1] [3] [i_9] [i_0] = var_10;
                            var_39 = (((((var_0 ? (arr_22 [i_0] [i_0]) : var_10))) ? var_16 : var_6));
                        }
                        arr_45 [i_0] [i_0] = (((arr_29 [i_0] [i_1]) | (arr_37 [i_2 + 2])));
                        var_40 = 2147483647;
                    }
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        var_41 = (max(var_41, (arr_26 [i_2 - 2] [i_2 + 2] [i_2 + 3])));
                        var_42 -= (-687703211 || 32);
                        var_43 = (-((-7943132887981408270 ? 43963 : var_14)));
                        arr_48 [i_0] [i_2] [i_2] [i_14] |= ((var_11 + (((var_7 ? (arr_35 [i_14] [i_2] [i_2] [i_2] [i_0] [i_0]) : 54655)))));
                    }
                    var_44 = ((!47) / (arr_16 [i_2 + 2] [i_2 - 2] [i_2 - 1] [i_2 + 3] [i_2 + 1] [i_2 + 3]));
                }
                for (int i_15 = 0; i_15 < 15;i_15 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_16 = 1; i_16 < 11;i_16 += 1)
                    {
                        for (int i_17 = 2; i_17 < 14;i_17 += 1)
                        {
                            {
                                arr_58 [i_0] [i_0] [i_0] [i_0] [i_15] [i_16] [i_15] = ((((min(50, 560447494))) ? (((!43970) ? (arr_21 [i_0] [i_0]) : (max(-26987, -5)))) : ((((arr_11 [i_0] [i_1] [i_0] [i_17 + 1]) >> ((((199373399 ? 5964009265952439736 : -96)) - 5964009265952439719)))))));
                                arr_59 [i_0] [i_1] [1] [i_16] [i_0] = ((((((((var_3 ? 4584 : 112))) ? 12288 : 24059))) ? 127 : (((min(95, 12516))))));
                            }
                        }
                    }
                    var_45 = 658601912;
                }

                for (int i_18 = 0; i_18 < 15;i_18 += 1)
                {
                    var_46 += var_4;
                    var_47 = -154;

                    /* vectorizable */
                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        arr_67 [i_0] [i_1] [i_1] [i_1] = ((var_6 <= (arr_66 [i_0] [i_0] [i_0] [i_0])));
                        var_48 = ((((arr_23 [i_19]) ? var_10 : (arr_12 [i_19] [i_18] [i_18] [i_0] [i_0]))));
                        var_49 = (!950532415830328588);
                        var_50 = (arr_29 [i_18] [i_0]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
