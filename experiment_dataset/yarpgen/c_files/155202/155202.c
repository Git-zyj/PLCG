/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= var_9;
    var_19 = var_10;
    var_20 = var_4;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [8] &= 0;
        arr_3 [2] &= 588135246;
        arr_4 [i_0] [i_0] = 0;
    }
    var_21 = var_6;
    #pragma endscop
}
