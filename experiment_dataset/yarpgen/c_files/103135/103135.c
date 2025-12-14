/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    var_15 = (((((-560868331 ? 25286291 : -25286294))) ? (((min(var_4, 2147483641)))) : (((-50 ? var_12 : var_12)))));
    var_16 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_17 = (max(var_7, var_13));
                var_18 += var_0;
            }
        }
    }
    #pragma endscop
}
