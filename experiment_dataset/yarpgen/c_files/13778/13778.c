/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_16 = var_9;
                    var_17 = (min(var_17, (~var_13)));
                }
            }
        }
    }
    var_18 = max(var_7, var_6);
    #pragma endscop
}
