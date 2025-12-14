/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((~(((((max(var_1, var_7))) < var_0)))));
    var_12 |= (((-var_5 > ((var_2 ? var_10 : var_5)))) ? ((min((min(var_7, var_3)), var_3))) : (max(var_9, ((var_5 ? var_6 : var_10)))));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0 - 1]);
        arr_3 [i_0] = (min(((((var_10 ? var_9 : (arr_1 [i_0 + 1]))) & (var_4 + var_9))), ((min((var_9 % var_2), (max((arr_0 [13]), (arr_0 [i_0 + 1]))))))));
        var_13 ^= ((((((arr_0 [i_0 + 1]) ^ var_8))) ? (((arr_0 [i_0 + 2]) ? (arr_0 [i_0 - 1]) : (arr_1 [i_0 - 1]))) : (arr_1 [i_0 - 1])));
    }
    #pragma endscop
}
