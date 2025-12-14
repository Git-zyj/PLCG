/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = min(var_5, var_13);

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_19 -= (min((arr_1 [i_0]), (((arr_0 [i_0 + 1]) + ((min(var_0, var_8)))))));
        var_20 = (~-32748);
        var_21 = min(((-4453301147813696844 ? (((~(arr_0 [i_0])))) : -4453301147813696844)), ((min((((arr_0 [i_0]) ? var_1 : 1)), ((min((arr_1 [i_0]), (arr_1 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_22 = (((((min((arr_2 [i_1]), var_17))) << ((((~(arr_3 [i_1] [i_1]))) + 56294)))));
        var_23 = ((~(min(var_11, 32767))));
    }
    #pragma endscop
}
