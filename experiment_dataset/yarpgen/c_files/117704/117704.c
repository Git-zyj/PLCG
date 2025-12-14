/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(4, (((((var_0 ? 1 : 0))) ? (max(1, var_0)) : var_2))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_19 = (min(var_19, ((((max(1, (arr_2 [i_0] [i_1]))) / var_2)))));
                var_20 = ((max(3599829208, (arr_0 [i_0]))));
                var_21 = (((((~(arr_1 [i_0] [i_1])))) ? (arr_3 [i_1]) : (((arr_0 [i_0]) ? (arr_3 [15]) : 1))));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_4] [i_1] [i_2] [i_1] [i_0] = ((arr_11 [i_3 + 3] [i_2 - 2] [i_2] [i_2 - 2] [i_1]) ? (arr_12 [i_0] [i_0] [i_2] [i_3] [i_0]) : ((((arr_0 [i_0]) < var_13))));
                                var_22 = (((((var_8 ? var_14 : (arr_3 [i_1])))) ? 0 : (((11422076135112442068 < (arr_8 [i_0] [i_0] [i_0] [i_0]))))));
                                arr_14 [5] [i_3] [i_2] [i_0] = var_15;
                            }
                        }
                    }

                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        arr_17 [1] [i_2] [i_2] [i_5] [i_1] [i_1] |= ((var_16 != (~var_16)));
                        var_23 = (!0);

                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            var_24 = (max(var_24, ((((arr_8 [i_5 + 2] [i_2 + 1] [i_2] [i_2 - 2]) ? (arr_19 [i_2 + 1] [i_5 + 2] [i_2 + 1] [i_2 - 2] [i_2 - 2]) : (arr_19 [1] [i_5 + 2] [i_2 + 1] [i_2] [i_2 - 2]))))));
                            var_25 |= (arr_12 [i_0] [i_1] [i_2] [i_5 + 1] [i_6]);
                        }
                        for (int i_7 = 1; i_7 < 23;i_7 += 1)
                        {
                            var_26 = ((-(arr_10 [i_7 - 1] [i_5 + 3] [i_2 - 2])));
                            var_27 = (((arr_15 [i_0] [i_0] [i_2 + 2]) ? (arr_20 [i_7 - 1] [17] [10] [i_5 + 1] [10]) : var_10));
                            var_28 = (((!2135) ? ((var_13 / (arr_4 [i_1] [i_1] [i_2] [i_5]))) : var_5));
                        }
                        var_29 = (min(var_29, ((((arr_12 [i_2 - 2] [i_2 - 1] [i_2 + 1] [i_2 - 2] [i_2 + 2]) ? (arr_12 [i_2 - 2] [i_2 - 1] [i_2 + 1] [i_2 - 2] [i_2 + 2]) : 63385)))));

                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            var_30 = (((arr_0 [i_0]) ? var_9 : (((arr_12 [i_0] [i_5] [i_2] [i_5] [i_2]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
                            var_31 = (arr_11 [i_0] [21] [i_2] [i_5] [10]);
                        }
                        for (int i_9 = 3; i_9 < 23;i_9 += 1)
                        {
                            arr_26 [i_0] [i_1] [8] [i_0] [i_0] [i_9] [i_0] = ((var_3 == (((var_2 != (arr_22 [i_9 - 3] [i_0] [i_2] [i_0] [i_0]))))));
                            var_32 = ((var_17 ? var_16 : (1 && 1)));
                            var_33 += arr_10 [i_1] [i_2] [i_1];
                        }
                    }
                    arr_27 [i_0] [i_1] [i_2] = ((var_2 ? var_4 : (arr_10 [i_2 + 1] [i_2] [i_2 - 2])));
                    var_34 = (min(var_34, (((~(arr_23 [i_0] [i_1] [i_2 - 2] [i_2] [i_2] [i_0] [i_2]))))));
                }
            }
        }
    }
    var_35 = (65535 | 0);
    var_36 = 2005;
    var_37 = ((((max(((max(217, var_8))), ((var_6 ? var_10 : 1))))) && ((max(var_5, var_7)))));
    #pragma endscop
}
