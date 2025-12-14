/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_12 = (min(var_3, (arr_2 [i_0])));
        var_13 = (min(var_13, (((((-1 ? ((((!(arr_2 [i_0]))))) : ((~(arr_2 [i_0]))))) / 1791895252)))));
        var_14 += (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_5 [i_1] = ((((+((min((arr_4 [i_1]), (arr_0 [i_1])))))) >= ((((2761951075821610810 || var_0) > (arr_1 [16]))))));
        var_15 = (((~var_10) ? ((var_5 ? (((arr_1 [i_1]) << (((arr_0 [i_1]) - 592)))) : ((((arr_3 [i_1]) <= (arr_2 [i_1])))))) : var_3));
        var_16 = (arr_3 [7]);
    }
    var_17 *= (max(((var_4 - (min(var_3, 8643430896623007428)))), ((var_5 ? var_1 : var_8))));
    #pragma endscop
}
