/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((~var_8) ? var_10 : var_9));
    var_14 = var_5;
    var_15 = (max(var_15, ((max(var_0, var_4)))));
    var_16 = 2104899147365709005;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_17 = (((((min((arr_2 [11] [i_0]), (arr_1 [i_0]))))) - 70368744177663));
        var_18 = (min(var_18, (arr_2 [i_0] [10])));
        var_19 = (max((((var_12 ? (~692) : (arr_2 [i_0] [i_0])))), (max((((arr_0 [11] [i_0]) ? (arr_0 [i_0] [5]) : var_1)), (((!(arr_2 [i_0] [i_0]))))))));
    }
    #pragma endscop
}
