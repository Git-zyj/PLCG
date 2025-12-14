/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~(~4)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = ((~((var_1 & (arr_0 [i_0])))));

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            var_18 = -858452552;
            arr_7 [i_0] [i_0] [0] = (!var_11);
            arr_8 [i_0] [i_0] = (var_14 ? (arr_0 [i_1 + 1]) : var_11);
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_19 = (arr_5 [i_0] [i_0] [i_0]);
            var_20 = (~var_11);
        }
        var_21 = (((arr_11 [i_0] [i_0]) ? -44 : (arr_11 [i_0] [i_0])));
        var_22 = arr_0 [i_0];
        var_23 = var_3;
    }
    var_24 = min((~97), -62);
    #pragma endscop
}
