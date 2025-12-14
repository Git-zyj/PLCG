/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = ((((min(-45, var_1))) ? 107 : var_8));
        var_10 |= var_7;
    }
    var_11 = ((var_7 / ((max(var_1, ((15925 ? 36331 : 0)))))));
    var_12 = ((min(var_7, ((0 ? 8190768189380225117 : -97)))) & var_0);
    var_13 -= var_5;
    var_14 = 36331;
    #pragma endscop
}
