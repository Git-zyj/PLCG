/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_11 -= 435772254982529426;
                var_12 = 31389;
            }
        }
    }
    var_13 = 107;
    var_14 = var_2;
    var_15 -= 65535;
    #pragma endscop
}
