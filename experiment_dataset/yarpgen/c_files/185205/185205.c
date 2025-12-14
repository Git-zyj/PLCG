/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((max(-1, (max(var_2, -565833889)))));
    var_16 ^= var_4;
    var_17 = ((var_5 && (((min(var_1, var_1))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_18 = (min(var_18, (((!(((9223372036854775807 ? 1 : 3564378890))))))));
        var_19 = var_3;
        var_20 = (((arr_1 [i_0] [i_0]) ? (((arr_2 [i_0] [i_0]) ? 14404870494221382209 : 126976)) : (arr_0 [i_0] [i_0])));
        var_21 ^= (!var_8);
    }
    #pragma endscop
}
