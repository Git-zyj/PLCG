/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = -var_5;

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            var_14 += 0;
            var_15 -= (!var_3);
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_16 += (arr_8 [i_2]);
            var_17 = (-(arr_4 [i_0]));
            arr_11 [i_2] = ((-(~0)));
            var_18 = 0;
            arr_12 [i_2] [i_2] = 1;
        }
        var_19 = (max(var_19, (((-(arr_0 [i_0]))))));
    }
    var_20 = var_5;
    var_21 = (~var_3);
    var_22 = (~1084937864);
    var_23 = (max((min(var_8, var_12)), var_6));
    #pragma endscop
}
