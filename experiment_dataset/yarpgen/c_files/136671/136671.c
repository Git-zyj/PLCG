/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] = min(8931105442819939170, (min(-var_11, 234)));
        var_18 = ((min(8931105442819939175, 8931105442819939189)));
        var_19 ^= min((-var_2 & -101), (min(((-8931105442819939175 ? var_2 : (arr_2 [i_0]))), ((101 ? var_7 : var_4)))));
    }
    var_20 = (min(var_20, (((var_7 ? var_13 : (~var_11))))));
    var_21 = var_12;

    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_22 = (((208 + var_2) & -var_10));
        var_23 = var_3;

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
            {
                var_24 = ((-6005124500825092023 / (arr_10 [i_1] [i_2])));
                var_25 |= ((-(~1)));

                for (int i_4 = 3; i_4 < 19;i_4 += 1) /* same iter space */
                {
                    var_26 = (max(var_26, (((var_5 >> (var_7 - 8060283953408420727))))));
                    var_27 ^= var_3;
                }
                for (int i_5 = 3; i_5 < 19;i_5 += 1) /* same iter space */
                {
                    var_28 = (arr_5 [i_1] [i_1]);
                    var_29 = (min(var_29, -2598108934132108877));
                    var_30 = 2;
                    var_31 = (((((arr_16 [i_1] [i_2] [i_2] [i_3] [i_5]) + 2147483647)) << ((((-14370 ? 18 : var_11)) - 18))));
                    var_32 = ((-(arr_9 [i_5 - 3] [i_5 + 2] [i_5 - 3] [i_5 + 4])));
                }
                for (int i_6 = 3; i_6 < 19;i_6 += 1) /* same iter space */
                {
                    arr_19 [i_6] [i_6] [i_3] [i_3] [i_1] [i_1] |= (arr_9 [i_1] [i_2] [i_3] [i_2]);
                    var_33 = var_13;
                    var_34 = (8931105442819939189 & (arr_13 [i_2] [i_6]));
                    var_35 += var_10;
                }
                for (int i_7 = 3; i_7 < 19;i_7 += 1) /* same iter space */
                {
                    var_36 -= 49152;
                    var_37 = (arr_11 [i_1] [i_2] [i_1]);
                    arr_22 [i_1] [i_1] [i_3] [i_7] = var_2;
                    var_38 |= ((var_9 >= (((-8931105442819939175 == (arr_5 [i_1] [i_2]))))));
                }
            }
            for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
            {
                arr_25 [i_1] [i_1] = ((var_6 && (1 || var_12)));
                var_39 = ((var_5 + (arr_17 [i_2] [i_2] [i_2] [i_2] [i_2])));
            }
            for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
            {
                arr_28 [i_1] [i_2] [i_1] = var_1;

                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    var_40 = var_2;
                    var_41 = (((-9223372036854775800 + 9223372036854775807) << (var_6 - 78)));

                    for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
                    {
                        var_42 = 247;
                        var_43 = (arr_13 [i_1] [i_2]);
                    }
                    for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
                    {
                        var_44 = ((112 == (arr_9 [i_12] [i_9] [i_2] [i_1])));
                        var_45 *= (var_5 <= (arr_11 [i_1] [i_1] [i_9]));
                    }
                    for (int i_13 = 0; i_13 < 23;i_13 += 1) /* same iter space */
                    {
                        var_46 ^= -2598108934132108880;
                        arr_41 [i_1] [i_2] [i_10] [i_1] [i_13] [i_9] [i_13] = (((((var_0 ? (arr_17 [i_1] [i_1] [i_1] [i_1] [i_1]) : 0))) < (var_4 + 47741)));
                    }
                    for (int i_14 = 0; i_14 < 23;i_14 += 1) /* same iter space */
                    {
                        var_47 = (min(var_47, ((((arr_17 [i_1] [i_2] [i_9] [i_14] [i_9]) - (arr_17 [i_14] [i_10] [i_9] [i_2] [i_1]))))));
                        var_48 = (min(var_48, var_3));
                        var_49 = (max(var_49, (((!(((0 ? var_5 : 0))))))));
                    }
                }
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 23;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 23;i_16 += 1)
                    {
                        {
                            var_50 = (min(var_50, ((((arr_31 [i_1] [i_2]) == var_5)))));
                            arr_50 [i_1] [i_2] [i_16] = (((arr_10 [i_1] [i_1]) ? (arr_10 [i_1] [i_1]) : (arr_10 [i_1] [i_2])));
                            arr_51 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] |= ((!(arr_36 [i_16])));
                            arr_52 [i_16] [i_15] &= var_15;
                            var_51 = (min(var_51, 5958312459397088744));
                        }
                    }
                }
            }
            arr_53 [i_1] [i_1] = var_7;
        }
        for (int i_17 = 0; i_17 < 23;i_17 += 1)
        {
            var_52 = var_9;
            var_53 = var_7;
        }
        for (int i_18 = 0; i_18 < 23;i_18 += 1)
        {
            var_54 = var_12;
            var_55 = var_17;
        }
        arr_61 [i_1] = (~1061248575);
        /* LoopNest 2 */
        for (int i_19 = 1; i_19 < 19;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 23;i_20 += 1)
            {
                {
                    var_56 = (max(var_56, (6361930344812597210 ^ var_3)));
                    arr_66 [i_1] [i_19] [i_19] = (var_1 - 0);
                }
            }
        }
    }
    #pragma endscop
}
