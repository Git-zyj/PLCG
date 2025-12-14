/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_10 *= (arr_1 [12]);
        var_11 = 78;

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_4 [i_0] = (((-(arr_3 [i_0]))));
            arr_5 [i_0] [i_1] [i_0] = var_7;

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                var_12 = (arr_3 [i_0]);
                arr_8 [i_0] = arr_7 [i_0] [i_0];
                var_13 = (((((-77 ? (arr_7 [i_1] [i_0]) : var_4))) ? (-1066409996590004989 / var_2) : -79));
            }
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    arr_14 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] = 23765;
                    var_14 = (arr_12 [i_0 + 1]);
                    arr_15 [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 1] = (arr_11 [i_1] [i_3] [i_1]);
                    var_15 = (arr_2 [i_3]);
                    arr_16 [i_0] [i_3] = var_4;
                }
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {

                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        var_16 = ((~(arr_7 [i_0] [i_0])));
                        var_17 -= (((arr_13 [i_6] [i_5] [i_3] [i_1]) ? ((-105 ? 41762 : -78)) : (arr_12 [i_0 - 1])));
                        var_18 = 32764;
                    }
                    var_19 = (~0);
                    var_20 = -57;

                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        var_21 = (arr_22 [i_0] [i_0] [i_0] [i_0]);
                        var_22 = 37728;
                    }
                }
                arr_24 [i_0] [i_0] = (arr_11 [i_0 - 1] [i_0 + 1] [i_0 + 1]);
            }

            for (int i_8 = 1; i_8 < 12;i_8 += 1)
            {
                var_23 -= (arr_23 [i_0 - 1] [i_0 - 1] [i_0] [10] [i_8 + 1]);
                arr_28 [0] [i_1] [0] |= ((1 ? (arr_13 [i_1] [i_8] [i_1] [i_8]) : (arr_19 [i_0] [i_1] [i_8 + 3] [i_8 + 3] [14] [2])));
            }
            arr_29 [i_0] [i_0] = 44004;
        }
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            arr_32 [i_0] [i_9] = 1212654792;
            var_24 = (max(var_24, (arr_12 [i_9])));
            var_25 = (max(var_25, var_9));
            arr_33 [i_0] [i_0] = (9 & 3619215057);
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            arr_36 [10] |= 1030817116;

            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                var_26 = (min(var_26, ((((arr_12 [i_0 + 1]) || (arr_12 [i_0 - 1]))))));
                var_27 = (-51 || -1979951342594333822);

                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {

                    for (int i_13 = 0; i_13 < 15;i_13 += 1)
                    {
                        var_28 = 12273136;
                        var_29 = ((-((-46 ? (arr_7 [i_0] [i_0]) : (arr_31 [i_13] [i_0] [i_10])))));
                        arr_46 [i_0] = (arr_41 [i_0] [i_12] [i_0] [i_0] [i_13] [i_0 + 1]);
                    }

                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        var_30 = ((2934801726920573744 ? 750879620 : 17398));
                        arr_49 [i_14] [i_0] [9] [i_10] [i_0] [i_0] = var_1;
                        var_31 = ((var_1 ? (arr_42 [i_0] [i_0] [i_10] [i_11] [i_0] [i_14]) : (arr_27 [i_0] [i_0 + 1])));
                        var_32 = (arr_1 [i_0]);
                    }
                    arr_50 [i_11] [i_11] [i_11] [i_12] [i_12] |= ((~((~(arr_10 [i_12] [i_11] [i_10] [i_0])))));
                    var_33 = (max(var_33, var_1));
                }
                for (int i_15 = 0; i_15 < 0;i_15 += 1)
                {
                    var_34 -= 78;
                    arr_54 [i_0] [i_11] [i_10] [1] [i_0] = ((14 ? (!-16) : ((var_1 ? var_6 : 1))));
                    arr_55 [i_15] [i_0] [i_11] [i_0] [i_0 + 1] = var_7;
                }
            }
        }
        for (int i_16 = 3; i_16 < 13;i_16 += 1)
        {

            for (int i_17 = 0; i_17 < 0;i_17 += 1)
            {
                arr_61 [i_17] [i_0] [i_0] = ((var_3 ? (arr_23 [i_17] [i_17] [i_17 + 1] [i_0] [i_17 + 1]) : (var_0 ^ var_1)));
                var_35 = var_2;
            }
            for (int i_18 = 0; i_18 < 15;i_18 += 1)
            {
                var_36 = ((((arr_7 [i_0 - 1] [i_0]) ? 16777216 : (arr_58 [i_0] [i_0] [i_18]))));
                arr_66 [i_0] [i_0] [i_0] [i_0] = var_2;
            }
            for (int i_19 = 1; i_19 < 14;i_19 += 1)
            {
                var_37 = (arr_3 [i_0]);
                arr_69 [i_0] [i_0] [i_0] [i_0] = (arr_52 [i_0] [i_16] [i_19] [i_0] [i_0]);
                var_38 = (!var_0);
            }
            var_39 = (max(var_39, (((((((arr_58 [2] [2] [i_16 + 1]) ? 65535 : var_1))) ? (arr_67 [2]) : (((arr_7 [0] [0]) ? 1136240667 : 1)))))));
        }
    }
    /* vectorizable */
    for (int i_20 = 0; i_20 < 11;i_20 += 1)
    {
        var_40 = var_6;
        var_41 *= (arr_34 [i_20]);
        arr_72 [i_20] = var_3;

        for (int i_21 = 0; i_21 < 11;i_21 += 1)
        {
            var_42 ^= (((65519 ? 1 : -24672)));
            var_43 = (((arr_74 [i_20] [i_21] [i_20]) ? var_1 : (((arr_23 [i_21] [i_21] [i_21] [i_21] [8]) ? (arr_62 [i_21] [i_21] [i_20] [i_20]) : (arr_40 [i_21])))));
        }
        for (int i_22 = 1; i_22 < 7;i_22 += 1)
        {
            arr_81 [i_20] [i_20] [i_20] = (arr_40 [i_20]);
            var_44 = -42;
            arr_82 [i_20] [i_20] [i_20] = var_0;
        }
    }
    var_45 *= var_5;
    var_46 = -41;
    var_47 = ((var_1 ? 12273119 : (min((var_5 % var_7), var_9))));
    #pragma endscop
}
