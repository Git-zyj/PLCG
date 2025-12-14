/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_14 = (max(((max(64376, 32767))), 215));
                var_15 = 4294967292;
                var_16 = (max(var_16, 1013701152));
            }
        }
    }
    var_17 = var_9;
    #pragma endscop
}
