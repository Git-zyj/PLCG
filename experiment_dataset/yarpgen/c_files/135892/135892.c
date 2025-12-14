/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((((!var_6) - (~var_15))), ((((var_12 - var_3) - var_2)))));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_17 = (min(var_17, ((((((var_5 - (((arr_2 [6] [i_0]) - (arr_1 [i_0])))))) - var_13)))));
        var_18 = (max(var_18, (((min((arr_3 [i_0 - 1]), (arr_3 [i_0 + 1]))) - (((((-1851118977 ? (arr_0 [i_0]) : (arr_1 [i_0]))))))))));
    }
    for (int i_1 = 3; i_1 < 11;i_1 += 1)
    {
        var_19 = (min(var_19, (((((1 | var_1) & var_9))))));
        var_20 -= ((((((var_4 ? var_3 : var_0)) ? (var_1 - var_7) : (1 - 1)))));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_8 [i_2] &= (((((var_9 || var_3) - var_1)) - (((arr_6 [i_2]) - (arr_1 [i_2])))));
        arr_9 [i_2] |= ((((var_3 - 1) - var_0)));
        arr_10 [i_2] = ((((1 - (arr_2 [i_2] [i_2]))) - ((-0 ? (((!(arr_2 [i_2] [i_2])))) : var_11))));
    }
    var_21 = var_2;
    #pragma endscop
}
