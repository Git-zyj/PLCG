/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = min(var_9, ((!(((var_13 ? var_15 : var_13))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (max((((arr_1 [i_0]) | (arr_0 [i_0]))), var_15));
        var_21 &= (arr_0 [i_0]);
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 19;i_5 += 1)
                        {
                            {
                                var_22 = ((min((max(var_7, var_15)), (var_6 != var_8))));
                                arr_16 [i_4] [i_4] = (arr_13 [i_2 + 1] [10] [i_4]);
                                var_23 |= (max(var_11, (max(var_17, (min(var_5, var_17))))));
                            }
                        }
                    }
                    arr_17 [i_3 - 1] [i_2] [7] = var_3;
                    arr_18 [i_3] = (max((arr_13 [i_1] [0] [i_3]), (min((arr_14 [19] [i_2] [3] [i_2 - 1] [8]), (arr_8 [5] [i_2] [i_2] [i_2 + 1])))));
                }
            }
        }
    }
    var_24 = (~var_9);
    #pragma endscop
}
