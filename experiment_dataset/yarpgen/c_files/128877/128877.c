/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -var_6;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = ((((((min((arr_0 [i_0]), 17132))) ? (arr_0 [i_0]) : (min((arr_1 [i_0] [i_0]), (arr_2 [i_0])))))) ? (arr_1 [i_0] [i_0]) : var_9);
        arr_4 [i_0] [i_0] = var_13;
        arr_5 [i_0] = -7571839787239320085;
    }
    var_15 = (((~((0 ? var_3 : 1)))));
    #pragma endscop
}
