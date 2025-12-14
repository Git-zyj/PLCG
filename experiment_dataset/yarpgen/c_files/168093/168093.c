/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_11 ^= ((((!(!185))) ? ((var_0 ? (arr_0 [i_0]) : ((19713 ? (arr_2 [i_0]) : var_0)))) : (((((-(arr_2 [i_0])))) ? var_10 : var_4))));
        var_12 = (((((((((-(arr_2 [i_0]))) + 2147483647)) << 1))) || (arr_2 [i_0])));
        var_13 ^= ((min((((var_0 / (arr_0 [i_0])))), var_3)));
        var_14 = (max(var_8, (((((arr_0 [1]) && (arr_1 [1]))) ? (arr_0 [i_0]) : -19709))));
    }
    var_15 ^= ((var_4 && (((var_8 ? var_7 : var_0)))));
    var_16 = ((var_1 % ((1 ? var_1 : -19709))));
    #pragma endscop
}
