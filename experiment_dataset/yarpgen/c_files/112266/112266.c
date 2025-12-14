/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((((max(37012, 28534))) ? ((max((arr_2 [i_0]), -28524))) : (((((-(arr_1 [i_0])))) ? (arr_1 [i_0]) : -1))));
        var_14 -= (arr_1 [12]);
        var_15 ^= 4294967267;
        var_16 = (min(var_16, 37000));
    }
    var_17 = (min(var_17, var_13));
    #pragma endscop
}
