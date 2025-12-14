/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 14;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                        {
                            var_15 ^= (((1215053046 < (arr_14 [i_0] [i_1] [i_2] [i_3] [i_4]))));
                            var_16 = (min(var_16, (~var_14)));
                            arr_15 [i_0] [i_1] [i_2] [i_1] [i_4] |= ((2147483647 ? (arr_7 [7]) : var_13));
                            var_17 = (min(var_17, -var_0));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                        {
                            var_18 = ((-(arr_1 [i_3 - 2] [i_3 - 2])));
                            arr_18 [4] [i_0] = (~var_1);
                            var_19 = var_2;
                            var_20 = (min(var_20, ((((arr_8 [i_0] [i_3 - 1] [2] [i_5]) & var_10)))));
                            var_21 -= ((1215053046 ? (~var_12) : 0));
                        }
                        for (int i_6 = 2; i_6 < 12;i_6 += 1)
                        {
                            var_22 ^= (arr_0 [i_3]);
                            var_23 = (((((3079914265 ? (arr_6 [i_6] [i_0] [i_0] [i_0]) : var_13))) ? var_13 : 3079914250));
                        }

                        for (int i_7 = 1; i_7 < 13;i_7 += 1) /* same iter space */
                        {
                            var_24 = (((-2147483647 - 1) ? (arr_9 [i_7 - 1] [i_3 - 1] [i_3 + 1] [i_2]) : var_8));
                            var_25 -= (65535 == var_10);
                            arr_25 [8] [i_1] [i_2] [i_2] [i_2] [i_3] [i_3] &= 65535;
                        }
                        for (int i_8 = 1; i_8 < 13;i_8 += 1) /* same iter space */
                        {
                            var_26 = (arr_8 [i_0] [i_1] [i_2] [i_3]);
                            var_27 = (arr_19 [i_3 - 2] [i_3] [i_8 - 1] [i_8 + 1] [i_3]);
                            var_28 &= ((var_13 / (-2147483647 - 1)));
                        }

                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            arr_31 [i_0] [i_1] [i_2] [i_3] [i_0] = (((arr_26 [i_3 + 1] [3] [i_3] [i_3] [5] [i_0] [i_3]) ? (arr_10 [i_3 + 1]) : (arr_10 [i_3 - 1])));
                            var_29 += var_14;
                        }
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            var_30 = var_3;
                            var_31 = (((arr_12 [i_3 - 1]) >= (arr_12 [i_3 + 1])));
                        }
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            var_32 = (min(var_32, (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                            var_33 |= -var_13;
                        }
                        var_34 = (min(var_34, 3334374629371727832));

                        for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
                        {
                            var_35 = ((arr_35 [i_3] [i_3] [11] [i_3 - 2] [i_0]) ? (arr_37 [i_0] [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3 + 1] [i_3 - 2]) : -var_12);
                            var_36 &= (((arr_23 [i_3 - 1] [i_3 - 1] [i_1] [i_0] [11]) - (arr_23 [i_3 + 1] [i_3 - 2] [i_3 - 1] [i_2] [i_2])));
                            var_37 = (arr_16 [i_0] [i_0] [5] [i_3 - 1] [i_3 - 2]);
                            var_38 = (((~(arr_37 [i_0] [i_0] [i_2] [i_2] [i_3] [i_12]))) >> (((arr_3 [i_0] [i_0]) - 18446744071677456904)));
                        }
                        for (int i_13 = 0; i_13 < 15;i_13 += 1) /* same iter space */
                        {
                            var_39 ^= (((~65535) ? (arr_39 [i_2] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3]) : var_0));
                            var_40 ^= (arr_21 [i_0] [i_0] [i_0] [i_0] [7] [i_0] [i_0]);
                        }
                        for (int i_14 = 0; i_14 < 15;i_14 += 1) /* same iter space */
                        {
                            var_41 = (((var_4 ? var_8 : var_4)) - ((((arr_4 [i_0] [i_0]) ? var_9 : 370711521))));
                            var_42 = (((arr_8 [i_3] [i_3] [i_3] [i_3 + 1]) ? (arr_22 [i_0] [i_2] [i_2] [i_3 + 1] [i_2] [i_3] [i_3 - 2]) : (arr_8 [i_3] [i_3] [i_3] [i_3 + 1])));
                            var_43 = (min(var_43, (arr_19 [i_14] [i_14] [i_3 - 1] [i_3] [i_3 - 2])));
                            var_44 = var_6;
                        }
                    }
                }
            }
        }
        arr_46 [i_0] = var_1;
        arr_47 [i_0] = arr_17 [i_0] [i_0] [i_0] [i_0] [8];
    }
    for (int i_15 = 2; i_15 < 9;i_15 += 1)
    {
        arr_50 [i_15] = ((((var_5 ? var_6 : (arr_2 [i_15 - 2])))));
        var_45 &= ((max((arr_36 [i_15] [i_15 + 2] [i_15] [i_15] [2]), -50)));
    }
    for (int i_16 = 0; i_16 < 19;i_16 += 1)
    {
        arr_53 [i_16] = (((-((65535 ? 705117295 : 229)))));
        /* LoopNest 3 */
        for (int i_17 = 0; i_17 < 19;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 19;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 19;i_19 += 1)
                {
                    {
                        var_46 = ((((((var_0 - (arr_52 [i_16]))))) / (max(var_5, var_6))));
                        var_47 = (arr_59 [i_16] [i_17]);
                    }
                }
            }
        }
        var_48 ^= ((-(min(((var_14 ? var_6 : var_10)), (arr_51 [i_16] [i_16])))));
    }
    for (int i_20 = 4; i_20 < 9;i_20 += 1)
    {
        var_49 &= (min(((((((arr_35 [i_20 - 3] [i_20] [i_20] [i_20] [1]) * var_2))) ? (arr_4 [i_20] [10]) : 11534817702175227753)), (arr_61 [0])));
        var_50 = (!var_14);
        var_51 -= (((((((max(var_10, var_8))) ? (min(2223180361659507182, 9223372036854775805)) : var_6))) && (((arr_36 [i_20] [i_20] [i_20 - 4] [i_20 - 1] [10]) < (min(var_6, var_12))))));
        var_52 = var_12;
        var_53 *= (arr_22 [i_20] [0] [i_20] [i_20] [i_20] [i_20] [i_20]);
    }

    /* vectorizable */
    for (int i_21 = 1; i_21 < 7;i_21 += 1)
    {
        /* LoopNest 2 */
        for (int i_22 = 0; i_22 < 11;i_22 += 1)
        {
            for (int i_23 = 0; i_23 < 11;i_23 += 1)
            {
                {

                    for (int i_24 = 0; i_24 < 11;i_24 += 1)
                    {
                        arr_78 [i_24] [i_22] [i_22] [i_24] = (((!var_14) < (((arr_70 [i_23]) ? 4294967292 : var_3))));
                        var_54 = (min(var_54, (arr_11 [i_21] [i_21] [1] [i_21 + 2] [i_24])));
                        var_55 = 210111658;
                    }
                    var_56 *= (var_13 < var_12);
                }
            }
        }
        var_57 = (((var_10 ? 185 : var_9)));
        var_58 = (arr_14 [i_21] [i_21] [i_21 + 2] [i_21 + 4] [i_21 + 3]);
        arr_79 [4] = (((~var_9) / (arr_60 [i_21 - 1] [i_21 + 4])));
    }
    for (int i_25 = 1; i_25 < 19;i_25 += 1)
    {
        var_59 = (max(var_59, (arr_81 [i_25] [19])));
        var_60 &= 1068959232;
        arr_82 [1] &= ((var_5 ? (((arr_81 [i_25 + 3] [13]) * var_4)) : var_14));
        var_61 = ((-(max(3928, var_7))));
    }
    for (int i_26 = 1; i_26 < 8;i_26 += 1)
    {
        var_62 = ((-var_0 & (arr_23 [i_26] [i_26] [i_26 - 1] [i_26 + 2] [i_26 - 1])));
        var_63 = (min(var_2, (((55707 ? 1 : 1225)))));
        var_64 = (min(var_64, (arr_57 [i_26 - 1] [3] [i_26 + 2] [i_26])));
        var_65 = (min(var_65, (((((var_9 ? var_2 : 2147483647)))))));
        arr_85 [i_26] [i_26] = 65535;
    }
    #pragma endscop
}
