/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = 30389;
                var_12 = (max(var_12, 11366));
            }
        }
    }
    var_13 = (max(var_13, (((-20180 ? (var_5 - -14399) : var_9)))));
    #pragma endscop
}
