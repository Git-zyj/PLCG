/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((var_4 >> (var_17 - 1272636820))) - (~98)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((9575827252244152307 ? (((-(arr_1 [i_0] [i_0])))) : 18249073405616249008));
        var_19 = (((1134907106097364992 || 65516) ? ((var_16 ? (arr_1 [9] [i_0]) : var_13)) : 32767));
        var_20 *= ((!(~var_4)));
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        arr_5 [21] [i_1] = ((((min((arr_4 [1]), 648037736))) || (!2942687504)));
        var_21 *= (max((min(var_8, -2147483634)), 65533));
        var_22 = ((((44 ^ (arr_3 [i_1 - 1]))) * (arr_4 [i_1 - 2])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_8 [13] [13] = (arr_4 [19]);
        arr_9 [i_2] = ((17456 ? -1474577918 : -74));
    }
    var_23 = ((160 && (!var_9)));
    #pragma endscop
}
