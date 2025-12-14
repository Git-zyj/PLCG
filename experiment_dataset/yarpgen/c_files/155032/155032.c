/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    var_11 = 1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 = (arr_2 [i_0]);
        arr_3 [7] = (!-3760803627790300459);
        var_13 = ((((~(arr_2 [i_0]))) - ((-(arr_1 [i_0] [i_0])))));
    }
    var_14 = (max((max(((var_4 ? var_3 : var_5)), (var_9 / var_8))), ((max(var_8, ((max(var_0, var_6))))))));
    #pragma endscop
}
