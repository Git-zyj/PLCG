/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((!(~var_5)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] &= var_3;

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            var_11 = (~var_5);
            var_12 = 13569375495507679592;
            var_13 = (min(var_13, (1 != var_8)));
            var_14 = var_9;
        }
        for (int i_2 = 3; i_2 < 18;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            arr_18 [1] [1] [i_3] [0] [i_0] = (arr_4 [i_0] [i_0] [0]);
                            arr_19 [i_0] [i_2 + 1] [i_0] [i_4] [i_3] [i_3] = ((((((arr_1 [i_5]) ? 565093530 : 565093551))) * var_3));
                            var_15 = var_6;
                            var_16 -= (arr_6 [i_3] [i_5]);
                            var_17 += 90;
                        }
                    }
                }
            }
            var_18 -= var_2;
        }
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            var_19 = ((~(arr_12 [i_0])));
            arr_22 [i_0] [i_0] = ((11 ? 13569375495507679592 : (var_4 % 565093517)));
        }
        var_20 += 1;
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 18;i_8 += 1)
            {
                {

                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        var_21 = var_3;
                        arr_31 [i_0] [i_0] [i_7] [i_7] [i_8] [i_9] = ((1 ? -565093552 : 3352989263));
                    }
                    var_22 = (((arr_23 [i_0] [i_0] [4]) ? var_8 : (var_7 & var_0)));
                }
            }
        }

        for (int i_10 = 3; i_10 < 18;i_10 += 1)
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 19;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {
                    {
                        arr_41 [i_0] [i_10] [i_10] [i_10] = ((8747889692953552748 ? -565093534 : 0));
                        var_23 *= -1;
                        var_24 = ((arr_14 [i_0] [i_11] [i_0] [i_0]) ? (((var_0 ? -565093551 : var_8))) : (arr_25 [i_10] [i_10 + 1]));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 19;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    for (int i_15 = 4; i_15 < 17;i_15 += 1)
                    {
                        {
                            var_25 = (min(var_25, (arr_37 [13] [i_10] [6] [6])));
                            arr_49 [i_13] [i_10] [i_10] [i_10] [i_10 - 3] = (arr_26 [i_10] [i_10] [i_10]);
                        }
                    }
                }
            }
        }
        for (int i_16 = 4; i_16 < 17;i_16 += 1)
        {
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 19;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    {
                        var_26 = (min(var_26, (arr_10 [i_0])));
                        var_27 += (((arr_35 [i_0] [i_16] [2]) ? (arr_52 [i_0]) : var_9));
                        arr_59 [1] [1] [i_16] [16] [16] [1] = (var_0 ? var_2 : var_4);
                        arr_60 [i_0] [i_0] [i_16] [i_16] [i_18] [i_18] = ((var_5 ? 2147483647 : 20));
                        var_28 -= var_8;
                    }
                }
            }
            var_29 = 565093502;
            /* LoopNest 3 */
            for (int i_19 = 0; i_19 < 19;i_19 += 1)
            {
                for (int i_20 = 3; i_20 < 16;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 19;i_21 += 1)
                    {
                        {
                            var_30 = (arr_8 [i_16 + 2] [i_20 + 2] [9]);
                            var_31 = ((~(!var_6)));
                            var_32 = ((-(arr_44 [i_16 - 1] [i_20 - 2] [i_21])));
                        }
                    }
                }
            }

            for (int i_22 = 2; i_22 < 18;i_22 += 1) /* same iter space */
            {
                var_33 += var_3;
                var_34 -= 8747889692953552748;

                for (int i_23 = 4; i_23 < 16;i_23 += 1)
                {
                    var_35 = var_8;
                    var_36 *= ((arr_61 [i_0] [i_0] [i_0] [i_0]) ? var_1 : (arr_68 [i_0] [i_0] [i_0] [i_16 + 1] [4] [i_23 - 3] [i_23]));

                    for (int i_24 = 2; i_24 < 18;i_24 += 1)
                    {
                        var_37 = (min(var_37, (!11)));
                        var_38 *= ((-(-2147483647 - 1)));
                        var_39 = var_8;
                    }
                    for (int i_25 = 0; i_25 < 19;i_25 += 1) /* same iter space */
                    {
                        var_40 += -18446744073709551615;
                        arr_80 [i_0] [i_16] [i_16] [i_25] = (arr_73 [i_16]);
                    }
                    for (int i_26 = 0; i_26 < 19;i_26 += 1) /* same iter space */
                    {
                        var_41 = 8;
                        var_42 -= (((arr_75 [18] [i_0] [i_16 - 3] [i_22 - 2] [i_23 + 3]) ? var_9 : var_2));
                    }
                    var_43 *= var_1;

                    for (int i_27 = 0; i_27 < 19;i_27 += 1)
                    {
                        var_44 = (max(var_44, (((~(arr_51 [i_16 + 2] [i_22 - 1] [i_23 - 1]))))));
                        var_45 = ((((arr_43 [i_23]) ? (arr_65 [i_0] [i_0] [i_22] [i_23 + 2] [i_27]) : 16158)));
                        var_46 = (max(var_46, (arr_53 [i_16] [i_0])));
                        var_47 *= var_3;
                    }
                    for (int i_28 = 2; i_28 < 18;i_28 += 1)
                    {
                        var_48 -= (((arr_57 [i_22 - 1] [i_16] [i_16 + 1] [3]) == (arr_21 [0] [i_16 + 2] [0])));
                        var_49 = (max(var_49, (((var_5 ? -565093561 : (arr_71 [i_0] [i_0] [i_22 - 1] [1]))))));
                    }
                    for (int i_29 = 1; i_29 < 17;i_29 += 1)
                    {
                        var_50 = (arr_8 [i_16] [i_22 - 2] [7]);
                        var_51 = (arr_70 [i_23 - 1] [i_16 - 2] [i_22 + 1] [i_29 + 2]);
                    }
                    for (int i_30 = 0; i_30 < 19;i_30 += 1)
                    {
                        var_52 = (max(var_52, (arr_32 [i_30] [i_30] [i_30])));
                        var_53 = (!103835339);
                        var_54 += 0;
                        var_55 += ((36 ? 0 : 2));
                    }
                }
                for (int i_31 = 0; i_31 < 19;i_31 += 1)
                {
                    var_56 = var_2;
                    var_57 = (max(var_57, (((3352989263 << (((arr_94 [i_16 + 2]) + 161108035699355228)))))));
                }
                for (int i_32 = 0; i_32 < 19;i_32 += 1)
                {
                    var_58 = (max(var_58, -var_6));
                    var_59 = ((arr_98 [i_22 + 1] [i_22 - 2] [i_22 - 1] [i_16]) ? (arr_98 [i_22 + 1] [i_22 - 2] [i_22 - 1] [i_16]) : (arr_98 [i_22 + 1] [i_22 - 2] [i_22 - 1] [i_16]));
                }
                var_60 = (min(var_60, -var_0));
                var_61 -= (arr_1 [i_0]);
            }
            for (int i_33 = 2; i_33 < 18;i_33 += 1) /* same iter space */
            {
                arr_102 [i_16] [i_16] = 65970697666560;
                arr_103 [i_0] [i_16] |= (!1);
            }
        }
    }
    var_62 = (max(3007562019, 0));
    #pragma endscop
}
