/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((((max(var_14, var_3)) | (min(var_0, 1776970117)))), ((1 >> (var_3 + 296797299)))));
    var_16 = ((57 <= ((max(25, -26)))));
    var_17 = ((((min((max(var_7, 25390)), var_4))) ? var_1 : var_8));
    var_18 = ((var_4 - (max((var_8 - var_0), ((min(var_0, var_3)))))));

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_19 = (max((((arr_0 [i_0 - 3]) ? (min(13521833179726537367, -25)) : (arr_0 [i_0]))), (((-23 ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 2]))))));
        var_20 -= -var_14;
    }
    #pragma endscop
}
