/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((((~(arr_1 [i_0])))) ? (((var_1 + 2147483647) << (((arr_2 [i_0]) - 4300205807744896988)))) : (((max(var_2, (arr_1 [i_0])))))));
        arr_5 [i_0] = var_13;
    }
    var_17 = var_13;
    var_18 = (max(var_18, (((((max(((106 ? 1 : 1)), (268435455 != 1)))) * (((-9223372036854775807 - 1) ? ((149 ? var_5 : -158726307)) : 26887)))))));
    #pragma endscop
}
