/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_17 = ((1920 ? 1322115113 : 684898707));
                var_18 = var_7;
            }
        }
    }
    #pragma endscop
}
