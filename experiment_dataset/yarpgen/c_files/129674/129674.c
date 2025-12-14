/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = 204;
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_15 = (min(var_15, (arr_8 [i_3] [i_1] [i_2] [i_2])));
                        var_16 = (max((min((arr_8 [i_0 - 3] [i_1] [i_1 - 1] [i_2 + 1]), -var_13)), (((max(32081, 3260265336))))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 4; i_4 < 12;i_4 += 1)
    {

        for (int i_5 = 2; i_5 < 13;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        {
                            arr_30 [i_5] = (((33454 ? var_8 : var_2)));
                            arr_31 [i_4 - 3] [i_7] [4] [i_7] [i_8] [i_5] = (((arr_21 [i_4 - 1]) <= 33451));
                            var_17 = var_7;
                        }
                    }
                }
            }
            arr_32 [i_4 + 2] [i_5 - 2] = var_5;
        }
        for (int i_9 = 1; i_9 < 13;i_9 += 1)
        {
            arr_37 [i_4] = ((var_12 + (arr_17 [i_4 - 1] [i_4] [i_4 - 1])));
            arr_38 [9] = (((var_1 & 33454) < 32082));
            arr_39 [i_9] [4] [i_4] = ((var_4 ? 33473 : (arr_34 [i_4 - 3] [i_9 - 1])));

            for (int i_10 = 1; i_10 < 12;i_10 += 1)
            {

                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    var_18 = ((((32071 ? 33461 : 2147483647))) ? -99 : -8605730365389327646);
                    arr_45 [i_4] [i_11] [i_4 + 2] = (-34 <= var_1);
                    arr_46 [i_4] [i_9] [i_9] [i_11] = var_5;
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        {
                            arr_53 [i_13] [7] [i_10] [i_4] [i_4] = (arr_5 [i_9 - 1] [15] [i_9 + 1]);
                            arr_54 [1] [i_9] [i_10] [i_12] [i_12] [i_13] [i_13] = (arr_1 [i_9 + 1] [i_9 + 1]);
                        }
                    }
                }
                var_19 ^= (((arr_4 [i_9 - 1]) ? var_4 : (arr_4 [i_9 - 1])));
                arr_55 [9] [9] = 33470;
            }
            for (int i_14 = 0; i_14 < 14;i_14 += 1)
            {
                var_20 = (((arr_26 [i_4] [3] [i_9 + 1] [i_14] [i_14]) << (var_2 - 3882678621)));
                arr_59 [i_14] [0] [i_14] = ((!(arr_14 [i_4 + 2])));
            }

            for (int i_15 = 0; i_15 < 14;i_15 += 1)
            {
                arr_63 [i_4 - 2] [i_9] [i_15] = (((17000266686487015035 == var_10) - (arr_33 [i_9 + 1])));
                arr_64 [i_4] [i_4] [i_15] = ((((arr_57 [i_4]) ? -4238953998861789791 : 14615)));
            }
            for (int i_16 = 0; i_16 < 14;i_16 += 1)
            {
                arr_67 [i_4] = ((294471732 ? (arr_6 [i_9 - 1]) : 1));
                arr_68 [i_4 - 1] [i_9 + 1] [i_16] = ((var_9 ? var_13 : 4238953998861789773));
            }
        }
        for (int i_17 = 0; i_17 < 14;i_17 += 1)
        {

            for (int i_18 = 0; i_18 < 14;i_18 += 1)
            {
                arr_75 [i_4] [i_17] [i_18] = 33470;
                var_21 = (37 % var_5);
            }
            arr_76 [i_4 - 4] [i_4] [7] = var_13;
        }
        for (int i_19 = 4; i_19 < 13;i_19 += 1)
        {
            arr_79 [i_4 - 1] [i_19 - 4] [i_19] &= (((var_10 && var_8) & (((arr_41 [i_4 - 2] [i_19] [i_19]) - var_14))));
            arr_80 [i_4 - 3] = 33454;
            arr_81 [1] [1] [i_19] = (arr_42 [8] [i_4] [i_4] [i_4]);
            var_22 = (50920 > 0);
            arr_82 [i_4] [13] = arr_71 [i_19 - 3] [i_19 - 3] [i_4] [i_4];
        }
        arr_83 [i_4] = (((arr_65 [i_4 - 4] [i_4 + 1] [i_4 - 1]) ? 101 : (arr_65 [i_4 + 2] [i_4 - 4] [i_4 - 2])));
        arr_84 [i_4 + 1] = (((arr_24 [i_4 + 1] [i_4 - 4] [i_4] [i_4 + 1]) ? 1032192 : -262620211));
        arr_85 [10] [i_4 - 3] = var_9;
    }
    var_23 = var_0;
    #pragma endscop
}
