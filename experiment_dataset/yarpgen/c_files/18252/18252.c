/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_12 ? var_4 : ((var_9 * (151 + var_8)))));
    var_16 = -37;
    var_17 = ((var_3 ? var_8 : var_14));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = var_11;
                var_19 = 3398313495681339099;
            }
        }
    }
    #pragma endscop
}
