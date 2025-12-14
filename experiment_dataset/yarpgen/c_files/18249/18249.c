/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [i_0] = ((var_4 ? var_3 : var_15));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_19 = -var_8;

            for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        {
                            var_20 = ((18015290368336502443 ? 0 : 1));
                            arr_18 [i_0] [i_1] [i_3] [i_3] [i_3] [i_3] = (((arr_9 [i_0] [i_0] [i_0]) ? (arr_9 [i_2] [i_3] [i_4]) : 49964));
                        }
                    }
                }
                var_21 = var_3;
                arr_19 [i_1] [i_1] [i_0] = var_9;
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
            {
                var_22 = (((((arr_10 [i_0] [i_0] [i_0]) ? 1 : var_17))) ? ((~(arr_2 [i_1]))) : -12973);
                var_23 = -16;
            }
            var_24 = ((!(arr_5 [i_0])));
        }
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            arr_26 [i_6] = (((~var_2) ? (((var_13 ? 0 : 0))) : var_11));
            var_25 = var_15;
            var_26 = (var_6 + (arr_22 [i_0] [i_0] [i_0] [1]));

            for (int i_7 = 2; i_7 < 24;i_7 += 1)
            {
                var_27 = (1 - 4747761779023637611);
                arr_31 [i_6] [12] = (((var_9 | var_15) ? var_3 : -var_5));
                var_28 = var_11;
            }
            var_29 = ((var_2 ? 1 : ((1865091809 ? var_13 : 1))));
        }
        var_30 = (0 | -692767483);
    }
    var_31 = var_6;
    var_32 = var_17;
    var_33 = (~var_10);
    var_34 = ((0 ? var_0 : var_13));
    #pragma endscop
}
