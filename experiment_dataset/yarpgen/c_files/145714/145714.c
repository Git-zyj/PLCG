/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;
    var_15 -= ((!(12383 * 127)));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_16 ^= (min((((((var_8 ? (arr_0 [i_0 + 2] [i_0 + 2]) : 1))) % ((-5360566435162902110 ? var_11 : var_2)))), ((((((arr_1 [i_0]) ? var_5 : var_8)) >= (!var_3))))));
        var_17 = (min(var_17, var_6));
        var_18 -= (((3968 % 1) ? (((-(var_11 - 1)))) : ((((-(arr_1 [i_0]))) + 2926737490))));
        var_19 = ((((((var_8 * (arr_1 [i_0 + 2]))) ? (8700 * var_5) : (arr_0 [i_0 - 1] [i_0 + 1])))));
    }
    #pragma endscop
}
