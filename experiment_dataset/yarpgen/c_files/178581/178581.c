/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        var_12 = ((~((((max(var_4, (arr_1 [i_0 + 2])))) ? (min((arr_0 [i_0]), (arr_1 [i_0 + 3]))) : var_2))));
        var_13 = (max(var_13, (((~(arr_0 [i_0 + 3]))))));
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1)
    {
        var_14 = 2298514535;
        var_15 = var_2;
        var_16 = (arr_2 [i_1 + 1] [i_1]);
        var_17 = (arr_2 [i_1 - 2] [i_1]);
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_18 = (min(var_18, (((((var_7 ? (arr_7 [i_2] [i_2]) : (((~(arr_1 [i_2])))))) / (max(1, (((-532620448 & (arr_1 [i_2])))))))))));
        var_19 = ((((var_3 ? (min((arr_5 [i_2] [i_2]), (arr_0 [i_2]))) : ((var_2 * (arr_0 [5]))))) ^ (((((max(var_5, (arr_0 [i_2]))) <= -532620448))))));
    }
    #pragma endscop
}
