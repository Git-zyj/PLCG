/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (min(var_6, (((var_4 <= (var_6 / var_1))))));
                var_13 -= ((((14411 ? 0 : 31)) + (((arr_1 [i_0]) + var_11))));
                arr_7 [i_0] = (((((var_7 + 14411) + ((115558012648969297 ? -202532137 : 202532136)))) - ((6623961950642769814 ? 0 : 5845))));
            }
        }
    }

    for (int i_2 = 2; i_2 < 24;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 2; i_3 < 23;i_3 += 1)
        {
            var_14 -= (101 & 202532123);

            for (int i_4 = 0; i_4 < 0;i_4 += 1)
            {

                for (int i_5 = 2; i_5 < 24;i_5 += 1)
                {
                    var_15 = (min(var_15, (arr_11 [i_5 + 1] [i_3 + 2])));
                    var_16 = (max(var_16, (3845507394148033188 <= 6931)));

                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        arr_21 [i_6] [i_5] = (((((var_10 ? -13135 : var_1))) ? var_4 : ((var_2 ? 62982 : var_9))));
                        var_17 = var_0;
                    }
                    for (int i_7 = 3; i_7 < 24;i_7 += 1)
                    {
                        arr_24 [i_5] = ((-202532125 ? -15 : 0));
                        var_18 = var_6;
                        arr_25 [i_7 - 1] [i_5 - 1] [i_2] [i_5] [i_3] [i_2] [i_2] = (((arr_16 [i_2] [i_2 - 1]) + var_5));
                    }
                    arr_26 [i_5] [i_4 + 1] [i_3] [i_5] = (((arr_22 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_3 - 2] [i_2 - 2]) <= var_1));
                }
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    arr_31 [i_2] [20] [i_2] [i_2] = ((-var_9 > (arr_9 [i_2 - 2])));
                    var_19 = ((~(arr_29 [i_8])));
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    arr_34 [i_9] [i_3] = var_12;
                    arr_35 [i_9] [i_3] [i_4 + 1] = var_10;
                }
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 22;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            arr_40 [i_2 - 2] [i_2 + 1] [i_2 + 1] [i_2] [i_2] = var_10;
                            arr_41 [i_2] [i_2] [i_4] [i_2] [i_11] = (((arr_16 [i_2] [i_4 + 1]) + 4294901760));
                            var_20 = (((-6 == var_0) - ((var_10 ? var_9 : (arr_30 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_10] [i_11] [1])))));
                        }
                    }
                }
                var_21 = (min(var_21, (((var_4 == var_4) ? var_9 : 202532123))));
            }
            arr_42 [i_2] = ((var_7 ? 8809500787840611009 : var_5));
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 25;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 23;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        {
                            var_22 = (((arr_44 [i_13 + 2] [i_13] [i_13] [i_13 - 2]) ? ((var_3 ? 1 : var_5)) : (var_9 ^ var_4)));
                            var_23 -= ((((23 ? 1 : 1)) & var_5));
                            arr_50 [i_2] [i_12] [i_12] [i_2] [i_14] [i_2] [i_2] = (var_9 + var_6);
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_15 = 2; i_15 < 24;i_15 += 1)
        {
            var_24 = (min(var_24, (((var_2 * ((var_1 ? var_2 : (arr_19 [i_2] [i_2 - 1] [i_2 - 2] [i_15 - 1] [i_2]))))))));
            arr_53 [i_2] = (((arr_12 [i_15 + 1] [i_15 - 2] [i_2 + 1] [i_2 - 2]) + ((6915 ? (arr_51 [i_2]) : (arr_8 [i_2 - 2])))));
        }
        for (int i_16 = 0; i_16 < 25;i_16 += 1)
        {
            var_25 = ((((min((~var_11), ((-5 ? 16368 : var_3))))) ? ((((((var_0 ? (arr_12 [i_2] [i_2] [i_2] [i_16]) : var_1))) ? ((max(var_0, var_3))) : (-101 && 94)))) : (min((arr_29 [i_16]), ((var_5 ? -5069900830232026712 : var_6))))));
            var_26 += (((((((var_12 ? var_11 : var_2)) >> ((var_0 ? 1 : var_11))))) ? (0 >= 32) : var_5));
        }
        var_27 = ((max(2589599856267680328, (-2147483647 - 1))) / ((((((-(arr_43 [i_2] [i_2 - 1] [i_2 - 1])))) ? ((min(var_5, var_8))) : ((var_6 ? -1 : -1164478063))))));
    }
    var_28 |= ((((((((var_6 ? var_5 : var_7))) ? var_9 : var_11))) ? (((var_1 || (!-202532137)))) : ((((var_1 && var_2) || var_11)))));
    var_29 = max((((!6933115544922019638) ? ((var_2 ? 5852 : var_6)) : var_11)), ((min((var_9 >= var_3), (var_12 < 8622068789623495265)))));
    #pragma endscop
}
