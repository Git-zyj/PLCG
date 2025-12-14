/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= (max((((((min(var_13, var_12)))) / var_9)), var_2));
    var_15 = ((var_11 ? var_13 : var_10));
    var_16 = ((var_13 ? (max(var_9, (var_3 != var_8))) : (var_8 * var_13)));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_17 = (min(var_17, (((min(58, 2150320150962402918))))));
        var_18 = -2147483645;
        arr_2 [i_0] = (((((!1) <= (arr_1 [i_0] [i_0]))) ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0])));
        var_19 -= ((-((((arr_1 [i_0] [i_0]) >= (((arr_1 [i_0] [1]) - (arr_0 [i_0]))))))));
    }
    #pragma endscop
}
