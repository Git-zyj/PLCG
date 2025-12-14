/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] = -1168606142;
        var_13 = ((1 ? 65535 : -24));
    }
    var_14 = (((var_1 ? var_10 : var_5)));
    var_15 = ((((min(var_5, var_4))) + var_9));
    var_16 = ((((var_6 ^ 127) || (((var_10 ? 8882497483850173513 : var_3))))));
    #pragma endscop
}
