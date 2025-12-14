/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (((min(var_18, (((arr_0 [i_0 - 2]) ? var_16 : 32767)))) | (32758 >= 32733)));
        arr_3 [i_0] = (((((((var_2 ? var_6 : var_0)) - ((max((arr_0 [9]), var_5)))))) ? -2109647261 : (((((arr_0 [i_0]) * var_18)) | (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [1])))))));
    }
    var_20 &= 25859;
    #pragma endscop
}
