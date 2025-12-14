/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_18 = (((((arr_2 [i_1] [i_0]) + ((min((arr_1 [i_0] [i_1]), (arr_3 [i_0])))))) * (((var_9 < ((var_12 ? 0 : -74)))))));
                var_19 &= (max(74, ((((arr_4 [i_1 - 1] [i_0 - 1]) != 63)))));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_20 = (min(((((max(var_1, 183))) ? var_7 : (((max(var_5, var_5)))))), ((max(var_9, ((183 ? var_16 : var_0)))))));

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        var_21 = ((var_7 ? ((min(180, (-127 - 1)))) : ((min((arr_3 [i_3]), 119)))));

                        for (int i_4 = 1; i_4 < 17;i_4 += 1) /* same iter space */
                        {
                            var_22 = (min(-1622962367, (min(var_14, ((min((arr_3 [i_3]), (arr_7 [i_0 - 2] [i_2] [i_2]))))))));
                            arr_14 [i_0 + 1] [i_2] [i_3] [i_0 + 1] [i_1 - 3] [i_2] [i_0 + 1] = 224;
                        }
                        for (int i_5 = 1; i_5 < 17;i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_2] [i_2] [i_2] [i_5] [i_5] = ((!((min((arr_16 [i_5 + 1] [i_2]), (var_15 - var_13))))));
                            var_23 = (((((var_14 + (((-21 < (arr_2 [i_0] [i_0]))))))) ? ((min((arr_6 [i_0 + 2] [i_2] [i_3 + 1]), var_13))) : (((var_9 < ((var_12 ? var_2 : var_16)))))));
                            var_24 = (min((((arr_18 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 2] [i_0 + 1]) ? var_13 : var_2)), (max(var_10, (-9223372036854775807 - 1)))));
                            arr_20 [i_0] [i_1 + 1] [i_2] [i_3] [i_2] [i_2] = var_4;
                        }
                        var_25 -= (max(120, (arr_12 [i_0 + 1] [i_0] [i_1 - 3] [i_2] [i_3])));
                    }
                    for (int i_6 = 3; i_6 < 14;i_6 += 1)
                    {
                        arr_24 [i_0] [i_1] [i_1] [i_2] [i_2] = (((min(19665, -54))) < (((arr_10 [i_1 - 2] [i_2] [i_1 - 2] [i_6 - 1]) ? (arr_5 [i_1 + 1] [i_1] [i_2]) : (arr_10 [i_1 - 2] [i_2] [17] [i_6 + 1]))));
                        arr_25 [i_0] [i_1 + 1] [i_2] [i_6 + 2] [i_2] [i_1] = (min(((~(max(var_12, 18446744073709551615)))), 57));
                        var_26 = (min(var_26, ((max((((((min(var_9, 11071944323286756697))) && 3762722563408609867))), (max(((((arr_23 [i_0] [i_1] [i_2] [i_6]) - 47542))), (max(var_0, 12699491113463149276)))))))));
                        var_27 *= 1;
                    }
                    var_28 = (min((var_8 < 104), (max((arr_1 [i_0 - 1] [i_2]), 2340787243413312380))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_29 = (min((max(14684021510300941747, 35)), var_14));
                                var_30 += (((((65094 ? (arr_2 [i_0 - 2] [i_1 - 1]) : -120))) && -var_16));
                            }
                        }
                    }
                    arr_32 [i_0] [i_2] [i_1] = ((~((208684818 | (arr_31 [i_1] [i_1] [i_1 + 1] [i_2] [i_1 - 2])))));
                }
                /* vectorizable */
                for (int i_9 = 3; i_9 < 15;i_9 += 1)
                {
                    var_31 = (((~var_10) ? (arr_34 [i_1] [i_1]) : (arr_23 [i_1] [i_1] [i_0 - 2] [i_9 - 2])));
                    var_32 += ((-900298053 ? var_13 : (arr_12 [i_0 + 2] [i_9 - 2] [i_9] [i_9 - 2] [i_9])));
                    var_33 = (((arr_27 [1] [i_9 + 1] [1] [i_9 - 1] [1]) ? ((var_5 ? var_1 : var_14)) : var_3));
                    arr_35 [i_0] [i_1 - 2] = (arr_33 [i_0 + 1]);
                }
                arr_36 [i_0 + 1] [i_1 - 2] = (max(((min(-3, (!var_2)))), (min(((18446744073709551601 ^ (arr_11 [i_0] [5]))), ((min(var_9, (-127 - 1))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 1;i_11 += 1)
        {
            {
                arr_41 [i_11] [i_11] = ((var_7 - (max(1578852653, (arr_3 [3])))));
                arr_42 [i_10] [i_11] = (min(((var_15 ? (var_8 & -101) : (var_10 + var_1))), (~-var_12)));

                for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
                {
                    arr_47 [1] [i_11] [i_11 - 1] [i_11] = (min((47541 + var_2), (var_14 && var_3)));
                    var_34 = ((+((var_0 ? (arr_23 [i_11 - 1] [i_11 - 1] [i_12] [i_10]) : (arr_23 [i_11 - 1] [i_12] [i_12] [14])))));
                    var_35 += ((min(-21, ((var_5 ? var_12 : 1)))));
                    var_36 = ((((((max(var_2, 1)) ^ (((1 ? 127 : 12563)))))) ? (((var_10 || (arr_30 [i_10] [i_11 - 1] [i_10] [i_10])))) : (arr_31 [i_10] [i_10] [i_12] [i_11] [0])));
                }
                for (int i_13 = 0; i_13 < 11;i_13 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 9;i_15 += 1)
                        {
                            {
                                arr_54 [5] [i_11] [i_13] [i_13] [i_15] = (min(var_10, var_16));
                                arr_55 [3] [i_11] [3] [i_13] [6] [i_13] = ((var_1 ^ (var_3 / var_15)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 1; i_16 < 7;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 11;i_17 += 1)
                        {
                            {
                                var_37 = 17995;
                                var_38 = (max(((((((arr_50 [i_10] [i_11] [i_11]) && 18621))) >> (16064425856553058768 - 16064425856553058747))), (((arr_52 [i_17] [10] [i_13] [i_11 - 1] [0]) - (arr_52 [i_17] [i_16] [i_13] [5] [i_10])))));
                                var_39 = (arr_18 [i_10] [i_10] [i_10] [i_13] [8] [1]);
                            }
                        }
                    }
                }
                for (int i_18 = 0; i_18 < 11;i_18 += 1) /* same iter space */
                {
                    arr_65 [i_18] &= var_16;
                    var_40 &= 120;
                    arr_66 [i_11] = (min((!-6), var_7));
                    var_41 = var_16;
                }
            }
        }
    }
    var_42 = max(((max((max(var_5, var_12)), var_5))), var_11);
    #pragma endscop
}
