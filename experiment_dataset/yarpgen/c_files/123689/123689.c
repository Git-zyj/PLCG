/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((max(-3412744093360910408, var_8)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 = 2139134510310158988;
        arr_2 [10] = var_10;
    }
    var_15 = 31525888;
    #pragma endscop
}
