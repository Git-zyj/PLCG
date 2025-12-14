/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (~(((max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))) ^ (1 ^ 9007199254740991))));
        var_19 = (min(var_19, (((((arr_0 [i_0] [i_0]) ? (((min((arr_1 [2]), -66)))) : ((1 ? 1 : var_1))))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_20 *= max((((-(((arr_0 [i_1] [i_1]) ? var_5 : 0))))), (((var_6 && 1) ? (((arr_0 [8] [8]) >> (60503 - 60490))) : (arr_1 [4]))));
        var_21 = (min(var_21, var_6));
    }
    var_22 = 14765626810800250310;
    #pragma endscop
}
