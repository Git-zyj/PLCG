/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -var_2;
    var_11 = (min(var_11, (((20 ? var_5 : (((-2147483647 - 1) + 127)))))));
    var_12 = var_4;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 = (min(var_13, (((0 ? -111 : 255)))));
        var_14 &= (max(var_3, ((((var_6 ? (arr_1 [i_0]) : (arr_1 [i_0]))) & (max((arr_1 [i_0]), (arr_0 [i_0])))))));
    }
    #pragma endscop
}
