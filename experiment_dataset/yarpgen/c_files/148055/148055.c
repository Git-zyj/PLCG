/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (-(!var_6));
    var_12 = ((var_9 == (((min(1, 1)) ? 6 : 1))));
    var_13 = ((((var_1 - var_7) ? ((0 ? 8144359014346956093 : var_1)) : (((var_7 ? var_7 : var_6))))) - ((((1243347109 - -307865384) + (max(var_2, var_2))))));
    var_14 += var_1;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((~((((var_0 >> (var_8 + 117))) << (((min((arr_3 [i_0] [i_0]), (arr_1 [i_0]))) + 1003466026))))));
        arr_5 [i_0] = ((((min((1 > var_4), ((1254265531 ? -1039110688 : (arr_2 [i_0])))))) ? (max(((-(arr_1 [i_0]))), (arr_1 [i_0]))) : (((((var_6 ? 1 : (arr_0 [i_0]))) == (((arr_0 [i_0]) / var_6)))))));
    }
    #pragma endscop
}
