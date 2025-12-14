/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_17 = -86;
        arr_2 [i_0 - 1] = var_0;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_18 = var_1;
                    var_19 = (min(var_19, var_7));
                    var_20 = (max(var_20, (86 + -9223372036854775802)));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            var_21 = 136948921;
                            arr_27 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = (arr_15 [i_6] [i_7]);
                            var_22 = (max(var_22, (136948921 & -82)));
                        }
                        /* vectorizable */
                        for (int i_8 = 2; i_8 < 10;i_8 += 1)
                        {
                            var_23 = (min(var_23, (arr_11 [i_3])));
                            arr_30 [i_3] [i_5] [i_6] = ((arr_29 [i_8 + 1] [i_8 - 2]) ? var_10 : (((arr_8 [i_3] [i_3] [i_3]) ? var_5 : -83)));
                        }
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            var_24 = (max(var_24, (((var_8 % ((min(-24, var_10))))))));
                            var_25 = (((((arr_23 [i_3] [i_4] [i_5] [i_6] [i_9]) <= 136948925)) ? (((68 ? -41 : (arr_20 [i_9] [i_6] [i_5] [i_4])))) : ((var_2 ? (17 > 86) : ((var_14 ? (arr_3 [i_3] [i_3]) : var_8))))));
                        }
                        var_26 = ((1213428945 ? (((((1 ? 3775887024 : 125))) ? 50179 : 15376)) : 136948918));
                        var_27 = ((-15385 && ((max(-136948922, (arr_20 [i_6] [i_5] [i_4] [i_3]))))));
                    }
                }
            }
            arr_35 [i_3] = (((!(var_8 & var_14))));
            var_28 ^= var_5;
            arr_36 [i_4] [i_3] [i_3] = (arr_5 [i_3]);
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            var_29 = ((~(((arr_12 [i_3]) + var_11))));
            var_30 = (max(var_30, ((-(arr_7 [i_3])))));
        }
        arr_41 [i_3] = (((((~(arr_21 [i_3] [i_3] [i_3])))) ? ((-(arr_17 [i_3] [i_3] [i_3]))) : 50167));
    }
    for (int i_11 = 0; i_11 < 23;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 20;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                {
                    arr_49 [i_13] [i_12] [i_13] = (((50150 * var_0) != (arr_47 [i_13] [i_12] [i_13] [i_12 + 2])));
                    var_31 = (~6482419008836088891);
                    var_32 = (((arr_43 [7] [7]) ? (((-59 ? 15375 : 23))) : (min((127 - var_5), (((arr_46 [i_11] [i_12 + 1] [4]) ? (arr_44 [i_13]) : (arr_46 [i_12 + 1] [i_12 + 1] [i_13])))))));
                    arr_50 [i_11] &= ((((((arr_44 [i_12 + 3]) ? (arr_44 [i_12 - 1]) : var_9))) ? (1527021124 >> 19) : (((arr_44 [i_12 + 1]) ? (arr_44 [i_12 + 3]) : (arr_44 [i_12 - 1])))));
                    arr_51 [i_11] [i_13] [i_12 + 1] [i_13] = (((min((arr_46 [i_13] [i_12] [i_11]), var_3)) / (!0)));
                }
            }
        }
        var_33 = ((var_14 & ((var_1 ? (arr_44 [i_11]) : (arr_44 [i_11])))));
        arr_52 [i_11] = ((((((((arr_43 [i_11] [i_11]) ? (arr_47 [i_11] [4] [4] [i_11]) : var_9)) << ((((arr_42 [i_11]) > var_9)))))) ? ((((!((((arr_42 [i_11]) - (arr_48 [i_11] [15] [15] [15])))))))) : var_16));
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 12;i_14 += 1)
    {
        arr_55 [i_14] = ((var_12 / (arr_47 [i_14] [i_14] [i_14] [i_14])));
        arr_56 [7] = (-412959553 / 136948897);
    }
    var_34 = var_0;
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 14;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            {
                var_35 -= ((!(~15349)));
                /* LoopNest 3 */
                for (int i_17 = 2; i_17 < 12;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 14;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 14;i_19 += 1)
                        {
                            {
                                arr_70 [i_15] [i_18] [i_16] [i_18] [i_19] = (!1);
                                var_36 = (max(var_36, ((((arr_60 [i_17] [i_17]) ? ((var_2 ? (arr_60 [i_17] [i_17]) : var_9)) : (((arr_5 [i_17 + 2]) ? (arr_60 [i_15] [i_15]) : (arr_60 [i_19] [i_19]))))))));
                                arr_71 [i_15] [i_15] [i_15] [i_15] [i_16] [i_15] = (((((var_15 * (((arr_9 [i_16] [i_16] [i_16]) ? (arr_57 [i_17 - 2]) : var_4))))) ? (max((arr_67 [i_16] [i_16] [i_18] [i_16]), (~50190))) : (arr_5 [i_15])));
                            }
                        }
                    }
                }
                arr_72 [i_16] [i_16] = (((((((15356 ? 1 : (arr_65 [i_15] [i_16])))) < (((arr_6 [i_15] [i_15] [i_15]) >> (var_8 - 5645965422732201671))))) ? (arr_1 [i_16]) : (((var_16 + 9223372036854775807) >> (((arr_5 [i_15]) ? var_12 : 50179))))));
            }
        }
    }
    #pragma endscop
}
