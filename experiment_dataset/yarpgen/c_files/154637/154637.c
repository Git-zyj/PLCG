/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 = (((arr_1 [i_0]) / (arr_2 [i_0])));
        var_13 = (min(var_13, (arr_2 [i_0])));
    }
    var_14 = (min(var_14, ((var_6 | ((var_2 ? var_3 : ((var_10 ? var_1 : var_7))))))));
    #pragma endscop
}
