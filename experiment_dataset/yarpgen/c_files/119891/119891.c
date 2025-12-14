/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = (max((arr_3 [i_1]), (max(((min((arr_1 [i_0] [i_1]), var_10))), (max(-20, 512))))));

                for (int i_2 = 2; i_2 < 20;i_2 += 1) /* same iter space */
                {
                    arr_9 [i_2] [i_1] [i_1] [i_0] = (min((!-20), (~-2957)));
                    var_20 = (max((arr_3 [i_1]), (arr_7 [i_1] [i_2 - 2] [i_1])));
                    var_21 = (min(var_21, (1 < -2950)));
                    var_22 += ((((max((arr_7 [i_2] [i_2 + 2] [i_2]), var_4))) || ((min((~-10), ((((arr_2 [i_0]) == var_7))))))));
                }
                for (int i_3 = 2; i_3 < 20;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 22;i_5 += 1)
                        {
                            {
                                var_23 = (max(var_23, -0));
                                arr_20 [i_0] [i_1] [i_0] [22] [i_0] = -var_11;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_24 = (arr_21 [i_0] [0] [i_0] [i_0]);
                                arr_26 [i_0] [i_1] [i_3] [i_6] [i_3] [i_3] [i_0] = ((((min((arr_19 [i_7 - 1] [i_1]), (arr_23 [i_7 + 2] [i_1] [i_1] [i_0])))) ? (((min(253, (arr_23 [i_7 - 1] [i_1] [i_1] [i_1]))))) : (((arr_19 [i_1] [i_6 + 2]) & var_14))));
                                arr_27 [i_0] [i_1] = (((((var_17 ? ((var_15 << (var_0 - 65))) : 2949))) ? (((max(var_13, (arr_10 [i_3 + 3] [i_6 + 3] [i_1]))))) : (min((((278 ? var_14 : var_10))), (var_9 % var_14)))));
                                arr_28 [i_1] [i_0] [i_0] [i_3] [i_3] [i_3] [i_0] = (max(((((var_0 / -25899) == (((arr_13 [i_3] [i_1] [i_3] [18]) / var_18))))), (-1 | 1)));
                            }
                        }
                    }
                    arr_29 [i_1] [i_1] [i_1] = ((((((var_18 ? (arr_2 [i_3]) : var_17)) - 46175)) + (((-7 ? var_15 : (arr_11 [18] [18] [16]))))));
                }
                for (int i_8 = 2; i_8 < 20;i_8 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 20;i_9 += 1)
                    {
                        for (int i_10 = 4; i_10 < 21;i_10 += 1)
                        {
                            {
                                var_25 = var_12;
                                arr_38 [i_0] [i_1] [i_8] [i_1] [i_1] = ((var_11 ? var_13 : (((var_5 == (~var_1))))));
                                arr_39 [i_0] [i_1] [i_0] [i_9] [i_9] [i_1] [i_10] = (!((max((((~(arr_22 [i_0] [i_0] [i_0] [i_0] [9] [i_0])))), (~var_9)))));
                            }
                        }
                    }
                    var_26 = ((((max(-25899, 1))) * (arr_32 [i_8] [i_8] [i_8 - 1])));
                    arr_40 [i_1] = (min((((arr_7 [i_1] [i_1] [i_1]) + (arr_25 [i_0] [i_1] [i_8] [i_8]))), ((min(17368, 0)))));

                    for (int i_11 = 1; i_11 < 22;i_11 += 1)
                    {
                        var_27 = var_5;
                        var_28 = ((-(max(((var_7 ? var_16 : 714017889)), var_5))));
                        var_29 = ((((((((arr_41 [i_0] [i_8] [19]) < var_13)) && (arr_24 [i_0] [i_11 - 1] [i_8] [i_8 + 3] [i_1])))) << (((min(((var_8 / (arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), var_19)) - 29159188))));
                        arr_43 [i_1] = (max((min((max(var_15, var_1)), (8192 / var_1))), var_16));
                        arr_44 [i_11] [i_8 + 1] [i_1] [i_1] [18] [8] = ((((!(arr_25 [i_11 - 1] [i_11] [i_11 - 1] [i_11])))) / (((((max(var_4, var_13))) || ((max(var_7, var_0)))))));
                    }
                    /* vectorizable */
                    for (int i_12 = 2; i_12 < 21;i_12 += 1) /* same iter space */
                    {
                        var_30 *= ((!(arr_10 [i_8] [i_12 - 1] [i_8])));
                        var_31 += ((arr_3 [i_8]) % var_13);
                    }
                    for (int i_13 = 2; i_13 < 21;i_13 += 1) /* same iter space */
                    {
                        arr_52 [i_1] [i_8] [i_1] [i_1] = ((27 ? 64508 : 0));
                        var_32 = (max(var_32, (arr_32 [i_13] [i_8] [i_0])));
                    }
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        var_33 = var_17;
                        var_34 = (min(var_34, (((+(((arr_54 [i_0] [i_14] [1] [i_14]) / (arr_17 [i_0] [i_1] [i_8] [i_8] [i_8]))))))));
                    }
                }
                var_35 *= (max(3575584879, -563238898749253077));
                /* LoopNest 3 */
                for (int i_15 = 2; i_15 < 22;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 23;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 0;i_17 += 1)
                        {
                            {
                                var_36 = ((!((((2065905230 | var_5) * (arr_57 [i_1]))))));
                                var_37 *= ((max((arr_47 [i_16]), var_19)) % ((var_10 * (arr_50 [i_0] [i_15] [i_0] [i_17]))));
                                var_38 *= ((((max((((arr_32 [i_0] [i_0] [i_15 + 1]) ? (arr_4 [i_0]) : 65249)), (arr_45 [i_0] [i_1] [i_0] [i_15 + 1] [i_15] [14])))) >= ((28834 ? (min(var_13, var_8)) : var_11))));
                            }
                        }
                    }
                }
                var_39 = (max(var_39, (~8323072)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_18 = 1; i_18 < 20;i_18 += 1)
    {
        for (int i_19 = 3; i_19 < 20;i_19 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_20 = 1; i_20 < 20;i_20 += 1)
                {
                    for (int i_21 = 2; i_21 < 20;i_21 += 1)
                    {
                        {
                            var_40 = var_8;
                            var_41 = var_3;
                        }
                    }
                }
                var_42 = var_2;
                arr_72 [i_19] = (arr_22 [i_18] [i_19] [15] [i_18 + 2] [i_18 - 1] [3]);
                var_43 = var_4;
                arr_73 [i_18] [i_19] [i_19] = (((min(var_17, (arr_58 [i_18 + 2] [i_18 + 2] [i_18 + 2] [i_18 + 1] [0] [i_19 - 3])))));
            }
        }
    }
    var_44 += ((var_0 ? var_6 : (max(((var_14 ? -2114501465 : var_15)), (var_17 >= var_12)))));
    var_45 = -2950;
    #pragma endscop
}
