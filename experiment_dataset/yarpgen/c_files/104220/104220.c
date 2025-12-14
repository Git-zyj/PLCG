/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -4915068145988778805;

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_20 &= arr_1 [i_0];
        var_21 = (max(var_21, ((max(var_16, (max(-4915068145988778805, -4915068145988778788)))))));
        var_22 |= (1791632930997671992 & (((min((arr_1 [i_0 - 1]), (arr_1 [i_0 + 1]))))));
    }
    #pragma endscop
}
