/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(((-((var_1 ? 119 : var_9)))), ((max(119, -42)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = (arr_0 [1]);
        var_22 = ((!(((~(arr_0 [i_0]))))));
        var_23 = (min(var_23, ((max((arr_0 [i_0]), (max(132, (arr_0 [i_0]))))))));
        var_24 = ((!(arr_1 [1] [i_0])));
        var_25 = (min(var_25, ((max(124, ((((var_6 ? 536869888 : (arr_0 [i_0]))) / (arr_0 [i_0]))))))));
    }
    var_26 += 1;
    #pragma endscop
}
