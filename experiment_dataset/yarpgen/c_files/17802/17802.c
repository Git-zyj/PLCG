/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        var_13 = var_9;
        var_14 += ((-((((((var_6 == (arr_1 [0]))))) * var_1))));
        var_15 = (min(var_15, (((-(((arr_1 [i_0 - 1]) ? ((((arr_0 [i_0]) == (arr_1 [i_0])))) : (arr_1 [i_0 + 2]))))))));
    }
    var_16 |= (max(((var_10 ? var_2 : (((var_7 ? var_5 : var_7))))), var_0));
    var_17 = (max(var_17, var_3));
    var_18 = ((((max(((var_1 ? var_5 : var_9)), var_11))) ? var_12 : (min(-1571049349, var_11))));
    #pragma endscop
}
