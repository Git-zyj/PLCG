/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= ((var_9 ? -182 : ((max(16511, (var_10 < var_10))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_12 |= var_3;
                var_13 = ((((min(var_1, var_10))) + -16511));
                var_14 = (max(var_14, (!-1989440789)));
            }
        }
    }
    var_15 |= var_5;
    #pragma endscop
}
