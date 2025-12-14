/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [8] [i_0] = (((arr_1 [i_0] [i_0]) & ((~(arr_0 [i_0])))));
        arr_3 [i_0] = (((arr_1 [i_0] [i_0]) && (arr_0 [i_0])));
        var_18 = (min(var_18, ((((arr_0 [6]) ? ((((((var_13 >> (var_14 + 132)))) || ((((arr_1 [i_0] [i_0]) ? var_12 : (arr_0 [i_0]))))))) : (((~(arr_0 [i_0])))))))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_19 = var_6;
        var_20 = (arr_4 [3]);
    }
    var_21 = 0;
    var_22 = var_14;

    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_23 = var_7;
        arr_8 [i_2] = (((((arr_0 [i_2]) || (((arr_1 [1] [1]) <= var_0)))) ? (arr_0 [i_2]) : ((1 << (-23394 + 23405)))));
    }
    /* vectorizable */
    for (int i_3 = 4; i_3 < 9;i_3 += 1)
    {
        var_24 = ((var_0 || (arr_6 [i_3 - 2] [i_3 - 3])));
        arr_11 [i_3] [i_3] = ((var_14 >= (arr_1 [i_3] [i_3 - 2])));
    }
    #pragma endscop
}
