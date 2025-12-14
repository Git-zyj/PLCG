/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_2 | (min(var_0, var_0))));
    var_14 -= ((2147483647 ? var_7 : var_10));
    var_15 = ((-(var_12 ^ 988960665)));

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        var_16 = (min(var_16, ((((((200 ? (arr_0 [6]) : (arr_0 [1])))) >= (max(-80, 8075517499915057956)))))));
        arr_3 [i_0] = 2041224454;
        var_17 = (max(-8075517499915057968, 1));
    }
    var_18 ^= 0;
    #pragma endscop
}
