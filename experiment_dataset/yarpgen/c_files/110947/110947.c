/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        var_18 = ((-(((arr_2 [i_0]) << (((arr_0 [i_0 - 4]) - 744784741570136651))))));
        var_19 -= (((1 ? 173 : 105)) + ((var_13 ? 173 : (arr_2 [7]))));
    }
    var_20 &= var_0;
    var_21 = (68 ? (var_9 <= var_4) : (((((min(var_14, 191))) > -1907750615))));
    #pragma endscop
}
