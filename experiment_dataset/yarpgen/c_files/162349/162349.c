/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = 65527;
        arr_3 [0] [7] |= ((1 ? var_6 : 1));
        var_12 ^= 1;
        var_13 ^= (~11179257856883198002);
    }
    var_14 ^= var_9;
    var_15 = (min(1123700883587072, -var_3));
    var_16 = (max(var_10, 0));
    #pragma endscop
}
