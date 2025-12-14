/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((((min(9096233278833617849, var_8)) >= (~573205141))))) * var_3));
    var_20 = ((((-(min(573205141, var_15)))) <= (!var_8)));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_21 = (arr_0 [i_0 + 1] [i_0 + 1]);
        var_22 *= ((((((((var_12 ? var_2 : (arr_1 [i_0])))) ? (arr_0 [i_0] [i_0]) : var_0))) ? (arr_1 [i_0]) : (min(18446744073709551615, (arr_0 [i_0 - 1] [i_0])))));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        var_23 = (min((arr_2 [i_1] [10]), (arr_5 [i_1])));
        arr_6 [i_1] = var_7;
        arr_7 [i_1] = min((((arr_2 [i_1 + 2] [i_1 + 2]) ? (arr_3 [i_1 - 1]) : (arr_3 [i_1 - 1]))), ((min((arr_3 [i_1 + 3]), (arr_3 [i_1 + 3])))));
    }
    var_24 = var_8;
    var_25 = ((((min(var_10, (min(var_14, var_15))))) ? var_16 : (274877906944 | 13818062118575633774)));
    #pragma endscop
}
