/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(((var_17 ? (~var_7) : (max(var_1, 1)))), (((var_0 % ((var_8 ? var_4 : var_4)))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_21 = ((var_17 ? (arr_1 [i_0] [i_0]) : (((((var_4 ? (arr_2 [i_0] [i_0]) : var_6))) ? (max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))) : (~var_5)))));
        var_22 = (((arr_2 [i_0] [i_0]) ? ((((arr_2 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))) : ((1 ? 18446744073709551604 : 26))));
        var_23 = -var_9;
        var_24 = max(((((arr_0 [i_0]) || ((min(var_8, var_19)))))), ((min(var_2, (arr_1 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_25 = (((arr_4 [i_1] [i_1]) ? 17635576775194675619 : var_8));
        var_26 ^= ((var_11 || ((min((arr_3 [i_1]), var_0)))));
    }
    #pragma endscop
}
