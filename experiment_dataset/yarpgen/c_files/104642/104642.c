/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~var_9);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_12 = var_5;
        arr_3 [i_0] = 4155614582718728474;
        var_13 = -4155614582718728475;
        var_14 = var_5;
        arr_4 [i_0] = var_10;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_8 [i_1] = (!var_1);
        arr_9 [i_1] [1] = (~(~-9023377136690904113));

        for (int i_2 = 1; i_2 < 7;i_2 += 1)
        {
            var_15 = -8891617763489842821;
            var_16 = (--2147483647);
        }
        arr_14 [i_1] = 4155614582718728474;
        arr_15 [i_1] = -var_5;
    }
    var_17 = 198;
    #pragma endscop
}
