/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += (var_1 != var_10);
    var_12 = var_3;
    var_13 = var_7;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_14 = ((!(arr_0 [i_0] [i_0])));
        var_15 = (max(var_15, (!103)));
        arr_4 [i_0] = 1;
        var_16 = (max(var_16, (((arr_2 [i_0]) ? ((1 ? (arr_1 [i_0]) : (arr_1 [i_0]))) : ((-106 ? 189 : 2049734614))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_17 &= 2049734614;
        var_18 = (max(var_18, (((1 ? ((1 ? (arr_5 [i_1]) : (arr_5 [i_1]))) : (arr_5 [i_1]))))));
        var_19 = (min(var_19, ((((+((255 ? (-2147483647 - 1) : (arr_5 [i_1])))))))));
    }
    #pragma endscop
}
