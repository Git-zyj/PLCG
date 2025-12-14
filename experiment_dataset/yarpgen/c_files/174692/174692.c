/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((var_2 ? ((var_5 ? var_1 : var_16)) : var_10)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_18 = (max((((var_11 ? var_1 : (arr_2 [i_0])))), var_14));

                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_2] [i_2] = var_10;
                        arr_13 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = (((var_10 ? var_11 : var_12)));
                        var_19 = var_0;
                    }
                }
                /* vectorizable */
                for (int i_4 = 2; i_4 < 21;i_4 += 1)
                {
                    var_20 += arr_15 [i_4] [i_4 - 2] [i_1 - 3];
                    var_21 = (arr_10 [i_1 - 2] [i_4 + 1] [i_4 + 1]);
                    var_22 = ((20005 ? 20001 : 2));
                }
                var_23 = (min(var_23, ((((((arr_2 [i_1 - 1]) ? (((var_1 < (arr_8 [i_1] [i_1] [i_0])))) : var_2))) ? ((((((arr_4 [i_0]) ? var_13 : var_13))) + var_11)) : ((max(20005, -20020)))))));
            }
        }
    }
    var_24 = ((((((((var_13 ? var_6 : var_5))) ^ var_0))) - (((var_9 - var_9) ? (((var_10 ? var_6 : var_0))) : ((var_0 ? var_1 : var_7))))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 12;i_6 += 1)
        {
            {
                var_25 = (max(var_25, (((((min(((var_11 ? var_3 : var_4)), ((var_4 ? (arr_20 [i_5] [i_5]) : var_10))))) ? ((var_12 ? (arr_6 [i_5] [i_6] [i_5]) : -var_13)) : var_4)))));

                for (int i_7 = 2; i_7 < 13;i_7 += 1)
                {

                    for (int i_8 = 3; i_8 < 12;i_8 += 1)
                    {
                        var_26 = ((max((max((arr_18 [i_8]), var_0)), (((var_14 ? var_10 : (arr_4 [i_7])))))));
                        var_27 &= (((var_2 ? var_12 : (arr_20 [i_5] [i_5]))));
                    }
                    var_28 += ((((arr_0 [i_5]) ? (arr_17 [i_6]) : (((var_2 ? var_16 : var_4))))));
                    var_29 = var_5;
                    arr_25 [i_5] [i_5] [i_5] = ((!(((((((arr_0 [i_5]) ? var_13 : (arr_14 [i_5] [i_7])))) ? (arr_6 [i_6] [i_6 + 2] [i_7 + 1]) : (((arr_14 [i_5] [i_7]) ? (arr_10 [i_5] [i_6] [i_7]) : var_12)))))));
                    var_30 = ((((var_15 ? (arr_18 [i_6 + 2]) : var_13)) < var_11));
                }
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    arr_29 [i_6] [i_6] [i_5] = (arr_26 [i_6 - 1] [i_6 - 1] [i_9] [i_6 - 1]);
                    arr_30 [i_5] = ((((var_9 / var_9) / var_1)) / (((var_1 ? var_1 : (((var_4 ? var_10 : var_16)))))));
                    arr_31 [i_9] [i_5] = (arr_9 [i_9] [i_6] [i_6] [i_5]);
                    var_31 = (((((arr_14 [i_6 + 3] [i_9]) - (arr_14 [i_6 + 2] [i_6]))) != (((var_12 ? var_3 : (arr_7 [i_9]))))));
                    /* LoopNest 2 */
                    for (int i_10 = 4; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 16;i_11 += 1)
                        {
                            {
                                var_32 -= (((((var_5 ? var_8 : var_15))) ? (max((((var_15 + 9223372036854775807) << (((var_0 + 5588853253918245878) - 36)))), var_2)) : ((((((arr_6 [i_6] [i_10] [i_11]) ? var_15 : (arr_5 [i_11]))))))));
                                arr_37 [i_11] [i_10] [i_5] [i_5] = ((((var_4 ? var_11 : var_12)) - ((max(var_12, (arr_34 [i_11] [i_9] [i_9] [i_6]))))));
                            }
                        }
                    }
                }
                for (int i_12 = 0; i_12 < 16;i_12 += 1)
                {

                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        arr_45 [i_6] [i_6] [i_6] [i_6] = var_15;
                        var_33 = var_7;
                    }
                    for (int i_14 = 0; i_14 < 16;i_14 += 1) /* same iter space */
                    {

                        for (int i_15 = 2; i_15 < 12;i_15 += 1)
                        {
                            var_34 = var_10;
                            var_35 = ((((((arr_15 [i_6 + 1] [i_6] [i_6 + 1]) ? (arr_15 [i_6 - 1] [i_6] [i_6 - 1]) : (arr_48 [i_6 - 1] [i_6] [i_14] [i_14] [i_15 + 4] [i_15])))) ? (!var_16) : (((arr_15 [i_6 + 3] [i_6] [i_12]) ? var_5 : (arr_15 [i_6 + 2] [i_6] [i_12])))));
                        }
                        for (int i_16 = 0; i_16 < 16;i_16 += 1)
                        {
                            var_36 = var_10;
                            arr_54 [i_16] [i_16] = (((arr_38 [i_6 + 4] [i_6] [i_6 - 1] [i_6 + 2]) + 67108863));
                            arr_55 [i_5] [i_5] [i_16] [i_16] = (max(((((((-20017 ? 29295 : var_11))) ? var_9 : var_12))), (((max(var_5, var_1)) % var_0))));
                        }
                        for (int i_17 = 1; i_17 < 12;i_17 += 1)
                        {
                            arr_58 [i_5] [i_6] [i_12] [i_5] [i_17] [i_17] |= (((((var_7 ? (arr_27 [i_5] [i_5] [i_12] [i_12]) : (((arr_47 [i_5]) ? var_8 : var_4))))) ? ((-((var_15 ? var_1 : var_14)))) : (var_16 * var_5)));
                            var_37 = ((((((var_3 ? var_13 : var_4)))) ? (arr_52 [i_5] [i_6] [i_12] [i_5]) : (arr_41 [i_5])));
                            var_38 = ((((max((~var_1), ((max(var_8, (arr_8 [i_5] [i_12] [i_17]))))))) ? (((var_15 >= var_7) % ((var_15 ? var_7 : var_5)))) : (((((var_7 ? var_11 : var_0))) ? (((~(arr_15 [i_5] [i_6] [i_12])))) : (var_12 - var_5)))));
                            var_39 = 62;
                            arr_59 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((((var_12 ? -32755 : ((var_6 ? var_3 : var_4)))) & ((((((var_10 << (var_13 - 7390)))) ? (arr_8 [i_5] [i_5] [i_12]) : var_4)))));
                        }

                        for (int i_18 = 0; i_18 < 16;i_18 += 1) /* same iter space */
                        {
                            arr_63 [i_5] [i_5] [i_12] [i_5] [i_18] = ((((var_2 ? (arr_8 [i_6] [i_6] [i_6]) : (arr_50 [i_5] [i_5] [i_5] [i_5] [i_5])))));
                            var_40 = (min(var_40, (((var_7 != ((((((var_3 ? (arr_3 [i_5] [i_5] [i_12]) : (arr_38 [i_5] [i_6] [i_5] [i_18]))) >= var_10)))))))));
                            arr_64 [i_5] [i_5] [i_12] [i_12] [i_14] [i_18] = (min(((((min(var_3, var_11))) ? ((var_15 ? (arr_26 [i_5] [i_6] [i_6] [i_14]) : (arr_51 [i_12] [i_12] [i_12] [i_12] [i_12]))) : var_14)), (((var_1 | (arr_3 [i_6] [i_12] [i_14]))))));
                            var_41 = ((+((((((arr_46 [i_5] [i_6] [i_12] [i_14]) ? var_14 : var_8))) & (arr_48 [i_6 + 4] [i_6 - 2] [i_6 - 1] [i_6] [i_6 + 2] [i_6])))));
                        }
                        for (int i_19 = 0; i_19 < 16;i_19 += 1) /* same iter space */
                        {
                            var_42 *= (((arr_23 [i_6 + 2] [i_6 + 2]) >= ((var_15 ? (arr_23 [i_6 + 2] [i_6 + 2]) : var_5))));
                            var_43 = 1;
                        }
                        var_44 = ((((-(arr_21 [i_14] [i_12] [i_6] [i_5]))) / (((((arr_21 [i_5] [i_5] [i_5] [i_5]) == (arr_21 [i_5] [i_5] [i_12] [i_14])))))));
                    }
                    /* vectorizable */
                    for (int i_20 = 0; i_20 < 16;i_20 += 1) /* same iter space */
                    {
                        arr_69 [i_5] [i_5] [i_5] [i_5] [i_5] = ((var_14 ? (((arr_3 [i_5] [i_12] [i_20]) ? var_14 : (arr_44 [i_5] [i_6] [i_6] [i_12] [i_20]))) : (var_14 == var_1)));
                        arr_70 [i_5] [i_5] [i_5] [i_5] [i_5] = (((arr_19 [i_6 + 2] [i_6 + 3]) ? var_6 : (arr_47 [i_6 + 4])));
                        arr_71 [i_5] [i_12] = (arr_39 [i_5]);
                        arr_72 [i_5] [i_5] [i_5] [i_5] = var_8;
                        var_45 -= var_8;
                    }
                    arr_73 [i_5] [i_6] = (max(var_3, (((-25 ? -20020 : 916488586)))));
                    arr_74 [i_6] = (min(((max(var_9, (arr_53 [i_5] [i_5] [i_5] [i_5] [i_5])))), (((((var_0 + 9223372036854775807) >> (var_8 - 76))) ^ ((((arr_7 [i_6]) & var_14)))))));
                }
                /* vectorizable */
                for (int i_21 = 1; i_21 < 15;i_21 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_22 = 0; i_22 < 16;i_22 += 1)
                    {
                        for (int i_23 = 0; i_23 < 16;i_23 += 1)
                        {
                            {
                                arr_82 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = var_14;
                                var_46 += -7799824784669060837;
                                arr_83 [i_5] [i_6] [i_5] [i_22] [i_23] [i_23] = var_10;
                            }
                        }
                    }
                    arr_84 [i_5] [i_5] [i_5] = -36;
                }
                /* LoopNest 2 */
                for (int i_24 = 1; i_24 < 15;i_24 += 1)
                {
                    for (int i_25 = 0; i_25 < 16;i_25 += 1)
                    {
                        {
                            var_47 = (max(var_6, (var_7 > var_0)));

                            for (int i_26 = 0; i_26 < 16;i_26 += 1)
                            {
                                var_48 = ((min((((var_2 ? (arr_10 [i_5] [i_25] [i_26]) : var_8))), ((var_13 ? (arr_32 [i_5] [i_6] [i_6] [i_24] [i_25] [i_26]) : (arr_34 [i_5] [i_6] [i_6] [i_25]))))));
                                arr_92 [i_5] [i_5] [i_5] [i_5] = var_15;
                            }
                        }
                    }
                }
                arr_93 [i_5] [i_6] = -var_13;
            }
        }
    }
    #pragma endscop
}
