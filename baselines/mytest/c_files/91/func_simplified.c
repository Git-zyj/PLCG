/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91
Invocation: ../scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91 -o /data/zyj/loop_generator/baselines/yarpgen/mytest/c_files/91
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= (+-1);

    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3)
    {
        var_20 = (arr_1 [i_0]);
        var_21 = ((+((-(((arr_0 [i_0]) - (arr_1 [i_0])))))));
    }
    var_22 = (max(var_22, var_13));
    var_23 = (max(var_7, var_6));
    #pragma endscop
}
