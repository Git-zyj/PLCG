/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = (max((((((6071363296579629878 ? 8438036254177000637 : -6876078065901489290))) & (min(18446744073709551614, 19918)))), ((min((arr_1 [18]), ((max(var_12, var_6))))))));
        var_19 = var_12;
        var_20 = ((((((((1799840216 ? 1 : var_14))) >= (var_7 + var_4)))) >= var_9));
        var_21 = (((0 * -var_17) * (min((min(var_13, var_16)), -var_16))));
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        var_22 = ((!((min(var_8, (!99))))));
        var_23 = (max(var_23, (((!-1) ? (((!(arr_2 [i_1 - 2])))) : var_10))));
    }
    var_24 = ((1 || (((~((max(167, var_1))))))));
    var_25 = var_9;

    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_26 += (((((var_14 ? 2097151 : 1))) ? (((arr_6 [i_2]) ? 65513 : 19144)) : (arr_0 [i_2] [i_2])));
        arr_10 [i_2] [10] = (2 ? ((((arr_6 [1]) ? var_8 : -22417))) : (var_17 - var_2));
        arr_11 [1] = ((arr_8 [i_2]) != (arr_8 [i_2]));
    }
    for (int i_3 = 1; i_3 < 18;i_3 += 1)
    {
        var_27 = (((((arr_14 [i_3 - 1]) >= (arr_14 [i_3 - 1]))) ? (min(-4501852060270361355, (arr_14 [i_3 - 1]))) : 65531));
        var_28 = ((!(arr_13 [i_3])));
        var_29 &= -8986;
    }
    #pragma endscop
}
