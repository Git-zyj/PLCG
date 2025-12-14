/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_3));

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        var_14 = (((arr_1 [i_0]) ? var_12 : (((!66) ? (arr_1 [i_0 + 3]) : 68))));
        var_15 = (max(var_15, (((var_6 != (~65535))))));
    }
    #pragma endscop
}
