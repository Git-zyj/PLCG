/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((!(((var_6 ? var_13 : var_1)))))) % var_0));
    var_18 = ((-(~0)));
    var_19 = var_6;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = var_7;
        var_20 = 0;
    }
    var_21 = var_15;
    #pragma endscop
}
