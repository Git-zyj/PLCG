/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_10 = (max(var_10, ((min(81, (((1996048391 ? (max(var_7, 4294967286)) : var_1))))))));
        var_11 = (((~-105) > ((min((max(-105, 7882)), (arr_0 [10]))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = var_2;
        var_12 = (min((((var_5 < var_6) > var_9)), (((((var_9 ? var_4 : var_9))) || var_1))));
    }
    var_13 = (max(var_13, (max((min((7870 / 91), -16)), 7884))));
    #pragma endscop
}
