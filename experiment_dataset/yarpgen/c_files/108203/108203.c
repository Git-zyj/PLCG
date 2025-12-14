/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_20 = ((1023 ? ((((!(((64486 ? (arr_1 [i_0] [i_0]) : var_1))))))) : ((1218177172581086825 ? 157 : ((8287051214852076881 ? 8406877387279080527 : 341717307))))));
        var_21 += (((((~(arr_0 [i_0] [i_0])))) >= (9 & 4095)));
        arr_2 [i_0] = ((((~((var_19 ? (arr_0 [i_0] [i_0]) : 0)))) & (((+((-3643 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))))))));
    }
    var_22 = (max(var_22, var_19));
    #pragma endscop
}
