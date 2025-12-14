/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (max((((-var_11 ? ((var_9 ? (arr_1 [i_0]) : 75)) : var_0))), (arr_1 [i_0])));
        var_13 = (min(var_13, 1));
        arr_4 [i_0] = ((((min((arr_2 [i_0]), (arr_2 [i_0])))) ? (((arr_2 [i_0]) & var_6)) : ((~(arr_2 [i_0])))));
        var_14 ^= (min((arr_2 [i_0]), ((~((((arr_2 [i_0]) > (arr_1 [i_0]))))))));
    }
    var_15 ^= ((((var_2 ? (min(var_9, var_12)) : 58)) * ((((((min(var_10, var_6)))) - ((var_8 ? var_0 : var_2)))))));
    #pragma endscop
}
