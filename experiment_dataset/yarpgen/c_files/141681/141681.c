/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [6] [i_2] = (((((~(-2147483647 - 1)) > 2147483647))));
                    arr_10 [i_0] [1] [i_1] [1] = ((~(arr_3 [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_17 = arr_11 [i_0] [i_2 + 2] [i_2 + 2];
                                var_18 = max((((arr_13 [i_0] [i_0] [i_2 + 1] [i_0]) / -1266649389)), 266338304);
                            }
                        }
                    }
                    arr_16 [i_0] [i_0] [i_2] = ((((((arr_15 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2 - 1] [i_2]) ? (arr_12 [i_2 + 1] [i_2 + 2] [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 + 2]) : (arr_12 [i_2 - 1] [i_2 - 1] [i_2 + 2] [i_2] [i_2] [i_2])))) ? var_7 : ((((var_15 > (max(var_14, (arr_14 [i_1] [i_0])))))))));
                    var_19 = (((((((-2147483647 - 1) ? (arr_12 [i_2 + 1] [i_2 - 1] [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1]) : var_9)))) ? var_0 : ((((max(var_9, (arr_14 [i_1] [i_2])))) & var_2))));
                }
            }
        }
    }
    #pragma endscop
}
