/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 64;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_19 ^= (((min(var_14, var_0))) ? var_6 : ((-((33776997205278720 ? 131 : 3403330356720153593)))));
                var_20 = (var_1 < 13729);
            }
        }
    }
    #pragma endscop
}
