/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (~11405)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_21 = var_11;
                            var_22 &= (min(11410, (min(168, 11151787418354601677))));
                            var_23 = 4447323789389867178;
                        }
                    }
                }
            }
        }
    }
    var_24 = var_9;
    #pragma endscop
}
