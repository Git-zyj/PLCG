/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((((var_5 + 2147483647) >> (var_5 + 54)))) || (((var_7 ? var_3 : var_9))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_13 = (arr_1 [i_0] [0]);
        arr_2 [i_0] = var_7;
        var_14 = ((((((var_6 ? var_8 : var_4)) == ((var_11 ? var_4 : (arr_0 [i_0]))))) ? (((((var_5 ? var_10 : var_6))) ? ((var_3 & (arr_0 [0]))) : ((var_6 ? (arr_1 [i_0] [i_0]) : var_6)))) : (((!var_11) ? ((4294967293 ? var_2 : var_4)) : (((var_9 + 2147483647) >> (var_8 + 956251236)))))));
    }
    #pragma endscop
}
