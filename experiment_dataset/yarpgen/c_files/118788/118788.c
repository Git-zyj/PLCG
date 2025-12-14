/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                var_14 = ((32767 ? var_7 : ((min(-95, -var_5)))));
                arr_4 [i_0] = (min(var_9, (((!(arr_3 [i_1 - 3]))))));
                var_15 |= (((-2317194062495229296 || var_1) ? ((2343249782 ? -1 : 15)) : (((471846300 >> (min(0, 3823121009)))))));
                arr_5 [i_0] [i_1] = (((((var_12 | var_8) ? (max((arr_3 [i_1]), var_8)) : (19865 ^ -11))) ^ (arr_2 [i_1] [i_0] [i_0])));
            }
        }
    }
    var_16 = var_11;
    /* LoopNest 3 */
    for (int i_2 = 4; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 13;i_4 += 1)
            {
                {
                    var_17 = (max(var_17, -2317194062495229296));
                    arr_16 [i_2] [i_3] [i_3] [i_4] = (min((arr_12 [i_2] [i_3] [i_4]), 3231563514332121261));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 1; i_5 < 15;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 2; i_6 < 13;i_6 += 1) /* same iter space */
        {
            arr_23 [i_5] = (arr_19 [i_5] [i_6]);
            var_18 = ((-(arr_18 [i_5 - 1])));
            arr_24 [i_5 - 1] [i_5] [i_5] = (((2317194062495229295 == 19865) ? ((2978568421 ? var_4 : var_0)) : 3231563514332121261));
        }
        for (int i_7 = 2; i_7 < 13;i_7 += 1) /* same iter space */
        {
            arr_27 [i_5] = ((var_3 ? 2222179194 : var_0));
            arr_28 [i_5] [i_7 - 1] [i_5 - 1] = -4657;
        }
        for (int i_8 = 1; i_8 < 15;i_8 += 1)
        {
            var_19 = (max(var_19, (!-3231563514332121261)));

            for (int i_9 = 4; i_9 < 12;i_9 += 1)
            {
                arr_36 [i_5] = (arr_22 [i_5]);
                arr_37 [i_5] [i_5] [i_9] = arr_21 [i_8 - 1] [i_5];
            }
        }
        var_20 = (min(var_20, var_6));
    }
    for (int i_10 = 1; i_10 < 15;i_10 += 1) /* same iter space */
    {
        var_21 = (min(var_21, (((1772003376 ? ((-2317194062495229292 | (~2317194062495229278))) : (min(((((((arr_19 [i_10] [i_10]) + 2147483647)) << 0))), ((~(arr_0 [i_10] [i_10]))))))))));

        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            var_22 ^= (arr_1 [i_10]);
            var_23 += ((max((((var_9 >> (18446744073709551615 - 18446744073709551586)))), (var_10 + var_6))));
            /* LoopNest 2 */
            for (int i_12 = 1; i_12 < 14;i_12 += 1)
            {
                for (int i_13 = 3; i_13 < 15;i_13 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 16;i_14 += 1)
                        {
                            arr_55 [i_14] [i_13 - 3] [i_13] [i_11] [i_10] = (((arr_20 [i_12]) ? (-32767 - 1) : ((var_0 + (arr_17 [i_10 - 1])))));
                            arr_56 [i_14] [i_14] [i_14] [i_14] [i_13] [i_14] = 315221676;
                            var_24 += 137438937088;
                            arr_57 [i_10] [i_11] [i_14] &= (45671 ? var_1 : var_9);
                            arr_58 [i_10] [i_11] [i_12] [i_13 - 1] [i_13] = 6;
                        }
                        var_25 = (arr_52 [i_10 - 1] [i_11] [i_12] [i_13] [i_13]);
                        arr_59 [i_13] = 32753;
                        var_26 = (max(var_26, var_12));
                    }
                }
            }
        }
        var_27 = (max((((arr_44 [i_10 - 1] [i_10] [i_10 + 1]) ? var_13 : (min(3463, 0)))), ((3463 ? (arr_53 [i_10 + 1] [i_10 - 1] [i_10 + 1]) : ((max((arr_41 [i_10]), 1)))))));
        /* LoopNest 3 */
        for (int i_15 = 1; i_15 < 15;i_15 += 1)
        {
            for (int i_16 = 2; i_16 < 12;i_16 += 1)
            {
                for (int i_17 = 2; i_17 < 15;i_17 += 1)
                {
                    {
                        var_28 *= ((19864 ? (arr_64 [i_17] [i_16] [i_15] [i_10 - 1]) : var_4));
                        arr_68 [i_10] [4] [i_16] [i_17 + 1] |= 2824423503;
                        var_29 ^= (arr_18 [i_17 + 1]);
                    }
                }
            }
        }
        arr_69 [i_10] = (min((max((min(3823120996, (arr_0 [i_10] [i_10]))), 5090569142302144925)), ((~(((arr_3 [i_10 - 1]) ? var_1 : (arr_0 [i_10] [i_10])))))));
    }
    #pragma endscop
}
