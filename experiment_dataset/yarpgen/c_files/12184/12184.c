/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= var_8;
    var_19 = (((((var_12 >> (var_13 - 121)))) ? var_17 : var_6));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 = (min(var_20, 2909));
        var_21 = ((var_7 ? ((((!((((arr_0 [i_0]) ? var_4 : (arr_0 [i_0])))))))) : (max((var_17 + var_15), var_4))));
        var_22 = (max(var_22, ((((((var_9 ? -var_12 : (((arr_1 [i_0]) / (arr_1 [i_0])))))) ? (((((var_8 >= (arr_1 [i_0])))) >> (((min((arr_0 [8]), (arr_0 [2]))) - 3968815147)))) : ((((((arr_0 [2]) ? var_17 : var_4))) ? ((var_2 ? (arr_1 [i_0]) : var_4)) : var_15)))))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_23 = (max(var_23, (arr_2 [i_1])));
        var_24 = var_3;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_25 = (((16383 ^ 16363) && var_12));
        var_26 += ((~((((arr_6 [14]) == (arr_7 [12]))))));
    }
    #pragma endscop
}
