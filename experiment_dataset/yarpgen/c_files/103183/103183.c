/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((((max(var_10, var_4))) << (((max(var_3, 9223372036854775787)) - 9223372036854775785))))) ? var_9 : (((~-9223372036854775780) ? var_10 : (var_5 % var_12)))));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = ((((((((arr_0 [i_0] [i_0]) ? var_3 : (arr_1 [i_0 - 2] [i_0])))) || ((max(var_3, -98)))))) >> ((((arr_0 [i_0] [i_0]) <= var_11))));
        arr_3 [i_0] [i_0] = ((((-(arr_0 [i_0 + 1] [i_0]))) > 2147483647));
        var_14 = (min(var_14, (((((max((arr_0 [i_0 + 1] [0]), (arr_0 [2] [18])))) >= (arr_0 [i_0] [14]))))));
        var_15 = ((var_4 << (var_3 + 153615866)));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_16 = (min((+-1369804196), ((((arr_5 [i_1] [i_1]) && ((min((arr_5 [5] [1]), var_7))))))));
        arr_6 [i_1] = (max((((arr_1 [i_1] [i_1]) ? ((var_2 ? var_9 : var_0)) : (arr_4 [i_1] [i_1]))), var_3));
        var_17 = (min(var_17, (((~((var_12 ? var_1 : (arr_5 [i_1] [i_1]))))))));
    }
    var_18 = var_7;
    var_19 = var_2;
    #pragma endscop
}
