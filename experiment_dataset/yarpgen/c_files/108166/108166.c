/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= var_7;
    var_18 += max((max(var_4, -112)), 32767);

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0 + 1] = 1;
        var_19 = (max(var_19, (((-(((arr_0 [i_0]) ? 47594 : (arr_0 [i_0 - 1]))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 = (min((((var_0 != (arr_7 [i_0 + 1])))), (((arr_0 [i_0 + 2]) - ((max(var_10, var_4)))))));
                    var_21 = max(((min(var_2, (arr_6 [i_0 - 1] [10] [i_0 - 1] [i_0 - 1])))), (~var_11));
                }
            }
        }

        for (int i_3 = 2; i_3 < 15;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_22 = (max(var_22, ((max((arr_8 [i_0 + 1] [i_3 - 2]), var_7)))));
                            var_23 = ((((((arr_13 [i_0] [i_3] [i_3] [i_5]) - (-1465712900 ^ 817)))) ? ((var_6 ? -32767 : -var_10)) : (min((arr_10 [i_0 + 1]), (arr_10 [i_0 - 1])))));
                        }
                    }
                }

                /* vectorizable */
                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    var_24 = (min(var_24, ((((arr_20 [i_0] [i_3 + 2] [i_0 + 2]) - var_5)))));

                    for (int i_8 = 1; i_8 < 16;i_8 += 1)
                    {
                        arr_26 [i_0] [i_3] [i_4] [16] [i_8] [i_7] = (arr_3 [i_0]);
                        var_25 &= ((1853718630 - (arr_12 [i_8 - 1] [i_3 + 2] [i_0 - 1] [i_0])));
                        arr_27 [10] [1] [i_4] [1] [i_0] = (arr_9 [i_0] [i_0]);
                        var_26 = (!-542763753);
                    }
                }
                for (int i_9 = 2; i_9 < 16;i_9 += 1)
                {
                    var_27 = (((((arr_21 [i_0 + 2]) ? (arr_14 [i_0] [i_0] [i_0 + 2] [i_0 + 2]) : (arr_14 [i_0] [i_0] [i_0 + 2] [i_0 + 2]))) & (max(-30, (min((arr_18 [i_0] [i_3] [i_4] [i_0] [i_4] [i_9]), (arr_13 [i_9 - 2] [i_4] [i_0 + 2] [i_0 + 2])))))));

                    for (int i_10 = 3; i_10 < 13;i_10 += 1)
                    {
                        var_28 = var_14;
                        arr_34 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0] = (~3615);
                        arr_35 [i_0] [i_0] [i_4] [i_10] [i_10 - 1] [16] = ((~(max(((min(448, (arr_21 [i_0])))), (var_3 & var_13)))));
                    }
                    arr_36 [i_0] [i_3] = arr_6 [i_0 + 2] [i_3] [i_4] [i_9];
                    var_29 = var_6;
                }
                for (int i_11 = 2; i_11 < 15;i_11 += 1)
                {
                    arr_39 [i_0 + 1] [i_0] [i_0] [i_0] = ((((min(0, 104))) ? ((var_6 ? (max(254894002190647882, var_12)) : (-32 - var_8))) : -var_14));

                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        var_30 = ((((min((arr_13 [i_0] [i_3] [i_11] [i_12]), -var_4)) + 2147483647)) >> 1);
                        arr_44 [i_0] [i_3] [i_4] = (max(-32758, 4088));
                        var_31 |= (max((((((min(var_13, (arr_21 [i_0])))) + (arr_23 [i_0] [i_0 - 1] [i_3] [i_3 + 2] [i_3 + 1])))), (((arr_33 [i_0 + 2] [i_11] [i_11 - 2] [i_11 + 1] [i_11]) + (((max(32767, 24))))))));
                    }
                    var_32 += (max(((max(113, (arr_8 [i_0 + 2] [i_3 + 1])))), (max((max(var_6, var_15)), -1))));
                }
                arr_45 [i_3] [10] [i_4] |= var_2;
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 16;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 17;i_14 += 1)
                    {
                        {
                            var_33 &= ((-(arr_4 [i_0 + 2] [i_3 + 1])));
                            var_34 ^= (var_15 < 1);
                        }
                    }
                }
            }
            var_35 = (~(arr_49 [i_0] [2] [i_3 + 1] [i_0] [i_3] [i_0] [i_0 + 1]));
            var_36 = ((65524 ? (~var_14) : (var_6 != var_16)));
        }
    }
    var_37 = var_2;
    #pragma endscop
}
