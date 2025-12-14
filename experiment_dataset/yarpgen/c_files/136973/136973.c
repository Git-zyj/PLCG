/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((!(((2137643984 ? 109 : 46853046))))) ? ((var_11 ? var_0 : var_10)) : ((min(var_4, (146 && var_12))))));
    var_15 = (var_8 | var_8);
    var_16 &= (min((16128 * 12453580822475731029), ((max(var_6, ((var_4 ? var_3 : var_8)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_17 = (arr_0 [i_0] [i_0]);
        var_18 |= (!29626);
        arr_3 [i_0] = ((!(arr_0 [i_0] [i_0])));
        var_19 = (((((arr_1 [i_0]) & var_2)) != (109 > 699162000)));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_20 = (min(var_20, ((((((arr_4 [i_1]) * (min(var_6, (arr_6 [i_1] [i_1]))))) * (((((arr_6 [i_1] [i_1]) ? (arr_5 [i_1] [i_1]) : var_6)) / (arr_6 [i_1] [i_1]))))))));
        var_21 = (min(var_21, 1));
        arr_7 [i_1] |= ((((min((max((arr_5 [i_1] [i_1]), 2315030141)), (((-(arr_4 [i_1]))))))) ? (min((arr_6 [i_1] [i_1]), 110)) : (min((((-25 * (arr_4 [i_1])))), ((121 / (arr_6 [i_1] [i_1])))))));
    }
    #pragma endscop
}
