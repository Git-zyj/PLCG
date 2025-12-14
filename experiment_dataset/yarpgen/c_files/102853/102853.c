/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_7 ? (min(var_4, (var_9 + 255))) : (((-(var_0 / var_1))))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_13 = min(((((arr_0 [i_0 + 1]) || (arr_0 [i_0 - 1])))), (arr_0 [i_0 - 1]));
        var_14 = (!var_7);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 15;i_4 += 1)
                    {
                        {
                            var_15 = (~var_11);
                            var_16 = (1 < 1);
                        }
                    }
                }
            }
            var_17 = var_10;
            arr_13 [i_0] = (arr_12 [i_0]);
        }
    }

    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 10;i_7 += 1)
            {
                {
                    var_18 = ((((~(arr_18 [i_5] [i_6] [i_7]))) > (((((min(-4894, var_1))) < (!9))))));
                    var_19 = ((!(((var_11 ? var_3 : var_1)))));
                }
            }
        }
        var_20 = ((!(arr_12 [i_5])));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        var_21 = var_2;

        for (int i_9 = 4; i_9 < 12;i_9 += 1)
        {
            var_22 = (max(var_22, (((var_0 + (arr_27 [i_9 - 3] [i_9 - 3]))))));
            arr_30 [9] = ((-0 - (arr_6 [i_8] [i_9] [i_9])));

            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                var_23 = ((var_10 ? (arr_26 [i_8] [i_9]) : (arr_10 [i_8] [i_8] [i_8] [i_8])));

                for (int i_11 = 1; i_11 < 11;i_11 += 1)
                {
                    var_24 = var_5;
                    arr_37 [i_8] [i_8] [i_9] [i_10] [i_10] [11] = (!-50);
                    var_25 = var_0;

                    for (int i_12 = 1; i_12 < 12;i_12 += 1) /* same iter space */
                    {
                        var_26 += 2;
                        var_27 = (min(var_27, (((!(~var_10))))));
                        arr_40 [i_8] [i_8] [i_10] [i_11] [i_12] = ((-(arr_29 [i_8] [i_9 - 1] [i_11])));
                    }
                    for (int i_13 = 1; i_13 < 12;i_13 += 1) /* same iter space */
                    {
                        var_28 = 247;
                        var_29 = (max(var_29, (((var_4 >> (((arr_28 [i_9 - 3] [i_13 - 1]) - 17670190078606563946)))))));
                        var_30 = (!(arr_42 [10] [11] [i_13 + 1] [i_11 + 1] [i_9 - 4] [i_9 - 4]));
                    }
                    var_31 = ((-(arr_35 [i_8] [i_9] [6] [i_11])));
                }
                for (int i_14 = 0; i_14 < 13;i_14 += 1)
                {
                    var_32 += (~18446744073709551614);
                    var_33 += var_4;
                }
                for (int i_15 = 3; i_15 < 11;i_15 += 1)
                {
                    var_34 = ((!(arr_41 [i_9] [i_9] [i_9] [i_9 + 1] [i_9] [i_15 + 2])));
                    var_35 = (max(var_35, (var_2 * var_0)));
                    var_36 = (min(var_36, var_10));
                }
            }
            arr_47 [i_8] [9] = 43910;
        }
        for (int i_16 = 1; i_16 < 12;i_16 += 1)
        {
            var_37 = ((arr_11 [i_16 + 1] [i_16] [i_16] [i_16] [i_16]) < 1);
            var_38 = (-1185278857 ? var_3 : var_4);
            var_39 = (max(var_39, var_2));
        }
        for (int i_17 = 1; i_17 < 12;i_17 += 1)
        {
            var_40 = (((!var_9) ? (arr_10 [i_17 + 1] [i_17 + 1] [i_17 - 1] [i_17 + 1]) : var_0));
            var_41 = (min(var_41, ((((arr_32 [i_8] [i_17 - 1] [i_8]) && ((((arr_28 [i_8] [i_8]) - var_6))))))));
            var_42 *= (-1185278862 / 1);
        }
    }
    for (int i_18 = 1; i_18 < 10;i_18 += 1)
    {
        var_43 = (18446744073709551602 == 247);
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 14;i_19 += 1)
        {
            for (int i_20 = 3; i_20 < 12;i_20 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_21 = 1; i_21 < 11;i_21 += 1)
                    {
                        for (int i_22 = 4; i_22 < 13;i_22 += 1)
                        {
                            {
                                arr_67 [i_18] [i_20] [i_18] [i_20] [i_18] [i_22] [i_22] = (max(((min(4294967295, (var_0 && var_7)))), (max(var_7, ((var_8 ? var_7 : 18446744073709551614))))));
                                var_44 = (max(var_44, var_8));
                                arr_68 [i_18] [i_19] [i_20] [i_20] [i_22] = (max((0 / var_8), (max((((arr_60 [i_20]) & var_0)), (arr_9 [i_18] [i_22])))));
                                var_45 |= (arr_4 [i_18] [i_19] [i_20]);
                            }
                        }
                    }
                    var_46 += (min((var_11 > var_4), (min((arr_56 [i_18 + 1]), (arr_56 [i_18 + 1])))));
                    arr_69 [i_18] [i_20] [i_20] = (-(max((arr_61 [i_18 + 4] [i_18 + 4] [i_20 + 1] [i_20 + 2]), (arr_66 [i_20 + 1] [i_20 + 2] [i_18 + 2] [i_18 - 1]))));
                }
            }
        }
    }
    #pragma endscop
}
