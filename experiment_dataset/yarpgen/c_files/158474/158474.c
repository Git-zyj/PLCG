/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_17 = (min(7340032, var_6));
                var_18 = var_1;
                var_19 *= var_10;
            }
        }
    }
    var_20 = (min(var_15, (~1073709056)));
    var_21 &= var_1;
    var_22 = ((!((min(var_3, (var_4 * var_14))))));
    #pragma endscop
}
