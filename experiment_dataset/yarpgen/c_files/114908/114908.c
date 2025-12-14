/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = ((18446744073709551615 ? -25200 : 18446744073709551615));
        arr_4 [i_0] [i_0] = -997081448;
    }
    var_18 = (min(var_18, var_5));
    var_19 = ((((((var_12 << (var_14 - 123))))) ? ((31 ? 1440115140 : -997081449)) : (((((0 ? var_0 : -7486711690451579267))) ? var_4 : (!var_16)))));
    var_20 = (max(var_20, var_5));
    #pragma endscop
}
