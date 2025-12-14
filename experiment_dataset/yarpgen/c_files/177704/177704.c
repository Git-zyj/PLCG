/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 = ((220 >> (6861 - 6861)));
        arr_2 [i_0] [0] &= ((((-(max(6832, 11049330975569957037)))) ^ 116));
        var_17 &= (arr_1 [i_0]);
    }
    var_18 = var_13;
    var_19 = var_14;
    #pragma endscop
}
