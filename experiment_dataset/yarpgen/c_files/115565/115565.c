/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= (((((-2131760364 ? -2131760364 : -18))) == 3426089195557863270));

    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        var_19 = 189;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_20 -= (((!(~var_2))));
                    var_21 = (max(var_21, (!var_0)));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            arr_11 [i_0] [3] [i_0] [i_0 + 2] [i_0] = 18;
                            var_22 = ((!12635497594955638795) ? (65519 & var_2) : 23);
                            arr_12 [i_0] [i_1] [i_1] [i_3] [i_4] = -60;
                        }

                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            var_23 = (~var_15);
                            var_24 = (arr_6 [i_1 + 4]);
                        }
                        for (int i_6 = 1; i_6 < 11;i_6 += 1)
                        {
                            var_25 |= ((~(arr_14 [i_0 - 4] [i_0] [i_2] [i_2 + 2] [i_6])));
                            var_26 -= ((5 ? (arr_5 [i_1 - 1] [i_1 - 1] [i_0 - 1]) : var_8));
                        }
                        arr_18 [i_0] [i_0] [i_2 + 2] [i_2 + 2] [7] [i_3] = 12;
                        var_27 = (max(var_27, var_3));
                        var_28 *= (!535138299);
                    }
                }
            }
        }
        arr_19 [i_0] [i_0] = ((((((var_8 ? var_7 : -1491810283)))) ? 13041748532896353392 : (~189688438)));
        arr_20 [i_0 - 2] [i_0 - 2] = ((var_15 ? (((arr_13 [i_0]) ? var_5 : 392655987)) : ((((36591049912984554 == var_7) ? 1045248683 : var_2)))));
        var_29 = (min(var_29, -var_8));
    }
    var_30 = (max(var_3, -10));
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 13;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 12;i_8 += 1)
        {
            {
                arr_27 [i_7] [i_8] = (min(((~(min(var_4, 2147483647)))), 140456177));
                var_31 = (((arr_25 [i_7] [i_7] [i_7 - 1]) ? (var_12 / var_10) : ((max(0, 6549)))));

                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            {
                                var_32 = (((255 ? var_4 : var_5)));
                                var_33 = (max(var_33, (((((max((max(-2094076392, (arr_29 [i_7] [i_11] [i_11]))), var_16))) % var_11)))));
                            }
                        }
                    }

                    for (int i_12 = 3; i_12 < 12;i_12 += 1)
                    {
                        arr_39 [i_9] = ((-(min(3795, (arr_38 [i_9] [i_8] [i_12 - 1] [i_9] [i_7 - 1] [i_8 - 2])))));
                        arr_40 [i_9] [i_8] = 31319;
                        var_34 = (min(var_34, ((((1978612312 ? 61737 : 1978612325))))));
                    }
                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        var_35 = (min(var_35, -189688439));
                        var_36 = ((((max(615402223, 20))) ? (arr_25 [i_9] [i_9] [i_8]) : (((((var_9 ? var_15 : var_11))) ? var_14 : 0))));
                        var_37 = (max(var_37, (((((min((max(-58, 61)), 240)))) & 6871245781925160105))));
                        var_38 = var_2;
                    }
                }
                var_39 = ((min(6558396862448721399, (arr_36 [i_7 - 1] [i_8 + 1] [i_7]))));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 14;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 14;i_15 += 1)
                    {
                        {
                            arr_49 [i_7] [i_7] [i_14] [i_15] [i_7] [i_14] = 2045123162;
                            var_40 = 8864131489138744595;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
