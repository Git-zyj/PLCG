/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_20 &= ((~(((((var_18 ? var_12 : var_17)) < (~var_1))))));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_6 [i_0] = var_17;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_21 = (min(((((arr_4 [7] [i_3] [3]) - var_11))), (19648 && var_16)));
                                var_22 = (max(var_22, (arr_9 [i_0] [i_1] [i_2] [i_2])));
                                var_23 = (((!(arr_12 [i_1]))));
                                var_24 = (min(var_24, (4294967295 >> 30)));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    var_25 &= (min((-25 < var_18), (min(((max(var_14, (arr_12 [i_1])))), ((~(arr_1 [i_1])))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 9;i_7 += 1)
                        {
                            {
                                var_26 = (max(var_26, (((!(((221 ? (arr_1 [i_7 - 1]) : 963546098))))))));
                                var_27 = 963546097;
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    var_28 = ((var_11 ? (arr_8 [i_8] [i_1] [i_0]) : var_4));
                    arr_22 [8] [i_1] [i_0] = (((~963546098) & -963546125));
                    var_29 = var_7;
                    var_30 = (((((-963546098 ? -11 : var_17))) && (arr_18 [i_1] [5])));
                }
                for (int i_9 = 2; i_9 < 10;i_9 += 1)
                {

                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        var_31 = 63773;
                        var_32 = ((((min(var_19, (~4096612697687952406)))) ? (~-var_6) : 1863697642));
                    }
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        var_33 = (arr_12 [i_11]);

                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 11;i_12 += 1)
                        {
                            var_34 = ((-(!-11)));
                            var_35 = -963546099;
                            var_36 = 13;
                        }
                    }

                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        var_37 -= ((-((1 ? 1 : 88))));
                        var_38 = ((~(min(var_17, (~1)))));

                        for (int i_14 = 0; i_14 < 11;i_14 += 1)
                        {
                            var_39 = ((-((((max(var_6, var_15))) - 10638055361075736600))));
                            arr_38 [i_0] [10] [i_9] [10] [i_0] [i_1] [i_1] = (max((~var_17), (!15808)));
                            var_40 = arr_2 [i_0] [i_0];
                        }
                        for (int i_15 = 3; i_15 < 10;i_15 += 1)
                        {
                            var_41 = (~127);
                            arr_42 [i_0] [i_1] [i_9] [i_13] [i_15] [i_0] [i_9] = ((((max(88, 10756020176979133485))) && (-98 ^ 5)));
                            var_42 = ((((((arr_41 [i_0] [i_1] [1] [i_15 + 1]) & ((var_3 ? var_15 : 7808688712633815027))))) ? var_16 : (((var_15 <= ((45388 ? var_1 : (arr_15 [4] [i_1] [i_1] [i_1]))))))));
                        }
                        for (int i_16 = 1; i_16 < 7;i_16 += 1)
                        {
                            var_43 -= ((!((min(var_9, var_15)))));
                            var_44 = var_14;
                            arr_45 [i_0] [i_13] [i_9] [i_1] [i_0] = ((!((max(-1, 19)))));
                        }
                    }
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        arr_50 [4] [i_0] = (((!6597) ? (var_16 / var_12) : ((min((-93 == 13064255002315852962), var_0)))));
                        arr_51 [i_0] [i_0] [i_9] [i_17] = (((((var_16 / var_1) == (((20144 ? var_2 : 14124423))))) ? ((var_11 ? (arr_34 [i_17] [i_9 + 1] [i_1]) : var_5)) : (var_10 + var_1)));
                        var_45 = (((((max(var_5, var_2)) * (((max(var_19, 45403)))))) * (arr_31 [1] [i_0] [i_0] [i_17] [i_1] [i_9 - 2])));
                    }
                    for (int i_18 = 0; i_18 < 11;i_18 += 1)
                    {

                        for (int i_19 = 0; i_19 < 11;i_19 += 1)
                        {
                            var_46 = ((((((1 * 10212899672217048175) ? ((min(var_15, 20144))) : (!1)))) ? (((var_14 ? -var_15 : (!var_11)))) : (min(963546068, (max(-541457681, 3272913524))))));
                            var_47 = 38797;
                            var_48 = ((!((min(var_16, (arr_8 [i_0] [i_1] [i_9 + 1]))))));
                            var_49 = (((((min(var_2, -93))) ? (((arr_20 [3]) << (3013407376 - 3013407364))) : (arr_26 [i_9 - 1] [i_9 - 1] [i_9 - 2] [i_9 - 1]))));
                            var_50 = (min(var_50, (((((max((~-25), ((min(1, 1)))))) ? ((1 ? 16615 : 1)) : ((~(~-41))))))));
                        }
                        var_51 = (((arr_43 [i_9] [i_9 - 2] [i_9 - 2] [i_9 + 1] [i_9]) <= ((((arr_57 [i_9 + 1] [i_9] [i_9 - 2]) ? (arr_11 [i_9 + 1] [i_9 - 1] [i_9] [i_9 + 1] [i_9 - 1]) : 40)))));
                    }
                    var_52 = (var_2 < var_1);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_20 = 0; i_20 < 22;i_20 += 1)
    {
        for (int i_21 = 2; i_21 < 20;i_21 += 1)
        {
            {
                arr_65 [14] &= ((((((min(54889, 1))) ? ((var_11 ? var_1 : var_7)) : var_19)) + ((((-6101067969103553590 ? var_13 : var_16))))));
                var_53 = ((~((-(max(var_18, var_14))))));
            }
        }
    }
    var_54 = 38;
    #pragma endscop
}
