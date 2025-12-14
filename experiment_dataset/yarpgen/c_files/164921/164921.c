/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    var_12 = (((arr_2 [i_1 + 1]) ? (arr_2 [i_1 + 1]) : (arr_2 [i_1 - 2])));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = -var_8;
                    arr_9 [i_0] = 17839;
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    var_13 *= (((arr_10 [i_0]) ? (arr_10 [i_1 - 2]) : var_11));
                    arr_12 [i_0] [i_0] [i_0] = (arr_1 [i_0]);
                    var_14 = ((var_6 << (var_2 - 87)));
                    var_15 = ((8966942555889100397 ? 65535 : -101));
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_16 *= (((arr_15 [i_5] [i_5] [i_5] [i_0]) ? var_7 : (((((max(var_9, 36672)))) + (((arr_13 [i_5] [i_5] [i_5]) + var_4))))));
                            arr_17 [i_0] = (var_0 > -6);
                            var_17 = var_8;
                        }
                    }
                }
            }
        }
    }

    for (int i_6 = 2; i_6 < 13;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 12;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            {
                                var_18 = ((((-(((arr_0 [i_6] [i_6]) ? var_1 : (arr_24 [i_6] [i_6] [i_6] [i_6]))))) / var_2));
                                arr_34 [i_6] [i_7] = var_8;
                                arr_35 [i_6] [i_7] [i_6] [i_6] [i_6] [i_6] = (min((((((max(var_4, (arr_31 [i_6] [i_9])))) && (var_11 == var_11)))), (((arr_15 [i_9] [i_9] [i_7] [i_9 - 1]) + (-36 % var_7)))));
                            }
                        }
                    }
                    var_19 ^= ((+((((arr_2 [i_7]) ? var_4 : 9)))));
                }
            }
        }
        arr_36 [i_6] = var_11;
        var_20 = (((max(var_11, (arr_1 [i_6])))));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 14;i_12 += 1)
            {
                {

                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        arr_46 [i_6] [i_11] [i_6] = max((arr_33 [i_6] [i_11] [i_6] [i_11] [i_6] [i_6 + 1] [i_11]), (arr_38 [i_6 + 1]));
                        var_21 = (arr_41 [i_6]);
                        arr_47 [i_6] [i_12] [i_13] = (((min((arr_26 [i_12] [i_6 + 1] [i_6] [i_6]), (arr_1 [i_13]))) <= (((arr_1 [i_6]) - var_8))));
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        for (int i_15 = 1; i_15 < 10;i_15 += 1)
                        {
                            {
                                var_22 ^= var_11;
                                var_23 = var_1;
                                arr_52 [i_6] [i_6] [i_6] [i_12] [i_12] [i_14] [i_14] = (arr_44 [i_15 + 4] [i_6] [i_12] [i_6] [i_6] [i_6]);
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_16 = 0; i_16 < 11;i_16 += 1)
    {
        var_24 = ((((((arr_16 [i_16] [i_16] [i_16] [i_16]) ? (arr_16 [i_16] [i_16] [i_16] [i_16]) : (arr_16 [i_16] [i_16] [i_16] [i_16])))) ? (((arr_16 [i_16] [i_16] [i_16] [i_16]) ? (arr_16 [i_16] [i_16] [i_16] [i_16]) : (arr_16 [i_16] [i_16] [i_16] [i_16]))) : (min((arr_16 [i_16] [i_16] [i_16] [i_16]), (arr_16 [i_16] [i_16] [i_16] [i_16])))));
        var_25 = ((((((6519945057070167176 || 5) == var_9)))) | (min(576460752303423487, (-1 - var_1))));
    }
    for (int i_17 = 0; i_17 < 13;i_17 += 1)
    {
        var_26 = ((((var_8 ? 9223372036854775807 : -12)) % ((6519945057070167176 ? (((arr_13 [i_17] [i_17] [i_17]) + var_9)) : -1))));
        var_27 = (85 / -6519945057070167177);
        var_28 &= (max((((min(5385555777038013072, 9223372036854775796)) | 36652)), (min((var_6 - var_4), (((var_9 ^ (arr_44 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]))))))));
    }
    #pragma endscop
}
