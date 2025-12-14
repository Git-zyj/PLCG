/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= -86580770;
    var_13 = ((52 ? var_11 : (((var_8 != var_1) ? (var_1 || var_0) : (~var_7)))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (((((((min(-1673883321, (arr_1 [9] [i_0])))) ? ((-1673883321 ? var_7 : var_11)) : (arr_1 [i_0] [i_0])))) ? ((max((arr_1 [i_0] [i_0]), (1673883321 - var_8)))) : (max((((arr_0 [i_0]) ? (arr_0 [i_0]) : 1673883337)), (arr_0 [i_0])))));
        var_14 = (min((arr_1 [i_0] [i_0]), 1723280130));
        var_15 = ((!(88 & 159545399787996286)));
        var_16 = var_11;
    }
    var_17 = ((((((-1673883337 + 2147483647) >> ((((max(var_2, var_8))) - 20478))))) ? ((min((max(var_8, 88)), var_8))) : (((117 ? var_8 : var_7)))));
    #pragma endscop
}
