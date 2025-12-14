/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 6;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_17 [8] [i_1] [i_2] [i_3] [i_4] [1] [8] = ((((!(arr_15 [i_2] [7] [i_3 - 1] [i_0 - 4] [i_0 - 2] [i_0] [i_2]))) || (((arr_15 [i_2] [7] [i_3 + 4] [i_0 - 3] [0] [i_0 - 4] [i_2]) && (arr_15 [i_2] [i_0] [i_3 - 2] [i_0 - 1] [i_0 - 3] [0] [i_2])))));
                                var_16 = ((((~(arr_5 [i_2] [i_0] [i_2]))) & (((!(arr_5 [i_2] [i_2] [i_2]))))));
                            }
                        }
                    }
                }
                var_17 = ((var_8 ? (((arr_9 [i_0 + 1] [i_0 - 4] [i_0 - 4] [5] [i_1]) ? (((-21137 * (arr_6 [i_1] [i_0 - 4] [i_1])))) : 233)) : ((min(848, (arr_1 [i_0 + 1]))))));
                arr_18 [4] [1] [i_0] = ((!((((arr_7 [i_0] [i_1] [i_1] [i_0 - 4]) ? (((var_10 ? 255 : (arr_13 [i_0] [6] [i_0] [i_0 + 2] [i_0])))) : (max((arr_12 [i_0 + 1] [i_1] [i_0 - 2] [i_1] [i_1]), 0)))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 3; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                {
                    var_18 = (((((-848 % (861 != 1)))) % ((((((arr_25 [i_5] [i_6] [i_6 + 2] [i_7]) ? 1 : 237))) & var_1))));
                    var_19 = (max((((((5 & (arr_23 [i_6])))) & (arr_24 [i_5 - 1] [i_5 - 1] [i_5 - 2] [i_5 - 3]))), ((max(((var_7 ? var_15 : (arr_20 [0] [8]))), ((((arr_25 [i_5] [i_6 - 1] [i_7] [i_5]) ? 0 : var_14))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 22;i_9 += 1)
        {
            {
                arr_31 [i_8] [i_8] [i_9] = (arr_29 [i_9 + 1] [i_9 - 2]);
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            {
                                arr_39 [22] [14] [i_9] [i_10] [i_11] [14] [i_12] = (min(4294967276, (((arr_32 [i_8] [i_9] [i_12] [i_11]) ? ((max(var_11, var_10))) : ((3489862452 ? 1683238509 : (arr_36 [i_9] [4] [i_11])))))));
                                arr_40 [i_9] [10] [22] [i_9] = arr_30 [i_8] [i_9] [i_9];
                            }
                        }
                    }
                }
                arr_41 [i_9] [i_9] [i_9 - 1] = (((max((arr_34 [13] [i_8] [i_8] [i_9 + 1]), (max(0, (arr_37 [i_9] [12] [14] [i_8] [i_8]))))) % ((max((max(231, 0)), 255)))));
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 20;i_13 += 1)
                {
                    for (int i_14 = 3; i_14 < 22;i_14 += 1)
                    {
                        {
                            var_20 = (((((max(-1683238509, (arr_34 [i_14] [i_13 + 3] [i_9 - 1] [i_8]))))) % ((-(arr_37 [i_9] [i_9] [i_8] [i_14 - 2] [i_14])))));
                            arr_48 [i_14] [i_9] [18] [i_9] [i_9] [i_8] = ((((262016 ? (((237 ? var_7 : (-2147483647 - 1)))) : ((1539603513805012590 ? (arr_36 [i_14] [12] [20]) : (arr_45 [i_14] [i_9 + 1] [i_13] [i_13 + 1] [i_8] [i_9 + 1]))))) & ((1 ? 57956 : 2243003720663040))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
