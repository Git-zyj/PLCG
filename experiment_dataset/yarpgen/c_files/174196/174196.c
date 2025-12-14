/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (--1467337178);
    var_17 = -239094884;
    var_18 ^= ((((((-2839 ? var_1 : var_3)))) ? ((((((var_13 ? 3795117222 : var_3))) && 83))) : (((-7 >= (-9 != -1467337178))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_19 = ((max((arr_0 [i_0]), 12)));
        var_20 ^= (+((-6833934275206439321 ? (arr_1 [i_0]) : -1467337170)));
        arr_2 [i_0] = -1467337177;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_21 = min((~-7), (((arr_3 [i_1] [i_1]) ? -1467337201 : (max(-6833934275206439312, 65535)))));
        var_22 = ((((!6833934275206439320) ? -9 : 63)));
    }
    #pragma endscop
}
