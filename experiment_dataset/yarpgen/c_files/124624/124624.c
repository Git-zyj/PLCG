/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_3 ? (var_6 > var_7) : ((var_1 ? var_12 : var_12))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_0] [i_0] = (((min((arr_1 [i_0] [i_0 + 1]), (arr_0 [i_0]))) ^ (((arr_0 [i_0]) ? (arr_8 [i_0] [i_0] [i_1] [i_0]) : (((arr_6 [i_0]) / (arr_7 [i_0] [i_1] [i_0] [i_0])))))));

                    for (int i_3 = 1; i_3 < 21;i_3 += 1) /* same iter space */
                    {
                        arr_14 [i_0] [i_1] [i_1] [i_2] [i_0] = (i_0 % 2 == zero) ? ((min((((((((arr_11 [14] [i_1] [i_2] [i_3] [i_3 - 1]) < (arr_4 [i_0]))))) & (max((arr_11 [i_0] [i_1] [i_2] [19] [i_0]), (arr_2 [i_0]))))), ((((arr_3 [i_0] [i_0]) >> (((arr_4 [i_0]) - 2798)))))))) : ((min((((((((arr_11 [14] [i_1] [i_2] [i_3] [i_3 - 1]) < (arr_4 [i_0]))))) & (max((arr_11 [i_0] [i_1] [i_2] [19] [i_0]), (arr_2 [i_0]))))), ((((arr_3 [i_0] [i_0]) >> (((((arr_4 [i_0]) - 2798)) - 47199))))))));
                        arr_15 [i_0] [i_0] [i_2] [18] = arr_3 [i_1] [i_0];
                        arr_16 [i_0] [i_1] [i_3] = ((((((arr_6 [i_1]) ? (((arr_10 [i_0] [i_1] [i_2] [i_3] [i_3]) ? (arr_1 [i_1] [i_2]) : (arr_11 [i_3 - 1] [i_2] [i_0] [i_1] [i_0]))) : (((arr_12 [i_0] [i_1] [i_1] [i_2] [i_1] [i_3]) | (arr_8 [i_0] [i_1] [i_0] [i_1])))))) ? (arr_6 [i_1]) : (arr_5 [i_1] [i_1])));
                    }
                    for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
                    {
                        arr_19 [i_0 - 1] [i_1] [i_0] [i_0] &= ((((min((arr_1 [i_1] [i_4]), (max((arr_1 [i_1] [i_1]), (arr_0 [i_1])))))) - (min(251, 2))));
                        arr_20 [i_0] [i_1] [i_2] [i_1] |= (((((arr_1 [i_1] [i_4 - 1]) ? (arr_1 [i_1] [i_4 + 1]) : (arr_1 [i_1] [i_4 + 1]))) / (arr_1 [i_1] [i_4 - 1])));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_26 [i_0 - 1] [i_1] [16] [i_2] [18] [i_1] [i_0 - 1] = (max(((((arr_4 [i_1]) * 127))), (max((arr_3 [i_0 - 1] [i_1]), (arr_23 [i_0] [8] [i_1] [i_2] [i_5] [i_6])))));
                                arr_27 [i_0 - 1] [i_0 - 1] [i_2] [i_0] = (arr_25 [i_0 + 1] [3] [i_1] [i_0] [i_0] [i_6]);
                            }
                        }
                    }
                    arr_28 [i_1] = (max(((127 ? ((((arr_4 [i_1]) ? (arr_8 [i_0 - 1] [i_1] [i_2] [i_2]) : (arr_3 [i_1] [i_1])))) : (((arr_17 [i_0] [21] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0]) ? (arr_3 [i_1] [i_1]) : (arr_23 [i_0] [i_1] [i_1] [i_1] [i_0] [i_1]))))), (((arr_4 [i_1]) ? (((arr_25 [i_0 - 1] [i_0 - 1] [i_1] [i_1] [20] [8]) ? (arr_0 [i_1]) : (arr_23 [6] [i_2] [12] [i_0] [i_0] [i_0 + 1]))) : (max((arr_1 [i_1] [i_2]), (arr_23 [21] [i_0] [i_1] [2] [i_1] [i_2])))))));
                }
            }
        }
    }
    var_14 = (max(var_5, ((var_7 ? var_9 : var_10))));
    #pragma endscop
}
