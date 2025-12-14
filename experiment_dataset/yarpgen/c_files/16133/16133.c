/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_11 = (((arr_0 [i_0]) ? 0 : (((arr_1 [i_0 - 1]) >> (182 - 167)))));
        arr_2 [i_0] = ((4032 - (!1)));
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        arr_5 [i_1 - 1] [i_1] = ((((((arr_4 [i_1] [i_1 + 1]) ? (arr_4 [i_1 + 1] [i_1 + 1]) : (arr_4 [i_1] [i_1 + 1])))) > var_10));
        var_12 = (((min((arr_1 [i_1 + 1]), var_10))) ? ((((arr_1 [i_1 + 1]) != (arr_4 [i_1] [i_1])))) : ((76 ? (arr_1 [i_1 + 1]) : (arr_1 [i_1 - 1]))));
        arr_6 [i_1 + 1] = ((!((min(-27212, -17651)))));
        var_13 += ((-(min(11602, ((var_4 ? var_4 : (arr_4 [15] [i_1])))))));
    }
    for (int i_2 = 3; i_2 < 12;i_2 += 1)
    {
        arr_9 [i_2] = -23054;
        var_14 = ((((max((arr_0 [i_2 + 1]), -17650))) ? (arr_3 [2] [i_2 + 1]) : (min((~0), 32534))));
    }
    var_15 = (min(var_4, var_4));
    #pragma endscop
}
