/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += ((((var_12 ? 1970089747 : var_3)) <= (var_8 > var_10)));
    var_14 += var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_15 = (max(var_15, var_6));
                    var_16 = var_11;
                    arr_6 [i_0] [i_1] [i_2] [24] = ((var_7 * (arr_2 [i_0] [i_1] [i_2])));
                }
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    arr_10 [i_0] [3] [i_0] [3] = (arr_5 [i_0] [i_1] [i_3]);
                    var_17 = (max(var_0, ((var_0 + ((var_9 ? var_6 : var_1))))));
                    arr_11 [i_3] = ((+((((((arr_1 [i_1] [i_1]) ? var_12 : (arr_8 [i_1])))) ? var_1 : var_11))));
                }

                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    arr_14 [i_4] [i_4] [22] = ((((((arr_12 [i_4] [i_0] [i_0]) > var_2))) / var_10));
                    var_18 = (min(var_18, var_2));
                    var_19 = ((((var_8 ? var_5 : var_2)) & ((var_0 ? (arr_8 [i_0]) : var_0))));

                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        arr_17 [i_0] [i_0] = (arr_3 [i_0] [i_1] [i_1]);
                        var_20 -= ((!((((((var_4 ? var_6 : (arr_13 [i_5] [i_5] [i_5] [i_5])))) ? 0 : (arr_5 [i_0] [i_1] [i_5]))))));
                        arr_18 [i_0] [i_1] [i_0] [i_5] = (((((((arr_12 [i_0] [i_0] [i_0]) / (arr_7 [i_0] [i_0] [i_4] [i_5]))))) ? ((((((arr_13 [i_0] [i_1] [i_4] [2]) ? var_4 : 1970089747))) ? (((var_3 < (arr_3 [i_1] [i_1] [i_1])))) : var_11)) : var_4));
                    }
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_21 = (min(var_21, (((arr_9 [i_0] [i_0] [i_1] [i_6]) & (arr_9 [6] [3] [i_6] [3])))));

                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        arr_23 [i_0] [24] [i_6] [i_7] = (((arr_15 [i_7] [i_6] [i_1] [i_0]) == (arr_21 [i_0] [i_1] [i_6] [i_7])));
                        arr_24 [i_0] [i_0] [i_0] [i_1] [14] [i_0] = var_6;
                        var_22 -= (arr_4 [i_0] [i_1] [i_6]);
                    }
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        var_23 = (((var_5 | var_9) ? (((var_9 ? 2324877549 : (arr_3 [i_1] [i_1] [i_1])))) : ((var_5 ? var_0 : (arr_2 [i_0] [i_1] [i_6])))));
                        arr_28 [i_0] [i_0] [i_6] [i_8] = var_9;
                        var_24 = (min(var_24, (((var_4 ? ((~(arr_27 [i_6] [10]))) : var_8)))));
                    }
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        var_25 = ((-(arr_2 [i_0] [i_0] [i_0])));
                        var_26 += (((arr_2 [i_0] [i_1] [i_0]) ? (arr_2 [i_9] [i_1] [i_0]) : (arr_2 [i_6] [i_1] [i_0])));
                    }
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {

                        for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
                        {
                            arr_35 [i_6] [i_1] = (((arr_33 [i_0] [i_1] [i_6] [i_10] [i_11]) ? (arr_33 [i_0] [23] [i_0] [i_0] [i_0]) : (arr_31 [24] [24])));
                            var_27 = (min(var_27, (((arr_29 [i_1] [i_1] [i_1] [i_1] [i_1]) ? var_0 : (((!(arr_27 [i_0] [i_0]))))))));
                        }
                        for (int i_12 = 0; i_12 < 25;i_12 += 1) /* same iter space */
                        {
                            var_28 = (((arr_15 [i_1] [i_6] [i_10] [i_12]) / (arr_15 [7] [i_6] [i_6] [i_6])));
                            var_29 += 65532;
                            arr_39 [i_0] [i_1] [8] [2] [i_1] [i_12] |= arr_21 [i_1] [i_6] [i_10] [i_12];
                        }
                        var_30 = (arr_30 [i_0]);

                        for (int i_13 = 0; i_13 < 25;i_13 += 1)
                        {
                            var_31 = (arr_33 [i_0] [i_1] [i_6] [i_10] [i_13]);
                            arr_43 [9] [i_13] [i_10] [11] [i_1] [i_0] = (arr_3 [i_0] [i_6] [0]);
                            arr_44 [i_13] [8] [i_6] [i_1] [i_0] = 1970089747;
                            var_32 += var_8;
                        }
                        for (int i_14 = 0; i_14 < 25;i_14 += 1)
                        {
                            arr_48 [i_0] [i_1] [i_6] [i_14] |= (arr_9 [i_1] [i_6] [i_10] [i_1]);
                            var_33 = var_1;
                            var_34 = ((+(((arr_8 [i_10]) ? -7397495672887171284 : (arr_1 [i_0] [12])))));
                        }
                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            arr_51 [i_10] [i_10] [i_10] [i_10] = ((!(arr_45 [i_10] [14] [i_10] [i_10] [i_10] [i_10])));
                            arr_52 [i_15] [i_10] [i_6] [i_1] [i_0] = ((var_3 ? (arr_8 [i_6]) : ((var_9 ? var_0 : var_3))));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 25;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 25;i_17 += 1)
                        {
                            {
                                var_35 = ((-1370284231 ? var_7 : var_3));
                                arr_57 [i_0] [1] [i_6] [i_0] [i_17] = var_1;
                                var_36 = (min(var_36, ((4285058438902947824 & (arr_54 [i_0] [i_0] [i_0])))));
                                var_37 = ((((((arr_47 [i_0] [i_17]) ? var_2 : var_10))) ? (arr_30 [i_0]) : (arr_49 [i_0] [i_0] [i_6] [i_17])));
                                var_38 = (arr_53 [i_0] [i_0] [i_1] [i_0] [i_16] [i_17]);
                            }
                        }
                    }
                    var_39 *= 5831719896265602344;
                }
                for (int i_18 = 0; i_18 < 25;i_18 += 1)
                {
                    var_40 ^= (((arr_27 [i_0] [i_1]) != 65532));
                    var_41 = ((((max(61050, (-32767 - 1)))) ? (arr_9 [13] [13] [i_1] [7]) : (arr_25 [i_0] [i_0] [i_0] [i_1] [i_1] [i_18])));
                    var_42 = (max(var_6, ((((arr_21 [i_0] [i_0] [i_0] [i_0]) <= var_9)))));
                }
                var_43 = (((var_4 ? (arr_15 [1] [i_0] [i_0] [i_1]) : (arr_47 [14] [i_1]))));
                var_44 = (min(var_44, var_3));
            }
        }
    }
    #pragma endscop
}
