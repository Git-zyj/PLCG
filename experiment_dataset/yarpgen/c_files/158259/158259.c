/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(-1, 20636));
    var_12 |= ((-(max(1308210149257307853, 16))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 |= ((((((~(arr_2 [i_0] [i_0]))) + 2147483647)) >> (((arr_2 [i_0] [i_0]) ^ (arr_2 [i_0] [i_0])))));
        var_14 = ((((!(((var_0 ? var_0 : var_6)))))));
        var_15 = (min((arr_1 [i_0] [i_0]), (arr_2 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_5 [i_1] = ((!(arr_1 [i_1] [i_1])));
        var_16 = (((!(arr_1 [i_1] [2]))));
        var_17 = 1575288278;
        var_18 -= (((arr_4 [i_1] [i_1]) & (-9223372036854775807 - 1)));
    }
    var_19 = ((((((var_5 ? var_10 : var_0)))) ? var_4 : ((min(var_9, var_10)))));
    var_20 = ((-13356 ? var_3 : -46));
    #pragma endscop
}
