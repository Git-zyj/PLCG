/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (90 ^ 90);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_14 = var_3;
                var_15 = ((-((min((arr_0 [i_0 + 1] [i_0 + 3]), var_11)))));
            }
        }
    }
    #pragma endscop
}
