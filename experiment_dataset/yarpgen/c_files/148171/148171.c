/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 = (arr_1 [i_0] [i_0]);
        arr_4 [i_0] = (arr_1 [i_0] [i_0]);
        arr_5 [i_0] &= var_0;
        var_15 -= var_6;
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            {
                var_16 *= (max(((~(arr_7 [i_1 + 3]))), (arr_7 [i_1 + 3])));

                /* vectorizable */
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    arr_14 [i_1] [i_2] [i_1] [13] = (~(arr_0 [i_1 + 3] [i_3]));
                    arr_15 [i_1] [16] [i_1] = (arr_9 [i_3]);
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 19;i_5 += 1)
                    {
                        {
                            arr_22 [i_1] [i_4] [i_4] [0] = arr_7 [i_1];
                            arr_23 [i_1] [i_2] [i_1] [i_4] = (~var_0);
                        }
                    }
                }
            }
        }
    }
    var_17 = (((((~(max(var_1, 0))))) ? (var_12 ^ var_12) : var_10));
    #pragma endscop
}
