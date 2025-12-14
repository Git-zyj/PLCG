/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 = (arr_0 [i_0]);
        var_13 = (min(var_13, var_0));
        var_14 -= ((~((((max(var_8, (arr_1 [15])))) & var_10))));
        var_15 = -var_1;
    }
    var_16 = var_6;
    #pragma endscop
}
