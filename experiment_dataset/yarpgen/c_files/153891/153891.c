/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((-(((((arr_0 [i_0] [i_0]) + 2147483647)) >> (-11677 + 11683)))));
        arr_4 [1] &= var_3;
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            var_15 = var_7;
            var_16 &= (arr_2 [i_1]);

            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {

                    /* vectorizable */
                    for (int i_5 = 3; i_5 < 12;i_5 += 1)
                    {
                        arr_17 [i_5 - 3] [i_4] [i_2] [i_2] [i_2] [i_1] = (((((var_7 ? 3621866104 : 2351934077))) ? (((((arr_12 [i_2] [i_3] [i_3] [i_5]) < var_8)))) : ((2383958845 >> (3621866095 - 3621866079)))));
                        var_17 = var_7;
                    }
                    var_18 = var_1;
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        {
                            var_19 = (arr_9 [i_1] [i_2 + 2] [i_6] [i_7]);
                            arr_23 [i_7] [i_6] [i_2 + 1] [i_2 + 1] [i_1] = (arr_16 [i_1] [i_1] [i_3] [i_6] [i_7]);
                        }
                    }
                }
            }
            for (int i_8 = 2; i_8 < 11;i_8 += 1)
            {
                arr_28 [i_1] [i_2 + 3] [i_8] [i_8] = ((arr_18 [i_1]) ? -var_13 : (((40 - 2383958845) - (((64137 ? 34 : (arr_5 [i_1])))))));
                arr_29 [i_1] [i_2] [i_8] |= var_9;
            }
        }
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            var_20 = (((arr_15 [i_1] [i_1] [i_9] [i_9] [i_9]) | ((((arr_21 [i_1] [i_1] [i_1] [i_9] [i_9]) ? (((arr_9 [i_9] [i_9] [i_9] [i_1]) + var_13)) : (3675635981 ^ var_11))))));
            var_21 *= ((31 < (~var_7)));
        }
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            var_22 = (max(var_22, (((2383958834 ? 1911008461 : 9)))));
            arr_34 [i_1] = 1;
            var_23 = (min(var_23, ((((2383958834 + 673101192) * (arr_7 [i_10] [i_1]))))));
        }
        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            var_24 = (min(var_24, (arr_27 [i_1])));
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 14;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        {
                            arr_43 [i_1] [i_12] [i_11] |= -90;
                            var_25 = (((arr_42 [i_1] [i_11] [i_11] [i_12] [i_13] [i_14] [7]) ? (arr_42 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : (arr_42 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
                            var_26 = (((arr_13 [i_1] [i_11] [i_12] [i_13] [i_12] [i_14]) < ((((arr_0 [i_14] [i_13]) * var_9)))));
                            arr_44 [i_1] [i_1] [i_11] [i_12] [i_12] [i_13] [i_14] = (((((var_12 ? (arr_1 [i_13]) : var_2))) ? ((var_8 ^ ((2900410654 ? 2383958854 : var_6)))) : (((var_2 ^ var_7) ? var_6 : (2383958845 | -59)))));
                        }
                    }
                }
            }
            arr_45 [i_1] = 59;
        }
        var_27 *= (((arr_7 [i_1] [i_1]) % (((-9223372036854775807 - 1) ? -30350 : 9223372036854775801))));
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 14;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 14;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 12;i_17 += 1)
                {
                    {
                        arr_52 [i_15] [i_15] [i_15] [i_15] &= (((((-95 * (arr_38 [i_17 + 2])))) ? (1911008440 != -24657) : (arr_38 [i_17 + 2])));
                        var_28 *= 171;
                    }
                }
            }
        }
        var_29 = (arr_33 [i_1] [i_1] [i_1]);
    }
    var_30 = ((~((9223372036854775807 ? (var_0 && 2086649927) : (26 * var_2)))));
    var_31 = ((var_9 ? (((var_3 ? var_0 : 0))) : ((((var_4 != (var_1 >= 4294967295)))))));

    for (int i_18 = 0; i_18 < 24;i_18 += 1)
    {
        arr_56 [i_18] = 10445;
        var_32 = (((arr_54 [i_18] [i_18]) & ((((0 ^ 2208317369) ? ((4294967295 ? 29 : -76)) : 75)))));
    }

    /* vectorizable */
    for (int i_19 = 0; i_19 < 1;i_19 += 1)
    {
        arr_60 [i_19] [i_19] = (((((arr_57 [i_19]) ? (arr_57 [i_19]) : var_4)) != var_0));
        arr_61 [22] = ((((117827212 == (arr_57 [i_19])))));
        arr_62 [i_19] = arr_53 [i_19];
    }
    #pragma endscop
}
