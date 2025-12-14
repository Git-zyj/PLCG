/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_10 ? (min((((var_8 ? var_1 : var_1))), var_3)) : (max((var_0 > var_3), (max(var_6, 22))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_3 - 1] [i_0] [i_0] [i_4] = var_9;
                                var_12 = (min((arr_11 [i_0] [i_3 + 1] [i_4] [i_4] [i_4 - 2]), (((arr_13 [13] [i_3 + 1]) ? (arr_11 [i_1] [i_4 - 2] [i_4 - 2] [i_4] [i_4 - 4]) : (arr_6 [i_3] [i_1])))));
                            }
                        }
                    }
                }
                arr_15 [i_0] [i_0] [3] = ((-(arr_1 [i_0])));
                var_13 = (max(var_13, (arr_8 [i_0] [i_1 + 1] [24])));
                var_14 = (min(var_14, (((((min(1, (arr_11 [i_0] [i_1] [i_0] [i_1] [i_1 - 1])))) ? (arr_2 [i_0]) : ((((var_9 <= (arr_5 [i_0] [i_1]))))))))));
                arr_16 [17] [i_1 - 1] [i_1 - 1] = (max((arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 1]), ((var_0 ? (arr_9 [i_0]) : (max((arr_5 [i_0] [i_1]), var_8))))));
            }
        }
    }
    #pragma endscop
}
