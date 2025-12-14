/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 1048575;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_13 = (min(var_13, (((var_3 ^ (((var_5 >= (arr_1 [1])))))))));
            arr_5 [i_0] = ((var_3 << ((((var_1 << (var_0 - 96))) - 524026))));
        }
        arr_6 [i_0] [i_0] = 181;
        var_14 = ((~(arr_1 [i_0])));
    }
    for (int i_2 = 3; i_2 < 15;i_2 += 1)
    {
        var_15 = ((((min(((181 ? (arr_9 [i_2]) : -1048594)), (var_6 ^ var_8)))) ? (((var_5 + 2147483647) + var_10)) : var_8));
        arr_10 [i_2] = ((~(min((min((arr_7 [i_2]), var_0)), (((!(arr_8 [i_2] [i_2]))))))));
    }
    var_16 = (~var_7);
    #pragma endscop
}
