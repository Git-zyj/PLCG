/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_19 = ((((-(arr_4 [i_2 - 1]))) | ((((arr_6 [i_2 + 1] [i_2 + 1]) == (arr_6 [i_0] [i_2]))))));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 25;i_4 += 1)
                            {
                                var_20 = 0;
                                arr_13 [i_3] [13] [i_3] [i_2] [i_2] = ((-12072020965137501233 & (72057456598974464 & 220)));
                                var_21 = (((var_5 ? (arr_7 [i_0] [i_3] [i_0] [i_0]) : (arr_11 [i_0 + 3] [i_2] [i_2] [23] [i_4]))) / ((var_1 ? var_13 : (arr_3 [i_4] [i_3] [i_1]))));
                                arr_14 [i_4] [i_2] = (arr_12 [i_2 + 1] [i_0 + 3] [i_0] [i_3]);
                                var_22 = (!1);
                            }
                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                var_23 = (min(var_23, (((-(((6374723108572050383 ? var_3 : 2170903580414803076))))))));
                                var_24 = (6374723108572050382 ? 2957575702 : 1);
                            }
                            for (int i_6 = 0; i_6 < 25;i_6 += 1)
                            {
                                var_25 = ((-(max(var_0, ((~(arr_18 [i_0] [i_1] [i_0] [i_2])))))));
                                arr_20 [i_2 - 1] [i_2] [i_2 - 1] [i_2] [i_0 + 1] = (arr_12 [i_0 - 1] [i_0] [i_0 + 3] [0]);
                                arr_21 [i_2] [i_6] = min((((((((~(arr_4 [i_1]))) + 2147483647)) << (81 - 81)))), (max((arr_18 [i_0] [i_0 + 1] [i_6] [i_2]), ((~(arr_5 [i_6] [i_2] [i_1]))))));
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 25;i_7 += 1)
                            {
                                arr_26 [i_2] [i_1] [i_2] [i_1] [i_2] = (arr_22 [i_2] [i_1] [i_2] [i_3] [i_2 + 1]);
                                arr_27 [i_2] [i_3] = (((arr_9 [i_2] [i_1] [i_0 + 1] [i_0] [i_2]) == 36));
                                var_26 = (((arr_9 [i_2] [i_2] [i_2] [i_0 - 1] [i_2 - 1]) ? (arr_9 [i_2] [i_1] [i_2] [i_0 + 1] [i_2 - 1]) : (arr_1 [i_0 + 3])));
                                arr_28 [i_7] [i_3] [i_2] [i_1] [i_0 - 1] = (((arr_15 [i_2 + 1] [i_2 + 1] [i_2] [i_2] [i_2 + 1] [i_2 + 1]) ? (arr_9 [i_2] [i_3] [i_0 - 1] [i_0] [i_2]) : (arr_5 [i_0 - 1] [i_2] [i_2])));
                            }
                            var_27 = min((~1665988790), var_8);
                        }
                    }
                }
                var_28 = (((var_16 ? ((min((arr_3 [i_1] [i_1] [i_1]), (arr_23 [i_0] [i_0] [i_0] [i_0])))) : (max(6374723108572050382, var_1)))));
                var_29 |= ((var_10 ? (arr_0 [i_0 + 2]) : (arr_0 [i_0 + 3])));
            }
        }
    }
    #pragma endscop
}
