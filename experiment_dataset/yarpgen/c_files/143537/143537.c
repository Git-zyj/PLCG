/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= 1;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = 855357360329971350;
        arr_4 [1] = ((28510 ? -1 : 29));
        var_17 = (arr_3 [i_0]);
    }
    var_18 = var_7;
    var_19 = (min(var_19, (((((0 ? 37 : 11)))))));
    #pragma endscop
}
