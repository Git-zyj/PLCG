/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((var_8 & (var_3 - var_2)))) ? var_8 : ((905376819 ? (((max(175, 16440)))) : var_3))));
    var_11 = var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_12 = 9223372036854775807;
        arr_2 [i_0] &= (((((arr_0 [i_0]) || 8)) || (0 || 68)));
    }
    #pragma endscop
}
