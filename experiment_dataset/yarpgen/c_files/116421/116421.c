/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_20 += (((arr_0 [i_0 + 1] [i_0 + 1]) ? (arr_0 [0] [i_0 + 1]) : (arr_0 [i_0] [i_0 + 1])));
        var_21 = (min(var_21, (arr_1 [i_0])));
    }
    var_22 = ((var_16 + var_12) || ((min((min(var_5, -436620017)), (-32496 / var_5)))));
    var_23 = (var_1 % var_12);
    #pragma endscop
}
