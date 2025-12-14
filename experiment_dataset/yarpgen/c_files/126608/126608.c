/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = (((!(arr_4 [i_2] [i_1] [i_2]))) ? ((((((var_2 ? var_9 : var_9))) || var_3))) : (((!0) ? -4 : var_12)));

                    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((!((max((!var_4), var_8)))));

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            arr_14 [i_1] [i_3] [4] [2] [i_2] [i_1] [i_0] = (((min(var_5, (arr_5 [7])))) ? 1 : -var_7);
                            var_13 = (max(var_13, ((((((!(!var_4)))) - (var_6 + var_5))))));
                            var_14 = (arr_3 [i_4]);
                            arr_15 [0] [i_1] [i_2] [12] [3] [i_4] = var_5;
                        }
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            arr_18 [5] [5] [1] [i_3] [5] [i_3] = 12;
                            var_15 = ((((var_3 ? var_11 : (arr_9 [i_2] [i_2] [i_2] [i_2] [i_5]))) < var_11));
                        }
                        var_16 = 1;
                        var_17 &= ((+((((arr_7 [i_3] [8] [i_2] [5]) == var_2)))));
                    }
                    for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                    {
                        var_18 = (max((((!var_12) ? (arr_0 [i_0]) : 48337)), -13));
                        var_19 = max(((((arr_20 [12] [12] [i_2] [i_6] [11] [i_6]) - (~-9)))), (arr_9 [i_2] [i_1] [i_0] [i_6] [10]));
                    }
                    for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                    {
                        arr_23 [i_1] = ((!(((-(var_11 - var_6))))));
                        var_20 = (arr_0 [8]);

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            var_21 = var_0;
                            var_22 = (((~var_10) + (((arr_9 [6] [i_1] [6] [i_7] [i_7]) - (arr_9 [i_0] [i_1] [5] [i_0] [5])))));
                            var_23 = ((~(!224)));
                            arr_27 [i_0] [i_1] [i_0] [i_0] [6] = (((arr_19 [i_8] [i_8] [i_8] [i_8] [i_8]) == ((((!(arr_10 [1] [i_1] [i_2] [i_7])))))));
                        }
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            arr_30 [i_0] [i_2] = ((var_7 ? ((((arr_28 [i_0] [i_1] [8] [i_7] [i_9] [i_1] [i_7]) << (((var_4 + 5643111566341246640) - 14))))) : (1265187922 + var_9)));
                            arr_31 [i_0] [i_0] [i_1] [i_2] [3] [i_9] |= var_3;
                            arr_32 [i_0] [0] [0] [0] [i_9] = ((~((((max((arr_5 [12]), var_5))) + 34))));
                            var_24 = (max((((var_0 || (((var_4 ? var_4 : var_7)))))), (arr_12 [i_0] [i_1] [9] [i_7] [9])));
                            arr_33 [i_0] [i_1] [i_2] [i_7] [i_9] [10] = (arr_24 [i_0] [2] [7] [2] [i_7] [i_0] [2]);
                        }
                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            arr_38 [i_0] [i_1] [7] [i_2] [0] [i_10] &= 1;
                            var_25 = (min(var_25, 14177));
                        }
                    }
                    var_26 = ((1012143437 ? ((((!((max(var_3, (arr_1 [i_2])))))))) : var_4));
                    var_27 = (max(2872548644944272550, ((max(-241, (max(var_2, var_8)))))));
                }
            }
        }
    }
    var_28 = (max(var_28, (((((((max(-45, var_0))) ? ((var_0 ? var_9 : var_3)) : var_5)) < ((var_12 ? var_5 : var_5)))))));
    #pragma endscop
}
