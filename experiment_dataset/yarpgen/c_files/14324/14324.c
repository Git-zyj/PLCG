/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= var_0;
    var_13 = ((max(1, (max(var_10, var_5)))));
    var_14 = 68;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = ((~(arr_1 [i_0])));
        var_16 = (min(var_16, var_7));
    }
    #pragma endscop
}
