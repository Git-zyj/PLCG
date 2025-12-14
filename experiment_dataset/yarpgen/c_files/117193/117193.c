/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_19 = ((697567885253488974 | (var_3 / 22227702)));
        arr_3 [i_0] &= var_17;

        /* vectorizable */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 8;i_4 += 1)
                    {
                        {
                            var_20 = var_1;
                            arr_13 [i_0] [i_1] [i_4] [i_1] [7] = var_8;
                        }
                    }
                }
            }
            arr_14 [4] [i_1] [i_1 - 2] = var_7;
            var_21 = (max(var_21, var_14));
            var_22 = (min(var_22, var_8));
        }
        for (int i_5 = 2; i_5 < 8;i_5 += 1)
        {
            arr_18 [i_0] [i_5] = var_10;
            arr_19 [i_5] = var_4;
            arr_20 [i_5] = (((var_13 / 1) * 1837730534));
        }
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 9;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 10;i_7 += 1)
            {
                {
                    arr_26 [i_0 + 1] [i_0] [i_0] [i_0 - 1] = 3741368076158791262;
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            {
                                var_23 = (var_6 / 3741368076158791262);
                                arr_31 [8] [i_6 - 2] [i_7] [i_6 - 2] [i_9] = 1;
                                arr_32 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_0] = 1147260667;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 4; i_10 < 10;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 9;i_11 += 1)
                        {
                            {
                                arr_40 [i_0] [i_6 + 2] [i_6 - 1] [i_6 + 2] [9] [i_11] [i_11] = var_5;
                                arr_41 [i_11] [i_10] [i_7] [i_0] [i_11] = var_4;
                            }
                        }
                    }
                }
            }
        }
        arr_42 [i_0] = var_0;
    }
    for (int i_12 = 0; i_12 < 18;i_12 += 1)
    {

        for (int i_13 = 1; i_13 < 17;i_13 += 1)
        {
            var_24 *= var_12;
            var_25 = 52;
            arr_47 [i_12] [i_13] |= var_12;
        }
        for (int i_14 = 2; i_14 < 14;i_14 += 1)
        {
            var_26 = (248 != -613301213);
            var_27 = (var_16 / -2861081132705587503);
            var_28 = var_17;
            var_29 = var_11;
            var_30 = (min(var_30, 1));
        }
        /* vectorizable */
        for (int i_15 = 3; i_15 < 16;i_15 += 1)
        {
            var_31 = var_4;
            var_32 = (max(var_32, 191));
        }
        var_33 = (((var_3 + 9223372036854775807) >> (((((var_14 + 2147483647) << var_8)) - 1767989038))));
        arr_53 [12] = var_16;
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 18;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 18;i_17 += 1)
            {
                {
                    var_34 = ((var_11 || (var_0 || var_15)));
                    arr_59 [i_12] [i_16] [i_17] = var_3;
                    var_35 ^= var_2;
                    var_36 = ((var_12 >= (6 || 1024)));
                }
            }
        }
    }
    for (int i_18 = 0; i_18 < 11;i_18 += 1)
    {
        arr_64 [i_18] = var_7;
        arr_65 [i_18] = var_13;
        var_37 = (min(var_37, var_1));
    }
    #pragma endscop
}
