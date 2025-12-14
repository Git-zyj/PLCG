/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_20 *= 60;
                var_21 = ((0 << (((~var_11) - 14018))));
            }
        }
    }
    var_22 = 18035;
    var_23 = (min(var_23, (-5772224147902169175 / -5772224147902169175)));
    #pragma endscop
}
