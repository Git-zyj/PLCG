/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_12 = (max(var_12, ((min((((max(0, 207)))), var_3)))));
                var_13 = (-(max((~82261666), (~var_7))));
            }
        }
    }
    var_14 = var_9;
    #pragma endscop
}
