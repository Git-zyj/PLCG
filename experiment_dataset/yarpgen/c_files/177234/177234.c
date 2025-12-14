/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_11 = (arr_1 [i_0] [i_0]);
        var_12 = -var_6;
    }
    var_13 = (!65504);
    var_14 = (-(((max(-185920948, 1)) << (var_4 - 4220222471))));
    var_15 = 2022542809;
    #pragma endscop
}
