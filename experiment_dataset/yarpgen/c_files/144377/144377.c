/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((var_8 ? var_11 : var_9)))) ? var_5 : ((((1 ? var_6 : 371785124))))));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_17 = ((((arr_2 [i_0 - 2]) && (((arr_1 [i_0]) == -31563)))));
        arr_3 [i_0 - 1] [i_0] = ((var_11 ? (868709306237302502 - -31563) : var_12));
    }
    var_18 = (max(var_18, var_5));
    #pragma endscop
}
