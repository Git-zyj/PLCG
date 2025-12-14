/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = var_10;
                var_12 = var_1;
                var_13 = (((((4294967281 ? var_5 : -19892)))));
            }
        }
    }
    var_14 = (max(var_14, 9223372036854775807));
    #pragma endscop
}
