/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((!(arr_1 [i_0])));

        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            var_14 = ((-(arr_3 [i_0] [i_1])));
            var_15 = 1842096178;
            var_16 = var_3;
        }
    }
    var_17 = var_11;

    /* vectorizable */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_18 = (+((((arr_3 [1] [i_2]) <= 0))));
        arr_9 [i_2] = ((arr_3 [8] [16]) ? (!var_11) : (var_9 && var_7));
        arr_10 [i_2] = (((arr_8 [i_2]) < var_1));
    }
    var_19 = var_13;
    #pragma endscop
}
