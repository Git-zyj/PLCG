/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 482921837754803202;
    var_12 *= max(var_10, ((var_1 ? ((var_1 ? var_5 : 18446744073709551598)) : ((482921837754803199 ? 11484032060138127955 : 18446744073709551614)))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 = var_10;
        var_14 = ((((-(min(var_2, var_0)))) != ((((!((min((arr_2 [i_0]), var_10)))))))));
        var_15 = var_10;
    }
    #pragma endscop
}
