/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_13 *= ((((15702588059761701351 ? 4095 : ((((arr_1 [i_0] [i_0]) ? var_4 : (arr_0 [1])))))) / 2041447557));
        arr_3 [i_0] = ((~(((var_5 / 24205) * 1))));
    }
    var_14 = (max(var_14, ((187 ? 4095 : 511))));
    #pragma endscop
}
