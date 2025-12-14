/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((max(var_5, var_8)) - ((min(var_12, var_4))))) + ((((var_0 - var_2) + var_10)))));
    var_14 = max((((var_12 << ((((var_9 >> (var_0 + 7773570869813549019))) - 21))))), (((((var_2 ? var_8 : var_11))) ? (min(var_9, var_9)) : (((var_6 ? var_3 : var_1))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_15 = (max(var_15, (arr_1 [i_0] [i_0])));
        var_16 = (((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_0]))) == (((arr_0 [i_0]) + (arr_2 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_17 = (((((((((arr_1 [i_1] [i_1]) > (arr_2 [i_1])))) * (arr_0 [i_1])))) * ((((max((arr_5 [i_1]), (arr_2 [i_1])))) ? (((max((arr_3 [i_1]), (arr_1 [i_1] [i_1]))))) : (((arr_0 [i_1]) ? (arr_4 [i_1] [i_1]) : (arr_3 [i_1])))))));
        var_18 = (((max((arr_4 [i_1] [i_1]), ((min((arr_1 [i_1] [i_1]), (arr_0 [i_1])))))) != ((((arr_1 [i_1] [i_1]) | (arr_5 [i_1]))))));
    }
    #pragma endscop
}
