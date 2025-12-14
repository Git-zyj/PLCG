/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!((((var_3 ? var_6 : 54162)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = ((38496 ? ((21 ? 39429 : (arr_2 [i_0]))) : 19120));
        var_11 = ((71 ? (((var_4 / (arr_1 [i_0])))) : (((arr_2 [i_0 - 1]) - 27039))));
    }
    var_12 = var_3;
    var_13 *= (var_2 % var_8);
    var_14 = ((var_3 > (((var_5 ? var_8 : var_4)))));
    #pragma endscop
}
