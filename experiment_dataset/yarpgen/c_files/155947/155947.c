/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((var_9 + 2147483647) >> ((max(var_1, (var_12 != 1718))))));
    var_14 = var_4;
    var_15 = (-9223372036854775807 - 1);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0 - 1] = (((arr_2 [i_0 + 1] [i_0 - 2]) - 39919));
        var_16 = ((((var_7 / (arr_3 [i_0 - 2]))) & (arr_3 [i_0])));
        var_17 = var_2;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        var_18 = 1718;
                        var_19 = (max(-8112154028818591035, 59));
                    }
                }
            }
        }
        var_20 = (arr_13 [i_1] [i_1] [i_1]);
        var_21 = (min(var_21, 62));
        arr_17 [i_1] = (((var_9 | 39907) ^ var_11));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    {
                        var_22 = max(-1718, 1717);
                        var_23 = (-9223372036854775807 - 1);
                        var_24 = (arr_16 [i_1] [i_5] [i_5] [2]);
                        var_25 = ((-1717 < (arr_22 [i_1] [i_5] [i_6 - 1] [i_1])));
                        var_26 = var_11;
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        var_27 |= ((((((((32 ? (-9223372036854775807 - 1) : (-2147483647 - 1))) + 9223372036854775807)) + 9223372036854775807)) << (35564 - 35564)));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                {
                    var_28 = -32753;
                    var_29 = (arr_5 [i_10]);
                }
            }
        }
    }
    for (int i_11 = 0; i_11 < 22;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 22;i_12 += 1)
        {
            for (int i_13 = 3; i_13 < 20;i_13 += 1)
            {
                {
                    arr_40 [i_12] [i_13] = (arr_35 [i_11]);
                    var_30 = (((((arr_30 [i_11]) + 9223372036854775807)) >> (var_7 + 441921458854249408)));
                }
            }
        }
        var_31 = ((-(((((arr_33 [i_11]) / 7768823176023539420)) / -244))));
        /* LoopNest 3 */
        for (int i_14 = 2; i_14 < 21;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 22;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 22;i_16 += 1)
                {
                    {
                        var_32 = ((var_2 ? (0 * 65512) : ((max(1717, (arr_34 [i_14 - 1] [i_14 + 1] [i_16]))))));
                        var_33 = var_9;
                    }
                }
            }
        }
        arr_48 [i_11] [5] = (6304 - 106);
    }
    #pragma endscop
}
