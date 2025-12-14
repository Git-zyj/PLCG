/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;
    var_19 = (min(var_19, (1078420018 + -1078420018)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 = (max(var_20, (124 == -124)));
        arr_3 [7] = arr_0 [i_0] [11];
        arr_4 [i_0] = 126;
    }
    #pragma endscop
}
