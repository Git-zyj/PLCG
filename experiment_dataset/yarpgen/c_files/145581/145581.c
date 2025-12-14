/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(-29083, 115));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = (min((arr_1 [i_0]), (min((arr_1 [i_0]), (arr_1 [i_0])))));
        var_20 &= (~114);
        var_21 = (((((118 >> ((((arr_1 [i_0]) && (arr_1 [i_0]))))))) ? ((var_2 ? (arr_0 [i_0]) : (arr_1 [i_0]))) : ((((var_15 && var_10) ? (((~(arr_1 [i_0])))) : var_16)))));
    }
    var_22 -= 1301799674622005181;
    #pragma endscop
}
