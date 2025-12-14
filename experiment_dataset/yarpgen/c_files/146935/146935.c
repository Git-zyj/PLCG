/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((max(610904448, -610904448))) ? 2097151 : ((var_6 ? var_5 : var_7)))) | var_10);

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = (((min(var_0, (arr_2 [i_0]))) | (!610904448)));
        var_15 = ((((((arr_1 [i_0]) ? var_2 : (arr_1 [i_0])))) ? (1 >= 1) : (((arr_0 [i_0]) ? var_12 : (arr_2 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_7 [11] = var_3;
        arr_8 [8] = var_0;
    }
    var_16 += ((((min((min(var_9, var_13)), -var_9))) ? var_1 : 255));
    var_17 = (max(var_17, ((((-(23 & 13666799863329491720)))))));
    #pragma endscop
}
