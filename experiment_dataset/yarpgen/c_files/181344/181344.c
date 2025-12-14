/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_4 < ((var_12 ? ((214 ? var_13 : -116)) : var_5))));
    var_16 = (min(var_16, (~var_4)));
    var_17 = (~var_11);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = min(-0, -32);
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_9 [i_2 + 1] [i_1] [i_2] [i_3] = (6 * (((2181843386368 ? 8 : 773158723))));
                            var_19 = (min((max(126, var_3)), var_4));
                            var_20 = ((~(max(var_2, var_11))));
                        }
                    }
                }
                var_21 = (max(var_21, ((((2551584717 ? 56 : 0))))));
            }
        }
    }
    var_22 = (max(var_22, var_10));
    #pragma endscop
}
