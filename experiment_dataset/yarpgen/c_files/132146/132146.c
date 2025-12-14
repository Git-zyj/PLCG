/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, ((min(var_2, (min(var_13, var_1)))))));
    var_18 = (((~var_10) ^ (((((~var_10) + 2147483647)) << (var_10 - 241)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, (((((8473387822654518657 - (9973356251055032938 == -1656185459164582876))) >> (((max(((min(var_5, var_6))), var_4)) - 171)))))));

                    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
                    {
                        var_20 |= (arr_2 [i_0] [i_0] [i_0]);
                        var_21 = 8473387822654518631;
                    }
                    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_0] [i_1] &= -0;

                        for (int i_5 = 2; i_5 < 24;i_5 += 1)
                        {
                            var_22 = ((arr_4 [i_1 - 1] [16] [i_4]) * (arr_4 [i_1 + 2] [i_1] [i_2]));
                            var_23 ^= var_5;
                            var_24 &= var_10;
                        }
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            arr_20 [15] [i_6] [0] [i_6] [i_6] = (((((((var_10 ? 164 : var_16)) ^ (min(var_2, 1656185459164582876))))) ? ((1 ? 92 : ((var_3 ? (arr_11 [i_6] [i_6] [i_6] [i_6] [16]) : var_0)))) : (((min((660521420 >= -124), 91))))));
                            var_25 = var_6;
                        }

                        for (int i_7 = 3; i_7 < 21;i_7 += 1)
                        {
                            arr_23 [i_0] [20] [i_0] [i_0] [23] = 225;
                            arr_24 [i_0] |= (((~var_16) ? (~1656185459164582876) : var_3));
                        }
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            arr_27 [i_0] [i_1] [i_2] [i_4] [16] = (max((((1436767291732718134 == (arr_16 [0] [21] [15] [i_4] [0] [i_4])))), (((min(var_0, 8786616100877555148)) / (((var_0 ? (arr_19 [i_8] [i_8] [6] [i_4] [i_8]) : 4294967288)))))));
                            arr_28 [i_0] [i_0] [i_0] [i_0] [0] = max(7253, ((min(var_7, var_3))));
                            var_26 ^= ((var_2 <= ((16024 + ((min(208, 208)))))));
                        }
                        for (int i_9 = 3; i_9 < 24;i_9 += 1)
                        {
                            var_27 ^= var_2;
                            var_28 ^= var_8;
                            var_29 = -var_5;
                            arr_31 [i_0] [3] [i_9] [i_0] [i_0] [i_0] [i_0] = var_8;
                            var_30 = ((((max(91, (arr_21 [i_1 - 1] [i_1 - 2] [i_1 - 1] [i_1 - 1] [i_1 + 2] [i_1 - 3] [i_1 - 3])))) ? ((-61 ? 1656185459164582876 : 8357286785322207751)) : (~105)));
                        }
                    }
                }
            }
        }
        var_31 |= (((arr_16 [i_0] [i_0] [i_0] [20] [i_0] [i_0]) << (((arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]) - 1))));
    }
    /* LoopNest 3 */
    for (int i_10 = 2; i_10 < 16;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 15;i_11 += 1)
        {
            for (int i_12 = 3; i_12 < 15;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 4; i_13 < 18;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 19;i_14 += 1)
                        {
                            {
                                var_32 = var_12;
                                arr_48 [9] [i_11] [i_11] [i_11] [i_14] [i_11 + 1] = (25 / 3431231286);
                                arr_49 [i_10] [i_11 + 2] [i_14] [i_14] [i_13] [i_13] [i_14] = ((-1 > ((var_13 ? var_8 : var_8))));
                            }
                        }
                    }
                    arr_50 [13] [4] [7] [i_12 - 3] = (4008 | 58283);
                }
            }
        }
    }
    #pragma endscop
}
