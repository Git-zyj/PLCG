/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 = (arr_0 [i_0]);
        var_16 = (min(var_16, (arr_0 [i_0])));
        arr_2 [i_0] [i_0] = (~var_1);
        arr_3 [i_0] = (((1515602465 ? var_10 : (arr_0 [i_0]))));
    }
    var_17 ^= var_11;
    #pragma endscop
}
