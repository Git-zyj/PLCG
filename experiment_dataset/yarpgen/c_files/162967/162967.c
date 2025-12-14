/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_15 = var_13;
        arr_3 [i_0] [i_0] = ((((((((min(var_10, (arr_2 [i_0] [i_0])))) || -32756)))) - (min(1, 3941420536))));
    }
    var_16 = (var_8 || 4149296541);
    #pragma endscop
}
