/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, ((max((((var_3 + var_2) ^ (!5300))), var_5)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        arr_8 [i_0] [i_3] = 8388607;
                        arr_9 [i_0] = ((~(arr_5 [i_0] [i_1] [i_2])));
                        var_12 = var_1;

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            arr_12 [i_4] [i_0] [i_0] [i_0] [i_0] = ((~(arr_4 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 1])));
                            var_13 = ((var_2 ? ((64 ? 64 : -8388603)) : 64));
                        }
                    }
                    var_14 = var_2;
                    arr_13 [i_0] [i_1] [i_0] = (((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (arr_7 [i_0] [i_1] [i_1] [i_0]) : 29023));
                    arr_14 [i_0] [i_2] [i_1] [i_0] = ((!-73) || (arr_10 [i_0] [i_0] [i_2]));

                    for (int i_5 = 3; i_5 < 11;i_5 += 1)
                    {
                        var_15 = (((arr_7 [i_0] [6] [6] [i_0]) ? 0 : 18446744073709551615));
                        arr_18 [i_0] = (((((arr_10 [1] [i_0] [1]) ? 722461455077470250 : var_4)) - 21941));
                    }
                }
            }
        }
        var_16 = -1485240408;
        arr_19 [i_0] = 0;
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 12;i_7 += 1)
        {
            {
                arr_26 [i_6] [i_6] = var_5;
                var_17 = (((((238 & (arr_24 [i_7 + 1] [i_6] [i_7 - 1])))) ? (((arr_24 [i_7 + 1] [i_6] [i_7 + 1]) & 31705)) : (arr_24 [i_7 - 1] [i_6] [i_7 + 1])));
            }
        }
    }
    var_18 = (!16);
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 0;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            {
                var_19 = ((((!(arr_32 [i_8 + 1]))) && ((((arr_32 [i_8 + 1]) ? (arr_32 [i_8 + 1]) : (arr_32 [i_8 + 1]))))));
                /* LoopNest 2 */
                for (int i_10 = 4; i_10 < 16;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 15;i_11 += 1)
                    {
                        {
                            var_20 -= (!185);
                            arr_39 [i_8] [i_8] [i_10] [0] [4] [i_10] &= (arr_38 [0] [i_9] [i_10] [i_11]);
                        }
                    }
                }
                var_21 = max((((arr_33 [i_8 + 1]) | (43846 | 13670431769402868382))), 224003349);

                /* vectorizable */
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {
                        for (int i_14 = 4; i_14 < 15;i_14 += 1)
                        {
                            {
                                var_22 = (min(var_22, 77));
                                var_23 = (max(var_23, (((0 ? -113 : (~5984630376355961680))))));
                            }
                        }
                    }

                    for (int i_15 = 1; i_15 < 16;i_15 += 1)
                    {
                        arr_52 [i_8] [i_8] [i_12] [3] = var_0;
                        var_24 = ((-21938 ? (arr_51 [i_8] [i_8 + 1] [i_12] [i_15 + 1]) : (arr_51 [i_15] [i_8 + 1] [10] [i_15 + 1])));
                    }
                    var_25 = ((40890 & (arr_49 [i_12] [i_9])));
                    var_26 = (arr_32 [i_8]);

                    for (int i_16 = 0; i_16 < 17;i_16 += 1)
                    {
                        var_27 = 16;
                        arr_55 [i_12] = (var_4 < 1);
                    }
                    for (int i_17 = 1; i_17 < 13;i_17 += 1)
                    {
                        var_28 = 0;
                        arr_59 [i_8] [i_12] [i_8] [i_17] = (arr_34 [i_17 + 4]);
                    }
                }
                /* vectorizable */
                for (int i_18 = 3; i_18 < 15;i_18 += 1)
                {
                    var_29 = 9223372036854775807;
                    var_30 = -82;
                }
            }
        }
    }
    #pragma endscop
}
