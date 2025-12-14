/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += (max((((9187343239835811840 / var_6) ? (max(-9187343239835811843, var_7)) : ((max(var_5, var_11))))), ((var_4 ? (min(var_16, var_6)) : var_17))));
    var_20 = var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (((((var_16 + 9223372036854775807) >> (((arr_1 [8]) - 7427562914842062925)))) > (arr_0 [i_0])));
        var_21 = (((((9187343239835811843 ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? 8 : var_13));
        var_22 = (((arr_0 [i_0]) ? var_5 : var_3));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_23 -= ((((((arr_4 [i_1] [i_1]) ? var_17 : var_3))) ? var_5 : ((var_18 >> (134217727 - 134217712)))));
        var_24 = (arr_4 [i_1] [i_1]);
        var_25 *= (arr_4 [i_1] [i_1]);
        var_26 = 2842656319985277811;
    }
    for (int i_2 = 4; i_2 < 10;i_2 += 1)
    {
        arr_7 [i_2 - 4] [i_2] = (min((~var_16), (arr_6 [i_2] [i_2])));
        var_27 *= (max((((arr_5 [i_2]) ? (arr_5 [i_2 - 4]) : var_12)), ((min(var_0, ((min(var_11, var_11))))))));
    }
    #pragma endscop
}
