/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_20 = (((((+(((arr_1 [i_0]) | -34))))) ? (((-(arr_0 [i_0])))) : (((arr_1 [i_0]) | ((((arr_0 [i_0]) != var_16)))))));
        var_21 = var_17;
    }
    var_22 ^= 415195604;
    #pragma endscop
}
