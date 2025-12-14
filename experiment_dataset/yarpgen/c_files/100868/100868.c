/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((var_1 >> ((var_6 >> (var_3 + 250009692)))));
        var_16 = var_5;
        arr_5 [i_0] = (var_8 * var_6);
        arr_6 [i_0] [i_0] = var_6;
        arr_7 [i_0] = var_2;
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_11 [i_1] = (((var_11 >> (var_2 + 54))));
        arr_12 [i_1] = var_6;
        var_17 = var_8;
    }
    var_18 = (((var_1 - (15407165106573415713 > 73))));
    #pragma endscop
}
