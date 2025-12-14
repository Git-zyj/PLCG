/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, ((((((1 ? 4294967282 : 58766))) ? ((max((arr_8 [i_0] [i_0 - 1] [20] [i_4 + 1] [i_0]), (arr_0 [7] [i_0 - 3])))) : ((((arr_9 [i_1]) ? -46200634 : 658183479))))))));
                                var_18 = (((-(max(var_3, 21)))) ^ ((max(-var_9, ((~(arr_12 [i_0 - 2])))))));
                                var_19 = ((((max((arr_8 [i_0] [i_1] [i_2] [i_3] [i_4]), (((658183461 > (arr_9 [i_0]))))))) ? ((0 ? (min(21, (arr_5 [i_4] [i_0] [i_0] [3]))) : 3261596395785185193)) : (((((var_14 || (arr_4 [i_0]))) ? (arr_4 [7]) : 1)))));
                                arr_14 [i_0 - 1] [i_1] [i_1] [i_0 - 1] [i_2 - 1] [i_3] [i_0] = (max(((~(arr_8 [i_2 - 1] [i_3] [i_2 - 1] [i_0] [i_0]))), (((arr_8 [i_3] [i_2] [i_2 - 3] [i_0] [i_0 - 1]) | var_2))));
                                arr_15 [22] [22] [i_2] [i_0] [i_2] = 1;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        {
                            var_20 = ((~-1689239433) & (((max(31, (arr_18 [i_0 + 1] [i_0 - 3] [i_5] [17]))))));
                            var_21 = ((((max(12, -2308558565))) | (max((arr_3 [i_0]), (arr_3 [i_0])))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 3; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 13;i_8 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 12;i_11 += 1)
                        {
                            {
                                var_22 = -1958002272669249443;
                                var_23 = ((((max((arr_7 [i_11 - 1] [i_8 - 2] [i_8 - 2] [i_7 - 3]), (arr_18 [i_8 - 2] [i_7 + 2] [i_9] [i_11 + 2])))) ? (((max((arr_21 [i_7]), (arr_23 [i_11]))))) : (((arr_11 [i_8]) ? var_13 : (arr_11 [i_8])))));
                                arr_35 [i_7] [i_9] [i_9] [i_8] [i_11] = ((arr_7 [i_10] [i_10] [i_9] [i_9]) && ((max((arr_25 [i_7] [i_8 - 1] [i_11]), 14225))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        {
                            var_24 = (arr_32 [i_7] [i_12] [i_7] [1]);
                            var_25 = 1;
                            arr_42 [i_13] [i_13] [i_8] [i_13] = (((((8430577559592173290 ? (((1 ? 3636783805 : var_11))) : ((1718595586376859811 ? 4784930079798030922 : 1))))) ? (((((arr_25 [i_7] [i_7 - 1] [i_7 - 2]) ^ -624937972272514788)) & ((max(var_5, 3775067486))))) : ((max(((2 ? var_5 : 1)), ((max(var_6, (arr_6 [i_8] [i_12] [i_8 + 1] [i_8])))))))));
                            var_26 = ((((((var_4 ? (arr_28 [i_7] [i_7] [i_12] [i_7]) : 54))) ? (((0 ? var_9 : var_8))) : 17479342089658631561)));
                            arr_43 [i_7] [i_7] [i_8] [i_8] [i_7 - 2] [i_7] = ((+(min(5929, ((var_5 ? (arr_24 [i_7 + 2] [i_7]) : (arr_37 [i_8] [i_13] [i_13] [i_13])))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
