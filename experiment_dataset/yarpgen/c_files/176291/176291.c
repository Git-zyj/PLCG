/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_16;
    var_21 = ((127 ? (((((var_10 ? 160 : var_9))) * ((var_16 ? var_18 : var_7)))) : (((~var_9) - var_7))));
    var_22 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_23 = 33;
                var_24 = (min(108, 33));
            }
        }
    }
    var_25 = var_19;
    #pragma endscop
}
