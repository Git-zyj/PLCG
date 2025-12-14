/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_13 = (max(var_13, 1240037914));
        var_14 = ((var_8 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0] [i_0 + 1])));
        arr_3 [i_0] = (((arr_0 [i_0 + 1] [i_0 + 1]) / ((+((max((arr_0 [i_0] [i_0]), (arr_0 [7] [0]))))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (((((((((arr_5 [i_1]) < var_9))) - var_10))) ? (((arr_7 [i_1]) ? (var_12 <= 250) : (arr_4 [i_1]))) : -65534));
        arr_9 [1] |= (((!27490) <= (arr_5 [i_1])));
    }
    var_15 = ((var_6 ? (((~var_2) ? (min(var_10, 4674048394549870777)) : ((-42 ? 0 : var_1)))) : ((min(var_7, (~0))))));
    var_16 = var_5;
    #pragma endscop
}
