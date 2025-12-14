/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] = ((~(!var_5)));
                            arr_10 [i_0] [i_0] [i_0] [i_0] = (arr_7 [i_0] [3]);
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    arr_13 [i_0] [i_0] [i_0] [i_0] = 29922;
                    arr_14 [13] [i_0] = (arr_12 [0] [i_0] [7]);
                    arr_15 [i_0] [i_1] [i_0] = -23104;
                    var_13 = min((((arr_11 [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_6 [i_0] [i_4]))), (arr_3 [i_0]));
                    arr_16 [i_0] [i_0] = (((arr_11 [i_0] [14]) ? (((((9223372036854775807 ? (arr_4 [i_0] [8] [5] [i_0]) : var_12)) != var_5))) : (arr_2 [i_0])));
                }
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    var_14 ^= var_5;
                    arr_21 [i_0] [i_0] [i_1] [i_1] = (max(7465, (arr_3 [i_0])));
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            {
                                arr_30 [i_0] [i_1] [13] [13] [8] = ((-(max((((arr_3 [i_0]) ? (arr_3 [i_0]) : (arr_25 [i_0] [2] [i_0] [i_0] [2]))), (arr_2 [i_0])))));
                                arr_31 [i_0] = ((((((~-3) ? var_9 : (!var_5)))) ? (((~(arr_11 [i_0] [i_0])))) : 9223372036854775788));
                                arr_32 [i_0] = ((((-6382 ? 9223372036854775807 : -9223372036854775807)) / -var_4));
                            }
                        }
                    }
                    arr_33 [i_0] [i_0] [i_0] = (min((arr_22 [i_0] [i_0]), (arr_6 [i_0] [i_0])));
                }
                for (int i_9 = 1; i_9 < 14;i_9 += 1)
                {
                    var_15 = ((-((((!(arr_28 [6] [i_0] [14] [1] [1] [6] [i_0]))) ? (((arr_5 [i_0]) ? (arr_24 [i_0] [i_0]) : var_5)) : (((-(arr_2 [i_0]))))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            {
                                var_16 = (arr_28 [i_0] [i_0] [1] [1] [7] [1] [1]);
                                arr_41 [i_0] [i_1] [i_9] [i_0] [10] [10] = ((!((min(((-(arr_39 [11] [i_0] [i_9] [2] [i_9] [i_9]))), (((arr_27 [i_11] [i_0] [7] [7] [i_0] [7]) ? (arr_34 [i_0]) : (arr_36 [i_0] [1] [1] [i_0]))))))));
                            }
                        }
                    }
                    arr_42 [i_0] = (arr_40 [i_9] [i_0] [i_9] [i_1] [i_9] [i_0] [i_9]);
                }
            }
        }
    }
    var_17 = (max(0, (~-var_8)));
    #pragma endscop
}
