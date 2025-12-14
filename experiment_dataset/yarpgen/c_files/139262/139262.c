/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((min((-9223372036854775807 - 1), (-9223372036854775807 - 1)))) ? ((((!((var_0 && (-9223372036854775807 - 1))))))) : var_8));
    var_12 = min(var_5, (min(-23, (max(var_2, var_3)))));
    var_13 = min(var_4, var_6);

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_14 *= (max(0, ((((arr_1 [i_0]) <= -719323489325699056)))));
        var_15 += ((2879283114 ? ((max(-9223372036854775794, (arr_0 [i_0])))) : (max(var_5, var_1))));
        var_16 = ((~((255 ? (arr_1 [i_0]) : (arr_1 [i_0])))));
    }
    #pragma endscop
}
