/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((max((~var_11), (min(var_11, var_10)))) ^ var_5));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 = ((min((arr_1 [i_0]), (((arr_2 [21]) ? (arr_2 [i_0]) : var_3)))));
        var_15 |= (((arr_1 [9]) - ((~(-2147483647 - 1)))));
        var_16 = (min(var_16, ((min((arr_1 [i_0]), (min((max((arr_1 [i_0]), 67108863)), ((65535 ? 120 : 12)))))))));
        arr_3 [i_0] [0] = var_1;
        arr_4 [i_0] = (((max(var_10, (var_2 || 4294967295))) << (min((arr_2 [i_0]), ((min(2147483647, (arr_0 [i_0] [14]))))))));
    }
    var_17 = ((((((var_12 + var_10) ? (max(var_6, var_12)) : var_1))) ? 65535 : var_7));
    var_18 += var_12;
    #pragma endscop
}
