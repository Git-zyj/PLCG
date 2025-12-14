/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = min(17147336528935576492, 1855911031);
    var_11 = 1299407544773975124;
    var_12 = (min((!var_3), var_3));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_13 = min(-1299407544773975124, (max(7668008934046237419, 17147336528935576485)));
                var_14 = ((17147336528935576492 ? var_9 : ((-125 | (arr_3 [i_0 - 2] [i_0 - 2])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 10;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_15 = var_0;

                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 1;i_6 += 1)
                            {
                                arr_23 [6] [i_2 + 1] [i_2] [i_2 + 1] [i_2] [i_2] = ((((13392371757827306796 ? (-127 - 1) : -118)) <= var_7));
                                arr_24 [i_2] [i_3] [i_4] [i_5 - 4] [i_6] = -126;
                                arr_25 [i_2] [i_4] [i_5 + 1] = (((((var_0 << (var_6 - 26)))) | ((126 ? (arr_10 [i_5]) : var_2))));
                                var_16 = -115;
                            }
                            /* vectorizable */
                            for (int i_7 = 1; i_7 < 13;i_7 += 1)
                            {
                                arr_28 [i_7] [i_3] = (665379176 > 120);
                                var_17 = ((~(arr_19 [i_3 + 3])));
                            }
                            for (int i_8 = 0; i_8 < 1;i_8 += 1)
                            {
                                arr_31 [i_2] [13] [i_2] [i_2] [i_2 - 2] = var_9;
                                arr_32 [i_2] [i_2] [8] [i_2] [i_5] = ((-(min(var_4, (arr_20 [i_3] [i_3 - 2] [i_3 + 2] [i_3 - 2] [i_3 + 2] [i_3 + 3])))));
                                arr_33 [i_4] = (max((max(-29, (max(var_4, -12)))), (arr_9 [i_2])));
                            }
                            /* vectorizable */
                            for (int i_9 = 0; i_9 < 14;i_9 += 1)
                            {
                                arr_36 [i_2] [i_2] [i_2] = var_7;
                                var_18 = (((var_7 + 2147483647) >> 1));
                                var_19 *= ((-(arr_14 [i_3] [i_2 + 2])));
                            }
                            arr_37 [i_5 - 4] = -829768099146703252;
                        }
                    }
                }
                arr_38 [i_2] [i_3] = var_9;
            }
        }
    }
    #pragma endscop
}
