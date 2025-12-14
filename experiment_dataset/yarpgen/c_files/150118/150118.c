/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;
    var_15 += var_12;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = (max(1776334159, 2518633136));
                var_17 = (max(var_17, ((((((var_2 ? var_0 : var_7))) ? ((min(var_10, var_3))) : var_10)))));
            }
        }
    }
    var_18 -= (max((min(((16139 ? 193 : -94)), var_3)), (((((var_12 ? -590959132 : 3627216063246882174))) ? var_1 : ((3627216063246882174 ? 21579 : 22732))))));
    #pragma endscop
}
