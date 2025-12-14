/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((~(-4 || 36)))) - (((var_10 ? var_9 : var_4)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = min(((8681356033037399487 ? -34 : (arr_0 [i_0]))), -9);
        var_12 = (((arr_0 [i_0]) ^ ((var_6 ? (arr_1 [i_0] [i_0]) : (37 == -5)))));
        arr_4 [10] = ((((min((arr_2 [i_0]), ((var_10 ? (arr_2 [i_0]) : var_1))))) < ((-(min(0, 4))))));
    }
    #pragma endscop
}
