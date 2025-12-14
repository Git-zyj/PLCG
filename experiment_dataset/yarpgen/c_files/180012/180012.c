/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_18 = (min(var_18, ((max(((72 ? (arr_0 [i_0 - 2] [i_0 + 1]) : (arr_0 [i_0 + 1] [i_0 + 1]))), (arr_1 [i_0]))))));

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            var_19 = (((((~(arr_3 [i_0 - 1])))) ? (((!((var_0 && (arr_0 [1] [i_1 - 1])))))) : (~var_1)));
            var_20 = (min(var_20, ((((var_7 >= -61) ? ((((var_5 + 2147483647) >> (((0 != (arr_1 [i_1]))))))) : (((arr_1 [i_0]) ? ((var_12 - (arr_3 [i_1]))) : (arr_0 [i_0 - 3] [i_0 - 3]))))))));
            var_21 = (min(var_21, (((((((arr_2 [14]) >= 1576)) ? (arr_2 [12]) : (((max(1, var_17)))))) - ((min((var_16 || 1), var_1)))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_22 = var_4;
            var_23 = (((((~1) + 2147483647)) >> (var_11 - 85)));

            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                var_24 |= (((arr_1 [i_0 - 3]) ? var_13 : 1));
                arr_9 [19] [i_2] [i_0] [i_0] = (var_6 - 1);
            }
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    var_25 |= (((arr_13 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 2] [i_4]) ? (((((arr_6 [i_0] [i_0]) >= var_9)))) : 140737488224256));
                    arr_15 [i_0 + 1] [i_4] [11] = (arr_2 [i_4]);
                }

                for (int i_6 = 2; i_6 < 19;i_6 += 1) /* same iter space */
                {
                    var_26 += (~1);

                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        arr_22 [i_7] [i_7] [i_4] [i_4] [i_4] [i_0] [i_0] = (1 ? (((((arr_12 [i_6] [i_6] [i_6]) != var_16)))) : 13313617442971147554);
                        arr_23 [i_7] [i_4] [i_0 + 1] = ((-(var_7 >= var_12)));
                        var_27 = 1;
                        var_28 = var_1;
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_29 = (((arr_10 [i_0 - 3] [i_0 + 1] [i_6 - 1]) ? 674811288 : (arr_19 [i_8] [i_4] [i_2] [i_0])));
                        arr_26 [0] [i_6] [i_6] [i_6] [i_2] [i_0 + 1] &= (((0 <= 32) ? 1 : var_12));
                    }
                }
                for (int i_9 = 2; i_9 < 19;i_9 += 1) /* same iter space */
                {
                    arr_31 [i_2] [i_2] = (((arr_5 [i_9 - 2] [i_0 - 2] [i_0 - 1]) % var_11));
                    var_30 = (max(var_30, -4711676840282524566));
                    var_31 = (((((3149968049 ? var_2 : 1))) ? (1 || -4711676840282524566) : 1227423191));
                    arr_32 [4] [4] [i_0] [11] = (arr_10 [i_2] [21] [i_2]);
                }
                for (int i_10 = 2; i_10 < 19;i_10 += 1) /* same iter space */
                {

                    for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
                    {
                        var_32 = -32767;
                        arr_37 [5] [5] [i_0 - 2] [5] [i_11] = var_10;
                        var_33 = (((arr_20 [i_11] [i_10 + 2] [i_0 - 3] [18] [i_11]) && (arr_12 [i_10] [i_0 + 1] [i_4])));
                        var_34 += (arr_10 [i_0] [i_2] [2]);
                        arr_38 [i_4] [1] [1] &= (((0 * -16420) ? (2829 * 7) : (arr_7 [i_0 + 1])));
                    }
                    for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
                    {
                        var_35 ^= var_17;
                        var_36 -= (((arr_27 [i_0 - 3] [i_10 + 2]) ? (arr_27 [i_0 - 3] [i_10 - 1]) : (arr_27 [i_0 - 3] [i_10 - 2])));
                        var_37 = ((var_6 ? (arr_1 [i_10 + 1]) : var_1));
                    }
                    var_38 = (!233);
                    arr_41 [i_10] [i_2] [i_4] [i_4] = (~1);
                }
            }
            for (int i_13 = 0; i_13 < 22;i_13 += 1) /* same iter space */
            {
                var_39 += (((var_11 >> var_3) && (arr_12 [i_0 - 2] [i_0 + 1] [i_0 - 2])));
                var_40 = (arr_19 [i_13] [i_0] [i_0] [3]);
            }
            for (int i_14 = 0; i_14 < 22;i_14 += 1) /* same iter space */
            {
                var_41 = (((arr_40 [i_0] [i_0 - 1] [i_0 - 3] [i_0 - 3]) ? (arr_40 [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 1]) : (arr_40 [7] [i_0 - 2] [i_0 - 2] [i_2])));
                var_42 = -13872877079631882671;
                arr_49 [11] = (arr_5 [i_0] [i_0 - 2] [i_0 - 3]);
                arr_50 [i_14] [i_2] [i_0] = (((arr_48 [i_0 + 1] [i_0 - 3] [i_0 - 2] [i_0 + 1]) - var_9));
            }
        }
        var_43 = (arr_0 [7] [i_0 - 3]);
    }
    var_44 = var_3;
    var_45 &= ((var_4 | ((0 ? 10 : ((41334 ? 0 : 1))))));
    var_46 = var_15;

    for (int i_15 = 1; i_15 < 11;i_15 += 1)
    {
        var_47 = var_17;
        arr_55 [5] [i_15] = (arr_19 [i_15] [i_15] [i_15] [i_15]);
        arr_56 [i_15] = (max((arr_43 [i_15] [0] [i_15]), ((((arr_5 [i_15] [i_15 + 1] [i_15 + 1]) ? ((var_1 ? -32767 : (arr_2 [2]))) : (((~(arr_34 [i_15] [7] [7] [7])))))))));
        arr_57 [i_15] = (max(((((var_16 >= var_13) ? ((max(1227423191, -32767))) : 4077936896))), ((1787542818 ? 17 : 4333022194816391420))));
    }
    #pragma endscop
}
