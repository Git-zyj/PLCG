/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = ((var_14 + ((((var_13 ? var_7 : (arr_1 [i_0])))))));
        arr_3 [i_0] = (((((arr_0 [2]) ? (arr_1 [i_0]) : (arr_1 [i_0]))) << (var_3 - 29702)));
    }
    var_15 = ((var_0 * ((var_5 ? (((0 ? 1 : 65527))) : (-9223372036854775807 - 1)))));
    #pragma endscop
}
