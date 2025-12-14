/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= var_16;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_21 = (max((((var_6 * var_2) / -419199148959675198)), ((min(var_15, (((arr_3 [i_0]) / 816222329)))))));
                var_22 *= var_17;
            }
        }
    }
    var_23 = ((!((((144114638320041984 ? var_15 : var_4))))));
    #pragma endscop
}
