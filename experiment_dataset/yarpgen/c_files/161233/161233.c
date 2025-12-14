/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (((-(arr_1 [i_0]))) <= (arr_2 [i_0]));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = ((1 ^ (((!(((1 ? 1 : 1))))))));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_12 = (min(((1 * (arr_7 [i_0] [1] [i_0]))), ((((1 >> (arr_8 [i_0] [i_2]))) << (arr_2 [i_0])))));
                var_13 = (((((arr_1 [i_1]) & (arr_4 [i_0] [i_0]))) % (~1)));
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                arr_12 [i_0] [i_0] [i_0] [i_0] = var_9;
                var_14 = (!1);
                var_15 = (1 * 1);
                var_16 = ((1 ? (((arr_7 [i_0] [i_0] [i_0]) ? ((1 ? var_3 : (arr_0 [i_0]))) : 1)) : (((max(1, (arr_0 [i_0]))) ? (arr_5 [i_0] [i_1] [i_3]) : var_11))));
            }
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_17 = ((~(((arr_8 [i_0] [i_4]) | 1))));
            var_18 = (((((((1 - 1) - 1)) + 2147483647)) << ((((1 ? (1 << 1) : (arr_0 [i_0]))) - 2))));
        }
        var_19 = max(1, (arr_5 [i_0] [i_0] [i_0]));
        var_20 = (!((max((arr_2 [1]), var_10))));
    }
    var_21 = ((1 ? ((max(var_10, var_7))) : 1));
    var_22 = var_10;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                arr_19 [i_5] [1] = (arr_9 [i_5] [i_5]);

                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    arr_22 [i_7] [1] [1] |= ((((((min(1, (arr_11 [1])))) * (1 > 1)))) || ((((arr_2 [i_5]) ? var_0 : (arr_9 [1] [i_7])))));
                    var_23 = arr_13 [1] [1] [i_5];
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            var_24 = var_4;
                            var_25 = (((arr_24 [i_5] [i_6] [i_8]) * (((arr_0 [i_6]) ? (arr_0 [i_8]) : (arr_0 [i_5])))));

                            for (int i_10 = 0; i_10 < 1;i_10 += 1)
                            {
                                arr_34 [i_5] [1] [i_5] [1] [i_6] [i_6] [i_10] = (!((((arr_32 [i_5] [i_5] [i_6] [i_8] [i_9] [1] [i_10]) ? (arr_14 [i_8] [1] [i_5]) : (arr_32 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))));
                                var_26 -= (((arr_1 [i_8]) | (arr_1 [i_5])));
                                arr_35 [i_5] [1] [i_5] [i_5] [i_5] = ((((((arr_15 [i_5]) >> var_2))) ? (min(((min(0, 1))), ((1 ? 1 : 1)))) : 1));
                            }
                            for (int i_11 = 0; i_11 < 1;i_11 += 1)
                            {
                                var_27 = ((1 ? ((min(1, (arr_26 [i_5] [i_6] [1] [i_5])))) : (arr_26 [i_11] [i_11] [i_11] [i_5])));
                                var_28 ^= var_10;
                                arr_39 [i_5] [i_6] [1] [i_8] [i_9] [1] = arr_29 [i_5] [i_11] [i_8] [i_5];
                                var_29 = (((arr_14 [i_5] [i_6] [i_5]) != ((max(0, (arr_26 [1] [i_6] [i_6] [i_5]))))));
                            }
                            for (int i_12 = 1; i_12 < 1;i_12 += 1)
                            {
                                var_30 = var_7;
                                var_31 = ((((((arr_9 [i_5] [i_5]) ? 1 : (1 * var_8)))) ? (arr_7 [i_5] [i_6] [i_5]) : (arr_30 [i_5] [i_9] [1] [i_8] [1] [i_8] [i_5])));
                            }
                        }
                    }
                }
                arr_42 [i_5] [i_5] = (1 % 1);
            }
        }
    }
    var_32 = var_0;
    #pragma endscop
}
