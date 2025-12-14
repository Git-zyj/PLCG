/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((max(var_2, (~-6026)))) && var_14));
    var_17 = var_2;

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_18 *= ((((((arr_0 [10]) <= (((var_1 ? var_0 : -6026)))))) << (min(1, (arr_1 [6])))));
        var_19 = var_10;
    }
    var_20 |= 1;
    var_21 = 13147;
    #pragma endscop
}
