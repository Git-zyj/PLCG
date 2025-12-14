/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((var_0 && ((((var_1 % var_7) >> ((((1 ? var_2 : 57)) + 69)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = (((((33829 ? (arr_5 [i_0] [i_0] [i_0]) : 185))) ? (((arr_1 [i_2]) - (arr_1 [i_0]))) : ((((arr_2 [i_0] [i_0]) < ((1 ? var_4 : (arr_0 [i_1]))))))));
                    arr_7 [i_2] = ((((((((arr_4 [i_1] [i_2]) ? (arr_6 [i_0] [i_0]) : 1)) % 49235))) ? (((-1 | (((arr_0 [i_0]) | var_1))))) : ((((86 ? (arr_2 [i_0] [i_0]) : 11)) ^ (arr_3 [i_0] [i_0] [i_2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_12 = (((arr_10 [i_3 + 3] [10] [i_4 + 1] [i_3] [i_4] [i_4]) ? (arr_8 [i_4 - 1] [i_1] [i_2] [i_2] [i_0] [i_0]) : (((arr_2 [i_4 - 1] [i_3 - 1]) / 1))));
                                var_13 += (((arr_9 [i_3 + 2] [i_3 + 3] [i_4 - 1] [i_4] [i_4] [i_4 - 1]) ? (arr_9 [i_3 + 1] [i_3 + 1] [i_4 - 2] [21] [2] [i_4]) : (((arr_9 [i_3 + 2] [i_3 + 2] [i_4 - 2] [i_4] [i_3 + 2] [18]) ? (arr_9 [i_3 + 2] [i_3 + 1] [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4]) : (arr_9 [i_3 + 4] [i_3 - 1] [i_4 - 2] [i_4] [5] [i_4])))));
                            }
                        }
                    }
                    arr_12 [i_2] [13] [i_0] [i_2] = (((arr_1 [i_2]) - (arr_1 [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
