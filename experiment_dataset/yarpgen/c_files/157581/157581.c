/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_17 = (((((var_6 > (((arr_0 [9]) << (((arr_10 [i_0] [i_1] [14] [i_3]) + 109))))))) + (arr_7 [i_1] [i_1] [i_1] [13])));
                        var_18 = (min(var_18, (var_7 - var_13)));
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
                    {
                        var_19 = (max((arr_9 [i_4] [i_2] [4] [i_0] [i_0]), ((-(((!(arr_3 [i_1]))))))));
                        arr_14 [13] [i_1] [i_1] [i_2] [i_4] = (arr_6 [i_0] [i_1]);
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                    {
                        var_20 ^= ((((var_13 ? (arr_4 [4]) : (arr_9 [i_0] [i_0] [i_0] [i_0] [10]))) != 0));
                        arr_17 [i_1] [i_2] [i_1] [i_1] = ((~(((var_1 || (arr_4 [i_1]))))));

                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            var_21 *= var_15;
                            arr_21 [1] [i_1] [i_2] [i_1] [1] [i_2] [i_5] |= -var_15;
                            arr_22 [i_0] [i_1] [i_2] [i_5] [5] = ((((var_5 ? var_3 : var_12)) != (arr_1 [i_1] [i_5])));
                        }
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            arr_27 [i_2] [i_1] = ((~(((arr_11 [i_0] [i_1] [4] [i_5] [i_7]) ^ var_8))));
                            var_22 -= (((((arr_4 [16]) ? var_15 : var_12)) <= (((var_2 % (arr_1 [i_0] [i_0]))))));
                            var_23 *= ((((((arr_5 [i_2] [5]) ? var_12 : var_6))) || (((arr_25 [i_0] [i_5] [1] [i_5] [1] [6] [i_7]) >= var_0))));
                            var_24 = ((((((arr_9 [i_1] [i_1] [i_1] [i_1] [i_1]) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : var_0))) ? (arr_4 [i_1]) : (~9)));
                        }

                        for (int i_8 = 1; i_8 < 17;i_8 += 1) /* same iter space */
                        {
                            var_25 = ((!(((var_3 << (arr_23 [i_0] [i_1] [i_2] [i_5] [i_8]))))));
                            arr_32 [i_1] = (arr_0 [i_8 + 1]);
                        }
                        for (int i_9 = 1; i_9 < 17;i_9 += 1) /* same iter space */
                        {
                            arr_37 [i_0] [i_1] = (arr_15 [i_5] [i_9 - 1] [i_9] [i_9] [i_9 - 1] [i_9 + 1]);
                            var_26 ^= (arr_33 [i_9 - 1] [i_9] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 + 1]);
                            var_27 += (~var_6);
                            arr_38 [i_0] [i_2] [i_2] [i_1] [i_9] = (arr_1 [i_0] [i_9]);
                        }
                        for (int i_10 = 1; i_10 < 17;i_10 += 1) /* same iter space */
                        {
                            var_28 &= ((((((arr_39 [2] [i_0] [2] [2] [1] [6]) && (arr_35 [i_0] [i_1] [i_2] [i_5] [16])))) == (arr_12 [i_5] [i_2] [i_0] [i_0])));
                            arr_41 [i_1] = var_12;
                            arr_42 [i_0] [i_1] [i_0] [i_0] [i_1] = (var_15 != var_6);
                            var_29 = var_15;
                            arr_43 [i_1] [i_1] [i_10 - 1] [i_1] [i_10] [i_5] = ((((-6 ? 19 : 107)) != (((arr_26 [4] [13] [i_5] [i_10]) ? (arr_30 [i_0] [2] [i_2] [i_5] [i_10] [i_0] [i_2]) : (arr_39 [i_0] [i_0] [1] [i_0] [i_1] [i_0])))));
                        }
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            arr_46 [i_1] = (arr_5 [i_5] [i_11]);
                            var_30 = (arr_6 [1] [i_1]);
                        }
                    }

                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        arr_49 [i_1] = ((-(((((var_4 ? (arr_23 [i_0] [i_1] [4] [i_1] [i_2]) : (arr_4 [i_1])))) ? ((max(var_15, var_14))) : ((max(var_11, (arr_28 [2] [i_1] [i_1] [2] [7] [i_1] [2]))))))));
                        var_31 ^= (((max(((var_12 <= (arr_47 [1] [i_1]))), (((arr_28 [i_0] [1] [i_2] [i_12] [2] [i_0] [i_1]) != var_12)))) ? (min((arr_2 [i_0] [i_1] [i_2]), ((var_2 ? (arr_28 [i_0] [10] [i_0] [i_0] [i_2] [14] [i_12]) : var_8)))) : var_7));
                        var_32 = (max(var_32, (((var_12 << (((max((~var_6), ((min(-37, 0))))) + 56)))))));
                    }
                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        var_33 = (min(var_33, -var_10));
                        var_34 += (arr_4 [16]);
                    }
                    for (int i_14 = 0; i_14 < 18;i_14 += 1) /* same iter space */
                    {
                        arr_55 [i_1] [i_1] = ((((~(arr_2 [i_0] [i_0] [i_14]))) | (arr_54 [i_14] [i_0])));
                        arr_56 [1] [i_0] |= var_14;
                    }
                    for (int i_15 = 0; i_15 < 18;i_15 += 1) /* same iter space */
                    {
                        arr_61 [i_0] [i_0] [i_1] [15] [1] [i_15] = ((170 ? 4294967295 : 21095));
                        var_35 = var_5;
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 18;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 18;i_17 += 1)
                        {
                            {
                                var_36 = (arr_59 [i_17] [i_2] [1]);
                                var_37 = ((var_13 && ((max((((arr_11 [i_0] [1] [i_2] [i_0] [i_17]) ? var_2 : var_13)), var_3)))));
                                var_38 -= ((-var_6 / (arr_3 [14])));
                                var_39 = (((arr_58 [i_1]) <= var_12));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
