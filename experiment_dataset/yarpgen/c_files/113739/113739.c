/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        var_10 = var_6;
                        var_11 = (((arr_2 [i_0]) ^ ((var_6 ? ((4378 + (arr_8 [i_2]))) : var_2))));
                        var_12 -= var_1;
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_13 = (arr_4 [i_0 + 1] [i_1] [i_1]);
                        arr_14 [i_0] [1] [i_2 - 4] [i_4] &= 1;
                    }
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        arr_19 [i_0] [i_2] [i_2] [i_2] [i_2] [8] = (~186);
                        var_14 = ((((1 ? var_1 : ((max(var_8, var_5)))))) ? (((((var_9 ? (arr_4 [i_0] [i_0] [i_0]) : -406))) ? (min((arr_13 [i_0] [i_2] [i_2 + 1] [3]), 11)) : 49)) : ((max((((arr_7 [3] [i_2] [3]) ? 58842 : (arr_5 [i_0] [i_1] [i_5]))), (arr_2 [i_0 + 2])))));
                    }
                    var_15 = ((max((arr_10 [i_2 - 4] [i_0 + 1] [8] [i_1]), (arr_10 [i_2 - 2] [i_0 - 1] [i_2 - 1] [i_0 - 1]))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            {
                arr_25 [i_6] [i_6] [i_6] = (max(((-(arr_23 [i_7] [i_6]))), (((!(arr_23 [i_7] [i_6]))))));

                /* vectorizable */
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        arr_31 [i_6] [i_6] [i_6] [i_6] = ((+((1 ? (arr_22 [i_6] [i_6]) : (arr_13 [i_6] [i_6] [i_6] [i_6])))));
                        var_16 |= arr_26 [i_6] [i_7] [i_8] [i_8];
                        var_17 = (((((-(arr_15 [i_6] [i_7])))) ? 6 : var_1));
                    }
                    for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
                    {
                        var_18 ^= var_9;
                        arr_34 [i_6] = ((73 + ((1 ? -421 : 9753085383618524400))));
                        arr_35 [i_6] [i_6] = (((arr_17 [i_6] [i_6] [i_6] [i_10] [i_10]) == (arr_17 [i_6] [i_6] [i_8] [i_10] [i_7])));
                        var_19 = 0;
                        arr_36 [i_6] [i_7] [i_8] [1] [i_6] [i_10] = (((arr_7 [i_6] [i_6] [i_10]) ? (((arr_26 [i_6] [i_6] [i_6] [i_6]) ? var_3 : var_2)) : 1));
                    }
                    for (int i_11 = 0; i_11 < 11;i_11 += 1) /* same iter space */
                    {
                        arr_39 [i_6] = var_0;
                        var_20 = (max(var_20, ((((arr_6 [i_6] [i_11] [i_8]) ? (arr_6 [i_6] [i_8] [i_11]) : (arr_6 [18] [i_7] [18]))))));
                        arr_40 [i_6] [i_8] &= (arr_15 [i_7] [18]);
                        arr_41 [i_6] [i_7] [i_7] [i_7] [i_6] [i_6] = (((arr_37 [i_8] [i_7] [i_6]) ? var_3 : (arr_23 [i_8] [i_11])));
                        var_21 = (0 == var_0);
                    }

                    for (int i_12 = 1; i_12 < 7;i_12 += 1)
                    {
                        var_22 = ((arr_0 [i_7]) ? (arr_38 [i_12 + 3] [i_12 + 4] [4] [i_12 + 4]) : (arr_1 [1]));
                        arr_44 [i_6] [i_7] = (-var_4 ? (arr_18 [i_12] [i_12] [i_12 - 1] [i_12 + 1]) : var_2);
                    }

                    for (int i_13 = 1; i_13 < 1;i_13 += 1)
                    {
                        arr_47 [i_6] [i_6] [i_6] [i_6] = var_2;
                        var_23 = (arr_43 [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_8]);
                        var_24 |= (2147483647 ? (~var_7) : (((arr_24 [i_6] [i_6] [i_6]) ? 0 : var_7)));
                    }
                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {
                        var_25 = (arr_17 [i_6] [i_7] [i_8] [1] [i_14]);
                        var_26 = (min(var_26, var_7));
                        arr_50 [i_6] [1] [i_6] [i_6] [1] [i_6] = (var_3 % 406);
                        var_27 = (max(var_27, ((((arr_6 [i_6] [i_7] [i_6]) ? var_2 : var_8)))));
                    }
                    var_28 = (max(var_28, (arr_10 [i_7] [i_7] [i_7] [i_6])));
                    var_29 = (max(var_29, ((((arr_15 [i_7] [i_8]) * (arr_30 [i_6] [2] [i_8]))))));
                }

                for (int i_15 = 2; i_15 < 10;i_15 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 11;i_16 += 1)
                    {
                        for (int i_17 = 2; i_17 < 10;i_17 += 1)
                        {
                            {
                                arr_58 [i_6] [i_6] [i_17 + 1] = var_6;
                                var_30 += ((-((-(arr_7 [i_17 + 1] [i_7] [i_15])))));
                            }
                        }
                    }
                    var_31 = (((-(arr_53 [i_6] [i_7] [i_15 - 2]))));
                    var_32 ^= max((max(var_6, 6685)), (((-1403799991 ? (arr_55 [i_7]) : (arr_55 [i_7])))));

                    /* vectorizable */
                    for (int i_18 = 0; i_18 < 11;i_18 += 1)
                    {
                        arr_62 [i_6] [i_15 - 2] [i_7] [i_7] [i_6] [i_6] = ((+(((arr_49 [i_6] [i_6] [i_6] [i_6] [7]) ? var_9 : (arr_60 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))));
                        arr_63 [i_6] [i_7] [i_15] [i_6] &= ((((arr_27 [i_6] [i_7] [i_15 + 1]) ? (arr_61 [1] [i_7] [1] [i_7] [9] [i_7]) : var_5)) >> (var_8 - 1268507253));
                    }
                    for (int i_19 = 1; i_19 < 8;i_19 += 1)
                    {
                        arr_66 [i_6] [i_19] [i_15] [i_6] [i_7] = (max(417, -1));
                        arr_67 [i_6] [i_6] [6] [i_19 + 2] [i_19 + 3] = ((+((((arr_42 [i_15 - 2] [i_19 - 1] [i_6]) < var_8)))));
                        var_33 = (min(var_33, ((((min(var_3, (((arr_17 [i_6] [i_7] [i_15] [i_7] [i_15]) ? 30776 : 98)))) + 232)))));
                        var_34 = var_5;
                    }
                }
                /* vectorizable */
                for (int i_20 = 0; i_20 < 11;i_20 += 1)
                {
                    var_35 = (arr_23 [i_6] [i_7]);
                    arr_71 [i_6] [i_7] [i_6] = ((!(arr_30 [i_6] [i_7] [i_20])));
                    var_36 = (max(var_36, (((var_6 ? 1792792697 : (arr_30 [i_20] [i_6] [i_6]))))));

                    for (int i_21 = 0; i_21 < 11;i_21 += 1) /* same iter space */
                    {
                        var_37 = (min(var_37, ((((((var_2 ? (arr_56 [i_6] [i_6] [i_20] [i_6] [i_6]) : var_2))) ? (arr_9 [i_21]) : 1)))));
                        var_38 = ((~(arr_28 [i_6] [i_6] [i_20] [i_6])));
                    }
                    for (int i_22 = 0; i_22 < 11;i_22 += 1) /* same iter space */
                    {
                        arr_76 [i_6] [i_6] [i_6] [i_6] [i_6] = (arr_4 [i_6] [i_7] [i_20]);
                        var_39 = ((0 + 0) ? (arr_27 [i_6] [i_6] [5]) : var_7);
                    }
                }
                arr_77 [i_6] = (((((((arr_2 [i_6]) / 11092)))) ? 8 : (arr_16 [i_7] [i_7] [i_6] [i_6] [i_6] [i_6])));
            }
        }
    }
    #pragma endscop
}
