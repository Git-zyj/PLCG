/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((-4 ? 1 : var_14)));
    var_21 |= (((!var_11) ? 1 : (11 || var_15)));
    var_22 = var_7;
    var_23 -= var_2;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_24 = (~var_19);
                    var_25 = (min(var_25, (8834170345044500130 || 16)));
                }
            }
        }
    }
    #pragma endscop
}
