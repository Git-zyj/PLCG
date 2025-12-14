/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= var_5;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 = (((((-var_13 ? (((!(arr_0 [i_0])))) : (((arr_0 [i_0]) ? var_7 : var_4))))) && ((((var_5 ? var_6 : var_13))))));
        var_16 = (((min((arr_1 [i_0] [i_0]), (arr_1 [7] [i_0]))) && (((arr_1 [i_0] [i_0]) && (arr_1 [14] [i_0])))));
        arr_2 [1] = ((((max(((((arr_0 [i_0]) ? var_1 : var_4))), ((var_7 ? (arr_0 [i_0]) : var_6))))) ? var_10 : ((1 ? 17 : -4202612340155222869))));
    }
    var_17 = 16574;
    var_18 = (9802482643777025812 && 9223372036854775807);
    #pragma endscop
}
