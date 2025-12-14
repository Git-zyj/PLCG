/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, ((min(((-var_7 ? var_1 : ((min(var_10, var_2))))), var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_18 = -32;
                                var_19 = var_15;
                                var_20 = (arr_8 [i_1] [i_1 + 1] [i_1]);
                            }
                        }
                    }
                    var_21 = ((((max((arr_2 [i_1] [0]), (arr_5 [i_0] [i_1] [i_2]))) <= (arr_9 [i_0] [i_0] [i_0] [i_0 - 2] [i_1]))) && 29447);
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_19 [i_1] [i_1] [i_1] [i_1 + 1] [i_1] = var_11;
                                var_22 = (max(var_22, ((((((var_12 - (max((arr_0 [i_2]), var_6))))) ? (((~((-(arr_4 [9] [i_1] [i_1])))))) : (((var_14 == var_7) - ((var_11 ? var_11 : var_7)))))))));
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    arr_22 [i_1] = (min((((((var_6 ? (arr_5 [i_0] [i_1] [i_7]) : (arr_6 [i_0 - 1] [i_1 + 1]))) < (arr_5 [i_0 + 1] [i_1] [i_0 + 1])))), ((-((var_9 ? var_3 : (arr_12 [i_0] [i_0] [i_1] [i_0])))))));
                    arr_23 [3] [i_1] [7] [i_7] = var_11;
                    var_23 = (arr_21 [i_0] [i_0] [1]);
                    arr_24 [5] [i_1 - 1] [i_1] [1] = ((-var_2 ? (((!(var_8 > 29446)))) : var_1));

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_24 = ((!(((var_11 ? var_2 : (arr_16 [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1]))))));
                        arr_27 [i_0] [i_1] [i_1] [i_7] [3] = arr_9 [i_0] [i_0] [i_0] [i_0] [i_1];
                        arr_28 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = var_14;
                    }
                    for (int i_9 = 2; i_9 < 12;i_9 += 1)
                    {
                        var_25 = ((~(min((arr_9 [i_0 + 1] [i_1 - 1] [i_7] [i_7] [i_1]), ((29447 ? var_7 : var_2))))));
                        var_26 = (min(var_26, ((((var_15 || (arr_14 [i_0 + 2] [i_9 - 2] [i_1 - 1])))))));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        var_27 += ((arr_0 [i_0]) <= -var_3);
                        arr_35 [i_0] [i_10] [i_7] [2] |= (arr_10 [i_0 + 1] [i_0] [i_1] [i_7] [i_7] [i_10]);
                    }
                }
                var_28 = ((((((var_12 ? var_9 : var_11))) ? (var_9 % 43839) : (arr_14 [i_0] [i_0] [i_1 - 1]))));
                arr_36 [i_1] = (max((((max(1, 1)))), ((~(arr_17 [i_0 - 2] [i_0 + 2] [i_0 - 1] [i_0] [i_1])))));
            }
        }
    }
    var_29 = ((var_6 ? ((var_0 & ((-27 ? var_0 : var_13)))) : (((var_4 ? ((max(var_1, var_16))) : 1)))));
    #pragma endscop
}
