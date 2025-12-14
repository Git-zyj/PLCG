/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_12 = (max(((var_10 == (!var_3))), (arr_1 [i_0])));
                var_13 = (min(1, 9223372036854775807));
                var_14 = (max(var_14, ((max(((min((arr_4 [i_1] [i_1 + 1] [i_1]), (arr_4 [i_1] [i_1 + 2] [i_1])))), var_7)))));
                var_15 *= -var_7;
            }
        }
    }

    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_16 = (max(var_16, ((min((arr_10 [i_2] [i_2] [i_3]), var_4)))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    {
                        var_17 = -447407084;

                        for (int i_6 = 2; i_6 < 18;i_6 += 1)
                        {
                            arr_19 [i_6] [i_2] [i_4] [i_4] [16] [i_2] [i_2] |= (((min(var_8, (arr_16 [i_6] [i_6 - 2] [i_6 - 2] [i_6 - 2] [i_6] [i_6 - 1]))) < var_11));
                            arr_20 [1] [1] [i_6] [i_5] [i_6] [i_4] [i_2] &= var_0;
                        }
                        var_18 = var_8;
                    }
                }
            }
            arr_21 [i_2] [i_2] [i_2] |= (max(var_9, ((((var_7 ? var_0 : var_6)) * (arr_9 [i_2])))));
        }
        for (int i_7 = 0; i_7 < 0;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 18;i_9 += 1)
                {
                    {
                        var_19 = 374433800;
                        arr_29 [i_2] [i_2] |= (max(((var_1 ? var_8 : var_8)), ((58106 >> (var_3 - 3141)))));
                        arr_30 [i_2] [i_2] [i_8] [8] &= (max(-var_0, ((var_7 + ((-(arr_26 [i_2] [i_7 + 1] [i_9])))))));
                        var_20 = -126;
                        arr_31 [i_2] [i_7] [i_7] [i_7] = (max(((((max(var_7, (arr_24 [i_7] [8])))) >> (var_2 << var_6))), var_6));
                    }
                }
            }
            var_21 *= (arr_9 [i_2]);

            /* vectorizable */
            for (int i_10 = 1; i_10 < 17;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        {
                            var_22 = (max(var_22, (((var_11 & (~var_3))))));
                            var_23 = (~var_6);
                            var_24 = (~var_2);
                        }
                    }
                }
                arr_41 [i_7] [i_10] = (var_6 && var_0);
                arr_42 [i_2] [i_7] [i_7] [i_10 + 1] = (~(var_7 != var_8));
                arr_43 [i_7] = (((~var_7) ? (((arr_18 [i_2] [i_7] [i_7] [i_10] [16]) << (var_11 - 154))) : (~var_0)));
            }
        }
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 19;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 19;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 19;i_15 += 1)
                {
                    {
                        var_25 &= ((((var_3 ? var_7 : var_3))));
                        arr_52 [i_2] [i_15] [i_14] = (min(127, -1304859778130392672));
                        var_26 = var_7;

                        for (int i_16 = 1; i_16 < 18;i_16 += 1)
                        {
                            var_27 = ((~(max((arr_18 [i_16] [i_16 - 1] [i_16 - 1] [i_15] [i_14]), (~7429)))));
                            arr_55 [i_13] [i_15] [i_14] [i_14] [i_16] [i_14] [i_14] = ((-(min(var_9, var_6))));
                            arr_56 [i_14] [i_13] [i_15] [i_16] [i_16] [12] = (~var_0);
                            var_28 = var_8;
                        }
                        for (int i_17 = 0; i_17 < 1;i_17 += 1)
                        {
                            arr_60 [i_17] [i_15] = (arr_22 [i_13] [1] [i_17]);
                            arr_61 [i_17] [11] [i_15] [i_15] [i_15] [i_13] [i_2] = (!var_4);
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_18 = 4; i_18 < 18;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 1;i_19 += 1)
            {
                {
                    arr_67 [15] [i_18] [i_2] [i_2] = min((arr_18 [i_18 - 3] [i_18 - 4] [i_18 - 3] [i_18 + 1] [i_18 - 2]), ((var_4 * ((var_11 ? var_2 : var_4)))));
                    var_29 = ((((min((arr_11 [i_18 - 4] [i_18]), var_5))) || (((-(((arr_11 [i_19] [i_18]) ? var_0 : var_10)))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_20 = 0; i_20 < 1;i_20 += 1)
    {
        /* LoopNest 2 */
        for (int i_21 = 0; i_21 < 14;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 1;i_22 += 1)
            {
                {
                    var_30 = (~var_1);
                    var_31 = var_0;
                    /* LoopNest 2 */
                    for (int i_23 = 0; i_23 < 14;i_23 += 1)
                    {
                        for (int i_24 = 0; i_24 < 14;i_24 += 1)
                        {
                            {
                                var_32 &= var_8;
                                var_33 = var_11;
                                var_34 = ((var_9 ? var_5 : var_5));
                                var_35 = var_1;
                            }
                        }
                    }
                }
            }
        }
        var_36 = -var_11;
    }
    #pragma endscop
}
