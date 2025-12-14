/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_3, 32697));
    var_11 = (min(var_11, -0));
    var_12 = var_6;

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_13 = (arr_0 [i_0] [i_0]);
        var_14 = (max(var_14, (--0)));
        var_15 = var_2;
    }
    var_16 = (max(var_16, (~-var_4)));
    #pragma endscop
}
