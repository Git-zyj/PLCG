/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_13 = (((arr_1 [i_0 + 4]) & ((1059760225 ? var_9 : var_3))));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_4 [i_0] [i_1] = (((arr_3 [i_0 + 3]) & (arr_3 [i_0 + 2])));
            var_14 &= (((arr_2 [i_0] [i_0] [i_0]) ? (arr_0 [i_0 + 3] [i_0 + 3]) : 1050));
            arr_5 [i_1] [i_0] [i_0] = (((arr_2 [i_0 - 1] [i_0 + 1] [i_1]) > 1));
        }
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    {
                        var_15 = var_11;
                        arr_17 [i_2] [i_2] [i_2] = (((((arr_2 [i_0] [i_2] [i_0]) | 64486)) ^ (~31961)));

                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            var_16 += (arr_2 [i_3] [i_3] [i_2]);
                            var_17 = arr_19 [i_2];
                        }
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            arr_23 [i_0] [i_2] [i_3] [i_3] [i_3] [i_0] [i_2] = (arr_22 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0] [i_0]);
                            arr_24 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0] = var_10;
                        }
                    }
                }
            }
        }

        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            var_18 = (((arr_18 [i_0] [0] [i_0] [0] [i_0]) ? (arr_18 [i_0] [12] [i_0] [i_0] [i_0]) : (arr_18 [i_0 + 4] [8] [i_0 + 4] [i_0 + 4] [i_0])));
            var_19 = (max(var_19, ((((arr_13 [18]) || (arr_13 [18]))))));
        }
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    {
                        var_20 = (((arr_21 [i_0 + 2] [i_0 + 2] [i_0 + 2]) * (arr_21 [i_0 - 1] [i_0 - 1] [i_0])));
                        var_21 = (var_10 < var_1);
                        var_22 = (((arr_2 [i_0 + 3] [i_0 + 2] [i_0 - 1]) | (((arr_18 [i_0] [i_9] [i_9] [i_10] [i_9]) ? (arr_7 [i_10]) : var_9))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 25;i_11 += 1)
    {

        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 25;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        {
                            arr_48 [i_11] [i_12] [i_13] [i_14] [i_15] = (((arr_41 [i_14]) | (arr_46 [i_11] [i_11])));
                            var_23 += ((((((arr_36 [i_11]) + 0))) ? 21818 : 100083961));
                            arr_49 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] = (((arr_44 [i_11] [i_11] [i_11] [i_11]) == (arr_38 [i_11])));
                        }
                    }
                }
            }
            var_24 = var_3;
            arr_50 [i_12] = (arr_46 [i_12] [i_11]);

            for (int i_16 = 0; i_16 < 25;i_16 += 1)
            {
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 25;i_17 += 1)
                {
                    for (int i_18 = 2; i_18 < 23;i_18 += 1)
                    {
                        {
                            var_25 = ((!(arr_58 [i_12] [i_18 - 1] [i_12] [i_18 + 2] [i_18] [i_18 - 1] [i_18 + 2])));
                            var_26 = 64497;
                        }
                    }
                }
                arr_61 [i_11] [i_11] [i_11] [i_16] &= ((arr_40 [i_11] [i_11] [i_16]) ? (arr_52 [i_12] [i_16] [i_12] [i_11]) : (arr_52 [i_11] [i_11] [i_11] [i_11]));
            }
        }
        var_27 *= ((!(((var_1 ? var_6 : (arr_54 [i_11] [i_11] [i_11] [i_11]))))));
    }
    for (int i_19 = 0; i_19 < 19;i_19 += 1)
    {
        /* LoopNest 3 */
        for (int i_20 = 2; i_20 < 18;i_20 += 1)
        {
            for (int i_21 = 1; i_21 < 1;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 19;i_22 += 1)
                {
                    {
                        arr_72 [i_19] [i_19] = (((!var_10) ^ ((((max((arr_20 [i_19] [i_19] [i_19] [i_19] [i_19]), 2048))) ? (((arr_43 [i_19] [i_19] [i_19] [i_19]) ? 400361950 : (arr_35 [i_22] [i_21] [i_19] [i_19]))) : (255 >= var_0)))));
                        var_28 = (~((var_8 ? -12531 : ((-40 ? var_12 : (arr_44 [i_19] [i_19] [i_19] [i_19]))))));
                    }
                }
            }
        }
        arr_73 [i_19] [i_19] = (~400361950);
    }
    var_29 = 1;
    /* LoopNest 3 */
    for (int i_23 = 0; i_23 < 17;i_23 += 1)
    {
        for (int i_24 = 0; i_24 < 17;i_24 += 1)
        {
            for (int i_25 = 0; i_25 < 17;i_25 += 1)
            {
                {
                    arr_84 [i_25] [i_23] [i_23] [i_23] = (arr_27 [i_23]);
                    var_30 = (arr_36 [i_23]);
                }
            }
        }
    }
    #pragma endscop
}
