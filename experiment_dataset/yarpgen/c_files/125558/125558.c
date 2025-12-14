/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((~((var_8 & (var_6 - var_7)))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_12 = 5;
        var_13 -= (arr_2 [i_0] [i_0]);
    }
    #pragma endscop
}
