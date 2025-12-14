/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_7 ? ((min((min(var_9, var_10)), var_12))) : (max(((9730 ? -1 : var_7)), (var_4 ^ var_4)))));
    var_15 = var_0;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] = (max((max(9723, var_12)), -9719));
        arr_5 [i_0] = var_11;
    }
    #pragma endscop
}
