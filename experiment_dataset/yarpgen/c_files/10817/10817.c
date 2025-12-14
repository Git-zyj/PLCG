/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_12 = 9223372036854775787;
        var_13 = (max(var_3, (var_10 <= var_4)));
        arr_2 [i_0] [i_0] = (max(((min(var_0, 65528))), var_7));
        arr_3 [i_0] = (((min((arr_1 [0]), var_1)) & var_5));
        arr_4 [i_0] = (((max(2147483647, 2147483647)) / -2147483647));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_14 = (min(var_14, (var_6 || -2147483617)));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            {
                                var_15 = 1;
                                arr_19 [i_1] [i_1] [i_1] = -2147483647;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                var_16 = (arr_1 [i_1]);
                                arr_25 [i_1] [i_1] [3] [i_1] [14] = (((4544056348508305437 ^ 65535) ? (-52 + var_7) : (arr_12 [i_2 + 2] [i_2 + 3] [i_2 + 3] [i_2 - 2])));
                                var_17 = (arr_23 [i_7] [i_6] [i_2 - 1] [i_2 - 1] [i_1]);
                            }
                        }
                    }
                    var_18 = ((((40432 ? (arr_6 [i_1]) : var_3)) & ((((arr_10 [i_1]) >> (((arr_0 [i_3]) + 8223347427352786221)))))));
                }
            }
        }
        var_19 = 127;
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
    {
        var_20 = 2147483627;

        for (int i_9 = 2; i_9 < 24;i_9 += 1)
        {

            /* vectorizable */
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                var_21 = var_5;
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        {
                            var_22 ^= (var_7 || -48);
                            var_23 = var_8;
                            var_24 ^= ((549755813888 != (arr_35 [i_8] [13])));
                        }
                    }
                }
                arr_37 [i_10] [i_10] [i_9] [i_8] = ((arr_13 [i_8] [i_9 + 1] [i_8] [i_10]) + var_2);
                var_25 = (((arr_36 [i_10] [i_9]) / -1));
            }
            var_26 = (max(var_26, ((((((arr_32 [i_9 + 1] [i_9 - 1]) + 2147483647)) >> (((max(var_11, (arr_32 [i_9 + 1] [i_9 - 1]))) - 4101115772)))))));
            arr_38 [i_9] = (max(-2147483635, 47803));
            var_27 = 2147483647;
        }
        var_28 = ((((((arr_16 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [9]) >= var_11))) % var_11));
    }
    for (int i_13 = 1; i_13 < 15;i_13 += 1)
    {
        var_29 = ((((max(var_11, (758366406 & -93)))) ? ((110 | (-29166 - 22247))) : (-22 & var_0)));
        var_30 *= ((199 || (((((arr_31 [2] [i_13 - 1] [i_13 + 1]) << (44 - 18))) > (var_6 / var_5)))));
        var_31 = ((((min(48, 8))) ? (17534537391916610928 - 1183731176) : ((min(1, var_7)))));
    }
    var_32 = (min(((var_3 + (-6019 - var_10))), var_9));
    #pragma endscop
}
