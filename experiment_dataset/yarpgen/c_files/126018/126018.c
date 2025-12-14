/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_5 ? ((((max(4407295363627696979, var_5))) ? var_4 : (max(var_5, var_7)))) : var_6));
    var_13 = var_4;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_14 = ((((var_5 ? (~222) : 8436390105625336755)) ^ ((((arr_1 [i_0]) << (60 ^ 60))))));
        var_15 = (((((~(arr_0 [i_0])))) ? (max(var_7, ((25 ? (arr_1 [1]) : 61765)))) : (((min(var_9, (arr_1 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_4 [i_1] [i_1] = (((((!(((0 * (arr_3 [i_1]))))))) - (arr_3 [i_1])));
        arr_5 [i_1] = (arr_3 [i_1]);
    }
    var_16 += ((~(((max(var_5, var_11)) << (var_9 - 40949)))));
    #pragma endscop
}
