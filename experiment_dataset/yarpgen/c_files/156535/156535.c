/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (22156 & var_5);
    var_19 = var_15;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_20 = -var_3;
        var_21 = -10;
        var_22 = (arr_0 [i_0 + 3]);
        var_23 = 9;
        var_24 = ((!(((-(arr_1 [i_0 + 3] [i_0]))))));
    }
    var_25 = var_8;
    #pragma endscop
}
