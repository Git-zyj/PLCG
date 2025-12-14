/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_9, var_4));
    var_21 = ((var_14 ? (max((((var_15 ? var_5 : var_4))), (max(var_6, var_10)))) : (((((max(var_6, var_13)) <= ((min(var_0, var_6)))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_8 [2] = ((~(((arr_2 [i_0 + 2]) % (arr_2 [i_0 + 2])))));

                for (int i_2 = 4; i_2 < 11;i_2 += 1)
                {
                    arr_11 [i_1] = (((((arr_6 [2] [i_0 + 3]) + (arr_6 [i_0] [i_0 + 1]))) != (((arr_3 [i_0] [i_0 + 2]) ? (((var_1 != (arr_10 [i_0 - 2] [i_0] [i_0])))) : (var_1 != var_6)))));
                    arr_12 [i_1] [i_1] [i_1] [i_1] = (arr_1 [i_0 + 1]);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    arr_16 [12] [i_1] [i_1] [13] = ((arr_0 [i_0 + 1]) - ((var_10 ? var_12 : (arr_4 [i_3]))));
                    arr_17 [i_1] [i_1] = (-5007 * 0);
                    arr_18 [0] [i_1 - 2] [i_3] &= (arr_2 [i_0 - 2]);
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            {
                                arr_24 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_1] = ((-(arr_22 [i_4] [i_4 - 2] [i_0 - 2] [i_0] [0] [i_0] [i_0 + 3])));
                                arr_25 [i_5] [i_4] [i_1] [i_1] [5] = (((arr_5 [i_0 - 1]) != (((arr_23 [i_3] [i_1 - 1] [i_1]) ? var_16 : var_9))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 12;i_7 += 1)
                        {
                            {
                                arr_30 [i_3] [i_7] [10] [i_0] [i_1 - 2] [i_3] = ((var_6 ? (arr_19 [i_7] [i_3] [i_1 + 1] [i_3] [i_3] [i_0 - 1]) : (arr_19 [12] [i_7 + 2] [i_7 + 1] [i_7] [i_3] [i_7 + 2])));
                                arr_31 [i_1] [i_1] [i_6] [i_6] [i_1] = ((var_13 - (arr_13 [i_1] [i_3] [i_1 - 2] [i_1])));
                            }
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        arr_34 [i_8] = (arr_32 [i_8] [i_8]);
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                {
                    arr_40 [i_10] [i_10] [i_8] = (((arr_33 [i_9]) > (arr_35 [i_8] [i_9] [i_10])));
                    arr_41 [i_10] [i_9] [i_9] [i_10] = 4294967295;
                    arr_42 [i_10] [i_9] [i_10] [i_10] = (((arr_38 [i_10] [i_8] [i_9] [i_8]) ? var_14 : var_6));
                }
            }
        }
        arr_43 [i_8] &= ((-(arr_32 [i_8] [7])));
    }
    #pragma endscop
}
