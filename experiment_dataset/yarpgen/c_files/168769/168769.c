/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;
    var_16 = (((((min(35837, 235))) ? var_6 : ((min(var_4, 1))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_17 = (max(var_17, var_11));
        arr_2 [2] [i_0] = ((!(arr_1 [i_0])));
    }
    #pragma endscop
}
