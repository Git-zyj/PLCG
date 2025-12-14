/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((~(((var_13 ? var_9 : (arr_1 [i_0] [i_0]))))));
        var_18 = (min(var_18, ((!((((!var_4) ? 2146435072 : (((arr_0 [i_0]) ? 0 : -1283758439)))))))));
        arr_3 [i_0] [i_0] = (((((((arr_0 [i_0]) != var_15)) && 1)) ? var_5 : (arr_1 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 11;i_1 += 1)
    {
        var_19 *= (((arr_1 [i_1 - 2] [i_1 - 3]) & (arr_1 [i_1 - 3] [i_1 - 1])));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 12;i_5 += 1)
                        {
                            {
                                arr_15 [i_5] [i_1] [9] [i_4 - 1] [i_1] = (((var_17 > var_17) && (~457264882)));
                                arr_16 [i_4 + 1] [i_5 - 2] [i_1] [i_3] [i_1] [i_2 - 1] [i_1] = ((~(arr_10 [i_4 - 1] [i_5 - 1] [i_5 - 1] [i_5])));
                            }
                        }
                    }
                    arr_17 [i_1] [0] [i_1] = (arr_1 [i_2] [i_2]);
                    arr_18 [i_1] = ((!((((arr_10 [i_1] [i_1] [i_3] [i_3]) ? (arr_8 [i_1 + 2]) : 4337371041275788856)))));
                    var_20 *= var_7;
                }
            }
        }
        arr_19 [i_1] [i_1] = 2275767305;
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        var_21 = (min(var_21, (((-((~(arr_5 [i_6]))))))));
        var_22 = (((arr_7 [i_6] [i_6]) ? (((arr_7 [i_6] [i_6]) / 576451956210401280)) : ((max(182020338, var_6)))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        for (int i_10 = 4; i_10 < 8;i_10 += 1)
                        {
                            {
                                arr_30 [i_7] [i_7] = var_11;
                                arr_31 [i_7] [i_8] [i_8] [i_7] [i_7] = (max(22, 202));
                                arr_32 [i_10] [i_9] [i_7] [i_7] [i_7] [i_6] = (arr_5 [i_7]);
                            }
                        }
                    }
                    arr_33 [i_6] [i_7] [i_6] [i_6] = ((((((-(((arr_29 [4] [4] [i_8] [i_8] [i_8] [3] [i_8]) ? (arr_27 [i_6] [i_7] [i_6] [i_7] [i_8]) : (arr_9 [i_6] [i_7] [i_8]))))) + 2147483647)) >> (!92)));
                }
            }
        }
        var_23 = (max(var_23, ((((~var_1) <= -754328167)))));
    }
    /* vectorizable */
    for (int i_11 = 3; i_11 < 13;i_11 += 1)
    {

        for (int i_12 = 0; i_12 < 16;i_12 += 1) /* same iter space */
        {

            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                var_24 ^= (!205);
                arr_44 [i_13] [i_13] [i_11 - 2] = ((30637 ? var_5 : (arr_43 [i_11] [i_12] [i_11])));
            }
            arr_45 [i_11] [i_12] [i_12] = 3351626014;
            var_25 *= ((var_3 ? (arr_43 [i_11] [i_12] [i_11]) : (arr_0 [5])));
            arr_46 [i_12] [i_12] [i_11] = ((-(arr_41 [2] [i_11] [2])));
        }
        for (int i_14 = 0; i_14 < 16;i_14 += 1) /* same iter space */
        {

            for (int i_15 = 0; i_15 < 16;i_15 += 1)
            {
                /* LoopNest 2 */
                for (int i_16 = 3; i_16 < 13;i_16 += 1)
                {
                    for (int i_17 = 1; i_17 < 13;i_17 += 1)
                    {
                        {
                            arr_57 [0] [i_11 + 1] [i_14] [i_15] [i_14] [i_17] = -8122718242077011096;
                            arr_58 [i_11] [i_14] [i_15] [i_17] [i_17] [i_14] [i_16] = 57;
                            arr_59 [i_17] [i_14] [i_15] [i_14] [i_11 + 1] = (arr_48 [i_14] [i_14]);
                            var_26 = (~(arr_52 [i_16 + 1] [i_11 - 3]));
                        }
                    }
                }
                var_27 = (min(var_27, (arr_38 [i_11 - 3] [i_11 - 2])));
            }
            for (int i_18 = 0; i_18 < 16;i_18 += 1)
            {
                var_28 = (max(var_28, -8133328230486499965));
                arr_62 [i_14] [1] [i_18] = (!var_7);
            }
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 16;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 16;i_20 += 1)
                {
                    {
                        arr_69 [i_11] [i_14] [i_19] [i_20] = (((arr_39 [i_11 - 1]) ? ((216 ? var_9 : 8191)) : (arr_63 [i_11 - 3] [i_14] [i_11 - 3])));
                        arr_70 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] = ((1 ? (arr_37 [i_20]) : var_3));
                        var_29 = (max(var_29, (arr_47 [i_19] [i_19])));
                    }
                }
            }
        }
        for (int i_21 = 0; i_21 < 16;i_21 += 1) /* same iter space */
        {
            arr_74 [i_11] [i_21] = var_17;
            var_30 = (!(((arr_71 [i_11] [i_11] [i_11]) <= var_7)));
            /* LoopNest 2 */
            for (int i_22 = 0; i_22 < 16;i_22 += 1)
            {
                for (int i_23 = 1; i_23 < 15;i_23 += 1)
                {
                    {
                        var_31 ^= (-(arr_43 [2] [i_11 - 2] [i_23]));
                        arr_79 [i_23] [i_23] [i_22] = (arr_51 [i_23]);
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_24 = 0; i_24 < 16;i_24 += 1)
            {
                for (int i_25 = 0; i_25 < 16;i_25 += 1)
                {
                    for (int i_26 = 2; i_26 < 14;i_26 += 1)
                    {
                        {
                            arr_91 [i_11] [i_11 + 2] [11] [i_24] [i_25] [i_26] = var_6;
                            var_32 = (min(var_32, (arr_61 [i_24])));
                        }
                    }
                }
            }
        }
        var_33 ^= 202;
        arr_92 [i_11] [i_11] = (var_0 * var_10);
        arr_93 [i_11] = var_2;
    }
    var_34 = var_17;
    /* LoopNest 2 */
    for (int i_27 = 0; i_27 < 10;i_27 += 1)
    {
        for (int i_28 = 0; i_28 < 10;i_28 += 1)
        {
            {
                arr_99 [i_27] = ((~(arr_75 [i_27])));
                arr_100 [i_27] [i_28] = (10247 ? 1411895995 : (((((((arr_96 [i_27]) << (((arr_84 [i_27] [i_28] [i_28] [i_27] [i_28] [i_27]) - 531615120))))) ? 85 : 268419072))));
                var_35 = (((((-330985572 ? (((arr_88 [i_27] [i_28] [12] [i_28] [i_27]) ? var_1 : var_7)) : ((min((arr_72 [i_27]), (arr_22 [i_27]))))))) ? (((((arr_97 [i_27] [i_27] [i_27]) > 1)) ? (~31) : -var_16)) : (((1 ? 11 : 5)))));
            }
        }
    }
    var_36 = var_5;
    var_37 &= (!var_10);
    #pragma endscop
}
