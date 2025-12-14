/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_1] [i_1] = var_10;
                            var_21 = var_12;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_22 = var_18;
                                arr_23 [i_1] [i_1] [i_4] [i_1] = (((((~64814) + 2147483647)) << (var_0 - 25)));
                                var_23 = (((((1 << (var_16 - 57303)))) || 0));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (min(var_18, var_11));
    #pragma endscop
}
