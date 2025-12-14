/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_10 [14] [6] [i_2] [2] [i_2] [10] = ((~(-2147483647 - 1)));

                        for (int i_4 = 3; i_4 < 13;i_4 += 1)
                        {
                            var_15 -= (!(-2147483647 - 1));
                            arr_14 [3] [14] |= (2147483633 / 18446744073709551615);
                            var_16 = (20560 >= 2147483638);
                        }
                        var_17 = (!184);
                        arr_15 [i_0] [i_1 - 1] [i_2] [i_3 - 1] [6] = (var_10 <= 4119993793);
                        var_18 += ((var_5 | (181311934 | var_7)));
                    }
                }
            }
            var_19 = (((-127 - 1) ^ -68));
            arr_16 [i_0 - 2] [i_1 + 1] [i_0 - 2] = (var_10 < var_2);
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    {
                        var_20 = var_4;
                        arr_22 [i_6] [i_5] [0] [i_5] [i_0] = (((1 || 0) / var_9));
                        arr_23 [i_0] [i_0] [i_1] [i_0] [i_0] &= ((~(10991916988061580628 > var_2)));
                    }
                }
            }
        }
        arr_24 [i_0] = (((min((max(var_14, -97)), ((min(var_3, 47)))))) >= (2147483647 || var_6));
    }
    for (int i_7 = 1; i_7 < 7;i_7 += 1)
    {
        arr_28 [i_7] = (max((var_3 - var_12), (!-78)));
        var_21 |= 0;
    }
    /* vectorizable */
    for (int i_8 = 3; i_8 < 18;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                {
                    arr_35 [i_8] [0] |= ((3 && var_12) && var_14);

                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        var_22 |= ((0 && var_6) != 47626);

                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            var_23 = var_10;
                            var_24 = (min(var_24, (((86 - (((-22344 + 2147483647) << (var_6 - 48109))))))));
                            arr_42 [i_8 + 1] [i_10] [i_10] [i_11] [i_11] = (12122058621993606031 > 5888);
                        }
                    }
                    for (int i_13 = 2; i_13 < 16;i_13 += 1)
                    {
                        arr_46 [i_10] [i_8] [i_8] [i_10] = (var_14 ^ 242);
                        var_25 -= (!var_4);
                    }
                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        var_26 ^= (var_12 <= var_4);
                        arr_50 [i_14] [i_10] [i_10] [2] [i_10] [3] = ((101 - 1) ^ var_3);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_15 = 3; i_15 < 17;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 20;i_16 += 1)
            {
                {
                    var_27 += (var_2 + 174973491);
                    var_28 = (max(var_28, (-9334 <= -2147483642)));
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 20;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 20;i_18 += 1)
                        {
                            {
                                var_29 = var_6;
                                var_30 += var_4;
                            }
                        }
                    }
                    var_31 = (((var_10 != var_5) >= 193));
                }
            }
        }
    }
    var_32 += var_0;
    /* LoopNest 2 */
    for (int i_19 = 0; i_19 < 16;i_19 += 1)
    {
        for (int i_20 = 0; i_20 < 16;i_20 += 1)
        {
            {
                arr_67 [9] = (max(-22054, (((~171) & (193 ^ var_1)))));
                var_33 = ((((~(-2147483647 - 1))) == -124));
                arr_68 [i_19] = 146;
                var_34 = (min(var_34, ((((~-124) < 18446462598732840960)))));
            }
        }
    }
    #pragma endscop
}
