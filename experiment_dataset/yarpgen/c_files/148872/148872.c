/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148872
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_13 = 1;
                arr_6 [i_0] = ((((((arr_1 [i_0]) / var_0))) ? (((((arr_2 [i_0] [3] [i_1]) != (arr_0 [i_0]))))) : ((1 ? (arr_2 [i_1] [2] [i_1]) : var_9))));
                var_14 = (~1);
                var_15 = 36926;
                arr_7 [i_0] = ((-(((arr_4 [9] [i_1]) ? var_5 : (((arr_5 [i_0] [i_0] [i_0]) ? 0 : (arr_0 [i_0])))))));
            }
        }
    }
    var_16 = (max(var_16, (((var_6 ? ((((((1 ? 9223372036854775807 : 103))) ? -9508 : var_0))) : 4871841942716821295)))));
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    arr_15 [i_4] = ((((max(((1 ? (arr_14 [i_2] [i_3] [i_4] [13]) : 2600339856)), ((((arr_13 [i_3] [7]) ? var_0 : var_1)))))) ? ((((!(((4871841942716821295 ? 2147483640 : (arr_13 [1] [i_4])))))))) : (((((4038533223 ? (arr_14 [i_4] [16] [i_4] [i_3]) : -9223372036854775792))) ? (((var_1 ? (arr_11 [8]) : 1))) : (((arr_8 [i_4]) ? var_8 : 255))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_17 ^= (((((max(var_7, (arr_12 [i_5] [4] [i_2 - 2]))))) - 225));
                                var_18 *= (arr_11 [i_2]);
                                var_19 = ((~(arr_19 [i_5])));
                                var_20 = ((var_6 | (arr_12 [i_2] [i_3] [i_6 - 2])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = var_0;
    #pragma endscop
}
