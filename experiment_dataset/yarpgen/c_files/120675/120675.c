/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= -35;
    var_18 = (min(var_1, (((-1 ? var_3 : var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1] [8] = 0;
                var_19 = arr_2 [4] [2] [i_1];
                var_20 |= arr_1 [i_0];
            }
        }
    }
    var_21 = var_14;
    var_22 = var_12;
    #pragma endscop
}
