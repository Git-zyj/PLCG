/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max((max((arr_0 [i_0]), (((39019 ? var_6 : 63100))))), (((max(var_9, (arr_0 [i_0]))) * (max((arr_0 [i_0]), (arr_1 [i_0])))))));
        var_14 = (min(var_14, 32418));
        var_15 -= (max(var_5, (max(45705, (arr_0 [0])))));
    }
    var_16 = ((((((0 ? var_6 : 255)))) ? (((!63) | (max(9223372036854775807, 1)))) : ((((max(var_5, (-127 - 1)))) ? (max(178, 9223372036854775805)) : ((((-127 - 1) - var_7)))))));
    var_17 = ((((var_3 ? var_11 : 28364)) << ((((max(50059, 48886))) - 50043))));
    var_18 = ((((!(((16204 ? 49407 : var_5))))) ? (((max((max(65535, 139)), var_2)))) : var_4));
    #pragma endscop
}
