/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0 - 1] [i_0] = (min((((((12253069443653058628 ? 15 : -89)) != -123))), ((((((arr_0 [i_0]) ? (arr_0 [4]) : var_8))) ? (((arr_0 [i_0]) ^ var_3)) : -47394294))));
        var_14 = ((~((-(min((arr_1 [i_0]), var_0))))));
        var_15 = ((((min((((-47394265 ? (arr_1 [i_0 + 1]) : var_8))), ((5 ? var_9 : var_7))))) ? var_6 : ((((((arr_1 [i_0]) ? var_12 : (-127 - 1)))) ? ((min((arr_1 [i_0]), (arr_0 [i_0 + 1])))) : (arr_0 [i_0 + 1])))));
    }
    var_16 = (-2147483647 - 1);
    var_17 = min((min(18446744073709551615, -var_11)), (102 && var_1));
    #pragma endscop
}
