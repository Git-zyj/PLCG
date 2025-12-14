/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((-var_13 ? ((-var_10 ? (((var_1 ? var_17 : var_17))) : -6103810831947480503)) : var_0)))));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = (min(var_2, ((((var_2 * (arr_2 [i_0] [i_0])))))));
        var_20 = (max(((min((arr_0 [i_0]), (arr_0 [i_0])))), ((~(((!(arr_0 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_21 &= (-2187442687654027660 && 4602611249053319904);
        var_22 = (var_17 ? (max((arr_2 [10] [i_1]), var_12)) : (((((arr_2 [20] [i_1]) || (arr_2 [14] [14]))))));
    }
    var_23 = (min(((((var_4 + var_6) <= ((var_3 ? var_16 : var_1))))), ((var_10 ? var_1 : ((var_15 ? var_7 : var_0))))));
    #pragma endscop
}
