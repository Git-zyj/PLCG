/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= ((551202086 ? var_2 : (8 && 551202087)));
    var_12 = (((93 & 1) - var_6));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_13 = 65535;
                                arr_12 [i_1] [i_1] = ((((((arr_3 [i_0] [i_0]) * var_10))) ? (((arr_5 [i_4] [i_3 + 1] [i_1] [i_0]) ? (9 & 65535) : (arr_11 [i_3] [i_3] [i_3 + 1] [i_3 + 1] [i_3] [i_3] [i_3 + 1]))) : (max((((arr_2 [i_0]) ? (arr_5 [i_0] [7] [i_2] [7]) : (arr_4 [i_0] [i_0] [i_0]))), 75))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            var_14 = (arr_10 [i_2] [i_0]);
                            var_15 = (arr_0 [i_0] [0]);
                            arr_17 [i_0] [i_1] [i_2] [i_5] [i_6] &= (arr_3 [i_2] [i_2]);
                        }
                        for (int i_7 = 4; i_7 < 9;i_7 += 1)
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] |= (((arr_19 [i_0] [i_1] [i_1] [i_2] [i_5] [i_7]) ? (arr_19 [i_1] [i_1] [i_1] [i_5] [i_0] [i_7]) : (arr_6 [i_1] [i_1])));
                            var_16 = ((((!(arr_8 [i_7 - 3] [i_0] [i_2] [i_2] [i_0] [i_0]))) && (arr_19 [i_2] [i_2] [i_2] [i_1] [i_7 + 1] [i_5])));
                            arr_22 [i_0] [i_7] [i_2] [i_7] [i_0] = (((arr_8 [i_7] [i_7 + 3] [i_7] [i_7] [i_7] [i_7]) ? (arr_8 [i_7] [i_7 + 3] [i_7] [i_7 + 3] [i_7] [i_7]) : var_4));
                        }
                        arr_23 [i_0] [i_2] [i_5] &= ((!(arr_2 [i_0])));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                var_17 = ((var_3 ? (((arr_11 [i_9] [i_2] [i_8] [i_8] [i_2] [i_0] [i_0]) + (arr_14 [i_0] [i_0] [i_2] [i_8]))) : (((((var_3 != (arr_0 [i_0] [i_0])))) >> ((((arr_14 [i_8] [i_8] [i_8] [1]) != var_4)))))));
                                arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] = (112 / 1);
                                var_18 = (((~75) & ((181 | (arr_20 [i_0] [i_1] [i_2] [i_8] [i_1] [i_8] [i_9])))));
                            }
                        }
                    }
                    arr_31 [i_0] [i_1] [i_2] [i_2] = (((((arr_7 [i_0] [i_1] [i_0]) & (arr_7 [i_0] [i_1] [i_1])))) ? (((arr_19 [10] [i_2] [i_1] [5] [5] [i_0]) ? (arr_28 [i_2] [i_1] [i_0] [i_0] [i_1] [i_1]) : -var_8)) : ((((((!(arr_14 [i_0] [i_0] [i_2] [i_0]))) && (!var_3))))));
                    arr_32 [i_2] [i_2] [i_2] = ((((((arr_7 [i_0] [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_19 [i_1] [i_1] [i_1] [i_2] [i_1] [i_1])))) ? (((!(arr_28 [i_0] [i_2] [i_2] [i_1] [8] [i_1])))) : (arr_1 [i_2])));
                }
            }
        }
    }
    #pragma endscop
}
