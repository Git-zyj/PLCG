/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] &= (max(127, (((var_9 ^ (arr_0 [i_0]))))));
                arr_7 [8] = ((!((max(17444, -126)))));
                arr_8 [i_0] = (min((((max(var_3, (arr_0 [i_0]))) ^ ((var_5 ? (arr_5 [i_1]) : (arr_1 [11]))))), ((max((((arr_1 [18]) ? (arr_4 [i_0] [10]) : (arr_0 [i_0]))), (min((arr_0 [17]), var_1)))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] = (max(((((arr_9 [1] [1] [i_1]) & var_0))), (arr_5 [i_0])));
                                arr_16 [13] [i_1] [14] [i_1] = ((((min((17468 - 1696436721), ((var_1 + (arr_13 [i_4] [i_3] [i_1] [10])))))) + (min(((((arr_5 [2]) + (arr_5 [i_0])))), (((arr_5 [i_4]) - (arr_9 [i_0] [i_0] [i_3])))))));
                                arr_17 [9] [i_1] [i_2] [13] [13] [i_2] [8] = ((!(((var_3 ? (arr_2 [i_0] [i_1] [i_0]) : ((((arr_13 [i_0] [i_0] [17] [i_0]) <= 499750829))))))));
                                arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_2] [i_3] = -126;
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (min(((((min(-121, var_1))) ? (var_3 ^ var_6) : var_13)), 14));
    var_18 = (((var_0 + 2147483647) >> (var_10 + 104)));
    #pragma endscop
}
