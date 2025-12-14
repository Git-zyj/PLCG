/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180470
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((var_19 >= (!var_5))) ? ((min(var_12, 38192))) : var_7));
    var_21 = (((var_4 && var_11) * -var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_22 = ((((max(var_18, -58430))) ? (((arr_2 [i_0] [i_1] [i_1]) << (arr_0 [i_0]))) : (((var_9 + 2147483647) << (var_5 - 832833602)))));
                var_23 = (((max(var_9, ((var_16 ? var_16 : (arr_2 [i_0] [i_1] [i_0])))))) ? ((var_18 | (min(var_12, -3)))) : 58454);
                var_24 = (max(var_24, (min((arr_3 [2]), (((var_11 ? (arr_4 [i_0]) : (arr_4 [i_0]))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_25 -= ((+((var_8 ? (((arr_8 [15] [i_2] [i_2] [i_2]) ? var_5 : 7119)) : 7112))));

                            for (int i_4 = 0; i_4 < 19;i_4 += 1)
                            {
                                var_26 = (((((~(!var_10)))) ? (arr_3 [i_1]) : ((max((arr_2 [16] [i_1] [i_4]), var_0)))));
                                arr_14 [i_0] [i_0] [i_0] [6] [i_1] [i_0] [i_0] = 58421;
                                arr_15 [8] [i_4] [i_1] = (min((((((var_2 ? var_5 : (arr_9 [i_2] [1] [i_2] [9]))) * (arr_0 [i_3])))), (min((((var_0 ? var_12 : var_10))), (min(15105300285890533190, (arr_13 [i_2] [i_2])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {

                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    var_27 = (min((max(7095, (var_12 && var_0))), (arr_19 [i_5])));
                    arr_22 [i_5] = (((((var_14 ? (((var_0 ? 61925 : var_18))) : (arr_17 [i_5])))) ? ((var_8 ? (!58438) : (58425 * 7095))) : var_7));
                    arr_23 [i_5] = var_9;
                    arr_24 [i_5] = 252;
                }

                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            {
                                arr_32 [i_5] [i_5] [i_5] [i_5] [i_5] = var_8;
                                var_28 = (max(var_28, -12183));
                                arr_33 [i_5] [i_5] [i_8] [i_6] [i_5] = (min((((((arr_31 [0] [i_6] [i_6] [i_6] [0]) * 11254)))), (((arr_26 [i_5] [i_5] [i_5] [i_5]) ? var_5 : ((max((arr_26 [1] [i_6] [i_8] [i_9]), var_19)))))));
                                var_29 = var_19;
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_11 = 2; i_11 < 20;i_11 += 1)
                    {
                        arr_38 [i_5] [i_6] [i_5] [i_11] [i_11] = (arr_20 [i_11 + 1] [i_11 - 2] [i_11 + 2] [i_11 + 1]);
                        var_30 = -var_13;
                        var_31 = (arr_36 [13] [i_11 - 1] [i_11] [20]);
                        var_32 = (arr_28 [i_5] [i_5] [i_5]);
                    }
                    var_33 = ((-var_2 * (((((61911 ? (arr_17 [i_5]) : var_11))) ? (arr_17 [i_5]) : var_13))));

                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        arr_42 [i_5] [i_5] [i_5] = (arr_41 [i_5] [i_5]);
                        var_34 = (arr_18 [i_5] [i_8]);
                        arr_43 [i_5] [i_5] [i_8] [i_12] = ((((arr_21 [i_5] [i_5] [i_12] [i_12]) ? 9223372036854775807 : var_14)));
                        var_35 = var_3;
                    }
                    for (int i_13 = 0; i_13 < 22;i_13 += 1) /* same iter space */
                    {
                        var_36 = (-((3971 ? ((var_14 ? (arr_31 [i_5] [i_6] [i_6] [i_8] [i_13]) : var_15)) : (!var_12))));
                        var_37 -= (max(var_12, (arr_37 [0] [0] [i_8] [i_13])));
                        var_38 -= ((((max((((var_7 ? var_9 : 3511499965))), var_11))) ? ((min((!var_9), ((15 != (arr_27 [i_13])))))) : ((~(arr_31 [i_5] [i_5] [i_5] [i_5] [i_5])))));
                        var_39 = var_4;

                        for (int i_14 = 0; i_14 < 22;i_14 += 1)
                        {
                            var_40 = ((-(min(((-1 ? var_0 : 58453)), var_16))));
                            var_41 = arr_35 [i_5];
                            arr_48 [i_5] [i_5] [i_8] [i_8] [i_5] = (((((max(var_4, -4843)))) ? (((!var_14) + var_15)) : ((((-1 ? var_17 : var_6)) >> ((((var_5 ? var_2 : 2097859589)) + 1235191784))))));
                            var_42 = (((arr_28 [10] [i_6] [i_14]) - (min((arr_28 [i_5] [i_6] [i_8]), (arr_35 [i_5])))));
                        }
                    }
                    for (int i_15 = 0; i_15 < 22;i_15 += 1) /* same iter space */
                    {
                        var_43 = var_1;
                        arr_52 [i_5] [i_5] [i_5] = var_12;
                        var_44 = (max(var_44, ((((((((var_2 ? 7089 : -17326))) ? ((((arr_28 [3] [i_6] [i_6]) >> (((arr_44 [i_5] [8] [i_5] [14]) - 603))))) : (min((arr_25 [i_15] [i_8] [i_15] [i_15]), var_9)))) - (min((((arr_51 [19] [i_6] [14] [i_15]) ? 25 : (arr_51 [i_5] [i_6] [i_8] [i_15]))), var_11)))))));
                    }
                }
                arr_53 [i_5] = ((((((((var_4 ? 255 : var_7))) ? ((-(arr_49 [i_6] [i_6] [i_5] [i_5] [i_5] [i_6]))) : (arr_49 [i_6] [i_6] [i_6] [i_5] [i_6] [i_6])))) ? var_7 : (((arr_51 [i_5] [i_5] [i_5] [i_5]) ? -var_16 : var_5))));

                for (int i_16 = 1; i_16 < 21;i_16 += 1)
                {
                    var_45 = ((((((((var_16 ? (arr_29 [i_6]) : var_19))) ? (arr_25 [i_5] [i_5] [i_16 + 1] [6]) : ((-33 ? var_16 : 7073))))) ? -8676800368129096076 : 66));
                    arr_56 [i_5] [i_5] [i_5] [i_5] = (min(((((arr_34 [21] [21] [i_16] [21]) ? (arr_34 [i_6] [i_6] [i_5] [i_5]) : var_6))), var_11));
                    arr_57 [i_5] = ((var_16 >> (((((((arr_39 [i_5] [i_6] [19]) % (arr_51 [i_6] [2] [i_6] [i_5]))) % var_7)) - 30))));
                    var_46 = var_4;
                }
                for (int i_17 = 0; i_17 < 22;i_17 += 1)
                {
                    arr_61 [i_5] = (((((arr_31 [i_5] [i_5] [i_5] [i_5] [i_5]) / (arr_60 [i_5]))) >= var_10));

                    for (int i_18 = 0; i_18 < 22;i_18 += 1) /* same iter space */
                    {
                        var_47 = (arr_16 [i_18]);
                        arr_64 [i_5] = (arr_16 [i_17]);
                        var_48 = (((((-(((arr_55 [i_5] [i_5]) ? var_5 : (arr_19 [i_5])))))) ? ((-24345 ? ((max(1, var_17))) : (min(var_2, var_16)))) : (((arr_59 [1] [i_6] [i_6]) << (((((arr_20 [i_5] [i_6] [i_5] [i_6]) + 2002128656)) - 8))))));
                    }
                    for (int i_19 = 0; i_19 < 22;i_19 += 1) /* same iter space */
                    {
                        arr_68 [i_5] [i_5] = (11 + var_10);
                        var_49 -= var_15;
                        var_50 = 7065;
                        arr_69 [i_5] = ((((max((!var_2), (max(9223372036854775807, (arr_36 [16] [i_6] [i_17] [i_19])))))) == (((arr_67 [i_5] [i_17] [i_6] [i_5]) ? 28 : (((arr_37 [i_5] [i_6] [i_17] [i_19]) ? (arr_25 [i_5] [i_6] [18] [i_6]) : 18446744073709551615))))));
                    }
                    var_51 = (((((var_13 - (arr_63 [i_5] [12] [i_5] [i_5] [i_5] [i_5])))) ? (arr_65 [i_6] [i_5]) : (((((arr_30 [0] [i_6] [i_5] [i_17] [i_17] [i_17]) ^ var_3)) - (((max(var_1, 21))))))));
                }
                for (int i_20 = 0; i_20 < 22;i_20 += 1)
                {
                    arr_74 [i_5] [i_6] [i_20] [i_6] = var_9;
                    var_52 -= ((-((((var_1 ? var_12 : (arr_70 [i_5] [6] [i_20]))) / (arr_17 [12])))));
                }
            }
        }
    }
    var_53 = ((var_6 ? ((max(var_10, var_1))) : (min(((var_1 ? var_3 : var_8)), ((13668 ? var_14 : var_15))))));
    #pragma endscop
}
