/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= (-(((var_3 <= var_6) ? var_6 : ((var_5 ? var_12 : var_7)))));
    var_14 *= ((var_9 && (((var_6 ^ (7789812155717226848 != var_1))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 *= ((((((arr_2 [i_0] [i_0]) * (arr_0 [6])))) ? (((arr_0 [14]) * -82)) : ((-(arr_2 [9] [i_0])))));
        var_16 = ((!(((-(arr_2 [i_0] [i_0]))))));
    }
    var_17 = max(((var_7 ? var_5 : (max(var_2, 10752539791035745163)))), var_7);
    var_18 = (var_8 - var_9);
    #pragma endscop
}
