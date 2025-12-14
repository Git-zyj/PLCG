/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [2] |= (((min((arr_2 [10]), (((arr_1 [10]) | (arr_1 [6]))))) | (~-1)));
        var_20 = var_15;
        arr_4 [i_0] [i_0] = (min((arr_2 [i_0]), (max((arr_0 [i_0]), (((~(arr_2 [i_0]))))))));
        var_21 = (min((arr_2 [i_0]), (min((arr_0 [i_0]), (arr_0 [i_0])))));
    }
    var_22 = var_14;
    var_23 -= ((((var_3 ? ((71 ? var_9 : var_5)) : (var_6 - 31))) - ((((var_16 ? var_15 : var_16))))));

    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_24 = (max(var_24, (arr_7 [i_1])));
        arr_9 [i_1] = (arr_8 [i_1] [i_1]);
        arr_10 [i_1] = ((!0) ? (((arr_8 [i_1] [i_1]) ? 12915532 : var_6)) : (((((arr_5 [i_1]) >= var_11)))));
        var_25 = ((arr_5 [i_1]) | (((arr_5 [i_1]) ? var_10 : -1)));
    }
    #pragma endscop
}
