/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        var_19 = ((((min((arr_1 [i_0]), (arr_2 [i_0]))) / ((max((arr_0 [i_0]), var_4))))));
        var_20 = -var_8;
        arr_4 [i_0] = ((min((arr_1 [i_0 - 3]), (arr_1 [i_0 - 3]))) - ((-(arr_1 [i_0 + 1]))));
    }
    var_21 = (max(var_21, var_18));
    var_22 = (var_13 ? ((1 ? var_0 : (max(-1388637628, 0)))) : ((var_1 ? (15666417665298611792 != 52) : var_2)));
    var_23 = ((11034214093043495995 ? var_4 : ((((max(var_17, var_7)) > var_4)))));
    #pragma endscop
}
