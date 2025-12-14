/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((((var_5 & var_5) ? var_9 : 2147483647)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_12 += -1253815244;

                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [i_2] = var_5;
                    arr_9 [i_0] = (max(var_10, -233));

                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        var_13 = (max(var_13, (arr_6 [i_3])));
                        var_14 = ((min((((arr_11 [i_0] [i_1] [i_0] [i_0] [1] [i_3]) ? var_0 : var_2)), 1811039257)));
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 8;i_4 += 1)
                    {
                        arr_15 [i_0] [i_1] [i_0] [i_4] [4] = 9;
                        arr_16 [i_0] [i_1] [10] [10] [i_1] [i_1] = -1;

                        for (int i_5 = 3; i_5 < 10;i_5 += 1) /* same iter space */
                        {
                            var_15 = var_9;
                            arr_20 [i_0] = ((arr_11 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1] [1]) ? (arr_11 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 1]) : var_7);
                            var_16 = var_6;
                            var_17 = ((-((var_10 % (arr_7 [i_0])))));
                            var_18 |= (arr_2 [i_1] [11] [i_5]);
                        }
                        for (int i_6 = 3; i_6 < 10;i_6 += 1) /* same iter space */
                        {
                            var_19 = (arr_5 [i_4 + 4] [i_4 + 4] [i_4] [i_4 + 1]);
                            arr_23 [9] [11] [i_0] [i_0] [i_6] = ((1 / ((var_9 + (arr_3 [i_0])))));
                        }
                        for (int i_7 = 3; i_7 < 10;i_7 += 1) /* same iter space */
                        {
                            var_20 += (((arr_19 [i_0 - 1] [i_0] [i_1] [i_2] [i_0 - 1] [i_4 - 2] [i_7]) ? var_9 : (arr_7 [i_1])));
                            var_21 = (min(var_21, (((61 ? -62 : (((arr_13 [i_0] [i_0] [i_2] [i_4 - 2] [i_7] [i_7]) ? -5 : -62)))))));
                            arr_28 [i_0] [i_0] [7] [i_0] [i_0] [7] = (arr_4 [i_7 - 3] [i_4 - 2] [i_2] [i_0 - 1]);
                            arr_29 [1] [i_4] [i_2] [i_4] [1] &= (arr_14 [i_0] [i_0 - 1] [2] [6] [i_4]);
                        }
                        for (int i_8 = 3; i_8 < 10;i_8 += 1) /* same iter space */
                        {
                            arr_32 [i_0] [i_0] [i_0] [i_4] [i_8 - 3] = (((arr_6 [i_0]) != (arr_6 [i_0])));
                            arr_33 [1] [i_1] [i_0] = (arr_7 [i_0]);
                        }
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        var_22 = (max(var_22, ((39 ? (((arr_26 [i_1] [0] [2] [i_2] [0]) ? (arr_11 [0] [6] [i_1] [i_1] [i_1] [i_0]) : -1104724174)) : (arr_14 [i_9] [i_9] [i_0] [i_0 - 1] [i_9])))));

                        for (int i_10 = 1; i_10 < 8;i_10 += 1)
                        {
                            arr_40 [i_0] [6] [i_0] = (arr_22 [6] [i_1] [i_1] [i_1] [2]);
                            var_23 = (min(var_23, (arr_12 [i_0] [i_1] [i_2] [i_0] [i_0])));
                        }
                        for (int i_11 = 1; i_11 < 11;i_11 += 1)
                        {
                            arr_44 [i_0] [i_11 - 1] [i_11 - 1] = (arr_5 [i_0 - 1] [1] [i_9] [i_11]);
                            arr_45 [i_0 - 1] [i_1] [1] &= ((var_5 <= (arr_41 [i_0] [i_1] [0] [i_9] [i_11 + 1])));
                            var_24 = ((arr_10 [i_0] [8] [i_0] [i_0 - 1] [i_0]) ? 110 : (arr_13 [i_0] [i_1] [0] [i_2] [i_9] [i_11]));
                            arr_46 [2] [i_1] [i_0] [i_1] [0] [i_1] = (-(arr_4 [i_0] [i_1] [i_2 - 3] [i_11 + 1]));
                        }
                    }
                    for (int i_12 = 3; i_12 < 11;i_12 += 1)
                    {
                        var_25 = (~(arr_2 [i_0] [i_1] [3]));
                        arr_50 [i_0] [i_0] [i_0] [1] = (arr_25 [0] [i_0 - 1] [0] [i_0] [7] [i_12] [i_2]);
                        arr_51 [i_0] [i_0] [i_0] [i_0] = ((((min((arr_35 [i_0] [i_1] [i_2 - 1] [i_12]), (arr_12 [i_0] [i_1] [2] [2] [i_12])))) ? (min(var_6, (max(0, var_9)))) : ((var_5 ? (max((arr_26 [i_0] [i_1] [i_1] [i_2] [i_12]), (arr_14 [8] [8] [i_2] [i_1] [i_0]))) : (((var_0 && (arr_48 [6] [i_1] [11] [i_12] [i_1]))))))));
                    }
                }
                for (int i_13 = 3; i_13 < 11;i_13 += 1)
                {
                    var_26 = (((!1485261389) ? ((((((arr_18 [1] [1] [i_1] [i_1] [i_1] [1] [i_1]) && var_7)) || (-112 && var_7)))) : (arr_6 [i_0])));
                    var_27 = var_5;
                }
                for (int i_14 = 0; i_14 < 12;i_14 += 1)
                {
                    arr_58 [8] [i_1] [i_1] [i_0] = ((((arr_21 [5] [i_14] [i_1] [5]) ? var_4 : var_8)) / (((arr_52 [i_14] [6] [5] [i_0]) ? ((81 * (arr_35 [i_0 + 1] [3] [i_1] [6]))) : ((max((arr_1 [i_0]), (arr_5 [i_14] [i_0] [i_0 - 1] [i_0])))))));
                    /* LoopNest 2 */
                    for (int i_15 = 1; i_15 < 10;i_15 += 1)
                    {
                        for (int i_16 = 4; i_16 < 10;i_16 += 1)
                        {
                            {
                                arr_64 [i_0] [i_1] [i_14] [1] [i_15] [i_1] [i_16] |= ((((max(((-1 ? var_5 : (arr_60 [i_1] [i_1] [1] [i_16]))), (((arr_10 [7] [i_1] [7] [7] [10]) ? (arr_30 [0] [0] [i_14] [i_15] [1]) : -20))))) ? ((161 ? (arr_5 [i_0 - 1] [i_0 - 1] [i_14] [1]) : var_0)) : (!var_7)));
                                var_28 &= ((var_3 * (var_5 || 2147483644)));
                                var_29 = (min(var_29, 54));
                            }
                        }
                    }
                    var_30 = (~var_6);
                    var_31 = var_10;
                    var_32 = var_8;
                }
            }
        }
    }
    #pragma endscop
}
