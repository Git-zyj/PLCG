/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((((-400554206 && (3128183415 ^ var_14)))), var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [7] [i_0] = ((((min(var_0, (((arr_0 [i_0] [i_0]) - var_4))))) ^ ((3331643722 ? 11965360058088199877 : -32767))));
                arr_6 [i_0] [0] = 0;
                arr_7 [i_0] [8] = ((((min((arr_0 [4] [i_1 + 1]), (arr_0 [10] [i_1 + 1])))) ? (min(-1, (arr_3 [i_1 - 1] [i_1 - 1]))) : ((((~(arr_1 [i_0])))))));
                arr_8 [2] [i_1] [i_1] |= (min(-1483109116, (min(101, 11965360058088199877))));

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [2] [i_2] [2] [i_0] = (min((arr_13 [i_0] [0] [i_1] [10]), ((((min((arr_14 [1] [i_1] [8] [10] [10]), var_11))) ? (((var_7 ? (arr_1 [4]) : var_12))) : (arr_15 [i_4] [i_3])))));
                                arr_17 [i_0] [i_3] [i_0] [i_1] [i_0] = ((~((0 ? var_0 : var_7))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        arr_20 [i_0] [3] [i_0] [i_0] = (((arr_13 [i_5] [i_0] [i_0] [i_2 - 1]) & (arr_18 [5] [8] [8] [i_2 - 1])));
                        arr_21 [i_0] [i_0] [i_0] [8] = (((arr_15 [i_1 - 1] [i_2 - 1]) ? ((~(arr_11 [i_5] [i_0] [3] [i_5]))) : -34));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 11;i_7 += 1)
                        {
                            {
                                arr_27 [i_0] = ((((min((arr_15 [i_0] [1]), (arr_23 [7] [5] [i_1 - 1] [i_0])))) | ((-(arr_0 [i_0] [i_7 - 1])))));
                                arr_28 [i_1] [i_1] [i_1] [8] [8] [i_1] = (arr_12 [10] [i_1]);
                            }
                        }
                    }
                }
                for (int i_8 = 2; i_8 < 11;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 10;i_10 += 1)
                        {
                            {
                                arr_35 [i_0] [i_1] [10] [i_0] [i_9] [i_0] [i_9] = var_7;
                                arr_36 [4] [0] [2] [2] = (arr_2 [i_0] [i_9] [i_9]);
                            }
                        }
                    }
                    arr_37 [8] [8] = (min((min(-var_2, var_9)), (arr_11 [i_1 - 1] [i_1 - 1] [i_1] [i_8 - 2])));
                    arr_38 [i_0] [6] [i_8] |= -8;
                    arr_39 [8] [2] = -var_3;
                }
            }
        }
    }
    var_16 = ((((min(16382, -var_8))) ? var_4 : ((((-var_11 + 2147483647) >> (var_11 - 42876))))));
    #pragma endscop
}
