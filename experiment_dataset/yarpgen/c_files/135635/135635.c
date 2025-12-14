/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((0 ? 1 : var_8));
    var_12 = 1255530864;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_2] = ((min(((18446744073709551615 ? 1 : 1), 22))));
                    var_13 = ((-19604 ? 48 : (-2147483647 - 1)));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1) /* same iter space */
                    {
                        var_14 = ((var_5 ? var_1 : var_7));
                        arr_11 [i_0] [16] = var_9;
                        var_15 = ((-106 ? -111 : 1));
                    }
                    for (int i_4 = 1; i_4 < 20;i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_0] = ((125 ? 47 : -4096));
                        arr_16 [i_0] = -4096;
                    }
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        arr_21 [i_0] [i_1] [i_2] [i_5] = 2147483647;
                        arr_22 [i_0] [i_0] [i_2] [i_0] [i_0 - 3] [i_0] = ((((max((arr_17 [i_0] [0] [0] [i_2] [i_2] [i_5]), 1))) ? ((((max(3653230676, (arr_9 [i_0] [20] [i_1] [i_0])))) ? ((4096 ? -11 : 4096)) : -1)) : 2147483647));
                    }
                    arr_23 [i_0] [i_0] [i_2] = 2468598346;
                }
            }
        }
    }
    var_16 = var_5;
    #pragma endscop
}
