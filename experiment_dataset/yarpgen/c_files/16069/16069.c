/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_15 &= 5267907617804701939;
                var_16 = 1;
            }
        }
    }
    var_17 = var_1;
    var_18 = (1 - 1);
    #pragma endscop
}
