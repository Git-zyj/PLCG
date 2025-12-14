/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= var_8;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_21 ^= 61888;

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            arr_4 [i_0 - 1] [i_0] [9] = 151;
            var_22 ^= (((var_12 ^ 3660) / 34615));

            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    arr_9 [i_0] [i_0] [i_2 - 1] [0] = 0;
                    var_23 = (min(var_23, 3676));
                }
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    var_24 = (min(var_24, -var_17));
                    arr_12 [i_0] [i_0] [i_2] [i_4] [i_4] = var_16;
                }
                arr_13 [i_0] [i_1] [i_2] [i_1] = ((((var_4 ? var_0 : 2486109665)) ^ -var_6));
                var_25 = ((-((1 ? var_4 : 61888))));
                arr_14 [i_0] = (~var_10);
            }
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                arr_18 [i_0] [i_0] [i_0] = var_10;

                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    var_26 = (max(var_26, -8608));
                    arr_21 [i_0] [i_1] [13] [i_6] = var_1;
                    arr_22 [1] [i_0] [i_0] [i_0] [i_0] [i_0] = ((var_0 ? 13611 : ((var_8 ? 32689 : var_0))));
                }
                arr_23 [14] [i_5] [i_5] [i_0] = ((var_3 * (~var_8)));
                arr_24 [i_0] [i_1] [i_1 - 1] = (((~var_16) | var_8));
                arr_25 [i_0] [i_1] = (((~var_13) ? -var_12 : ((-8605 ? var_1 : var_16))));
            }
            var_27 = (((var_5 ? -16384 : 32680)));
            arr_26 [i_0 - 1] [i_1] [i_0] = ((-var_1 ? (-628574982 | var_6) : var_4));
        }
        for (int i_7 = 1; i_7 < 22;i_7 += 1)
        {

            for (int i_8 = 1; i_8 < 23;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        {
                            arr_37 [i_0] [i_9] [i_8] [i_0] = (((((var_4 ? var_13 : var_15))) ? var_0 : var_13));
                            arr_38 [i_10] [i_9] [i_0] [i_7 - 1] [i_0] = (-(!-1254897588));
                            arr_39 [i_0] [i_7 + 1] [i_0] [i_8] = ((-(!var_4)));
                            arr_40 [i_0] [i_0] [i_0] [i_0] = ((var_0 ? -43738 : ((var_18 ? var_9 : var_14))));
                        }
                    }
                }
                arr_41 [i_0] [1] [i_8] = -10030;
            }
            var_28 = (min(var_28, (4885213473788301495 | var_9)));
            arr_42 [i_0] [i_0] = 1;
        }
    }
    for (int i_11 = 2; i_11 < 14;i_11 += 1)
    {
        var_29 = (max(var_29, (((-(((((var_2 ? 478950741 : var_2))) & (0 ^ 10044))))))));
        arr_46 [i_11] = ((var_1 ^ ((-(var_16 | var_12)))));
    }
    var_30 = 3973697268;
    #pragma endscop
}
