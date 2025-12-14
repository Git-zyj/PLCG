/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((var_12 ? ((var_6 ? var_4 : var_5)) : ((var_3 ? 79 : var_1))))) ? (~var_7) : (!-var_16)));
    var_20 = min((((~-1114507458) ? ((var_1 ? var_11 : var_18)) : var_14)), var_13);
    var_21 = ((((var_17 & (min(var_2, -1114507458)))) << var_6));
    var_22 = (max(var_22, (!var_9)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_9 [i_2] [i_1] [i_2] = (((((var_2 ? (arr_7 [i_0] [6]) : 0))) ? ((~(arr_2 [i_2]))) : (arr_8 [i_0] [21] [i_2])));
                        var_23 += ((((var_1 ? (arr_2 [i_0]) : var_18)) == ((var_15 / (arr_0 [i_0])))));
                        var_24 = (((arr_7 [i_3 + 2] [i_1]) ? (arr_7 [i_3 - 1] [0]) : 733685088));
                        arr_10 [i_0] [i_0] [i_2] [1] [i_0] [i_0] = (arr_6 [i_2] [i_3 - 1]);
                        var_25 = ((-(arr_7 [i_3] [i_3 + 2])));
                    }
                }
            }
        }
        var_26 = arr_2 [i_0];
        var_27 = (min(var_27, (((((((arr_8 [i_0] [i_0] [i_0]) ^ (arr_3 [i_0])))) - -5281209640493806230)))));
        arr_11 [i_0] [i_0] = ((var_10 ? (arr_2 [i_0]) : ((120566254127610867 ^ (arr_0 [1])))));
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                var_28 = ((var_11 ? (((-(arr_12 [i_6])))) : (((!var_5) % 18326177819581940744))));
                                arr_23 [4] [i_7] [i_6] [i_7] = (((arr_2 [i_4]) ? (((arr_20 [i_4] [i_6] [i_7] [i_8]) - (((arr_13 [i_5]) ? -5281209640493806230 : var_2)))) : ((((2241433617047643311 ? 14785739601718750988 : 18326177819581940748)) + 198))));
                                var_29 &= (((((2114987684 ? ((18326177819581940748 ? (arr_16 [i_8]) : (arr_19 [i_4] [i_5] [12] [12]))) : 94))) + (arr_6 [8] [8])));
                            }
                        }
                    }
                    arr_24 [i_4] = ((~(max((var_18 ^ var_13), (arr_21 [i_4] [14] [i_4] [i_4])))));
                    var_30 = 92;
                    var_31 -= ((!(arr_8 [20] [i_5] [20])));
                }
            }
        }
        var_32 = var_7;
    }
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        arr_27 [i_9] = (((!58) ? (((!(arr_8 [4] [i_9] [18])))) : ((-(arr_8 [0] [i_9] [0])))));
        arr_28 [i_9] |= (arr_26 [9] [i_9]);
    }
    #pragma endscop
}
