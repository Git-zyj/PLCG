/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = 65532;
        var_15 ^= 3;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_16 = min(((min((arr_1 [i_1]), var_5))), -var_9);
        var_17 = (((arr_4 [11] [11]) ? ((~((65533 ? (arr_2 [i_1]) : 3)))) : (((var_6 ? var_11 : (((arr_4 [i_1] [0]) ? var_7 : var_5)))))));
        arr_5 [i_1] = (arr_2 [i_1]);
    }
    var_18 |= var_8;
    var_19 = ((var_1 ? (((~((var_4 ? 8 : var_12))))) : var_1));
    #pragma endscop
}
