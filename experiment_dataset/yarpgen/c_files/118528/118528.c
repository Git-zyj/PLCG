/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 = (min(var_14, -21583));
        var_15 = ((16590 ? (arr_0 [i_0]) : ((~(arr_0 [i_0])))));
    }
    #pragma endscop
}
