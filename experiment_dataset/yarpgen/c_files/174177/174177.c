/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] = (((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? ((max((arr_0 [i_0]), (arr_0 [i_0])))) : (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))));
        var_19 = (min(var_19, (((var_6 ? (arr_3 [i_0]) : (((-32767 - 1) ? 283726776524341248 : 9223372036854775800)))))));
        var_20 -= 32758;
    }
    var_21 = var_15;
    var_22 = ((1099511365632 ? 0 : 18446744073709551615));
    var_23 = (min(var_17, (-15 | -1)));
    #pragma endscop
}
