/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_12 = (~1065353216);
                var_13 = var_4;
                var_14 = 331306017;
            }
        }
    }
    var_15 += 331306023;
    #pragma endscop
}
