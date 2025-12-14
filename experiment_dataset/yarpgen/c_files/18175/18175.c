/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = var_16;
        arr_3 [i_0] = (((144114638320041984 | var_11) ? (((-(63708 && 4095)))) : 3529692377));
    }
    var_18 = ((((max(4101, 15)))) || 105);
    #pragma endscop
}
