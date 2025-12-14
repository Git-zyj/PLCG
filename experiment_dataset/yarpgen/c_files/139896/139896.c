/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((var_9 ? ((min(12053, var_11)) : ((var_12 ? var_11 : 119))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = ((((max(var_12, var_0))) << (var_5 + 13)));
                var_15 = (min(var_15, 32));
            }
        }
    }
    var_16 = ((~((var_5 ? (((var_11 >> (var_10 - 17317272695070933257)))) : var_9))));
    var_17 = (min(var_17, ((max((((var_1 != var_2) ? var_4 : var_5)), var_5)))));
    #pragma endscop
}
