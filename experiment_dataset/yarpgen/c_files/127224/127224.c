/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [11] [i_0] = (((arr_0 [i_0] [i_0]) && (((var_0 >> (var_3 - 4669951083367144881))))));
        var_10 -= (((arr_1 [i_0] [i_0]) >> 1));
        arr_5 [i_0] = var_9;
        var_11 = (min(var_4, (max((max(var_0, var_3)), -var_3))));
        var_12 -= ((+((var_9 ? (arr_3 [i_0] [i_0]) : var_2))));
    }
    var_13 ^= ((!(((~(max(18446744073709551612, -4972097427562503275)))))));

    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        var_14 = var_1;
        var_15 = (max(var_15, (arr_6 [i_1] [i_1])));
        arr_8 [i_1] = (min((((var_5 && ((((arr_7 [i_1] [i_1]) ? var_6 : var_5)))))), -var_0));
    }
    #pragma endscop
}
