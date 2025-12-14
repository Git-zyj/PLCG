/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((-72 ^ 14684009843964730592) + (((var_1 ? 46 : 436812425)))));
    var_19 = (((((var_5 ? 436812425 : var_11))) ^ (!-436812450)));

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_20 -= (max((((!(((66 + (arr_1 [i_0]))))))), ((var_1 ? (arr_0 [6] [i_0 - 1]) : (arr_0 [12] [i_0 - 1])))));

        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            var_21 = (((((arr_0 [16] [i_1 - 2]) + var_0)) + ((((arr_3 [i_0 - 1] [i_0 - 3] [i_1 - 3]) ? var_16 : var_11)))));
            var_22 -= (((((!((max(var_16, var_5)))))) ^ ((((((arr_2 [i_1] [i_1 + 2] [i_0 - 2]) ? var_1 : var_1))) ? (~var_17) : ((min(var_6, var_12)))))));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_23 = ((-((78 ? (arr_1 [i_0 - 3]) : (arr_3 [i_0 - 2] [i_2] [1])))));
            var_24 = (((-(arr_2 [i_0 + 2] [i_0] [i_0 - 3]))) + (~-var_15));
        }
        var_25 = (min(var_25, (arr_3 [i_0] [i_0] [i_0])));
        var_26 = var_0;
        var_27 = (max(6150824230586684737, var_5));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        arr_9 [i_3] = 14684310256920520531;
        arr_10 [i_3] [i_3] = ((((((arr_1 [i_3]) ? (arr_2 [i_3] [i_3] [i_3]) : (arr_3 [i_3] [i_3] [i_3])))) ? ((((max((arr_2 [i_3] [i_3] [i_3]), var_15))) ? (max(var_8, var_5)) : (var_6 * 34359738367))) : (436812420 + -1320479356)));
    }
    var_28 = ((var_11 ? -13445 : var_6));
    var_29 = (min(var_13, var_3));
    #pragma endscop
}
