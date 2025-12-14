/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (-1227 <= 61354);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_21 = (max(var_21, (((((min(var_9, (~243)))) & ((var_6 ? var_5 : 1855802912)))))));
                arr_6 [6] = (((!1) || var_19));
                var_22 = (min(var_22, (!7936)));
                var_23 = (max(var_23, ((((((min(var_16, 2439164391))) + var_10))))));
            }
        }
    }
    var_24 = ((61365 ? var_4 : ((var_4 ? var_0 : var_6))));

    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_25 = ((((max(var_0, var_2)))));
        var_26 = ((-((min(var_2, 12)))));

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_27 = var_3;
            var_28 += var_10;
            arr_12 [i_2] [6] [6] |= var_13;

            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                var_29 &= var_10;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            var_30 = (min(var_30, (((((min((arr_19 [i_2] [i_2] [i_4] [3] [3] [3] [3]), (var_8 || var_5)))) != (((((arr_15 [1] [i_2] [i_2] [3]) <= var_7)))))))));
                            arr_20 [5] [i_5] [i_2] [i_2] [i_3] [i_2] = (min((min(var_8, var_8)), (!var_7)));
                            var_31 = (max(var_31, var_11));
                            var_32 = (arr_10 [i_3]);
                        }
                    }
                }
            }
        }
        arr_21 [0] = var_15;

        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 10;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        {
                            var_33 += (arr_18 [8] [8] [8] [i_9] [8] [1]);
                            arr_32 [10] [10] [i_8] [1] [1] = 244;
                            var_34 = (((max((arr_18 [i_8] [i_9 + 1] [i_9] [8] [i_9 - 1] [i_10]), var_13)) == (((arr_18 [i_8] [i_9 - 1] [i_9] [i_9 - 2] [i_9 - 2] [i_9]) ? (arr_18 [9] [i_9 + 1] [i_9 - 1] [i_9] [i_9 + 1] [8]) : (arr_19 [i_8] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 2] [i_9 - 2] [10])))));
                            arr_33 [1] [5] [i_8] [i_8] [i_8] = ((~(max(1, 448253144))));
                            arr_34 [i_2] = ((~(~var_10)));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {
                    {
                        var_35 = (min(var_35, (((arr_28 [5] [i_11] [i_2] [i_2]) / 18550))));

                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 11;i_13 += 1)
                        {
                            var_36 = var_10;
                            var_37 = ((var_10 ? 138 : -1057958920476459906));
                            arr_45 [i_2] [i_7] [0] [0] [i_13] [i_13] [i_7] |= ((arr_7 [i_2]) || (arr_7 [i_2]));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
