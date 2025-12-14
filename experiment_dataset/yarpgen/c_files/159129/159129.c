/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 31;
    var_16 = (max(var_16, var_6));
    var_17 -= (((((max(7713, var_14)))) ? ((0 ? -5469080946022064239 : 2)) : ((max(var_14, (-1046799000 + 65528))))));
    var_18 ^= (((((var_12 ? var_2 : var_13))) ? var_2 : 18446744073709551611));

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_19 = (max(var_19, ((min(17179869184, 1)))));
        arr_3 [8] = (+-126);

        for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
        {
            arr_6 [i_1] [i_0 - 3] = (((26788 <= (~28))));

            /* vectorizable */
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                var_20 = (max(var_20, (-26235 ^ 0)));
                var_21 ^= var_4;
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                var_22 = (max(var_22, (arr_11 [i_0] [i_1] [i_3])));

                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    var_23 = (min(var_23, (~1250142447)));
                    arr_14 [i_1] [i_4] = (~-46);

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_17 [i_5] [i_4] [i_5] [i_5] [i_1] [i_0] = (1927974102 <= var_2);
                        var_24 = (max(var_24, ((((arr_9 [i_0 - 2] [i_0 - 3] [i_0 - 2] [i_0 - 1]) * ((-(arr_1 [i_0] [i_0]))))))));
                        arr_18 [i_0] [i_1] [i_1] [i_3] [i_5] [i_1] [i_5] = (arr_15 [i_0] [i_1] [i_0 - 1]);
                    }
                }
                arr_19 [i_0] = ((!(arr_15 [i_0 - 3] [i_0 - 3] [i_0 - 3])));
            }
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                arr_22 [i_0] [i_1] [i_6] = (((((-(((arr_9 [i_6] [i_0 - 1] [i_0] [i_0 - 1]) << (var_4 - 26176)))))) ? (((var_1 + -37) / (arr_1 [i_0] [i_0 + 1]))) : (var_4 != 31)));
                arr_23 [i_0] [i_1] = (+(((-2428085157497334887 / 1) * -14164353789347914850)));
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                arr_27 [i_1] [i_7] = (-23015 ? 1 : 2428085157497334887);
                arr_28 [i_7] [i_1] [i_0] &= (!118);

                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    var_25 = 9033;
                    var_26 = var_12;
                }
            }
            var_27 = (max(var_27, (max((((2428085157497334887 - var_12) - (((max((arr_24 [i_0] [i_0] [i_1]), var_14)))))), var_8))));
            var_28 = (max(var_28, ((((arr_9 [i_0] [i_0 - 1] [i_0] [i_1]) << (((arr_12 [i_0] [i_0] [i_1] [i_1]) + 472)))))));
        }
        for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
        {
            arr_34 [i_0 + 1] [i_0 + 1] [i_9] = ((-((5518363238706953721 ? 1452 : 2428085157497334877))));
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 13;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_12 = 3; i_12 < 12;i_12 += 1)
                        {
                            arr_44 [i_0] [i_0] = ((144115188075855872 ? (arr_1 [i_10] [i_10 + 1]) : (arr_1 [i_10] [i_10 + 1])));
                            var_29 = (min(var_29, (((-1250142447 / ((((arr_13 [i_0] [i_0] [i_10] [i_11]) != 1))))))));
                        }
                        arr_45 [i_0] [i_0] [i_9] [i_10] [i_11] = (((-3 ? 15747924955903101519 : (max(5196045783321713683, 16582)))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 14;i_13 += 1)
        {
            var_30 = (min(var_30, 3964669901342687121));
            var_31 = (max(var_31, (arr_0 [i_0 + 3])));
        }
        arr_50 [i_0] = -var_10;
    }
    #pragma endscop
}
