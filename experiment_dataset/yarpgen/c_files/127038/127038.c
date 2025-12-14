/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 = (arr_0 [i_0]);
        var_17 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_18 = (min(var_18, ((-(min(12, 0))))));
        var_19 = ((max((min(16252928, 78)), 0)) <= ((min(125, (min(var_6, var_11))))));
        var_20 ^= (max((arr_2 [i_1]), (((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_3 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_21 = (max(var_21, ((((arr_3 [i_2]) == ((((!(arr_3 [i_2]))))))))));
        var_22 = (min(var_22, (((((!((max(124, (-2147483647 - 1))))))) >> (((var_12 | -2147483630) + 2147483647))))));
        var_23 = (min(var_23, ((max(((((28 ? -1 : 132811352)) | ((((arr_4 [i_2] [i_2]) || -25))))), (0 < 9))))));
        var_24 = (((((arr_3 [i_2]) < (arr_2 [i_2]))) ? (((arr_4 [i_2] [i_2]) / (arr_3 [i_2]))) : (((arr_3 [i_2]) ? 32271 : (arr_3 [i_2])))));
    }
    var_25 = var_10;
    #pragma endscop
}
