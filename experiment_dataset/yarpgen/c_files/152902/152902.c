/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_8 ? var_10 : (((((var_9 ? var_3 : var_1)) >= ((var_3 ? var_1 : var_0)))))));
    var_17 = var_8;
    var_18 = var_0;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_19 = (arr_2 [i_0]);
        var_20 = var_12;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {

                    for (int i_4 = 2; i_4 < 23;i_4 += 1)
                    {
                        arr_16 [i_4 - 1] [1] [i_2] [i_1] = (arr_4 [i_1] [i_3]);
                        arr_17 [i_1] [i_2] [i_3] [i_4 - 1] [i_2] = (((var_7 ? (arr_13 [i_3] [i_3] [i_3] [i_3]) : var_3)));
                    }
                    for (int i_5 = 2; i_5 < 24;i_5 += 1)
                    {

                        for (int i_6 = 2; i_6 < 23;i_6 += 1)
                        {
                            arr_25 [i_1] [6] [i_1] [i_1] [13] [15] [15] = ((((var_14 ? var_14 : var_14)) == var_12));
                            arr_26 [21] [i_3] [7] = (((((var_6 ? (arr_14 [i_1] [i_1] [11] [i_5]) : (arr_22 [i_1] [16] [9] [i_5] [9] [i_6])))) ? ((var_12 ? var_12 : var_0)) : (var_5 | var_15)));
                            arr_27 [i_1] [i_1] [1] &= var_1;
                            arr_28 [i_2] [i_3] [i_6 + 2] = ((((!(arr_19 [i_6] [23] [17] [i_2] [i_1])))) | var_7);
                        }
                        arr_29 [i_1] [i_2] [7] [i_1] = (arr_11 [18] [10] [i_3] [10]);
                    }

                    for (int i_7 = 2; i_7 < 24;i_7 += 1)
                    {

                        for (int i_8 = 2; i_8 < 23;i_8 += 1) /* same iter space */
                        {
                            var_21 = ((((var_4 ? var_9 : var_2)) >> ((var_6 ? var_14 : (arr_12 [i_1] [i_2] [i_3] [i_3])))));
                            var_22 -= ((~((var_6 ? 128 : 15029))));
                        }
                        for (int i_9 = 2; i_9 < 23;i_9 += 1) /* same iter space */
                        {
                            arr_40 [i_9] [i_7 - 1] [i_3] [11] [i_9] = var_14;
                            var_23 &= ((var_9 ? var_13 : (arr_8 [i_9 - 2] [i_9 + 1] [i_7 - 1] [i_7 - 2])));
                            var_24 = var_5;
                            arr_41 [i_9] [i_9 + 2] = var_5;
                        }
                        var_25 -= ((var_15 ? (arr_36 [i_7 - 2] [i_7 - 1] [i_7 - 2]) : (arr_36 [i_7 - 2] [i_7 - 1] [i_7 - 1])));
                        var_26 = (((arr_30 [i_7 - 2] [i_7 + 1] [i_7 - 2] [i_7 - 1]) >= var_6));
                        arr_42 [i_1] [i_2] [i_3] [i_7] = var_3;
                        var_27 = (((arr_12 [i_1] [i_1] [i_1] [i_1]) > (arr_20 [i_1] [18] [i_3] [i_3])));
                    }
                    var_28 ^= (((arr_7 [i_3] [i_2] [i_1]) >= (var_10 % var_2)));

                    for (int i_10 = 2; i_10 < 23;i_10 += 1)
                    {
                        var_29 -= ((((var_13 ? var_11 : var_13)) >= (arr_30 [i_10 - 1] [i_10 + 2] [i_10 + 2] [i_10 - 2])));
                        var_30 = ((var_5 ^ ((var_5 ? var_7 : var_5))));
                        arr_45 [21] [i_2] [i_2] [i_10] = (var_13 <= var_9);
                    }
                    for (int i_11 = 2; i_11 < 22;i_11 += 1)
                    {
                        arr_48 [i_1] [i_2] [i_2] [i_11 + 2] [6] = var_8;
                        arr_49 [i_11] [5] [i_2] [i_1] [12] = ((var_3 ? ((((var_11 >= (arr_14 [i_1] [i_2] [i_3] [i_11 - 1]))))) : (arr_24 [i_11] [15])));
                    }
                }
            }
        }

        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            arr_54 [i_12] [i_1] = (((var_1 <= var_13) ? ((var_1 ? var_6 : (arr_4 [8] [i_12]))) : var_12));
            /* LoopNest 2 */
            for (int i_13 = 2; i_13 < 24;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 25;i_14 += 1)
                {
                    {
                        var_31 ^= (((61923260 > 7616707869209153694) ? var_13 : (arr_13 [i_13] [i_13 + 1] [i_13 - 1] [i_13 - 2])));
                        arr_59 [i_1] [i_1] = ((-986416737 ? 24 : 0));
                        var_32 = (arr_14 [i_13] [i_13] [i_13 + 1] [i_12]);
                        arr_60 [i_1] [20] [i_13] [i_14] [i_12] = (arr_22 [i_14] [i_1] [i_13] [i_1] [i_1] [i_1]);
                        arr_61 [i_1] [i_1] [i_1] [i_1] = ((-(arr_56 [i_1])));
                    }
                }
            }
            var_33 &= (arr_6 [i_1] [i_12]);
            arr_62 [i_1] &= (arr_35 [i_12]);
            arr_63 [i_1] [i_1] = (((arr_14 [16] [i_12] [i_1] [16]) <= var_4));
        }
    }
    #pragma endscop
}
