/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= (~((((var_14 + var_11) > (!var_11)))));
    var_20 = (((min((var_17 <= var_7), 1)) && (((var_16 ? ((var_16 ? var_18 : -1)) : ((var_8 ? var_7 : var_14)))))));
    var_21 |= (var_4 ? ((var_4 ? var_11 : ((max(-1, var_10))))) : (((((min(var_3, var_1)) != var_2)))));
    var_22 ^= (((((var_16 > var_2) == var_16)) ? ((-(-15 >= -15))) : (-15 && 29)));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = ((((((arr_1 [i_0 - 1]) / var_8))) | ((-1 | (((arr_1 [7]) ? (arr_1 [i_0 + 1]) : var_17))))));
        var_23 = (max(var_23, ((max((((arr_1 [i_0 - 1]) < (arr_0 [i_0 + 1]))), ((!(arr_1 [i_0 + 1]))))))));
    }
    #pragma endscop
}
