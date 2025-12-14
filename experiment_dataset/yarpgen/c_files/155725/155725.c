/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_18 = ((((((((-(arr_0 [i_0 + 1])))) ? (min(18446744073709551615, 18446744073709551615)) : ((((-9223372036854775807 - 1) | 33750)))))) || (((59700 ? (arr_1 [i_0]) : (var_13 / 11449951386163733649))))));
        var_19 = 1;
        var_20 = (max(var_20, (min(((((arr_1 [i_0 - 1]) != (arr_1 [i_0 + 1])))), ((-(arr_1 [i_0 + 1])))))));
        var_21 = 131;
    }
    var_22 = (min(var_22, var_4));
    var_23 = var_11;
    var_24 = (max(var_0, ((((458299088 ? 6096445727199139402 : var_10))))));
    #pragma endscop
}
