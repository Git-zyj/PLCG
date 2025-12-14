/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_18 -= (max(((((((var_11 ? (arr_1 [i_0]) : var_14))) > var_10))), ((+(((arr_0 [i_0] [i_0]) ? var_3 : var_2))))));
        var_19 = var_1;
        arr_2 [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((((arr_0 [i_1] [i_1]) ? ((min(var_5, -1609024592269490798))) : (((arr_4 [i_1]) / (arr_5 [i_1] [i_1]))))));
        var_20 = ((-9223372036854775780 >> (((arr_3 [i_1]) + 20082))));
        var_21 = ((max((arr_5 [i_1] [i_1]), ((((arr_4 [i_1]) ? var_16 : (arr_1 [i_1])))))));
        arr_7 [i_1] = ((3517012728 ? 1 : 1));
        arr_8 [i_1] [i_1] = (((((-1 ? -1609024592269490795 : 6944836396377010751))) ? (arr_3 [12]) : (((65535 ? 7083829137749425808 : -2894765725098427460)))));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_22 = (min(var_22, ((((((65525 & (((arr_10 [i_2] [i_2]) ? 9223372036854775795 : (arr_4 [i_2])))))) ? (arr_10 [i_2] [i_2]) : 777954568)))));
        arr_11 [i_2] [i_2] = var_14;
    }
    var_23 = var_4;
    #pragma endscop
}
