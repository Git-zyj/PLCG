/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            var_18 = ((172 ? ((((max(148, var_10))) ? (((arr_0 [i_0] [i_1]) ? var_5 : 3580494500)) : var_14)) : (min(81, 4294967295))));
            var_19 = max(((~(arr_1 [i_1 + 2]))), (((arr_1 [i_1 + 1]) ^ 83)));
            var_20 -= ((185 > ((~(arr_1 [i_0])))));
            var_21 = ((255 ? (min(114, (arr_3 [i_0]))) : -1));
        }
        var_22 = (+((4 ? (arr_2 [i_0 + 2]) : var_8)));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_23 = (((152 & (arr_5 [i_2] [i_2]))));
        var_24 = 6;
        var_25 = 9280148741928507367;
        var_26 = (((((arr_5 [i_2] [i_2]) + 3580494488))) ? (arr_6 [i_2] [i_2]) : (arr_5 [i_2] [i_2]));
    }
    var_27 = var_4;
    #pragma endscop
}
