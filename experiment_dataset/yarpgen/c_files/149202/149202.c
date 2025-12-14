/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (~var_10)));
    var_13 = (((var_7 ^ var_1) / (((((-9223372036854775807 - 1) / 12)) ^ var_10))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_14 = var_3;
        var_15 = var_0;
        var_16 = (18446744073709551592 && 56);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_17 -= var_11;
        var_18 -= (arr_2 [i_1]);
        var_19 += (((!12473852783409491082) ? var_6 : ((var_4 ? var_6 : ((var_6 ? (arr_4 [i_1]) : 1))))));
    }
    var_20 = var_4;
    #pragma endscop
}
