/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-((((145 ? var_4 : -24873)) & var_9))));
    var_16 = (max(var_14, (83 - var_0)));
    var_17 = (!(-23616 && 24872));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] = ((((max(((143 ? (arr_1 [i_3] [i_3 - 1]) : 3222968909)), var_14))) - var_12));
                                var_18 = (max(var_18, ((((arr_10 [0] [i_0] [i_0] [0]) | (((!(arr_9 [12] [i_1] [i_1] [i_1] [i_3 - 1] [8])))))))));
                                var_19 = (min(var_19, (arr_0 [i_3 - 1] [i_3 - 1])));
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 3; i_6 < 17;i_6 += 1)
                    {
                        var_20 = (min(var_20, (((!(((-(arr_1 [i_0] [i_0])))))))));
                        var_21 = (max(var_21, (((!(((var_6 ? var_5 : (arr_6 [i_6 - 2] [17] [i_6 + 1] [i_0])))))))));
                        var_22 = (max(((1321854157 ? ((135 ? var_3 : var_12)) : 8080)), (((!(arr_11 [i_0] [8] [i_1] [i_1] [i_6 + 4]))))));
                        arr_18 [i_5] [i_5] [i_5] [20] [i_0] = ((!(arr_3 [i_0])));

                        /* vectorizable */
                        for (int i_7 = 2; i_7 < 17;i_7 += 1)
                        {
                            var_23 -= var_6;
                            arr_21 [8] [i_5] [i_6] = (((arr_19 [i_0] [i_0] [i_0]) && -8080));
                            var_24 = (((((8097 ? var_4 : 5155587641949095902))) ? (arr_7 [i_5] [i_5] [i_5]) : (arr_16 [i_6 - 2] [i_6 + 4] [i_6 + 3] [i_6 + 1])));
                        }
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            arr_25 [i_0] [10] [i_5] [10] [i_8] = var_10;
                            var_25 = ((((!(var_3 < 1))) && (((~((max(51743, var_1))))))));
                            arr_26 [4] [i_6 + 4] [4] [i_0] [i_0] = ((max((!var_12), 1350626208)));
                        }
                    }
                    var_26 = ((177 == ((max(var_4, var_3)))));
                    arr_27 [i_0] = ((111 ? ((var_5 << ((((var_6 ? 110 : var_12)) - 106)))) : ((max(var_1, (!1492914839927452498))))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            {
                                arr_33 [i_5] [i_9] [i_5] = (((var_12 / (arr_31 [i_0] [i_1] [15] [i_9] [i_10]))) / 17269794461196812596);
                                var_27 = var_6;
                            }
                        }
                    }
                }
                for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
                {
                    var_28 = (max(var_28, ((((((-(13792 && 17269794461196812575)))) ? ((~(arr_36 [6] [i_1] [i_1] [i_11]))) : var_10)))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 21;i_13 += 1)
                        {
                            {
                                arr_41 [i_13] [i_13] = (arr_1 [0] [i_1]);
                                arr_42 [i_11] [i_1] &= (((max((arr_22 [i_0] [20] [20] [i_0] [i_13]), (arr_14 [i_13] [i_12] [i_11]))) <= (arr_22 [i_0] [i_1] [15] [12] [5])));
                            }
                        }
                    }
                    var_29 |= (((var_9 + (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                    var_30 = (((!((((arr_34 [i_1]) ? var_11 : (arr_15 [1] [i_1] [i_11])))))));
                }
            }
        }
    }
    var_31 -= var_12;
    #pragma endscop
}
