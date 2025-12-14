/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_17 = 751164224;
        var_18 ^= (!156);
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        var_19 = (max(var_19, (arr_2 [i_1])));
        arr_4 [19] [19] = -10891;
    }
    var_20 = (~var_2);
    var_21 = var_3;
    #pragma endscop
}
