/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_13 = ((1 ? var_6 : var_0));
        arr_2 [i_0] [3] = (min((((var_8 + 2147483647) >> (var_10 + 22954))), (((((7800111898093531053 << (3535683507004604867 - 3535683507004604814)))) ? (16382 == var_4) : (var_6 + var_1)))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_6 [i_1] = ((((var_11 & (4294950928 | 4294950928))) < (~var_5)));
        var_14 *= (min((max(4294950928, (arr_3 [i_1] [i_1]))), (((-(arr_1 [i_1]))))));
    }
    for (int i_2 = 2; i_2 < 14;i_2 += 1)
    {
        var_15 &= (((arr_7 [i_2]) << ((((~(min(var_8, var_12)))) - 2071423491))));
        var_16 = (max(var_16, (arr_8 [1])));
        arr_9 [13] [i_2] = (!-var_0);
        var_17 = (min(var_17, ((((~var_8) >> (var_9 - 28859))))));
    }
    var_18 *= ((((-(var_6 / var_0))) & (~var_7)));
    #pragma endscop
}
