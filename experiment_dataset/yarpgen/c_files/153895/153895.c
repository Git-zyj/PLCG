/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_19 = (((((+(((arr_3 [i_0]) / (arr_3 [6])))))) / (((arr_1 [i_0]) ? (((var_8 ? (arr_0 [5] [i_0]) : var_2))) : (arr_0 [i_0] [1])))));
        var_20 = (max(var_20, ((max((arr_0 [7] [i_0 + 2]), (57127 == 8412))))));
    }
    var_21 = var_10;
    var_22 = var_12;
    var_23 = ((var_9 / var_9) >> (var_14 + 1025041115));
    #pragma endscop
}
