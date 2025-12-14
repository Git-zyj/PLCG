/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((~((((min(var_9, var_4))) ? (157 - 32766) : -var_8))));

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        var_11 += -3;
        var_12 = (((((var_7 ? ((((26845 < (arr_2 [15]))))) : (max(var_1, (arr_0 [0])))))) ? (38691 < 26817) : (arr_1 [i_0])));
    }
    var_13 ^= var_0;
    #pragma endscop
}
