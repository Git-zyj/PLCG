/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_15;

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_21 = arr_3 [i_0 - 2];
        var_22 &= (arr_1 [4]);
        var_23 |= (((((arr_0 [i_0 + 1]) ? (arr_1 [8]) : (arr_1 [12]))) != (17592186044415 > -17592186044424)));
    }
    var_24 += var_19;
    #pragma endscop
}
