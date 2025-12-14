/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_7, 31));
    var_15 = (min(var_15, var_2));
    var_16 = ((!(var_1 * -var_11)));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_4 [5] = (((((min(255, var_1))) ? ((((arr_0 [i_0]) ? (arr_1 [i_0 - 2] [i_0]) : 3249359579))) : ((6671 ? 21752 : var_8)))) | (((16256 ? 21752 : ((var_5 ? (arr_2 [i_0]) : var_0))))));
        var_17 ^= 85;
    }
    #pragma endscop
}
