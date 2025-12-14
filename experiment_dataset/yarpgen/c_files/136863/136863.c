/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (max((0 / 96), (159 + 0)));
                var_18 += (((arr_1 [i_0] [i_0]) % (max(1, 159))));
                var_19 = (max(((((arr_0 [i_0]) ? 1 : (arr_0 [i_1])))), (max(96, (arr_2 [i_0])))));

                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    var_20 = (max(var_20, (arr_7 [i_1] [i_2 + 2] [i_2 + 3] [i_1])));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] = var_15;

                        for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
                        {
                            var_21 += ((((((arr_2 [i_0]) || (arr_6 [i_1] [i_2 - 3] [i_1] [1])))) ^ (((159 == (arr_1 [i_0] [i_1]))))));
                            var_22 = var_17;
                            var_23 = (max(var_23, (((1334723941 ? 305076868 : 1334723939)))));
                            var_24 -= -2714438317;
                        }
                        for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                        {
                            var_25 = (arr_4 [i_2 - 3] [i_2 - 3]);
                            arr_16 [i_2] [i_2] [i_2] = (arr_14 [i_2] [i_2] [i_2] [i_2 - 3] [i_2]);
                        }
                    }
                    var_26 ^= (((~(arr_15 [1] [i_0] [i_0] [i_0] [i_0]))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_23 [i_0] [i_1] [i_2] [i_6] [i_7 - 1] = 496290075;
                                arr_24 [i_2] [i_1] [i_2 - 1] [i_2] [i_6] [i_7 - 1] [1] = (max((-2147483647 - 1), var_7));
                                var_27 = ((((!(arr_9 [i_0] [i_1] [i_2] [i_7 - 1] [i_7 - 1] [i_2 + 2])))));
                                arr_25 [i_0] [i_0] [i_2] [i_6] [i_7] = var_11;
                            }
                        }
                    }
                }
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        arr_30 [i_0] [i_8] [9] [i_9] = ((((65519 ? (arr_29 [i_9] [i_8] [i_1] [i_0]) : (arr_29 [i_0] [16] [i_0] [i_9])))) ? ((((!(arr_29 [i_0] [i_0] [i_8] [i_9]))))) : (max(var_2, (arr_29 [i_0] [i_1] [i_8] [i_9]))));
                        arr_31 [4] [i_1] [i_1] [i_8] = 0;
                        arr_32 [i_8] = min((min(var_10, (arr_15 [i_0] [i_1] [i_8] [i_8] [i_9]))), (max((arr_11 [i_9] [i_8] [i_1] [11] [i_0] [i_0] [i_0]), 160)));
                        var_28 = (max(var_28, (arr_0 [i_8])));
                        var_29 = 2960243355;
                    }
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        var_30 -= (arr_1 [i_0] [i_0]);
                        arr_37 [i_8] [i_8] [i_8] = ((var_1 - (min(4400967774283636629, 2040))));
                    }
                    for (int i_11 = 1; i_11 < 15;i_11 += 1)
                    {
                        var_31 -= 46005;

                        for (int i_12 = 2; i_12 < 15;i_12 += 1)
                        {
                            arr_43 [i_1] [i_1] [i_1] [i_8] [0] = ((max(var_14, (arr_14 [i_8] [i_11] [i_8] [i_1] [i_8]))));
                            var_32 = (max(var_32, (((var_16 ? ((+((57753 ? (arr_27 [i_0]) : var_5)))) : (((arr_42 [i_0] [i_1] [i_8] [i_11] [i_12 + 1]) / (arr_0 [i_0]))))))));
                            var_33 = (min(((min((((2090700375 ? 57751 : 21669))), (~4209367045)))), -18153094002405676902));
                        }
                        var_34 = min(7785, (((54 ? 1 : -420276078))));

                        /* vectorizable */
                        for (int i_13 = 2; i_13 < 16;i_13 += 1)
                        {
                            arr_46 [i_0] [i_8] [i_8] [i_11] [i_13 + 1] = (arr_41 [i_0] [i_8]);
                            var_35 = ((-((var_3 ? 0 : 2714438317))));
                            var_36 = ((arr_6 [i_11 + 2] [i_11 + 2] [i_13] [i_13 - 1]) ? 13421 : (arr_29 [i_11 + 2] [i_13 - 2] [i_13] [i_13 - 2]));
                        }
                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 17;i_14 += 1)
                        {
                            arr_49 [i_8] = ((-(arr_35 [i_0] [i_1] [i_8] [i_1] [i_11 - 1] [i_1])));
                            var_37 += var_6;
                        }
                        for (int i_15 = 4; i_15 < 14;i_15 += 1)
                        {
                            arr_53 [i_15] [i_8] [i_0] [i_8] [i_0] = (max(var_17, (!0)));
                            arr_54 [i_0] [i_0] [i_1] [i_8] [i_8] [i_0] [i_8] = 7784;
                        }
                        arr_55 [i_8] [i_1] [i_8] [i_8] = 13866;
                    }
                    var_38 = (max(var_38, (((-(0 + var_10))))));
                    var_39 += (((-212 ? (((arr_34 [i_0] [i_0]) / 1)) : ((max((arr_39 [i_0]), (arr_17 [i_0] [i_0] [i_0] [i_0])))))));

                    for (int i_16 = 3; i_16 < 15;i_16 += 1)
                    {
                        var_40 = ((3792252002691820382 ? 7784 : 0));
                        arr_58 [i_8] = var_1;
                        var_41 += max(((max((arr_36 [i_16 + 2]), 1))), (((arr_42 [i_8] [i_1] [16] [i_16] [i_1]) ? 3557621632 : (!2928407878365136404))));
                    }
                }
                for (int i_17 = 2; i_17 < 16;i_17 += 1)
                {
                    var_42 = ((((min(1, 65525))) ? (arr_41 [i_1] [i_1]) : (1 * var_15)));
                    var_43 = min(0, 3082885623);
                    arr_61 [i_0] [i_1] [7] [i_17] = (var_13 || 8498);
                }
                var_44 ^= (arr_60 [i_0]);
            }
        }
    }
    var_45 = max(((~(((-2147483647 - 1) ? var_5 : var_5)))), 65535);
    var_46 = 53126;
    #pragma endscop
}
