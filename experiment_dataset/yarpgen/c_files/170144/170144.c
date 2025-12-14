/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_20 = (min(var_20, ((((((((var_8 / (arr_1 [i_0])))) ? (65531 / 1) : (((arr_1 [6]) ? (arr_1 [i_0]) : var_2)))) * (arr_1 [i_0]))))));
        var_21 = (max(var_21, (((-((1 << (var_12 - 189))))))));
        arr_2 [4] |= 185;
    }
    var_22 -= var_11;
    var_23 = ((~((max(1, var_2)))));
    #pragma endscop
}
