/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_13 = 0;
        arr_2 [i_0] = ((var_11 + (arr_1 [i_0])));
        var_14 = (((arr_0 [i_0]) ? var_11 : ((((min((arr_0 [i_0]), (arr_1 [i_0])))) ? var_3 : (512 % var_7)))));
    }
    var_15 &= var_6;
    var_16 = (var_5 * ((var_8 - ((126 ? 11 : 14848333978982774883)))));
    #pragma endscop
}
