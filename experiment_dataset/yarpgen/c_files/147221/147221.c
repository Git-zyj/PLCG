/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_9 [i_1] = (((arr_1 [i_3]) > var_0));
                        var_15 = (min(var_15, ((((arr_5 [1] [i_2] [i_1]) ? (arr_8 [i_2 - 1] [i_2] [i_2 - 1] [i_2] [i_2 + 1]) : ((6 ? var_1 : var_0)))))));
                        arr_10 [i_0] [i_0] [i_1] [i_0] = (arr_8 [i_3] [4] [i_1] [i_0] [i_0]);
                        arr_11 [i_0] [i_1] [i_2 - 1] [i_0] |= ((-(arr_6 [i_2] [i_0])));

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            arr_14 [i_4] [i_3] [i_1] [i_1] [i_0] = ((757916739 ? 4294967280 : 363344459));
                            var_16 = (max(var_16, (arr_8 [i_0] [i_1] [i_2] [i_3] [i_2 - 1])));
                        }
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_17 = -9223372036854775802;
                            var_18 = (max(var_18, var_9));
                        }
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            var_19 = (172 - 3496779155149763249);
                            var_20 *= var_1;
                            arr_19 [1] [i_1] = ((3496779155149763241 ? -18 : 8191));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_22 [i_0] [i_1] [i_1] [7] [2] = (arr_13 [i_3]);
                            var_21 = var_7;
                            arr_23 [i_7] [i_1] [1] [1] [i_1] [i_0] = (var_2 ? var_1 : (((arr_12 [2] [i_0] [i_0] [i_1] [i_0]) * (arr_16 [i_1] [i_1] [i_2] [i_3] [1]))));
                        }
                    }
                    arr_24 [i_1] [i_2 - 1] = (arr_1 [i_0]);
                    arr_25 [i_1] [i_1] [i_1] [i_1] = (~(((arr_12 [i_0] [i_1] [i_0] [i_1] [i_0]) ? ((-3496779155149763241 ? 21404 : (arr_12 [i_0] [i_0] [i_1] [i_1] [i_2 + 1]))) : 27)));
                }
            }
        }
    }
    var_22 = -8868170031264879345;

    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                {
                    var_23 = (min(var_23, -73));
                    arr_33 [i_9] [1] = ((var_5 / (arr_31 [i_8] [2] [i_10])));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_11 = 1; i_11 < 12;i_11 += 1)
        {
            for (int i_12 = 3; i_12 < 11;i_12 += 1)
            {
                for (int i_13 = 3; i_13 < 11;i_13 += 1)
                {
                    {
                        arr_41 [i_11] [i_11] [i_12] [i_13] = ((min(1, 1)));
                        arr_42 [i_8] [i_11] [i_8] [i_11] = -var_5;
                        var_24 = (((arr_31 [i_11 - 1] [i_13 + 2] [i_12 - 3]) ? (arr_34 [i_11] [i_11] [i_12 - 3]) : (((arr_34 [i_11] [i_11 + 1] [i_11]) ? ((var_14 ? 6062 : var_6)) : (((var_13 + (arr_35 [i_8]))))))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 24;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 24;i_15 += 1)
        {
            {
                arr_49 [i_14] [i_14] [i_15] |= (1 ? 9049123581359246669 : 8868170031264879345);
                var_25 = ((max((arr_48 [i_14] [i_14] [i_15]), var_12)));
                var_26 = (((min(var_8, var_1))));
                /* LoopNest 3 */
                for (int i_16 = 0; i_16 < 24;i_16 += 1)
                {
                    for (int i_17 = 2; i_17 < 20;i_17 += 1)
                    {
                        for (int i_18 = 1; i_18 < 20;i_18 += 1)
                        {
                            {
                                var_27 += ((((((arr_44 [i_17] [i_18 + 1]) | 1))) || ((((1 | -1506612625) ? 17476237236127341278 : ((((arr_45 [i_14]) * (arr_57 [i_14] [i_15] [i_16] [i_16] [i_18])))))))));
                                var_28 = 8868170031264879345;
                                arr_59 [i_15] [i_18] [i_18] [i_14] [i_18] [i_15] [i_14] = var_5;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
