/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_12 = (((!32) ? (((~26) ? ((128 ? 114 : 121)) : -21)) : ((68 ? 128 : 78))));
        arr_2 [i_0] = ((110 ? 157 : ((60 ? 104 : 1174274661))));
        var_13 = 50;
        var_14 = ((~(~-1)));
    }
    var_15 = var_7;
    var_16 = (min(var_16, -2048860121));
    #pragma endscop
}
