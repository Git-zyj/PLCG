/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = (arr_3 [i_0]);
                arr_8 [i_0] = (((((((-12824 ? var_14 : var_0))) ? var_8 : 120)) & ((min(2484456614, (arr_0 [i_0 + 1] [i_1]))))));
                var_19 = 122;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_20 = 0;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_16 [i_3] [i_3] [i_2] [i_3] [i_4] = var_2;
                                var_21 = (max(var_21, 36));
                                var_22 = (max(var_22, ((((arr_14 [i_0 + 1] [i_4] [i_3 - 2] [i_4] [i_4]) ? var_3 : ((var_5 ? var_8 : var_2)))))));
                                arr_17 [i_3] [2] = ((var_14 << (((arr_3 [i_0 - 1]) - 2773724330))));
                                arr_18 [i_3] [i_1] [i_2] [i_3] [i_4] = (((arr_11 [i_1] [i_2]) / (arr_7 [i_0] [i_0 + 1] [i_0 - 1])));
                            }
                        }
                    }
                    var_23 = 219;
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_24 = (arr_14 [i_0 - 1] [i_6] [i_5] [i_6] [i_7]);
                                arr_28 [i_6] [5] [i_6] = (144 ^ 1810510691);
                                arr_29 [i_6] [i_1] [i_5] [i_6] [i_7] = (((arr_3 [i_0 - 1]) & (arr_3 [i_0 - 1])));
                            }
                        }
                    }

                    for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
                    {
                        var_25 = (((arr_26 [i_8] [i_5] [8] [i_1] [i_1] [i_1] [i_8]) % 220));
                        var_26 = (((arr_23 [i_5] [i_8] [i_0]) ? (((!(arr_7 [i_0] [9] [i_1])))) : (((arr_15 [i_0] [i_1] [i_8] [i_8] [i_8]) ^ var_2))));

                        for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
                        {
                            arr_34 [i_0] [i_8] [i_5] [i_8] [i_9] &= ((-1810510705 ? (arr_9 [i_0] [i_0] [i_0 - 1] [i_0]) : (arr_6 [1])));
                            var_27 += ((~(arr_32 [i_0] [i_0 - 1] [i_5] [4] [i_8])));
                            arr_35 [i_0] [i_1] [i_8] [i_8] = ((var_8 * ((var_1 ? 1810510682 : 65535))));
                        }
                        for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
                        {
                            var_28 += (((arr_27 [i_0] [i_1] [i_10]) ? (arr_27 [i_0] [i_1] [i_5]) : 12824));
                            arr_38 [i_8] [2] [i_8] [i_1] [i_5] [i_8] [i_10] &= (((arr_15 [i_8] [i_1] [i_8] [i_8] [i_1]) - (arr_15 [i_0] [i_1] [i_8] [i_8] [10])));
                            var_29 -= (arr_27 [i_0 + 1] [i_0 - 1] [11]);
                        }
                        for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
                        {
                            var_30 -= 0;
                            arr_41 [i_11] [i_8] [i_5] [i_0] [i_0] = (((arr_6 [i_0 - 1]) ? (((var_0 ? 36 : var_16))) : (arr_10 [i_0] [i_0] [i_0] [i_0 - 1])));
                            var_31 = (max(var_31, ((((arr_25 [i_0 + 1] [i_11]) + var_11)))));
                        }
                    }
                    for (int i_12 = 0; i_12 < 12;i_12 += 1) /* same iter space */
                    {
                        var_32 = (var_16 - 12848);
                        arr_44 [i_0] [i_1] [8] [i_1] = arr_37 [i_12];
                        arr_45 [i_0 + 1] [i_1] [i_5] [i_12] [i_12] [i_12] = var_0;
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_13 = 0; i_13 < 10;i_13 += 1) /* same iter space */
    {
        var_33 = (((arr_7 [i_13] [i_13] [i_13]) ? (arr_7 [i_13] [i_13] [i_13]) : (arr_7 [0] [i_13] [i_13])));
        var_34 = (min(var_34, (((((var_16 * (arr_30 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]))) + ((12824 ? -32746 : var_14)))))));
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 10;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 10;i_15 += 1)
            {
                {

                    for (int i_16 = 0; i_16 < 10;i_16 += 1) /* same iter space */
                    {
                        var_35 = (((arr_47 [i_13]) ? (arr_47 [i_13]) : (arr_33 [i_13] [i_16])));

                        for (int i_17 = 3; i_17 < 9;i_17 += 1)
                        {
                            arr_59 [i_17] [i_13] [i_15] [i_13] [i_13] = (((arr_20 [i_13] [i_13]) ? (((arr_47 [i_13]) ? 63 : (arr_4 [i_17] [i_16] [i_15]))) : 219));
                            arr_60 [i_13] [i_13] [i_15] [i_16] [i_13] = (arr_40 [i_17] [i_17] [i_17 - 1] [i_17 - 2] [i_17] [i_13]);
                            arr_61 [i_13] [i_14] [i_15] [i_16] [i_13] = (arr_37 [i_13]);
                        }
                    }
                    for (int i_18 = 0; i_18 < 10;i_18 += 1) /* same iter space */
                    {

                        for (int i_19 = 0; i_19 < 10;i_19 += 1)
                        {
                            arr_69 [i_13] [i_14] [i_14] [i_15] [i_13] [i_19] = (((arr_65 [i_13] [i_14] [i_13] [i_18] [i_19] [i_15]) ? (arr_37 [i_13]) : var_5));
                            var_36 = (arr_24 [0] [i_13] [i_14] [i_15] [i_18] [i_18] [i_19]);
                        }
                        for (int i_20 = 0; i_20 < 10;i_20 += 1)
                        {
                            var_37 = var_14;
                            arr_73 [i_13] [i_14] [i_14] [i_14] [i_14] = var_8;
                        }
                        for (int i_21 = 0; i_21 < 10;i_21 += 1)
                        {
                            arr_77 [i_18] [i_14] [i_14] [i_18] [i_13] = var_5;
                            var_38 = 3719120514;
                            var_39 = -var_16;
                            var_40 &= 65525;
                        }
                        arr_78 [i_14] [i_14] [i_14] [i_14] [i_13] = (((arr_64 [i_13] [i_18] [i_15]) ? ((((arr_32 [i_13] [i_14] [8] [8] [i_18]) ? 220 : (arr_48 [i_13])))) : (((arr_1 [i_14]) * (arr_48 [i_13])))));
                    }
                    var_41 = (((arr_6 [i_13]) ? (arr_40 [i_13] [i_13] [i_14] [i_14] [i_15] [i_15]) : ((((arr_57 [0] [i_13] [i_14] [0] [i_15] [i_13] [i_15]) != var_15)))));
                }
            }
        }
        arr_79 [i_13] = (((arr_9 [i_13] [i_13] [i_13] [i_13]) ? (((arr_31 [i_13] [i_13]) ? (arr_71 [i_13] [i_13] [i_13] [i_13] [i_13]) : -12805)) : ((((!(arr_50 [i_13] [i_13] [i_13])))))));
    }
    for (int i_22 = 0; i_22 < 10;i_22 += 1) /* same iter space */
    {
        arr_83 [i_22] = ((((((arr_2 [i_22] [i_22]) ? (((((arr_48 [i_22]) || var_10)))) : (arr_76 [0] [i_22] [i_22] [i_22])))) && ((((((arr_20 [i_22] [i_22]) || (arr_80 [i_22] [i_22]))) ? (arr_46 [i_22]) : var_0)))));
        /* LoopNest 2 */
        for (int i_23 = 3; i_23 < 8;i_23 += 1)
        {
            for (int i_24 = 0; i_24 < 1;i_24 += 1)
            {
                {
                    arr_88 [i_22] [i_22] [i_22] [i_22] = 16255;
                    arr_89 [i_22] [i_22] = ((((min(-24, var_14))) ? 120 : (((var_1 ? var_0 : (arr_37 [i_22]))))));
                    arr_90 [i_22] [i_23] [i_22] = 1666436921;
                    var_42 = ((1392227761 ? (arr_87 [i_23 - 3] [i_23 - 3] [i_24] [i_22]) : (arr_36 [11] [i_22] [i_24] [i_23] [i_22] [i_23])));
                }
            }
        }
    }
    #pragma endscop
}
