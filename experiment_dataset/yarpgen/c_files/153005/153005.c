/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= ((((max(407488520, var_9)))) ? -var_3 : var_2);
    var_15 ^= (((!(!var_1))) ? var_12 : ((((max(var_3, var_2))) ? (var_1 || var_4) : var_10)));
    var_16 = (~(63 & var_7));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_17 ^= ((arr_0 [0]) ^ (arr_0 [0]));
        arr_2 [i_0] = var_12;
        var_18 |= max((var_8 ^ var_1), (((arr_0 [10]) & (arr_0 [0]))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_5 [i_1] = min(((~(arr_3 [i_1] [i_1]))), ((~(max((arr_3 [22] [i_1]), var_9)))));
        var_19 = ((((-(arr_4 [i_1] [i_1])))) ? (((arr_4 [i_1] [i_1]) * (arr_4 [i_1] [i_1]))) : (((arr_4 [i_1] [i_1]) * (arr_4 [i_1] [i_1]))));
    }
    #pragma endscop
}
