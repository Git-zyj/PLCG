/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= var_7;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_12 = var_6;
                arr_6 [i_1] = var_10;
                var_13 += var_0;
                var_14 = var_6;
                arr_7 [i_1] [i_1] = var_5;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 4; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_15 = (max(var_15, var_2));

                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        arr_20 [i_2 - 2] [i_2 - 3] [i_2 - 4] [i_2 - 4] = var_3;
                        arr_21 [i_2] [1] [i_2] [i_2 - 3] [i_2 - 3] [i_2] = var_2;

                        /* vectorizable */
                        for (int i_6 = 3; i_6 < 21;i_6 += 1)
                        {
                            var_16 = var_0;
                            var_17 = var_10;
                            var_18 = var_1;
                            var_19 = (max(var_19, var_0));
                        }
                        for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                        {
                            arr_28 [i_2] [i_2] [1] [i_2] [1] [21] = var_4;
                            arr_29 [i_7] [i_5] [i_4] [i_2] = var_5;
                            var_20 = var_7;
                            var_21 = (min(var_21, var_5));
                        }
                        for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
                        {
                            arr_33 [i_2] [i_2] [i_2] [i_2 + 1] = var_0;
                            var_22 = var_3;
                        }
                        arr_34 [i_2 - 3] [i_2] = var_1;
                    }
                    for (int i_9 = 2; i_9 < 22;i_9 += 1)
                    {
                        arr_37 [i_9 - 2] [i_4] [i_2] [i_3] [i_2] [i_2] = var_6;
                        arr_38 [i_2] [i_2] [i_2] [23] [i_2 - 2] [i_2] = var_4;
                    }
                    arr_39 [i_2] [i_2] [i_2] [i_2] = var_1;
                }
            }
        }
    }
    #pragma endscop
}
