/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (~var_4);
        arr_4 [i_0] = var_14;
        var_16 = (max(var_16, 1));
    }
    var_17 = (4294967294 ? 516668331 : var_6);
    #pragma endscop
}
