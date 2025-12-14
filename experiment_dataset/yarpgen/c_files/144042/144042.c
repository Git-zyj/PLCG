/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_17 = (((arr_0 [i_0]) ? (max((((arr_2 [i_0]) ? (arr_0 [i_0]) : (arr_3 [i_0] [i_0]))), ((((arr_1 [i_0]) || (arr_1 [i_0])))))) : (((((((arr_1 [i_0]) | (arr_1 [i_0])))) && (((-(arr_3 [i_0] [i_0])))))))));
        var_18 = (min(var_18, ((min(((((max((arr_2 [2]), (arr_0 [i_0])))) ? ((-(arr_1 [8]))) : (((arr_1 [1]) * (arr_2 [6]))))), (((((((arr_0 [i_0]) >= (arr_3 [i_0] [i_0])))) & (((arr_1 [10]) ? (arr_3 [i_0] [i_0]) : (arr_0 [i_0])))))))))));
    }
    var_19 = (min(var_1, var_6));
    var_20 = (max((max(var_14, (var_1 != var_7))), (((((((var_16 + 2147483647) << (var_6 - 35)))) >= (var_12 - var_10))))));
    #pragma endscop
}
