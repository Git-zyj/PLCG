/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= min(var_4, var_5);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    var_15 = (min(var_15, ((min(1, 4294967295)))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (arr_9 [i_3 + 2] [i_0]);
                                arr_13 [i_3] [i_0] [i_0] [i_0] = (((min((arr_8 [i_0] [i_3 - 2] [i_0]), 1)) & (min((arr_10 [i_0] [i_1] [i_2] [i_3] [i_4]), var_9))));
                            }
                        }
                    }
                    var_16 = (min(var_16, (((((min((arr_1 [8]), (arr_1 [2])))) ? (arr_1 [2]) : (((arr_1 [10]) ? (arr_1 [4]) : (arr_1 [10]))))))));
                }
            }
        }
    }
    var_17 = (min(var_17, ((((((((max(var_5, 25442))) ? ((0 ? var_6 : var_4)) : ((max(var_12, var_6)))))) ? (((var_13 && var_9) ? ((min(0, 40076))) : var_3)) : var_2)))));
    #pragma endscop
}
