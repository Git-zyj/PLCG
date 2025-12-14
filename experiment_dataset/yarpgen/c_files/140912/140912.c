/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_4 [8] &= ((~(((arr_3 [4] [i_0 - 1]) & (arr_3 [10] [i_0 - 1])))));
        var_11 = var_8;
        var_12 &= (3715719170 - 1);
    }
    var_13 -= var_4;
    #pragma endscop
}
