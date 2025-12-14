/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = 127;
        var_14 = ((((-(min((arr_1 [i_0]), (arr_1 [i_0 - 1]))))) + -56));
        var_15 |= (arr_0 [i_0] [i_0]);
    }
    var_16 -= var_4;
    #pragma endscop
}
