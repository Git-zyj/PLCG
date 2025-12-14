/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((((-var_6 ? var_5 : -21682))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = 870226004;

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_7 [i_0] [i_0] = (42 >= 27);
            var_14 = (arr_4 [i_0] [i_0] [i_0]);
            var_15 = (arr_5 [i_0]);
        }
        var_16 = (arr_6 [i_0] [i_0]);
        var_17 = (max(var_17, (var_4 == 17615)));
        var_18 = (max(var_18, (arr_1 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        arr_10 [i_2] = 2381620519;
        var_19 = (arr_8 [i_2]);
        arr_11 [i_2] [i_2] = var_11;
    }
    #pragma endscop
}
