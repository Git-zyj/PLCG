/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(17141, 1));
    var_19 = -1700518331371144249;

    for (int i_0 = 2; i_0 < 9;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = 562949949227008;
        arr_4 [i_0] = (max(var_5, ((-(min(var_10, var_2))))));
        var_20 = ((min(((var_13 ? var_3 : (arr_2 [i_0]))), (((-9223372036854775797 ? var_1 : var_15))))));
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_21 = (i_1 % 2 == zero) ? ((((min(-9223372036854775787, (arr_5 [i_1]))) % (((-9223372036854775787 + 9223372036854775807) << (((arr_5 [i_1]) + 2115495855))))))) : ((((min(-9223372036854775787, (arr_5 [i_1]))) % (((-9223372036854775787 + 9223372036854775807) << (((((arr_5 [i_1]) - 2115495855)) + 461417129)))))));
        var_22 = ((0 ? 562949949227010 : (max(1138280985, (-562949949227007 % 562949949227006)))));
        arr_7 [i_1] = arr_1 [i_1 + 1] [i_1];
        arr_8 [i_1] = ((var_4 < (((arr_5 [i_1]) ? ((max(141, 49558))) : (-1511992593 + 11921)))));
        arr_9 [i_1] [i_1] = ((((((arr_1 [i_1 + 1] [i_1]) % 16479))) ? (min(22232, ((8703858227631976053 ? 1 : (arr_2 [i_1]))))) : 16226));
    }
    var_23 = (max(44, (((217 - 15977) ? var_4 : var_1))));
    var_24 &= var_7;
    #pragma endscop
}
