/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= (!(((var_11 ? var_8 : ((var_2 ? (-9223372036854775807 - 1) : var_3))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = ((+(((!(((-2147483636 ? (arr_0 [i_0] [9]) : var_1))))))));
        arr_3 [1] [i_0] = ((((((min(var_11, var_10)) == var_16))) & ((-((50 ? 2147483624 : var_7))))));
    }
    #pragma endscop
}
