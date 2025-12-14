/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_10));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (!104);
        var_19 = (~127);
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_20 = (((arr_5 [i_1 - 1]) ? 2483420223694637542 : (arr_5 [i_1 - 3])));
        var_21 = (~2641349813);
        arr_6 [i_1] = ((~(arr_0 [i_1 + 1] [i_1 - 3])));
        var_22 = 1653617483;
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 10;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = (((((140 ? 7 : -6834833331326600755))) ? (arr_1 [i_2 - 1]) : (154 / 116)));
        var_23 *= ((!(~946253370)));
        var_24 = ((59 ? (((arr_7 [i_2]) ? var_6 : (arr_0 [i_2] [i_2]))) : (((arr_8 [i_2]) - (arr_1 [i_2])))));
        arr_11 [i_2] = (((84 ? 14 : 119)));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 19;i_3 += 1)
    {
        var_25 = (min(var_25, (arr_12 [i_3])));
        var_26 = (max(var_26, ((((~(arr_12 [i_3])))))));
        var_27 = ((2566223494 ? 196 : 24));

        for (int i_4 = 2; i_4 < 19;i_4 += 1)
        {
            var_28 = (arr_16 [i_3] [i_3]);
            var_29 = (arr_17 [i_3 - 1]);
        }
        arr_18 [i_3] = var_0;
    }
    var_30 = (((-1 || var_7) ? (((((var_11 ? var_5 : var_12))) ? -2040088454330053924 : var_7)) : 5039349029893927695));
    var_31 = (178 | 6569119523316256890);
    var_32 = var_11;
    #pragma endscop
}
