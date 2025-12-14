/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (((arr_1 [8]) ? (arr_0 [i_0] [i_0]) : var_0));
        var_13 *= ((var_6 ? (arr_1 [i_0]) : (((var_11 || (arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = (((+((var_9 ? (arr_1 [i_1]) : var_2)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    arr_14 [i_3] [i_3] [i_3] [i_2] = ((-var_8 ? (arr_2 [i_3]) : (arr_2 [i_3])));
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 9;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 9;i_5 += 1)
                        {
                            {
                                arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] &= (((((((var_1 ? (arr_11 [i_1] [i_1] [i_1]) : var_8))) ? (((var_5 ? var_0 : var_3))) : ((var_3 + (arr_6 [i_2]))))) == ((max((min((arr_16 [i_4] [i_4] [i_2] [i_1]), var_11)), (((arr_2 [i_2]) * (arr_4 [1]))))))));
                                var_14 = (min(var_4, (((var_4 - (arr_6 [i_2]))))));
                            }
                        }
                    }
                    var_15 = (min(((var_1 ? (arr_18 [i_2] [i_2] [i_3]) : var_2)), var_3));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            var_16 = (min(var_16, var_4));
                            var_17 *= var_4;
                        }
                        for (int i_10 = 3; i_10 < 8;i_10 += 1)
                        {
                            var_18 = (arr_30 [i_1] [i_6] [1] [i_10]);
                            var_19 = (max(var_19, ((min(((var_7 ? -var_0 : var_7)), (arr_36 [i_10 + 3] [i_10] [i_10 - 1] [i_10 + 2] [i_10] [i_10 + 1]))))));
                            arr_37 [i_1] [i_6] [i_7] [i_7] [i_8] [i_8] [i_10] = (((arr_26 [i_1]) << ((((max((arr_34 [i_1] [i_6] [i_10 - 3] [i_8] [i_10 - 3] [i_10 - 3] [i_6]), (arr_34 [10] [i_6] [i_10 - 2] [i_8] [i_6] [i_6] [i_8])))) - 147))));
                            arr_38 [6] [i_6] [i_7] = -var_11;
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            var_20 = (min(var_20, (arr_41 [i_1] [i_1] [i_1] [i_8] [i_11])));
                            arr_42 [i_11] [i_8] [i_11] = (((arr_31 [i_1]) ? (arr_31 [i_11]) : var_6));
                            var_21 = (((var_2 != var_6) << (((arr_16 [i_1] [i_7] [i_6] [i_1]) - 1004454528))));
                        }
                        var_22 = (arr_17 [i_8] [i_7] [i_6] [i_1] [i_1]);
                        var_23 = ((var_6 ? (((arr_35 [10] [i_6] [i_6] [i_7] [i_8] [i_8] [i_8]) ? (arr_35 [i_8] [i_8] [i_7] [i_6] [i_6] [i_1] [i_1]) : (arr_35 [i_1] [i_1] [i_1] [i_6] [i_7] [i_8] [i_7]))) : (arr_41 [i_1] [i_6] [i_8] [i_7] [i_8])));
                        arr_43 [i_1] = (~(((arr_8 [i_1] [i_1]) ? (arr_32 [i_1] [i_7] [i_8]) : var_6)));
                    }
                }
            }
        }
    }
    for (int i_12 = 1; i_12 < 7;i_12 += 1)
    {
        arr_47 [i_12] [i_12] = (((arr_11 [i_12] [i_12] [i_12]) ? 3969968252 : var_11));
        /* LoopNest 3 */
        for (int i_13 = 3; i_13 < 9;i_13 += 1)
        {
            for (int i_14 = 3; i_14 < 8;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 10;i_15 += 1)
                {
                    {
                        var_24 = ((((max((arr_34 [6] [i_15] [i_14 - 2] [0] [i_13] [0] [i_12]), (min(var_1, var_10))))) ? (((((((arr_16 [i_14] [i_13] [i_14] [i_15]) ? 1038043660687642555 : var_2))) ? var_8 : (~var_6)))) : (var_2 | var_0)));
                        var_25 = (min(var_25, (((min(115, 941402402)) * (var_9 * var_0)))));
                    }
                }
            }
        }

        for (int i_16 = 1; i_16 < 9;i_16 += 1)
        {
            /* LoopNest 3 */
            for (int i_17 = 2; i_17 < 9;i_17 += 1)
            {
                for (int i_18 = 1; i_18 < 9;i_18 += 1)
                {
                    for (int i_19 = 2; i_19 < 7;i_19 += 1)
                    {
                        {
                            var_26 = (min(var_26, (((var_0 ? (((((arr_60 [i_12] [i_12 + 2] [i_12 + 2] [i_12] [i_12 + 2]) ? var_8 : var_11)))) : var_10)))));
                            var_27 *= (max((min((arr_41 [i_18] [i_18 - 1] [i_19] [i_18 - 1] [i_18]), (arr_41 [i_18] [i_18 - 1] [i_17] [i_18 + 1] [4]))), ((((max(var_5, var_3)) << (((arr_46 [i_12 + 1]) - 181)))))));
                            arr_64 [i_12 - 1] [i_16 + 1] [i_17] [i_16] [i_18 + 1] [i_19] = max((((arr_48 [i_16] [i_16 - 1] [i_16]) ? (arr_48 [i_16] [i_16 - 1] [i_16]) : (arr_48 [i_16] [i_16 - 1] [i_16]))), (((arr_19 [i_16]) ? var_9 : (arr_19 [i_16]))));
                        }
                    }
                }
            }
            var_28 ^= (max((min((arr_22 [i_16 - 1] [4]), (max((arr_22 [i_12] [i_16]), var_7)))), var_9));
            var_29 = (max(var_29, (((((((arr_9 [i_12]) - (arr_9 [i_12])))) ? var_4 : (((var_9 ? (((arr_46 [i_12 + 1]) ^ var_3)) : ((var_11 ? var_6 : var_2))))))))));
        }
        for (int i_20 = 3; i_20 < 8;i_20 += 1)
        {
            var_30 ^= (((arr_17 [i_12 + 1] [i_20 + 1] [i_20] [i_20 + 2] [i_20 - 2]) ? (arr_17 [i_12 + 3] [i_20 + 2] [i_12] [i_12 + 3] [i_20 + 1]) : var_11));
            var_31 ^= ((-((((max(247, var_8))) ? ((var_10 ? (arr_6 [i_12 + 1]) : (arr_60 [i_12 + 1] [i_20] [i_20] [i_20 + 2] [i_20]))) : ((((arr_15 [2] [i_12] [i_12] [i_12]) / (arr_36 [i_12] [i_12] [i_12] [i_12] [i_20] [i_20]))))))));
            /* LoopNest 2 */
            for (int i_21 = 2; i_21 < 8;i_21 += 1)
            {
                for (int i_22 = 3; i_22 < 7;i_22 += 1)
                {
                    {
                        var_32 = (!var_1);
                        var_33 &= ((~((var_7 ? (arr_35 [i_12 - 1] [i_12 + 1] [i_20 + 2] [i_20 - 3] [i_21 - 1] [i_22 - 2] [i_22 + 3]) : var_4))));
                    }
                }
            }
            var_34 = (min(var_34, var_0));
        }
        for (int i_23 = 0; i_23 < 10;i_23 += 1)
        {
            var_35 = ((~((((((arr_28 [i_12] [i_12] [i_12 + 1] [i_23]) <= var_5))) - var_8))));
            /* LoopNest 2 */
            for (int i_24 = 3; i_24 < 8;i_24 += 1)
            {
                for (int i_25 = 2; i_25 < 6;i_25 += 1)
                {
                    {
                        var_36 = ((((max(((min(var_2, var_3))), (min(var_8, 2637202078))))) ? ((var_11 % (arr_17 [i_12] [i_24 - 1] [i_12] [i_25] [i_24]))) : (((-(arr_50 [i_23] [i_24 + 2]))))));
                        var_37 = (min(var_37, ((((arr_34 [i_12] [i_12] [i_12 + 3] [i_23] [i_25 - 1] [i_25 + 2] [i_25]) ? (min(var_2, (arr_34 [i_12] [i_12] [i_12 + 3] [i_24] [i_25 - 1] [i_25 - 2] [i_25]))) : ((max((arr_34 [i_12 + 1] [i_12 + 1] [i_12 + 3] [i_12 + 1] [i_25 - 1] [i_25] [i_25 - 1]), (arr_34 [i_12] [0] [i_12 + 3] [0] [i_25 - 1] [0] [i_25 + 4])))))))));
                        var_38 = (min(var_38, var_8));

                        for (int i_26 = 0; i_26 < 10;i_26 += 1)
                        {
                            var_39 = ((((((!(arr_69 [i_26]))))) | (min(((var_7 ? var_10 : var_0)), ((max(var_2, (arr_4 [i_12 - 1]))))))));
                            var_40 |= var_7;
                            var_41 = max(var_3, var_0);
                        }
                        /* vectorizable */
                        for (int i_27 = 3; i_27 < 8;i_27 += 1)
                        {
                            var_42 = (((arr_13 [i_12 + 3] [i_27] [i_24]) ? var_11 : (((arr_61 [i_12] [9]) - var_4))));
                            arr_84 [i_27] [i_23] [i_24] [i_24] [i_25] [i_27] [i_27 - 1] = var_3;
                            var_43 = (((((-115 ? var_3 : var_5))) ? (((arr_68 [i_27] [i_25 + 2] [i_25 + 2]) + 115)) : (arr_46 [i_23])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
