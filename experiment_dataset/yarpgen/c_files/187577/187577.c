/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;
    var_17 = ((-((((!46274) <= ((var_0 ? var_15 : var_2)))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] &= ((var_12 && ((min(16883607465662056223, var_4)))));
        var_18 = (((max((arr_1 [i_0]), var_13))) >> ((((var_0 ? (arr_1 [i_0]) : (arr_1 [i_0]))) - 22677)));
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        arr_5 [1] [1] = (arr_3 [i_1 - 2]);
        var_19 ^= (~-112);
        var_20 = (~(min(255, (arr_4 [i_1 - 2] [i_1 - 2]))));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_21 *= ((((46256 ? 1 : 16883607465662056236)) >> ((((-(arr_0 [i_2]))) + 27522))));
        var_22 ^= (((~-var_14) || ((min((max(var_6, 19271)), ((((arr_4 [7] [i_2]) + (arr_6 [1])))))))));
        var_23 = (19262 >= 19552);
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        arr_10 [12] = (((arr_9 [i_3]) ? 1563136608047495373 : -32763));
        var_24 = ((((min(((((arr_8 [i_3] [i_3]) && var_13))), 0))) ? (((var_14 == ((min(var_12, var_12)))))) : 0));
    }
    #pragma endscop
}
