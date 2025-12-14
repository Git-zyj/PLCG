/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, ((((max((max(var_18, var_9), var_17))))))));
    var_20 = (max(var_20, ((max(var_15, var_15)))));

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        var_21 += (min(var_15, var_15));
        arr_3 [i_0] = min(var_11, ((~(min(var_2, var_9)))));
        arr_4 [i_0] = (max((max((min(6, 11)), (~var_12))), ((max((~var_7), ((max(var_4, var_12))))))));
        arr_5 [i_0] = (max(var_12, (max(var_2, var_2))));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            arr_8 [i_0] = (~var_16);
            var_22 &= (!-var_18);
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            arr_11 [i_0] [i_0] = var_3;
            arr_12 [i_0] = var_0;
            var_23 = (min(var_23, -var_17));
            var_24 = var_16;
        }
    }
    var_25 ^= (max(var_8, var_11));
    #pragma endscop
}
