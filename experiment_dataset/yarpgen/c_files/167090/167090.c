/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        var_16 = ((1 ? (arr_2 [i_0]) : 467364912));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_17 = (((arr_1 [i_0] [i_0]) > var_3));
            arr_6 [i_0] [i_0 + 2] [i_1] = var_13;
            var_18 = 467364895;
            var_19 ^= var_13;
            arr_7 [i_0] = var_5;
        }
        var_20 -= (((arr_4 [6] [i_0]) << (arr_3 [i_0 + 3] [4] [2])));
        var_21 = (((arr_2 [i_0]) << (var_7 - 11147)));
        arr_8 [i_0] = 1;
    }
    var_22 = (max(var_22, (((var_7 ? (512245096126567930 & var_8) : var_2)))));
    var_23 = var_5;
    #pragma endscop
}
