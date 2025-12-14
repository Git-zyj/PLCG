/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_2] [i_4 - 1] [i_4 - 1] [i_0 + 4] = 1131078814;
                                var_17 = 8191;
                                var_18 = (((((-(arr_4 [9] [9] [i_3])))) >> (((max(-1518885833, (arr_6 [i_0] [i_1] [i_0] [i_3]))) - 5795808049598108975))));
                                var_19 = ((~(((!(arr_3 [i_0] [i_1]))))));
                            }
                        }
                    }
                    var_20 += ((var_6 ? (((var_14 ? var_11 : ((var_2 + (arr_1 [i_0] [i_0])))))) : ((max(var_16, var_1)))));
                    var_21 = ((-((max(var_8, (arr_8 [i_2] [i_0 + 3] [i_0 + 3]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 9;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_0] [i_1] [i_5] [i_2] = var_12;
                                arr_21 [i_1] [i_0] = var_15;
                            }
                        }
                    }

                    for (int i_7 = 2; i_7 < 9;i_7 += 1)
                    {

                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 9;i_8 += 1)
                        {
                            var_22 |= var_16;
                            arr_28 [i_8] [i_7] [i_2] [i_1] [i_0 + 3] = (arr_19 [i_8] [i_8 - 1] [i_8] [i_8] [i_8] [i_8] [i_8]);
                            arr_29 [i_0 + 4] [i_2] [i_7] [i_8] = (((((192 ? -58 : var_7))) / (var_3 * var_13)));
                            var_23 = (min(var_23, ((((arr_19 [i_0 + 4] [i_1] [0] [i_2] [i_2] [i_7] [i_8 + 2]) <= (((arr_1 [i_1] [i_2]) % 247)))))));
                        }
                        var_24 = -2147483647;
                    }
                    /* vectorizable */
                    for (int i_9 = 2; i_9 < 11;i_9 += 1) /* same iter space */
                    {
                        var_25 = (arr_25 [i_0] [i_0] [3] [1] [i_2] [i_9]);
                        arr_32 [i_9] [i_2] [i_1] = ((-((16 ? (arr_19 [i_0] [i_0] [i_1] [i_1 - 1] [i_0] [i_9] [6]) : (arr_17 [9] [i_1] [i_2] [i_9] [i_9])))));
                        arr_33 [i_2] = ((var_16 ? var_15 : ((var_7 ? var_7 : (arr_24 [i_0] [i_0] [i_1] [i_1] [i_9])))));
                    }
                    for (int i_10 = 2; i_10 < 11;i_10 += 1) /* same iter space */
                    {
                        var_26 = ((var_11 != var_2) >> (((arr_5 [i_0 + 1] [i_1 - 1]) - 165)));
                        arr_36 [i_10 - 2] [6] [i_0 - 1] [i_0 - 1] = var_7;
                        arr_37 [i_10 + 1] [i_1 - 1] [i_2] [i_10] [i_2] = var_14;
                        arr_38 [i_0] [i_1] = ((-((8166671670573447281 ? (arr_2 [i_2] [i_1 - 1] [i_0 + 3]) : var_8))));
                        arr_39 [i_2] [i_1] = (arr_26 [i_10] [i_2] [i_2] [i_0] [i_1] [i_0]);
                    }
                    for (int i_11 = 2; i_11 < 11;i_11 += 1) /* same iter space */
                    {

                        for (int i_12 = 0; i_12 < 12;i_12 += 1) /* same iter space */
                        {
                            var_27 = max(-6685063586886734545, 1);
                            var_28 = (-7571946439433808906 > -23344);
                            arr_44 [i_0] [i_1] [i_2] [i_12] [i_12] [4] [i_1 - 1] = (max(((((20 ? 65535 : var_15)))), 20));
                        }
                        for (int i_13 = 0; i_13 < 12;i_13 += 1) /* same iter space */
                        {
                            var_29 = (min(var_29, var_0));
                            arr_48 [i_0] [i_1] [i_2] [i_11] [5] = 81;
                            arr_49 [i_13] [i_11] [i_2] [0] [i_0 - 1] = max(-3, 9223372036854775807);
                            var_30 -= ((arr_3 [i_0] [i_13]) ? (arr_7 [i_13] [i_11 - 2] [i_2] [i_1] [i_0 + 4]) : ((((((36872 ? var_1 : var_13))) ? ((((-2147483647 - 1) ? 0 : 1))) : ((var_8 ? (arr_25 [i_0] [i_0] [i_1] [i_1] [i_11] [i_13]) : var_14))))));
                        }
                        var_31 = (((-(max(63, 15097913944891925925)))));
                    }
                }
            }
        }
    }

    for (int i_14 = 0; i_14 < 11;i_14 += 1)
    {
        /* LoopNest 2 */
        for (int i_15 = 2; i_15 < 8;i_15 += 1)
        {
            for (int i_16 = 4; i_16 < 9;i_16 += 1)
            {
                {
                    arr_57 [i_14] [i_14] [i_14] [i_14] = (min(-255, 62600));
                    var_32 = arr_9 [i_15] [i_16];
                    arr_58 [i_16] [i_16 - 2] [i_16 - 3] &= -3484467967691325014;
                }
            }
        }
        var_33 = (min(var_9, (((arr_0 [i_14]) ? (arr_0 [i_14]) : (var_1 % var_14)))));

        for (int i_17 = 2; i_17 < 10;i_17 += 1)
        {
            arr_61 [i_17] = (arr_0 [i_14]);
            var_34 = ((((((max(48, (arr_27 [i_17 - 2] [i_17 + 1] [i_14] [i_14] [i_17] [i_14] [i_14])))) ? (((min(var_14, var_11)))) : -var_4)) << (-1872125206 + 1872125219)));
        }
        for (int i_18 = 2; i_18 < 10;i_18 += 1)
        {
            /* LoopNest 3 */
            for (int i_19 = 0; i_19 < 11;i_19 += 1)
            {
                for (int i_20 = 2; i_20 < 9;i_20 += 1)
                {
                    for (int i_21 = 2; i_21 < 10;i_21 += 1)
                    {
                        {
                            arr_74 [i_14] [i_18] [i_19] [i_20 - 1] [i_21] = (!71);
                            var_35 = ((var_9 > (max(var_3, ((((arr_13 [i_14]) / (arr_2 [i_21] [i_18] [i_14]))))))));
                        }
                    }
                }
            }
            arr_75 [6] [i_18] = (min((arr_18 [i_14] [i_14] [i_14] [i_18] [3] [i_18 - 2] [11]), var_7));
        }
        arr_76 [i_14] = (min(((+((((arr_65 [i_14] [i_14] [10]) == 504))))), (arr_52 [i_14] [i_14])));
    }
    /* LoopNest 2 */
    for (int i_22 = 1; i_22 < 16;i_22 += 1)
    {
        for (int i_23 = 0; i_23 < 18;i_23 += 1)
        {
            {
                arr_82 [i_23] [1] [i_22] |= (max((((arr_78 [i_22] [i_22 + 1]) ? (arr_81 [i_22]) : var_8)), var_3));
                arr_83 [i_22] [i_22] = var_13;
            }
        }
    }
    #pragma endscop
}
