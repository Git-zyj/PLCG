/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [12] = ((!((max(((((arr_2 [i_1]) < var_7))), (13835058055282163712 + var_4))))));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    var_12 = -60;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_13 = var_8;
                                var_14 = (var_7 & var_4);
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_15 ^= var_2;
                        arr_18 [8] [i_2] [i_2] [15] [14] [i_2 - 3] = var_11;
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_23 [i_2] [i_1] [i_2] = var_5;
                        var_16 = ((!(((var_9 ? 14864861839412328770 : (arr_15 [i_0 - 1] [15] [i_2 + 1] [15] [i_2 + 1] [i_6]))))));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        arr_26 [i_0] [i_1] [i_2] [i_2] [17] [19] = ((((((arr_0 [14] [i_7]) ? var_8 : (arr_8 [9] [i_2] [i_2 - 2] [8])))) >= ((var_3 ? -60 : var_2))));
                        var_17 -= ((var_4 ? var_7 : var_6));

                        for (int i_8 = 1; i_8 < 19;i_8 += 1)
                        {
                            var_18 = 58;
                            var_19 = (max(var_19, ((2147483647 ? var_5 : ((~(arr_20 [i_0] [i_0] [i_1])))))));
                            arr_29 [4] [i_2] [i_2] = (var_11 >= var_10);
                        }
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            var_20 = (max(var_20, (((~(arr_22 [i_1] [i_0 + 2] [0] [i_1]))))));
                            var_21 = ((24824 ^ 203) ? var_5 : (var_10 * 9004));
                            arr_33 [i_0 - 1] [i_1] [i_2] [i_7] [i_9] = (arr_8 [i_1] [i_2] [17] [i_9]);
                            var_22 = (max(var_22, (-74 / -61)));
                            var_23 = var_1;
                        }
                        for (int i_10 = 2; i_10 < 17;i_10 += 1)
                        {
                            arr_37 [i_2] [i_2] [i_0] = (~var_1);
                            arr_38 [i_2] [11] [i_1] [i_1] [i_2] = var_1;
                            var_24 -= ((var_1 * (arr_28 [i_0] [i_0 + 1] [i_10] [i_0 - 1] [i_2 - 3])));
                        }
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                    {
                        var_25 = ((arr_32 [i_0 + 2] [i_0 - 1] [i_2 - 1] [1] [1]) ? (arr_32 [i_0 + 2] [i_0 + 2] [i_2 + 1] [1] [i_0 + 2]) : var_11);
                        var_26 = (arr_1 [13]);
                    }
                    arr_41 [i_2] [i_1] [i_2 + 2] = (((arr_3 [i_0 - 1]) ? var_3 : (arr_16 [i_2] [i_0 - 1] [i_2 - 2] [i_2])));
                }

                /* vectorizable */
                for (int i_12 = 1; i_12 < 19;i_12 += 1)
                {

                    for (int i_13 = 1; i_13 < 16;i_13 += 1)
                    {
                        arr_47 [i_0] [6] = (((arr_44 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 2]) <= (!65607610457982464)));
                        var_27 = (((arr_4 [i_12 - 1] [i_0 + 1]) ? (arr_4 [i_12 + 1] [i_0 + 1]) : var_5));
                    }
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        var_28 = var_6;

                        for (int i_15 = 0; i_15 < 20;i_15 += 1)
                        {
                            arr_54 [i_14] [i_14] [i_12 + 1] [i_1] [i_14] = ((~((var_10 ? (arr_32 [i_12] [i_12] [i_12] [i_12] [i_12]) : (arr_43 [i_0] [i_0])))));
                            arr_55 [i_14] [i_1] [i_15] [i_14] [18] = -var_3;
                            var_29 = (((arr_11 [i_14] [i_1] [i_15] [i_14] [i_15] [1]) ? (arr_50 [i_14] [i_1] [i_12] [i_1] [i_15] [i_1]) : var_4));
                        }
                        for (int i_16 = 0; i_16 < 20;i_16 += 1)
                        {
                            arr_59 [i_14] [i_1] [i_14] [10] [i_14] [i_14] = var_4;
                            arr_60 [12] [i_14] [i_12 - 1] [4] [i_16] = var_7;
                        }
                        for (int i_17 = 0; i_17 < 0;i_17 += 1)
                        {
                            arr_65 [i_0 + 1] [i_0] [i_14] [1] [i_0 - 1] = (arr_61 [9] [i_14]);
                            var_30 = (max(var_30, (!var_9)));
                            var_31 = (((0 > -21) || -7522738364841081513));
                            arr_66 [i_14] = (arr_49 [i_17 + 1] [0] [i_12] [4] [15]);
                            var_32 = (max(var_32, var_7));
                        }
                        for (int i_18 = 0; i_18 < 20;i_18 += 1)
                        {
                            arr_69 [i_0 - 1] [i_1] [4] [i_0 - 1] [2] [i_1] &= ((var_11 - (var_7 ^ var_4)));
                            var_33 += ((~(arr_45 [i_14] [i_12 - 1] [i_14] [i_0 + 1])));
                            var_34 = ((var_7 ? 33 : 3499834807359275197));
                        }
                    }
                    arr_70 [i_0] [19] [i_1] [i_12] = 0;
                }
                for (int i_19 = 0; i_19 < 20;i_19 += 1)
                {
                    var_35 = var_2;
                    /* LoopNest 2 */
                    for (int i_20 = 4; i_20 < 17;i_20 += 1)
                    {
                        for (int i_21 = 1; i_21 < 18;i_21 += 1)
                        {
                            {
                                var_36 = (min(var_36, (((!(var_7 != var_6))))));
                                var_37 ^= (!((max((arr_12 [i_20] [18] [18] [0] [i_20 - 2] [i_21]), (arr_12 [i_1] [i_19] [i_19] [14] [i_20 - 2] [2])))));
                                arr_80 [i_0] [6] [i_19] [i_0] [i_20 - 4] [i_21] = (((((1401628805 ? -1223386340249349989 : 18446744073709551615))) || var_8));
                                var_38 = var_1;
                            }
                        }
                    }
                    var_39 = (!23);
                    var_40 = var_5;
                }
            }
        }
    }
    var_41 -= ((min((-32764 / var_7), -7522738364841081513)));
    #pragma endscop
}
