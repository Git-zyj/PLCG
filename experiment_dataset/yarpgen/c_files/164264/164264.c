/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] = (~(((var_6 && 199) + (var_12 && var_11))));
                var_16 -= var_13;
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_17 = (min(var_17, var_7));
                            var_18 -= (max((!1), (199 || 2041)));
                        }
                    }
                }
            }
        }
    }
    var_19 -= var_13;
    var_20 = var_9;
    #pragma endscop
}
