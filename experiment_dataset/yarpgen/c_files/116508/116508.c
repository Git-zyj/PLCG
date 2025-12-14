/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_9;
    var_17 = (32744 | 13);
    var_18 = (((((25 ? -26 : 38))) ? var_0 : 16));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = max(38, 16);
                var_20 = var_9;
            }
        }
    }
    #pragma endscop
}
