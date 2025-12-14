/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_19 = arr_1 [i_0];
        var_20 = var_7;
        var_21 = (((~(var_1 ^ var_16))));
    }
    /* LoopNest 3 */
    for (int i_1 = 3; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 20;i_5 += 1)
                        {
                            {
                                var_22 = (arr_6 [i_1] [i_2]);
                                arr_16 [i_3] = ((var_2 ? var_5 : (max(2220816101, (0 ^ var_11)))));
                            }
                        }
                    }
                    arr_17 [3] [i_3] = var_2;
                    arr_18 [2] [i_3] = ((max((arr_15 [i_1 - 1] [i_1 + 2]), 133693440)) - 0);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 19;i_7 += 1)
                        {
                            {
                                arr_23 [i_1] [i_1] [i_3] [i_3] = (arr_2 [i_3]);
                                var_23 = var_15;
                                var_24 = (max(255, 17));
                                var_25 = (min((min(var_0, (~1730618133735843245))), var_1));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                {
                    arr_32 [i_8] [i_8] = ((var_8 < (((((-751708347 ? 107 : 1))) ? (1730618133735843245 > 0) : (arr_15 [i_8] [i_8])))));
                    arr_33 [i_8] [16] [i_10] = ((-var_6 ? ((((var_10 > (arr_7 [1] [i_9] [i_10])))) : (min(var_12, var_0)))));
                    arr_34 [i_8] [i_8] [i_8] = (arr_9 [i_8] [i_10]);
                }
            }
        }
        arr_35 [i_8] [i_8] = (((~-7640845152327067458) ? (((min(var_6, (arr_28 [12] [i_8]))))) : 72057456598974464));
        var_26 = (((max(var_11, var_13)) >= (arr_24 [7])));
        arr_36 [i_8] [i_8] = ((((((!((((arr_29 [i_8] [1] [i_8]) & var_12))))))) / var_17));
    }
    #pragma endscop
}
