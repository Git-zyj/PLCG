/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = ((!(((var_8 ? var_4 : var_6)))));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_7 [18] [19] [21] = (~var_8);
            arr_8 [3] [i_1] = ((1 ? 2793116431 : 1501850876));
        }
        var_18 = (var_13 % var_9);
        arr_9 [i_0 - 1] [9] &= (-(~15128905721932866710));
        var_19 = (~var_9);
    }
    var_20 = ((var_9 / ((-((var_8 ? var_7 : var_12))))));
    var_21 = (min(var_21, ((max((var_7 * var_11), var_14)))));
    #pragma endscop
}
