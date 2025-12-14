/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = ((((((min(0, 12)) + var_15))) ? ((var_13 * (((arr_0 [i_0]) ? var_9 : 14930175988306495909)))) : (((~((var_7 ? (arr_1 [i_0]) : var_16)))))));
        var_18 = ((min((arr_0 [i_0 + 1]), (arr_2 [i_0 + 1] [i_0 + 2]))));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_6 [1] [1] |= (arr_4 [i_1 - 1]);
        var_19 += ((((((min(var_14, var_14)) ? (arr_4 [i_1 - 1]) : (~var_6)))) * (~195)));
        var_20 &= (24864 ? 58 : (((min(154, 24867)))));
    }
    var_21 &= (min(((74 ? 40654 : ((1546254883 ? 236 : var_0)))), ((min((min(40654, 24872)), (min(var_5, var_7)))))));
    #pragma endscop
}
