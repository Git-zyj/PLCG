/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((-var_5 ? var_11 : var_16))) ? var_7 : var_18));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_21 = -var_17;
                var_22 &= (max(((max(7680, 167))), ((-362119912 ? 89 : 4))));
            }
        }
    }
    var_23 |= max(var_8, (((((min(var_13, 18446744073709551615))) ? (!var_1) : (var_10 * var_15)))));
    var_24 = var_12;
    var_25 |= var_6;
    #pragma endscop
}
