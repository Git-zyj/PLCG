/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -416;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_17 = (((((391 << (var_9 - 152)))) ? (((126 && var_5) >> 1)) : ((var_12 ? 1 : 1))));
                var_18 = var_8;
                var_19 ^= -15317;
            }
        }
    }
    var_20 = var_14;
    var_21 = ((((((-12057 == 1) ? (var_8 == 108) : -3))) ? 108 : (((1 ? 65 : var_9)))));
    #pragma endscop
}
