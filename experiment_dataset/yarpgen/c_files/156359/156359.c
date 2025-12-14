/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = ((var_1 ? (((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0]))) : (((arr_2 [i_0] [i_0]) + (arr_2 [i_0] [i_0])))));
        var_20 = var_15;
        var_21 = (i_0 % 2 == zero) ? ((min(((((arr_2 [i_0] [i_0]) >> (var_2 >= var_11)))), (((arr_1 [i_0] [i_0 + 1]) ? (((min(var_18, (arr_2 [i_0] [i_0 - 2]))))) : (arr_0 [i_0])))))) : ((min(((((((arr_2 [i_0] [i_0]) + 2147483647)) >> (var_2 >= var_11)))), (((arr_1 [i_0] [i_0 + 1]) ? (((min(var_18, (arr_2 [i_0] [i_0 - 2]))))) : (arr_0 [i_0]))))));
        var_22 = ((~(arr_2 [14] [14])));
    }
    var_23 = (((((var_9 != var_14) ? -var_4 : (var_18 != var_7))) ^ (((131068 ^ var_10) | var_17))));
    #pragma endscop
}
