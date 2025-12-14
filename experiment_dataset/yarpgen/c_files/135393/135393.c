/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((987932269 ? var_15 : var_10))) * -8881662597429619442)));
    var_17 ^= var_14;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 = (((55 > 0) ? (((var_9 - var_0) ? (arr_0 [2]) : 11)) : (((-2147483647 - 1) ? (61892 == 3644) : (arr_1 [i_0])))));
        var_19 = 4044;
    }
    var_20 = min(((((var_5 % var_14) ? -1 : var_4))), (var_6 & var_1));
    #pragma endscop
}
