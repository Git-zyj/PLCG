/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 *= var_5;
        arr_3 [i_0] = (((arr_0 [i_0] [i_0]) / var_15));
        arr_4 [i_0] &= ((var_6 / ((max((max(var_8, (arr_2 [9]))), 1)))));
        var_19 = (min(var_19, (((((!(((-(arr_1 [11])))))) || ((max(((var_3 - (arr_2 [11]))), (arr_0 [i_0] [9])))))))));
    }
    var_20 = (max(var_20, ((max((((var_7 || ((max(var_1, var_8)))))), 5991)))));
    #pragma endscop
}
