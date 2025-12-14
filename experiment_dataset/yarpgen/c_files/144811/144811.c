/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_13 ^= (arr_0 [i_0] [i_0]);
        var_14 ^= (max((((arr_1 [i_0 - 3]) ? (arr_1 [i_0 - 2]) : -var_9)), -111));
        var_15 ^= (min((arr_0 [i_0 - 3] [i_0]), ((((max((arr_0 [1] [i_0]), 1145028056)) > (~47542))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 21;i_1 += 1)
    {
        var_16 += (arr_5 [i_1 - 2]);
        var_17 = (min(var_17, ((((arr_3 [i_1]) != 4294967295)))));
        var_18 += (((arr_5 [i_1 - 3]) / (arr_5 [i_1 + 1])));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_19 = (min(var_19, (arr_7 [i_2])));
        var_20 = (min(var_20, (((((min(((min(var_10, var_3))), var_2))) ? (min(47542, 871934683)) : (((arr_6 [i_2] [i_2]) ? 2602 : (min(9600, var_1)))))))));
    }
    var_21 = (min(var_21, ((max(var_6, var_8)))));
    var_22 ^= (!231818863);
    var_23 ^= ((((min(var_7, ((max(var_3, var_4)))))) ? var_6 : var_7));
    #pragma endscop
}
