/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0 + 2] = 0;
        var_11 -= ((-1 ? (max(((0 ? (-2147483647 - 1) : -4710)), 1)) : 1));
    }
    var_12 += ((((min(((127 ? 1 : 0)), 37))) ? (1 != -var_5) : ((var_4 ? var_5 : (14 && 10)))));
    var_13 += ((var_4 ? var_3 : var_2));
    #pragma endscop
}
