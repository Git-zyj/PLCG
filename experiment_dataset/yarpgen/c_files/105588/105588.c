/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_8));
    var_11 |= var_1;
    var_12 = (max(var_12, -1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = (arr_1 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_2] [1] [i_1] [i_0] |= (((arr_6 [i_1]) && var_8));
                            var_13 = var_9;
                            var_14 *= (min((min(3795235861, 14578)), var_7));
                            var_15 = (arr_9 [i_0] [3] [i_2] [i_2] [i_0]);
                        }
                    }
                }
                var_16 = (max(var_16, 127));
                var_17 = var_5;
                var_18 = 3937931496;
            }
        }
    }
    #pragma endscop
}
