/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            var_20 = (~-18397);
            arr_4 [18] [i_1] = ((!(arr_0 [i_1 + 1] [i_1 - 1])));
        }
        var_21 = (((((arr_2 [i_0]) ? -631747229 : (arr_3 [i_0] [i_0]))) > var_16));
    }
    #pragma endscop
}
