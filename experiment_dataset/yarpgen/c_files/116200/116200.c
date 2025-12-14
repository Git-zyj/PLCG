/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -var_14;

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_20 = 3542876338343625269;
        var_21 = (163 | 14903867735365926346);
        var_22 &= ((((var_8 ? 170 : var_3)) + ((min(var_10, (arr_0 [i_0]))))));
        arr_3 [i_0] [i_0] = ((min(((min(var_8, var_12)), (max(var_6, var_18))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_23 = (((((-(arr_2 [i_1])))) ? ((~((var_3 ? var_15 : 1102483676)))) : (((~65534) ? var_5 : var_7))));
        var_24 = (max(((var_10 ? (arr_0 [i_1]) : (arr_0 [i_1]))), (arr_1 [i_1])));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] [i_2] &= ((((((arr_6 [i_2] [i_2]) ? (arr_8 [i_2]) : (arr_8 [i_2])))) ? (max(var_13, (((arr_5 [i_2]) - var_3)))) : (arr_0 [i_2])));
        arr_10 [19] = (max(((var_14 ? -121 : (var_11 ^ var_5))), (((var_1 > (max((arr_5 [i_2]), (arr_2 [2]))))))));
        var_25 = (max(var_25, ((((arr_2 [i_2]) + ((var_1 ? ((min(var_16, var_1))) : 14903867735365926362)))))));
        var_26 = (max(var_26, (((((!(arr_0 [i_2]))) ? (var_17 > 24) : ((~((1 ? 44125 : 3542876338343625294)))))))));
        var_27 = var_7;
    }
    var_28 *= 227;
    var_29 = (min(1943368052, (((3542876338343625267 >> (14903867735365926340 - 14903867735365926294))))));
    #pragma endscop
}
