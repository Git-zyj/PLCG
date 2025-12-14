/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_7;
    var_21 += ((~(min(var_13, var_4))));
    var_22 = (min(var_14, var_5));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = ((!((max(var_5, var_0)))));
        arr_4 [15] [i_0] = (((((16314376325460090472 ? ((var_8 ? var_15 : var_7)) : var_8))) ? ((var_5 ? 32020 : (arr_2 [i_0 + 4] [i_0 + 4]))) : ((((((arr_0 [4] [i_0]) ? var_12 : 9223372036854775807))) ? var_6 : (((arr_0 [i_0] [5]) ? (arr_2 [18] [21]) : var_19))))));
        var_23 = (((var_2 >= 11815) ? (min(var_11, (arr_1 [i_0 - 1]))) : (arr_1 [i_0 + 4])));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        arr_7 [i_1] = (arr_0 [2] [i_1 + 3]);
        arr_8 [i_1] = var_11;
    }
    #pragma endscop
}
