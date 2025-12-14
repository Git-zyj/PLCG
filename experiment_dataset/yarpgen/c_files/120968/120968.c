/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_14;
        arr_4 [i_0] = (arr_2 [i_0]);
        arr_5 [2] = (arr_1 [14] [i_0 + 4]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = (-9120935197556256351 % 42949);
                    var_21 += (-(((arr_6 [i_0] [i_0 - 2] [i_0]) % (max(var_13, var_2)))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 10;i_7 += 1)
                        {
                            {
                                arr_25 [i_7] [i_6] [i_4] [3] [7] = (~var_7);
                                var_22 = 4118837963275860660;
                            }
                        }
                    }
                    var_23 = (((arr_24 [i_3] [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 1] [i_4] [i_3]) ? (arr_8 [i_4 - 1]) : (arr_24 [10] [i_4 + 1] [1] [i_3] [i_4] [i_4] [1])));
                }
            }
        }
        arr_26 [8] = (((arr_21 [i_3]) ? (arr_12 [i_3] [8]) : var_4));
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 17;i_9 += 1)
        {
            {
                var_24 ^= ((((var_3 & (((arr_28 [i_8] [9]) ? var_8 : var_4)))) / (((-(arr_29 [i_9 + 1]))))));
                arr_32 [i_8] = ((var_8 & (((((-2910 ? (arr_31 [i_8] [i_8] [0]) : 1))) ? -4118837963275860677 : 32767))));
                var_25 = (max((-32762 == 36020), (arr_28 [i_9 + 1] [i_9 + 1])));

                for (int i_10 = 2; i_10 < 14;i_10 += 1)
                {
                    arr_36 [i_10 + 4] [i_9 + 1] [4] = 14660058400795329645;
                    var_26 = (max(var_26, (((var_5 ? ((((arr_35 [12] [3] [i_10]) == (4118837963275860660 & 2843506561959443869)))) : (2921 / var_13))))));

                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        var_27 = (((-4118837963275860656 != 2904) | ((((14444533409321044 ? -1 : 4118837963275860660))))));
                        var_28 = (-(((var_12 | var_11) ^ (arr_31 [i_9 + 1] [i_9 - 1] [i_9 - 1]))));
                        arr_40 [i_8] [i_8] [i_10] [12] = -323058196;
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 17;i_13 += 1)
                        {
                            {
                                var_29 = (var_14 ^ var_9);
                                var_30 = (max(var_15, (((max(var_16, 1))))));
                                var_31 ^= var_15;
                            }
                        }
                    }
                }
                for (int i_14 = 0; i_14 < 18;i_14 += 1)
                {
                    arr_50 [1] [1] = (((((323058220 & (arr_29 [i_9])))) ? var_16 : ((17439 & (arr_46 [i_8] [i_8] [i_9] [i_9] [i_14] [i_14] [i_9])))));
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 18;i_16 += 1)
                        {
                            {
                                var_32 = ((-(arr_33 [i_9 - 1] [i_9 + 1] [i_9 - 1])));
                                var_33 = arr_28 [i_9 - 1] [i_9 - 1];
                                arr_57 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [0] = ((-(arr_48 [i_9 - 1] [i_9 - 1] [i_9 + 1] [i_9 - 1])));
                            }
                        }
                    }
                }
                arr_58 [i_9] = var_9;
            }
        }
    }
    var_34 = (((((((var_19 + 9223372036854775807) >> (27222 - 27160))) << (((~var_3) + 4612423399346769584)))) == var_16));
    var_35 |= var_5;
    #pragma endscop
}
