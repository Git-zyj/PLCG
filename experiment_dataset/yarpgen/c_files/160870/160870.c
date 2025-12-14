/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 252;
    var_17 = 252;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 ^= ((((max(246, -var_15))) ? (((var_6 <= (arr_0 [i_0])))) : (((((-(arr_1 [i_0])))) ? (arr_1 [i_0]) : (6 | 0)))));
        var_19 = (max((((arr_0 [i_0]) != (arr_0 [i_0]))), (-9131097709961508052 < 215)));
    }
    var_20 -= ((var_15 ? (!var_1) : ((var_12 >> (246 - 242)))));
    #pragma endscop
}
