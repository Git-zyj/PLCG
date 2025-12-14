/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= var_9;
    var_12 = var_5;
    var_13 = (~var_9);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = 511189236;
                var_15 = (~-511189237);
            }
        }
    }
    var_16 = (min(32218, 15330));
    #pragma endscop
}
