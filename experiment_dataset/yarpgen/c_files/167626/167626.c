/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [2] [i_0] = ((((max((arr_2 [i_0] [1] [i_1]), (((1 != (-2147483647 - 1))))))) ? (min(((max(2173059584, 65535))), (arr_3 [i_0] [i_1]))) : ((((min(var_10, var_5)))))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_14 [i_3] [i_1 - 1] [i_1 - 1] [i_3] [i_4] = (((arr_9 [i_1] [i_1] [6] [i_1]) ? (arr_0 [i_0]) : var_10));
                                arr_15 [12] [i_3] [13] = var_9;
                                var_12 = (((44664 >= 44663) ? (arr_12 [i_0] [i_1] [i_2] [6] [i_4]) : (((arr_13 [i_0] [i_1 - 1] [i_1] [i_1] [i_2 + 1] [i_3 - 1] [i_4]) ? (arr_13 [i_0] [i_0] [i_0] [1] [9] [i_3 - 1] [i_4]) : (arr_13 [i_0] [i_1 + 1] [3] [i_3] [i_3] [i_4] [i_4])))));
                                arr_16 [i_4] [i_3] [i_2] [i_3] [i_0] = (((((arr_6 [i_1 - 1] [i_2]) || (arr_13 [i_0] [i_0] [1] [1] [i_0] [i_0] [i_0]))) && ((min((arr_13 [i_0] [4] [i_2] [4] [i_3 - 1] [i_3] [i_4]), 26612)))));
                                var_13 = (arr_3 [10] [10]);
                            }
                        }
                    }
                }
                arr_17 [i_1 + 2] [i_0] = (min(((~((38924 ? (arr_9 [i_0] [i_0] [i_1] [i_1 - 1]) : var_6)))), (((18883 ? 14228 : 44664)))));
                arr_18 [i_0] [i_0] [i_0] = (min(var_0, ((min(var_7, (arr_12 [i_1] [i_1 + 2] [i_1 + 2] [i_1] [i_1 + 2]))))));
                arr_19 [1] = ((((((arr_3 [i_0] [i_1]) ? (arr_5 [i_0]) : 17676))) && ((!(((var_6 ? (arr_3 [i_1] [7]) : 422607352)))))));
            }
        }
    }
    var_14 = 2019693499;
    var_15 = 38924;
    #pragma endscop
}
