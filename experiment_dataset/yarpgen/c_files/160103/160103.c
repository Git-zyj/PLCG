/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_12 *= arr_0 [i_0];
        arr_3 [12] |= (((((0 | (arr_2 [14])))) && (arr_2 [12])));
        var_13 *= ((~(-2147483647 - 1)));
    }
    var_14 *= (((max(var_3, var_2))));
    var_15 = var_1;
    #pragma endscop
}
