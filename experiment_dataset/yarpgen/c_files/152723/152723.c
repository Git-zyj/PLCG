/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_14 = (arr_3 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_15 = (min(var_15, (~0)));
                                var_16 = (max(var_16, ((((1 ^ var_8) / ((max((arr_6 [i_0] [i_1] [i_1 + 1] [i_1 + 1]), (arr_0 [i_1 + 1])))))))));
                                var_17 = (min(var_17, (arr_11 [i_4] [i_3 - 1] [i_0] [1] [i_0] [i_0] [i_0])));
                                var_18 = ((((((arr_7 [i_1 + 1] [i_1 - 1] [i_3 + 1] [i_3 + 2]) * 1))) ? (arr_12 [i_0] [i_0] [i_0] [1] [i_0]) : -93));
                            }
                        }
                    }
                    var_19 ^= ((((min((arr_10 [i_0] [i_1] [i_1 + 2] [i_0] [i_0] [i_2]), 1))) ? (var_5 && 160) : -31));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            {
                var_20 += (arr_14 [i_5]);
                var_21 = (min(var_21, (((((max(51586, (!var_9)))) <= var_8)))));
            }
        }
    }
    #pragma endscop
}
