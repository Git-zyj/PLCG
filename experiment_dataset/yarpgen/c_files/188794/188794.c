/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_21 = (min(var_21, ((((((1 ? (arr_1 [i_0 - 1] [i_0 - 1]) : (arr_1 [i_0 + 1] [i_0 + 1])))) ? ((((((arr_1 [6] [i_0]) ? (arr_0 [i_0]) : var_7))))) : (max((arr_1 [i_0 - 1] [i_0 + 1]), (arr_0 [i_0 + 1]))))))));
        arr_2 [i_0] &= 1;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_22 = arr_3 [i_1];
        var_23 = (((arr_4 [i_1]) ? (max(((-(arr_4 [i_1]))), (arr_3 [i_1]))) : (min((arr_4 [i_1]), (((arr_3 [1]) ? var_5 : 6448))))));
        var_24 += (min(9, 9223372036854775807));
        arr_5 [i_1] = ((((min(var_18, (arr_4 [i_1])))) ? ((~((max(7, (arr_3 [i_1])))))) : ((min((arr_3 [i_1]), var_11)))));
        var_25 = (min(var_25, ((((arr_3 [i_1]) ? -2229 : (arr_3 [i_1]))))));
    }
    var_26 = var_8;
    var_27 = var_11;
    #pragma endscop
}
