/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((min(var_5, var_1))) ? ((-(var_10 + 19))) : var_6));
    var_12 = var_0;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_13 += (arr_0 [8]);
        arr_3 [i_0] [i_0] = var_5;
    }
    var_14 = (max(var_14, ((var_1 ? var_0 : var_5))));
    #pragma endscop
}
