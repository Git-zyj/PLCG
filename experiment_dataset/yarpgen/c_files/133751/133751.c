/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 4; i_2 < 10;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_16 = (max(var_16, ((((((-(arr_7 [i_0] [i_1 - 4] [i_2] [5])))) ? (arr_9 [i_0]) : var_4)))));
                                arr_11 [6] [6] [8] [6] [i_3] [i_3] [8] = 4683796155056286881;
                            }
                        }
                    }
                    var_17 = 1;
                    var_18 = (((arr_5 [i_0] [i_2 - 1] [4] [i_2 - 4]) ? (arr_9 [i_0]) : (arr_4 [i_0] [i_1] [6])));

                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        arr_14 [i_1] [i_2] = 60877;
                        arr_15 [12] [i_5] [12] [12] |= (arr_12 [i_5 - 1] [i_1 - 4] [i_5] [i_5] [6] [i_2 - 4]);
                        var_19 = (arr_6 [i_0] [i_1 + 1] [8] [i_1]);
                    }
                    arr_16 [i_0] [i_0] [i_0] = 0;
                }
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    arr_20 [i_0] [i_0] [i_6] [i_0] = ((((((min((arr_18 [10] [i_1 + 1]), (arr_13 [i_0] [i_1] [i_6] [i_6])))) ? (arr_7 [11] [i_1 + 1] [1] [2]) : (((arr_1 [i_1] [i_0]) ? (arr_13 [i_0] [i_0] [1] [i_0]) : (arr_7 [i_0] [i_0] [i_1] [i_6]))))) + (arr_0 [i_0])));
                    var_20 = (max(var_20, ((((-(arr_1 [0] [i_1 - 2])))))));
                    var_21 = (arr_9 [i_0]);
                    var_22 = (min((((arr_13 [i_0] [i_1 - 4] [i_1 - 4] [i_1 + 1]) & (arr_18 [1] [i_1 + 1]))), ((min(var_9, (arr_18 [i_0] [i_1 + 1]))))));
                }
                arr_21 [8] [8] [i_1] = (((min((arr_4 [i_1] [i_1 - 3] [i_0]), (arr_4 [i_0] [i_1] [i_1 - 4]))) ? (((((arr_4 [i_0] [i_0] [i_0]) && (arr_4 [i_0] [i_0] [i_0]))))) : (min(18446744073709551615, (arr_4 [i_0] [i_0] [i_0])))));
                var_23 = ((((((arr_6 [i_0] [i_0] [i_0] [i_1]) ? (((arr_0 [i_0]) ? (arr_2 [i_1]) : 858107615)) : (arr_18 [3] [i_1])))) ? (((arr_2 [i_1 - 1]) * (arr_2 [i_1 - 2]))) : var_5));
            }
        }
    }
    var_24 = var_0;
    var_25 |= var_8;
    #pragma endscop
}
