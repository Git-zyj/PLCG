/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((!var_1) ? 3 : ((var_7 ? 3 : var_10))))) ? 252 : (((!(((var_9 >> (var_14 - 10367123321969529275)))))))));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_19 = ((+((-253 ? (-9223372036854775807 - 1) : (((-3 ? 245 : (arr_1 [i_0]))))))));
        var_20 = min(((~(arr_2 [i_0]))), (((arr_3 [i_0] [i_0]) ? (max((arr_1 [i_0 + 1]), (arr_2 [i_0]))) : (((min(3, var_17)))))));
        var_21 = (((((arr_3 [i_0] [i_0 - 1]) ^ (max(7, (arr_0 [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_22 = ((-var_4 ? ((var_4 ? var_12 : 10)) : (arr_1 [i_1])));
        var_23 = ((((var_14 ? (arr_5 [i_1]) : var_17)) / 29207));
    }
    var_24 = ((var_10 % ((-((var_8 ? var_8 : 9223372036854775807))))));
    var_25 = (min(3208681070, var_6));
    #pragma endscop
}
