/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((((max(var_10, var_0))) < var_13)))));
    var_17 = var_11;
    var_18 = 12669343838579961288;

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0 - 2] = (((((arr_0 [i_0 + 1]) ? 16777215 : var_10)) / var_4));
        var_19 ^= ((((((15873194683333006187 ? (arr_0 [6]) : var_13)))) ? ((0 ? (-127 - 1) : 1)) : var_4));
    }
    var_20 = var_12;
    #pragma endscop
}
