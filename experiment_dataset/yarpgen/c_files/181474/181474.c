/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((!var_1) ? (var_1 & var_1) : (((((var_10 ? 65522 : var_4)))))));
    var_15 = ((((-(min(var_2, var_6))))) ? (((~var_0) ? var_0 : var_9)) : var_7);
    var_16 = (max(var_16, var_7));

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_17 = (max(((((max((arr_2 [i_0]), 2358129826)) ^ ((max(-1724691696, 7)))))), (max((max(17179869183, 17179869183)), (((-3985772028065733279 ? 230 : 207)))))));
        var_18 |= ((((arr_0 [i_0]) ? (arr_0 [i_0]) : 31)));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_19 = ((~(arr_0 [i_1])));
        arr_5 [i_1] [i_1] = (((((arr_4 [i_1] [i_1]) * ((((!(arr_1 [i_1]))))))) - (((arr_3 [i_1]) / 8))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_1] [i_1] = (arr_8 [i_1]);
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                arr_18 [5] = (!((min((-1 ^ 1023), ((((arr_2 [i_2]) ? (arr_11 [i_5] [i_5]) : (arr_15 [i_2] [i_4]))))))));
                                arr_19 [i_1] = (((min((arr_4 [i_4 + 1] [i_4 + 1]), -1023)) * (arr_6 [i_1] [i_4] [i_4 - 1])));
                                arr_20 [i_1] [4] [i_3] [i_4] [i_4] [i_5] [i_5] = (arr_6 [i_3] [i_2] [i_3]);
                                arr_21 [3] [i_3] [i_3] [i_3] [10] = (min((-6119786887446847152 <= 2305561534236983296), (arr_2 [i_3])));
                                var_20 = (min(((-(arr_16 [i_4 - 2] [i_4] [i_4 - 1] [i_5] [i_5] [i_5] [i_5]))), (((!(arr_10 [i_4] [i_4 - 1] [i_4] [i_4]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = 65529;
    #pragma endscop
}
