/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176162
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_10 = (max(var_10, 4182693586));
        arr_2 [i_0] = (((~0) ? ((((!(!var_3))))) : (((0 ? (arr_0 [i_0] [i_0]) : 9223372036854775807)))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_11 = (min((((((max(436188639, (arr_4 [i_1] [i_1])))) ? 2199023255551 : ((max((arr_3 [i_1] [i_1]), 1)))))), var_8));
        arr_6 [i_1] = ((-(((max((arr_5 [i_1]), (arr_5 [i_1]))) & (~-2199023255551)))));
        arr_7 [i_1] [i_1] = (arr_3 [i_1] [i_1]);
        arr_8 [i_1] = (32736 - 4294934560);
    }
    var_12 &= (min(((min(28, (var_3 != var_7)))), -1));
    #pragma endscop
}
