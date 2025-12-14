/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= ((var_16 / ((min(var_7, 18446744073709551615)))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_18 *= (arr_0 [i_0]);
        var_19 = var_3;
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_11 [i_2] = (-(arr_5 [i_1 + 1] [i_1 + 2]));
            var_20 -= ((((arr_2 [i_1 + 1]) >= (arr_2 [i_1 - 1]))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            arr_16 [8] [i_1] [i_1] = var_8;
            var_21 ^= 134217727;

            for (int i_4 = 1; i_4 < 12;i_4 += 1)
            {
                var_22 = ((0 ? (arr_15 [i_4 - 1] [i_1 + 2]) : (arr_15 [i_4 - 1] [i_1 - 2])));
                arr_20 [i_1] [i_1] [2] [i_1] = ((65535 ? 7 : 0));
                var_23 += (255 & 2147483647);
            }
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                var_24 *= ((~((-(arr_1 [i_1 - 2])))));
                var_25 += ((var_14 ? 29992 : (arr_12 [i_1 - 1])));
            }
            arr_23 [i_1] = ((((var_4 ? (arr_3 [i_3]) : (arr_7 [i_1]))) & (~var_16)));
        }
        for (int i_6 = 2; i_6 < 12;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 4; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 3; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        {
                            var_26 = (arr_1 [i_1]);
                            arr_36 [i_7] [i_9] [10] [i_7 + 1] [i_6] [i_1 - 2] [i_7] |= (arr_1 [i_7 - 3]);
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 11;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    {
                        var_27 -= ((((min((arr_31 [i_1] [i_10 - 1] [i_6] [i_1] [i_1]), var_2))) - (((arr_31 [i_11] [i_10 - 1] [10] [i_11] [i_11]) / var_11))));
                        var_28 ^= (~var_11);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_12 = 2; i_12 < 10;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 12;i_13 += 1)
                {
                    {

                        for (int i_14 = 0; i_14 < 13;i_14 += 1)
                        {
                            var_29 = (min(((var_15 >= (((((arr_28 [i_13 + 1] [i_6] [i_1]) || var_2)))))), ((!(var_3 * var_14)))));
                            var_30 = ((!((!(-154809393 | 196532827)))));
                            arr_52 [i_6] [i_13] [i_6] [i_6] [i_6] = (((arr_32 [i_6] [i_12] [i_6]) ? (((((arr_32 [i_6] [i_12 + 2] [i_6]) >= (arr_32 [i_6] [i_6] [i_14]))))) : (arr_32 [i_6] [i_13 + 1] [i_14])));
                            arr_53 [8] [i_13] [i_6] [i_6] [i_6] [i_1] = (arr_1 [i_1]);
                        }
                        for (int i_15 = 1; i_15 < 11;i_15 += 1)
                        {
                            var_31 += (!511);
                            var_32 -= -14;
                        }
                        var_33 -= (!1);
                        var_34 = (~var_8);
                    }
                }
            }
        }
        var_35 ^= (!1481270134);
    }
    var_36 += (max((max(1, (~var_16))), ((((((max(var_2, var_14)))) > ((var_14 ? var_6 : 65528)))))));

    for (int i_16 = 0; i_16 < 15;i_16 += 1)
    {

        /* vectorizable */
        for (int i_17 = 0; i_17 < 15;i_17 += 1)
        {
            var_37 = ((~(arr_3 [i_17])));

            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {
                var_38 = ((~(arr_58 [i_17])));
                var_39 = (max(var_39, (((-var_15 ? var_12 : (arr_62 [i_18] [i_17]))))));

                for (int i_19 = 0; i_19 < 15;i_19 += 1)
                {
                    var_40 = (!var_7);
                    var_41 = ((var_10 || var_5) ? 1 : (var_12 || var_13));
                }

                for (int i_20 = 0; i_20 < 15;i_20 += 1)
                {
                    var_42 += ((-(arr_1 [i_17])));
                    arr_71 [i_16] [i_16] [i_17] [i_18] [i_18] [i_17] = -var_15;

                    for (int i_21 = 0; i_21 < 15;i_21 += 1) /* same iter space */
                    {
                        arr_76 [i_16] [i_17] [i_18] [i_18] [i_17] &= 9223372036854775807;
                        arr_77 [i_21] [0] [i_18] [2] [i_16] &= ((!(arr_0 [i_16])));
                        var_43 = (~var_1);
                    }
                    for (int i_22 = 0; i_22 < 15;i_22 += 1) /* same iter space */
                    {
                        var_44 = (min(var_44, (!-154809393)));
                        var_45 = (!var_10);
                    }
                }
                for (int i_23 = 0; i_23 < 15;i_23 += 1)
                {
                    var_46 = (min(var_46, ((!(arr_81 [i_23] [i_18] [i_18] [i_17] [i_16])))));
                    var_47 = (min(var_47, (1 - var_2)));

                    for (int i_24 = 0; i_24 < 15;i_24 += 1)
                    {
                        arr_86 [i_16] [i_17] [i_18] [i_23] [i_23] [i_23] [i_24] = (~8087);
                        var_48 -= (!0);
                    }
                    for (int i_25 = 4; i_25 < 13;i_25 += 1)
                    {
                        var_49 = (min(var_49, 1143202671));
                        var_50 ^= (arr_90 [i_18] [i_18] [i_25 - 1] [i_25 + 1] [i_25]);
                    }
                }
                for (int i_26 = 1; i_26 < 12;i_26 += 1)
                {
                    arr_94 [i_16] [i_17] [i_17] [i_17] |= ((~(arr_82 [i_17] [i_26 + 2] [i_17] [i_26] [i_26 + 2] [13])));
                    var_51 = var_8;
                    var_52 += ((~((~(arr_82 [i_16] [i_16] [i_16] [i_16] [i_18] [i_26])))));
                }
            }
            for (int i_27 = 1; i_27 < 14;i_27 += 1)
            {
                var_53 += (((((~(arr_91 [i_27 - 1] [i_17] [i_16] [i_17] [i_16] [i_16])))) - (arr_66 [i_27] [i_27 + 1] [i_27] [i_27])));
                arr_98 [i_27] [i_16] [i_16] = (!var_10);
                var_54 *= 9223372036854775807;
            }
        }
        var_55 += var_16;
        var_56 = ((var_12 / (arr_64 [i_16] [i_16] [i_16] [i_16])));
    }
    for (int i_28 = 0; i_28 < 14;i_28 += 1)
    {
        /* LoopNest 3 */
        for (int i_29 = 0; i_29 < 0;i_29 += 1)
        {
            for (int i_30 = 4; i_30 < 12;i_30 += 1)
            {
                for (int i_31 = 1; i_31 < 13;i_31 += 1)
                {
                    {
                        var_57 -= (min(((((~0) < ((((!(arr_80 [i_28])))))))), (~var_2)));
                        var_58 = (26509 != 1);
                        arr_112 [i_28] [8] [8] [i_31] = ((~(min(-1481270155, 119))));
                    }
                }
            }
        }
        arr_113 [i_28] [i_28] = ((-(!81)));

        for (int i_32 = 0; i_32 < 1;i_32 += 1)
        {
            var_59 = ((-((~(~var_2)))));
            var_60 = ((-118 & ((~((~(arr_108 [i_28] [i_28] [i_28])))))));
            arr_116 [2] [i_32] &= (!-18446744073709551615);
        }
    }
    /* vectorizable */
    for (int i_33 = 0; i_33 < 15;i_33 += 1)
    {
        var_61 = ((var_8 ? var_8 : -var_14));
        arr_119 [i_33] &= (arr_79 [i_33] [i_33] [i_33] [i_33] [i_33]);
        arr_120 [i_33] &= ((~4843970003683361915) ? (arr_97 [i_33] [i_33]) : (1 ^ var_3));
    }
    #pragma endscop
}
