/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_12 = (max((((var_0 ? (arr_0 [i_0]) : var_2))), (arr_0 [i_0])));
        var_13 = (max(var_1, (min(1898726235, 13321194175902705678))));
    }
    var_14 |= var_9;
    #pragma endscop
}
