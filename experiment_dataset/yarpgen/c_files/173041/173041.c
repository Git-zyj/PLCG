/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_9;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_18 = (arr_0 [i_0]);
        arr_2 [i_0] = (max(-1033344173, ((min(var_5, var_13)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1] = (((62914560 >> (241 - 233))));

        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            arr_10 [i_1] [i_1] = (arr_6 [i_1] [i_1] [i_2]);
            arr_11 [i_1] [i_1] = ((var_10 ? var_2 : (arr_7 [i_2 + 1] [i_2 + 1])));
        }
    }
    #pragma endscop
}
