/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_2;
    var_20 = ((((((max(var_9, var_18))) && ((max(192, 2927199292897430956))))) ? (min((((var_2 ? var_10 : var_2))), var_18)) : (var_1 == var_5)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_21 = (min(var_21, (((((((arr_1 [i_0]) / 2927199292897430973))) ? ((var_4 | (arr_1 [i_0]))) : 0)))));
        var_22 = -var_9;
    }
    #pragma endscop
}
