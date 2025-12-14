/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_4 [i_0] = (min(748951689, (((arr_3 [i_0]) ? var_10 : (arr_3 [i_0])))));
        var_20 ^= ((((((arr_1 [i_0] [i_0]) >> (((arr_1 [i_0] [i_0]) - 3640))))) * (arr_0 [i_0] [i_0])));
    }
    var_21 *= (((((((var_15 ? 0 : var_5))) ? ((-4046188437759753976 ? var_7 : var_9)) : (var_5 / -748951689))) / (((var_6 & (((-748951690 + 2147483647) >> (var_10 - 17488552564364198249))))))));
    #pragma endscop
}
