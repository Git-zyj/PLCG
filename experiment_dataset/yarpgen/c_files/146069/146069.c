/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= ((var_17 ? (max((-460039593 / var_1), var_9)) : ((((((max(var_6, 49))) <= var_11))))));
    var_20 = ((!(((var_15 ? (5784521731477684854 & var_14) : 13519)))));
    var_21 = 52016;

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        var_22 = min((min((arr_0 [5]), (var_7 ^ var_4))), (((((((arr_0 [13]) ? var_9 : (arr_0 [i_0])))) ? (~var_5) : (arr_0 [i_0 - 1])))));
        var_23 = (max((((((arr_1 [i_0] [i_0]) >> (arr_2 [i_0]))) * (((var_18 ? 13520 : (arr_0 [i_0])))))), (max(var_9, 32768))));
        var_24 *= (((-(arr_2 [i_0 - 2]))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_25 = (max(52029, ((((arr_2 [i_1]) < ((var_13 ? var_7 : var_6)))))));
        var_26 = ((min(51993, -var_17)));
    }
    #pragma endscop
}
