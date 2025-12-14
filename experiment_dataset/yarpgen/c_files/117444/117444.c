/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(((~((var_9 ? (-9223372036854775807 - 1) : -121)))), ((var_7 ^ (((max(var_5, -9))))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = ((var_15 ? (((((var_12 ? (arr_1 [i_0]) : var_14))) ? (arr_0 [i_0]) : ((((arr_2 [i_0]) && (arr_1 [i_0])))))) : (!var_16)));
        arr_3 [i_0] [i_0] = (min((((var_4 & var_0) ? (max(var_4, 3953063679445997837)) : (((((arr_2 [i_0]) == (arr_1 [i_0]))))))), (((113 == (arr_0 [i_0]))))));
    }
    var_22 = ((((((min(2748601670018480697, 57))) ? (((min(0, 44)))) : var_6)) * ((min((max(69805794224242688, var_0)), (!7195995914132933622))))));
    var_23 = ((var_19 ? ((var_17 & ((2047 ? var_2 : var_13)))) : (((-((4989509913879949497 ? -8246 : 26120)))))));
    #pragma endscop
}
