/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((var_13 ? var_9 : var_3)))) + (((-99 * var_6) ? (min(var_1, var_10)) : -9477))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((!(arr_3 [i_0] [i_0 - 4] [i_1])));
                arr_5 [i_0] = (min(((((max(1, var_4))) ? (var_11 * var_12) : (((min(var_7, var_13)))))), (-26114 * var_12)));
            }
        }
    }
    #pragma endscop
}
