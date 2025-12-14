/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_3 ? var_7 : (((((min(1024, var_4))) ? var_5 : ((var_7 ? var_0 : 64528)))))));
    var_12 = (((~var_8) / (((((var_3 ? var_6 : var_8)) >= 0)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((-64523 ? (((arr_0 [i_0]) / (arr_1 [i_0]))) : ((((!(arr_0 [i_0]))))))) | (arr_0 [i_0]));
        var_13 = (arr_1 [i_0]);
        var_14 = (min(((((min((arr_0 [i_0]), 64512))) ? (((var_9 ? var_6 : (arr_0 [i_0])))) : (arr_1 [i_0]))), (min((arr_0 [6]), (((arr_0 [7]) ^ (arr_1 [1])))))));
        var_15 = (min(((((((arr_1 [i_0]) ? 1966250980495828095 : 12)) == (arr_0 [i_0])))), (arr_1 [i_0])));
    }
    #pragma endscop
}
