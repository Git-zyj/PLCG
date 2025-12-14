/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = var_13;
                var_20 += (((((((((arr_4 [i_0] [i_1]) ? (arr_3 [i_1] [i_0]) : (arr_3 [i_1] [23])))) ? (0 - 52931) : -var_9))) ? (((arr_6 [i_0] [i_0 + 1] [i_0]) ? (arr_6 [i_0] [i_0 + 1] [1]) : (arr_3 [i_0] [i_0 + 1]))) : ((((1 ? (arr_1 [i_0]) : var_17)) / ((var_11 ? -580946463 : var_17))))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_10 [i_2] [16] |= ((~((41694 ? ((min(1, (arr_5 [i_0] [i_1] [i_2])))) : 806845895))));

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_21 = (((var_4 ? ((var_6 ? var_12 : -1128007973) : ((var_8 ? var_0 : var_3))))));
                        var_22 = (((arr_0 [1] [1]) ? var_16 : ((((min(2147483647, (arr_0 [i_1] [i_3])))) ? (((arr_2 [i_3] [i_3]) ? var_10 : (arr_6 [i_1] [i_1] [2]))) : ((max((arr_6 [i_2] [5] [i_2]), (arr_1 [i_0]))))))));
                    }
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        var_23 = 718188338;
                        var_24 -= 23842;
                        arr_15 [i_0 + 1] [i_1] [i_2] [i_4] = (arr_9 [i_0] [i_2] [20] [i_4]);
                    }
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_25 = ((((min(((1729382256910270464 ? 0 : var_4)), 1))) ? ((((min((arr_3 [i_0] [i_0]), (arr_6 [i_0] [i_0] [i_0])))) ^ 0)) : (((!(((var_15 ? 1 : var_13))))))));
                        var_26 = ((((max((1498233552 ^ 1), ((var_13 ? var_17 : (arr_14 [22] [i_2] [i_1] [i_0])))))) > ((~(max((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), var_6))))));

                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            arr_22 [19] [i_5] [i_5] [19] = (((!var_19) ? (((min((arr_13 [i_0] [i_0] [i_2] [i_5] [i_5] [6]), var_19)))) : var_16));
                            var_27 = ((((var_13 ? (((arr_20 [7] [i_5] [i_5] [i_5] [i_2] [i_1] [12]) ? 1 : (arr_3 [i_0] [i_0]))) : ((var_6 / (arr_21 [i_6] [i_5] [i_2] [i_5] [i_0])))))) ? (arr_13 [i_0 - 1] [i_0 - 1] [i_2] [i_1] [i_6] [i_6]) : ((((((min(5356, (arr_1 [i_1])))) >= (arr_5 [i_5] [i_2] [i_1]))))));
                        }
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            var_28 = (!((!(((~(arr_8 [i_1] [i_7])))))));
                            arr_25 [19] [i_5] [i_5] [i_5] [19] [19] = 1;
                            var_29 = ((23833 ? 1 : 41702));
                            var_30 = (((((((min((arr_3 [i_0] [i_7]), var_13))) ? ((0 ? var_5 : 702979924)) : ((var_8 ? var_15 : var_0))))) ? (arr_14 [i_0] [i_0] [i_2] [i_7]) : var_15));
                        }
                        for (int i_8 = 1; i_8 < 23;i_8 += 1)
                        {
                            arr_29 [i_5] [i_1] [i_1] [i_1] [i_1] = ((22612 ? (((arr_16 [i_8] [i_8 + 1] [i_8 + 1] [i_8 + 2]) - (arr_27 [i_0 - 1] [i_1] [i_2] [i_5] [i_8]))) : ((max((arr_28 [i_0] [i_8 - 1] [i_0] [i_5] [i_8] [i_8 - 1]), ((var_10 ? 1 : (arr_26 [i_5]))))))));
                            var_31 = (min(((((((arr_11 [i_0] [i_0] [11] [i_0]) ^ var_16))) ? (!1) : var_0)), (var_4 & 30242)));
                        }
                    }
                    /* vectorizable */
                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        var_32 = (max(var_32, (((!(arr_3 [i_9 - 1] [i_9 - 1]))))));
                        var_33 |= ((((var_12 || (arr_30 [7] [i_1] [14] [i_9 - 1] [7]))) ? (arr_28 [i_0] [i_0 - 1] [i_1] [i_0 - 1] [i_2] [i_9]) : ((19307 ? (arr_30 [i_0] [1] [i_0] [i_0 - 1] [i_0]) : var_5))));
                        var_34 = (max(var_34, (((-(arr_8 [i_2] [i_1]))))));
                    }
                }
                arr_34 [i_1] = var_7;
                var_35 += (((((~((1 ? (arr_13 [i_0] [23] [i_0 + 1] [i_1] [1] [i_1]) : 10310619544086231805))))) ? (~0) : ((~(max(var_0, var_6))))));
            }
        }
    }
    var_36 = var_11;
    var_37 = 718188338;
    #pragma endscop
}
