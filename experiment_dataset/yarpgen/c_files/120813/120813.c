/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += (63 ? -71 : 128);

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_11 = (((~-63) < (((((48 ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        var_12 = (arr_1 [i_0]);
        var_13 *= var_1;
        var_14 = (arr_1 [i_0 - 1]);
        var_15 = ((arr_1 [i_0]) ? ((((var_8 % 1691405054) >> ((var_8 / (arr_1 [i_0 + 1])))))) : ((-(arr_1 [i_0 - 1]))));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        var_16 *= 88;
        var_17 = (max(var_17, ((min(((((min(var_3, (arr_3 [i_1]))) > ((var_5 ? (arr_2 [i_1]) : 1959569449))))), var_2)))));
    }
    var_18 ^= ((((((((var_0 ? var_7 : 10819491163608699355))) ? var_7 : ((min(var_8, var_1)))))) ? var_1 : ((((var_6 / var_9) != var_1)))));
    #pragma endscop
}
