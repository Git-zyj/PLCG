/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_6 [i_1] = arr_1 [i_2];
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [8] [i_4] [i_4] = (arr_4 [i_1] [i_1] [i_1] [i_3]);
                                arr_13 [i_3] [i_3] [i_3] [i_3] [1] &= ((((((var_3 - 16380) ? 21707 : ((min((arr_10 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] [i_4]), var_7)))))) ? ((5 ? (arr_10 [i_0 + 1] [i_1] [i_2] [i_0] [i_4] [i_3] [i_4]) : 0)) : var_7));
                                var_11 = ((!(1 * 98)));
                                var_12 = (--11);
                                var_13 = var_9;
                            }
                        }
                    }
                    arr_14 [i_1] [i_1] [i_1] [i_1] = ((!((((arr_9 [i_0]) ? (min(var_2, 255)) : 1)))));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        arr_17 [i_5] [i_5] = ((((((~(arr_10 [i_5] [12] [i_5] [i_5] [i_5] [12] [6]))) + 2147483647)) >> (((min(21607, (arr_9 [i_5]))) - 21578))));
        var_14 = (max(var_14, var_8));
    }
    #pragma endscop
}
