/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (min((max((((arr_1 [i_0]) >= (arr_0 [i_0] [i_0]))), (((arr_1 [i_0]) && 14458776002982201216)))), (((arr_1 [i_0]) <= (!-4246502193509547376)))));
        arr_2 [i_0] [i_0] = ((((min(var_5, var_15))) || (((831419671 ? 227 : 2406031811)))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_21 ^= (0 & 14119031198672125136);

        for (int i_2 = 3; i_2 < 19;i_2 += 1)
        {
            arr_8 [i_2 + 2] [i_2 + 2] [i_2 + 2] = ((3463547613 ? -831419683 : (arr_3 [i_2 + 2] [i_2 + 2])));
            var_22 = min((((arr_6 [i_2 - 1] [i_2 - 1]) ? (arr_6 [i_2 - 2] [i_2]) : (arr_6 [i_2 - 2] [i_2]))), ((max(15191, 47072))));
            var_23 = ((max((arr_6 [i_1] [i_2]), (((arr_6 [i_1] [i_1]) ? (arr_6 [i_1] [i_1]) : 2406031811)))) | (((max((arr_3 [i_2 + 2] [i_2 - 2]), (arr_6 [i_2 + 2] [i_2]))))));
            arr_9 [4] = (((((~(-32767 - 1)))) | var_16));
        }
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            var_24 = (((((((max(var_13, 921796409)) != (max(3269513323, -98)))))) != (((var_14 ? (arr_6 [i_1] [i_1]) : -828451420769132619)))));
            arr_13 [8] [i_3] [i_1] = (min((((-9223372036854775807 - 1) ? ((var_13 ? var_12 : var_11)) : (1888935485 | 2406031811))), (arr_12 [i_1] [i_3] [i_3])));
            var_25 = 4057028275;
        }
    }
    var_26 = var_14;
    #pragma endscop
}
