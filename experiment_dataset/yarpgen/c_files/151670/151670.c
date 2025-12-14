/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -var_8;
    var_16 = 9223372036854775807;
    var_17 += var_2;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 ^= (((9223372036854775801 ? -9223372036854775807 : (arr_1 [i_0] [i_0]))));
        arr_3 [i_0] = max(4890211495314657147, -9223372036854775807);
    }
    #pragma endscop
}
