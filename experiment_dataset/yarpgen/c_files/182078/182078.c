/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_4 [6] = (((((arr_0 [i_0 - 2]) << (((arr_0 [i_0 - 2]) - 15)))) - ((-(arr_0 [i_0 + 1])))));
        arr_5 [i_0] = ((-97 ? var_4 : ((((195 ? 1687 : -8367463827660831968)) ^ (((-5135793198027025141 + 9223372036854775807) << (8367463827660831951 - 8367463827660831951)))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_15 = (arr_2 [i_0 - 1]);
            var_16 -= (var_11 / -8367463827660831968);
        }
    }
    var_17 = ((-(((var_13 && 8367463827660831968) ? var_9 : -1))));

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_18 = (max(var_18, ((max(var_3, (~var_8))))));
        var_19 = (var_2 & ((~(arr_8 [i_2] [i_2]))));
    }
    var_20 = (-8367463827660831999 | 8367463827660831980);
    var_21 = var_8;
    #pragma endscop
}
