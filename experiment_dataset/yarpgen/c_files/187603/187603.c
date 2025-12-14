/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((!((min(var_14, (var_6 | var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_16 &= (((max((!var_9), var_3)) <= (((~(arr_8 [i_2] [i_1] [i_0]))))));
                    arr_9 [i_0] [i_1] [i_2] [5] = (((arr_3 [i_2]) + (arr_2 [i_1])));
                    var_17 -= max(((-(arr_1 [i_0] [i_1]))), (max(((~(arr_4 [i_0] [i_1] [i_2]))), var_12)));
                }

                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    arr_12 [i_3] [i_1] = (arr_0 [i_0] [i_0]);

                    for (int i_4 = 3; i_4 < 22;i_4 += 1)
                    {
                        var_18 = var_13;

                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_19 -= ((((((arr_14 [i_1] [i_0] [i_5]) ? (arr_14 [i_5] [i_5] [i_3]) : (arr_14 [i_0] [i_5] [i_5])))) ? (max((arr_2 [i_5]), var_8)) : (((arr_7 [i_0] [i_1]) ? var_1 : (arr_7 [i_1] [i_5])))));
                            arr_18 [12] [i_1] [i_4] [i_4] [i_1] = ((+(((arr_13 [i_4]) ^ var_6))));
                            var_20 = var_6;
                            var_21 = ((~(arr_0 [11] [i_5])));
                            arr_19 [i_4] [i_3] [i_4] = ((((((arr_15 [i_4 - 3] [i_4] [i_4] [i_4] [i_4] [i_4 - 3] [i_4 - 3]) ? (arr_15 [i_5] [i_5] [i_4] [i_5] [i_4] [i_4] [i_4 - 3]) : (arr_15 [i_5] [2] [i_4] [i_5] [i_4] [i_5] [i_4 - 3])))) ? ((((!var_7) - var_13))) : ((var_3 ? (arr_7 [i_0] [i_0]) : (((arr_11 [i_1] [i_1] [i_0]) ? var_10 : (arr_11 [i_5] [i_0] [i_0])))))));
                        }
                        var_22 = var_12;
                        var_23 -= (!var_2);
                        var_24 = ((((var_13 ^ (((arr_14 [i_0] [i_4] [i_3]) ? var_11 : var_13)))) * (((((~(arr_4 [i_0] [i_0] [i_0])))) | var_6))));
                    }
                    for (int i_6 = 2; i_6 < 21;i_6 += 1)
                    {
                        arr_24 [i_6] [i_6] [i_3] [i_3] [i_0] [i_0] |= ((-((-(arr_2 [i_0])))));
                        var_25 = ((max(((max((arr_20 [i_0] [i_1] [i_3] [i_3] [i_3] [i_6 + 1]), var_8))), (min(var_13, var_0)))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                    {

                        for (int i_8 = 3; i_8 < 22;i_8 += 1)
                        {
                            arr_31 [i_8] [i_1] [i_7] [11] = (!var_2);
                            arr_32 [i_0] [i_8] [i_3] [i_7] [i_8 - 3] = ((var_2 ? (((arr_22 [i_7] [i_7] [i_3] [i_0]) ? var_4 : var_12)) : -var_3));
                        }
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            arr_37 [i_0] [i_1] [i_3] [i_7] [i_9] [i_1] [i_9] = var_10;
                            var_26 += (((arr_4 [i_0] [i_3] [i_7]) ? var_10 : (arr_17 [1] [i_1] [i_1] [i_1] [i_7] [7])));
                        }
                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            arr_41 [i_3] [1] [i_3] [i_1] [i_0] = ((arr_17 [i_0] [i_10] [i_3] [i_7] [i_10] [i_3]) ? (arr_17 [i_10] [i_7] [i_0] [i_3] [i_1] [i_0]) : var_5);
                            var_27 = (max(var_27, ((((arr_0 [i_10] [i_1]) * (arr_7 [i_0] [i_10]))))));
                            var_28 -= (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        }
                        var_29 = ((var_1 ? (arr_36 [i_0] [i_1] [i_3] [i_7]) : (arr_36 [i_0] [i_0] [i_0] [i_0])));
                    }
                    for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
                    {
                        var_30 += var_1;
                        arr_44 [i_0] [7] [i_0] = (((((var_7 ? var_8 : (arr_27 [i_0] [i_1] [i_3] [i_11])))) ? ((((arr_36 [i_0] [5] [i_3] [i_11]) ? (arr_36 [17] [i_1] [i_1] [i_1]) : (arr_36 [18] [i_1] [i_3] [i_11])))) : ((var_10 % (arr_36 [i_0] [7] [7] [i_11])))));
                        arr_45 [i_0] [i_11] = ((!(((((var_11 - (arr_5 [i_0] [1] [1]))) | var_14)))));
                        var_31 = (((arr_43 [i_0] [i_0] [i_0] [i_0] [i_0]) || var_1));
                    }

                    for (int i_12 = 3; i_12 < 22;i_12 += 1)
                    {
                        var_32 += ((((((arr_38 [i_0] [i_1] [i_3] [i_12 - 2] [16] [i_1] [i_12 - 3]) ? var_3 : var_0))) ? (arr_17 [i_12 + 1] [i_12] [i_12] [i_12 - 3] [1] [i_12]) : (min(((min((arr_14 [i_12 - 1] [i_0] [1]), var_8))), (((arr_25 [i_12]) / (arr_26 [i_0] [i_1])))))));
                        var_33 = (max(var_33, ((min((min((((arr_30 [i_12] [i_12] [i_12] [i_0] [6] [i_12] [i_12 + 1]) - (arr_38 [i_0] [i_0] [i_0] [i_0] [3] [i_0] [i_0]))), (arr_5 [i_1] [3] [i_12]))), ((((arr_15 [i_12] [i_12] [i_0] [i_0] [i_12 - 1] [i_12 - 3] [i_12 - 1]) ? (arr_15 [i_12] [i_12] [i_0] [i_12 - 2] [i_12] [i_12 - 3] [i_12]) : (max(var_0, var_5))))))))));
                        var_34 = (min(var_34, (((+((max((arr_20 [i_12 - 3] [i_12] [i_12 + 1] [i_12] [i_12 - 1] [i_12]), (arr_40 [i_12 - 1] [i_12 - 3] [i_12] [i_12] [i_12 - 1] [i_12] [i_12])))))))));
                        var_35 = var_2;
                        var_36 = (((arr_4 [i_0] [i_12 + 1] [i_3]) ? ((~(arr_4 [1] [i_12 - 1] [i_3]))) : (((arr_4 [i_0] [i_12 + 1] [i_0]) ^ (arr_4 [i_0] [i_12 - 3] [i_3])))));
                    }
                    var_37 = ((((max(var_13, (arr_28 [i_0] [i_0] [i_1] [i_3])))) ? (arr_1 [i_0] [i_1]) : -var_0));

                    for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                    {
                        arr_50 [12] = ((var_7 ^ ((((arr_3 [i_0]) ? var_0 : var_5)))));
                        var_38 = (max((((arr_7 [i_1] [i_13]) ? (arr_7 [i_3] [i_13]) : (arr_7 [i_0] [i_0]))), (min(((-(arr_28 [i_13] [i_13] [i_3] [i_13]))), (((arr_6 [10] [i_0] [i_0]) ? var_8 : (arr_6 [0] [i_13] [i_3])))))));
                        var_39 = (!var_9);
                        var_40 *= (((arr_23 [i_0] [i_1]) | (arr_23 [i_1] [i_13])));
                    }
                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
                    {
                        var_41 += (((arr_23 [i_0] [i_1]) ? (arr_23 [i_0] [i_1]) : (arr_16 [i_0] [i_1] [i_0] [i_14] [i_0] [i_0] [i_0])));
                        var_42 = (((arr_17 [i_0] [i_0] [i_0] [11] [i_14] [i_14]) ? (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_23 [i_3] [i_14])));
                        var_43 = (max(var_43, (((arr_15 [i_0] [14] [i_0] [i_3] [i_3] [20] [i_14]) ? var_4 : (arr_17 [i_0] [i_0] [i_0] [11] [i_0] [i_0])))));
                        var_44 |= (((arr_20 [i_0] [i_0] [7] [10] [i_14] [i_14]) ? (var_11 * var_7) : (arr_4 [i_1] [0] [i_14])));

                        for (int i_15 = 0; i_15 < 23;i_15 += 1)
                        {
                            var_45 = (((arr_47 [i_0] [i_0] [i_3] [i_14] [i_3]) % (arr_47 [i_15] [i_15] [i_3] [i_15] [i_0])));
                            arr_55 [i_0] [i_1] [i_0] [i_14] [i_15] [i_15] [i_0] = ((var_11 + (arr_11 [i_14] [i_3] [i_0])));
                            var_46 = (arr_10 [i_3] [i_15]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
