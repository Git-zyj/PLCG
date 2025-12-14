/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = max(-10656, ((51948 & ((var_15 ? 3 : var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = (((arr_3 [i_0]) ? (min((arr_5 [i_0]), 28311)) : ((var_13 ? var_4 : (~39)))));
                var_18 = (max(var_18, ((min((min((-1929986533 < 1073741823), (arr_6 [i_0 + 1] [i_0] [i_0 + 1]))), var_10)))));
            }
        }
    }
    #pragma endscop
}
