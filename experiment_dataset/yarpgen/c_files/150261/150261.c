/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_12 || var_6);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = (max(0, ((max(0, 0)))));
                var_17 = (~6038244815705178474);
                var_18 = 3;
                var_19 = -10;
            }
        }
    }
    var_20 = (((~((65535 ? var_4 : var_12)))));
    #pragma endscop
}
