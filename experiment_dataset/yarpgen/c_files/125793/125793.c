/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_3] [i_3] [i_2] [i_1] [i_0] = var_15;
                        var_20 = (max(var_20, (((~(max((arr_5 [i_1] [i_2] [i_3]), (arr_0 [i_1]))))))));
                        arr_12 [2] [i_1] [2] [i_0] = (((arr_1 [i_0] [i_1]) ? (((arr_4 [i_1]) ? var_2 : (arr_4 [i_0]))) : var_11));
                    }
                }
            }
        }
        var_21 = (min(var_21, ((((((max(var_11, var_18))) ? (arr_4 [i_0]) : (arr_3 [i_0])))))));
        arr_13 [i_0] = arr_1 [i_0] [i_0];
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        var_22 = (min(((~(~var_1))), (!var_18)));

        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            var_23 = ((~((var_8 ? (((arr_14 [i_5]) ? -26916 : var_8)) : (arr_17 [i_4] [i_4] [i_4])))));
            var_24 = (min(var_24, (((((((min(var_12, var_15))) || (arr_3 [i_4]))) ? ((max(var_16, (arr_10 [i_4] [i_4])))) : (max((arr_14 [i_4]), (arr_3 [i_5]))))))));
            var_25 *= arr_5 [i_4] [i_5] [i_5];
        }
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            var_26 = ((-(min(17048086944045479601, (arr_1 [i_4] [i_6])))));
            var_27 = (((((arr_14 [i_6]) > (arr_5 [i_6] [6] [0]))) ? ((-((var_14 ? var_16 : (arr_20 [i_6] [i_6]))))) : (~var_6)));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    {
                        arr_27 [i_6] [i_6] = ((~((18446744073709551615 + (!11768747705848551213)))));
                        var_28 = ((min((((-(arr_17 [i_4] [i_4] [i_4]))), 18446744073709551615))));

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
                        {
                            arr_31 [3] [i_6] = var_14;
                            var_29 = (((arr_10 [5] [i_6]) ? (arr_14 [i_4]) : (arr_28 [i_4] [8] [i_6] [i_6] [i_9] [i_7])));
                            arr_32 [0] [i_6] [i_6] [1] [i_9] [i_8] = var_9;
                        }
                        for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
                        {
                            arr_37 [i_7] [i_6] [i_7] [i_7] = (((arr_35 [i_4] [i_6]) * ((((!(arr_18 [i_7])))))));
                            var_30 = (min(var_30, (((((max(var_13, -var_6))) ? 18446744073709551615 : (((((((-(arr_0 [i_4])))) >= var_0)))))))));
                            arr_38 [i_6] = (min((max(-20714, (arr_21 [i_7] [i_6] [i_8]))), var_7));
                        }
                        for (int i_11 = 0; i_11 < 11;i_11 += 1) /* same iter space */
                        {
                            var_31 = var_15;
                            var_32 += var_4;
                            var_33 = var_12;
                            arr_41 [0] [i_6] [i_7] [i_6] [i_11] = (~var_14);
                            arr_42 [6] [i_7] &= min((arr_36 [i_11] [i_6] [i_4]), (((~var_1) ? (arr_28 [6] [i_6] [i_7] [i_8] [i_7] [i_11]) : ((var_4 ? var_13 : 6)))));
                        }
                        arr_43 [i_4] [i_4] [i_7] [i_6] [i_6] [i_7] = 11121622208405554798;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 11;i_12 += 1)
            {
                for (int i_13 = 3; i_13 < 10;i_13 += 1)
                {
                    {
                        var_34 = var_10;
                        var_35 -= ((~(arr_39 [i_4] [i_4] [i_12] [i_13 - 3] [i_6])));
                    }
                }
            }
            var_36 = (max(var_36, ((min(var_8, (((arr_5 [i_4] [i_6] [i_6]) % (min(var_12, var_13)))))))));
        }
        for (int i_14 = 1; i_14 < 8;i_14 += 1)
        {

            for (int i_15 = 0; i_15 < 11;i_15 += 1)
            {
                var_37 = (min(var_37, (((((-18446744073709551615 ? (min(18446744073709551615, (arr_29 [i_4] [i_4] [i_14 + 1] [i_15] [i_15] [0] [i_15]))) : (arr_50 [i_4] [i_4]))) << (((min(var_3, ((var_4 ? var_14 : (arr_49 [i_14] [5]))))) - 56)))))));
                var_38 += ((-(!-var_10)));
            }
            for (int i_16 = 4; i_16 < 8;i_16 += 1)
            {
                arr_54 [i_14] [i_14] [i_14 + 3] [i_16] = var_18;
                var_39 = (((arr_15 [i_16 + 2]) ? (var_1 <= var_9) : (arr_15 [i_16 - 3])));
            }
            for (int i_17 = 0; i_17 < 11;i_17 += 1) /* same iter space */
            {
                var_40 = 95;
                var_41 *= ((~(min(0, ((11121622208405554798 ? 61 : 11121622208405554800))))));
                var_42 = var_2;
            }
            for (int i_18 = 0; i_18 < 11;i_18 += 1) /* same iter space */
            {

                for (int i_19 = 0; i_19 < 11;i_19 += 1)
                {
                    var_43 = (min((~var_8), (min(var_11, (arr_39 [i_14 + 2] [10] [i_14 + 1] [i_14 + 2] [i_14 + 1])))));

                    for (int i_20 = 2; i_20 < 7;i_20 += 1)
                    {
                        var_44 = (min(var_44, var_7));
                        var_45 = ((~((var_6 ? var_17 : (((var_14 || (arr_0 [i_14]))))))));
                        var_46 = (max(var_46, (((((((arr_39 [i_20 + 3] [i_20 + 3] [i_20 + 4] [7] [i_20 - 2]) ? var_1 : (arr_39 [i_20] [i_20 - 2] [i_20] [i_20] [i_20 + 1])))) ? (((arr_39 [i_14 + 3] [i_14] [i_14 + 3] [i_20 - 1] [i_20 + 4]) ? ((min((arr_2 [i_4] [i_20]), (arr_63 [4] [i_18])))) : (((arr_25 [i_4] [i_14 + 2] [i_18] [i_19]) % (arr_30 [i_4] [i_4] [i_4] [i_4] [i_4]))))) : ((((((arr_62 [i_4] [i_14] [i_18] [6] [i_4]) ? 92 : var_14)) <= 127))))))));
                    }
                    var_47 = ((-(((arr_59 [10] [i_14 - 1] [i_14]) ? (arr_59 [i_4] [i_14 + 3] [i_18]) : (arr_59 [i_4] [i_14 + 1] [i_14])))));
                }
                var_48 = ((-(arr_39 [i_14] [i_14] [i_14] [i_14 - 1] [i_18])));

                /* vectorizable */
                for (int i_21 = 0; i_21 < 11;i_21 += 1)
                {

                    for (int i_22 = 0; i_22 < 11;i_22 += 1)
                    {
                        var_49 = (max(var_49, (((-(arr_9 [i_4] [i_14 + 3] [i_14 + 2] [i_4]))))));
                        var_50 = (min(var_50, var_7));
                    }
                    for (int i_23 = 0; i_23 < 11;i_23 += 1)
                    {
                        var_51 = (min(var_51, (arr_66 [i_14] [i_23] [i_14 + 3] [i_14 + 2])));
                        var_52 = (((var_1 % var_8) ? (~9213761854870699331) : (arr_68 [i_4] [i_21] [i_18] [i_14 + 2] [i_23] [i_23])));
                        var_53 = -var_2;
                    }
                    var_54 = (min(var_54, ((((arr_34 [i_14 + 1]) ? (arr_28 [i_14] [i_14] [i_14] [i_14 + 3] [i_14 + 2] [i_14]) : (arr_34 [i_14 + 2]))))));
                    var_55 = (arr_24 [i_4] [1] [i_18] [4] [i_14]);
                }
            }
            var_56 = (max(var_56, ((((var_3 ? var_9 : ((var_2 ? 7212507688003045029 : var_15))))))));
        }
    }
    var_57 = var_7;
    #pragma endscop
}
