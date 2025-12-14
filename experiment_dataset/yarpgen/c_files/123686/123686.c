/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= var_3;
    var_14 = 18446744073709551615;
    var_15 = (75 & var_8);
    var_16 = var_10;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [7] [i_0]) ? ((-(arr_1 [i_0]))) : var_5));
        var_17 = ((18446744073709551615 - (((min(var_4, var_4))))));
        var_18 = var_5;
    }
    #pragma endscop
}
