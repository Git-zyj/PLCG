/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] = (((var_10 ? var_10 : var_12)));
        var_16 = (((var_3 == var_0) >> (var_3 + 7799461523505466862)));
        arr_5 [i_0] [i_0] = ((-(var_4 & var_13)));
    }
    var_17 = (max(((((var_13 ? var_10 : var_10)) | (((var_1 ? var_15 : var_2))))), ((((((var_3 ? var_9 : var_10))) ? var_11 : (var_14 ^ var_15))))));
    #pragma endscop
}
