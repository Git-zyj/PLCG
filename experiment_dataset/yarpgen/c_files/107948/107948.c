/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += var_0;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0 + 1] = (~15463441710364993582);
        arr_3 [i_0] = ((var_11 ? var_0 : var_7));

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            arr_15 [20] [i_1] [i_3] = ((-33 ? (1 / 1) : var_4));
                            arr_16 [i_1] [i_3] [1] = -8069110847776218258;
                        }
                    }
                }
                var_18 = (0 ? var_0 : var_2);
                arr_17 [1] [i_2] = ((-(arr_0 [i_1 - 1])));
            }
            arr_18 [i_1] [20] = ((-7 ? 3968 : var_7));

            for (int i_5 = 4; i_5 < 21;i_5 += 1)
            {
                var_19 ^= (!var_13);
                arr_21 [i_0] = (((var_7 + 15463441710364993582) ? var_1 : (arr_5 [i_0 - 1] [i_1 + 2] [i_5 + 2])));
            }
        }
    }

    /* vectorizable */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                {
                    var_20 ^= (!8191);

                    for (int i_9 = 1; i_9 < 12;i_9 += 1)
                    {
                        var_21 = (((-58653646 || 8004) ? (!973650795292458169) : var_3));
                        var_22 = -var_12;
                        arr_33 [i_6] [i_6] = var_14;
                    }
                }
            }
        }
        arr_34 [3] [i_6] = var_11;
    }
    var_23 -= var_7;
    var_24 = (min(var_24, var_6));
    #pragma endscop
}
