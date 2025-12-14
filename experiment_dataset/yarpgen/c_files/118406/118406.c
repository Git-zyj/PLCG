/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_13 = (arr_0 [i_0]);
        var_14 = 10524975117425768162;
    }
    var_15 &= -var_4;
    var_16 = (min(var_16, ((var_11 ? (((var_0 ? var_0 : var_7))) : (max(var_5, -var_10))))));
    #pragma endscop
}
