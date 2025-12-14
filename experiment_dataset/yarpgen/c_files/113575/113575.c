/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_17 = (max(-1880592113, var_4));
        var_18 = ((max(0, 25533)));
        var_19 &= (((min(39985, 0)) + ((((25533 ? (arr_0 [4]) : 7)) % (~6276)))));
        var_20 = (((arr_3 [9] [i_0 - 1]) ? (29 + 94) : (((((-(arr_3 [i_0] [5])))) ? (var_16 % var_8) : ((min(var_13, var_15)))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_21 &= (arr_3 [i_1 - 1] [i_1 - 1]);
        var_22 |= (15212 * var_9);
        arr_6 [i_1] = -32764;
        arr_7 [i_1] [9] = (((arr_5 [i_1 - 1]) >> (((arr_5 [i_1 - 1]) - 4811981575335991151))));
    }
    var_23 ^= var_15;
    var_24 = max((((var_14 > 1) / (max(var_7, 15230)))), (((-var_13 - ((227 ? var_9 : 25667))))));
    var_25 = (min(((6270 * (max(var_2, var_16)))), ((((((var_13 << (var_15 + 1750422565)))) > (var_15 + var_1))))));
    #pragma endscop
}
