/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = ((((~(min(var_4, var_2)))) ^ (((~(((arr_4 [i_0] [i_1]) ^ 64)))))));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_1] [i_2] [i_1] [i_1] = ((484161420 && (200 && 53)));
                                var_11 = ((-160707460819158475 >> (7348310980239516236 - 7348310980239516213)));
                            }
                        }
                    }
                    var_12 += ((((max(1, (arr_8 [i_0] [i_2] [i_0] [i_0])))) ? (max(268304384, (((arr_1 [i_0]) ? (arr_10 [i_0] [i_2] [i_0] [i_2] [i_0] [i_0]) : var_8)))) : ((min(1, 0)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                arr_19 [i_6] = (((((240 + (arr_7 [i_5]))) + (arr_11 [i_6] [i_6] [i_6] [i_6] [i_5]))));
                arr_20 [i_5] [i_6] [i_6] = ((((((1 - 9223372036854775807) + ((var_8 * (arr_5 [i_6] [i_6] [i_6])))))) ? ((5 / (((max(240, 138)))))) : (((-(arr_8 [i_5] [i_6] [i_6] [i_5]))))));
                arr_21 [i_6] = (((arr_17 [i_5] [i_6] [i_5]) <= ((((((min(2422519726, 64))) <= var_0))))));

                /* vectorizable */
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    arr_25 [i_5] [i_6] = (((arr_16 [i_5] [6]) && (arr_22 [i_7] [i_6] [i_6] [i_5])));
                    var_13 = (((arr_17 [1] [i_6] [i_7]) / (((53 << (139 - 115))))));
                    var_14 = (-var_5 & ((((-32767 - 1) >= 1))));

                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
                        {
                            var_15 = 245;
                            arr_33 [i_5] [i_5] [i_7] [i_6] [2] [i_9] = (arr_8 [i_5] [i_6] [i_7] [i_8]);
                            var_16 = ((var_10 ? -6535153284740337897 : (arr_2 [i_5])));
                            arr_34 [i_6] [i_6] [i_6] [i_6] [i_6] = (((9223372036854775807 && 240) ? (arr_29 [i_5] [i_6]) : (-1 | var_0)));
                        }
                        for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
                        {
                            arr_37 [i_6] [i_8] [i_5] [i_7] [2] [i_6] [i_6] = var_1;
                            arr_38 [i_5] [i_6] [i_7] [i_6] [i_10] = (~1369713076);
                        }
                        arr_39 [i_5] [i_6] [i_5] [i_5] = (arr_0 [9] [9]);
                        var_17 = ((17953282808503845743 ? ((~(arr_15 [i_5]))) : (!var_8)));
                        var_18 &= ((28096 ? (arr_23 [i_8] [i_8]) : (arr_9 [i_5] [i_6] [i_5] [i_8])));
                        var_19 = 1782887359372152591;
                    }
                    for (int i_11 = 3; i_11 < 10;i_11 += 1)
                    {
                        var_20 = (((arr_41 [i_11 + 2] [i_11] [i_11 + 2] [i_11 - 1]) && 69));
                        var_21 = ((((arr_27 [i_5] [i_6] [i_7]) ? 255 : (arr_5 [i_5] [i_7] [i_6]))) * (arr_26 [i_11 + 1] [i_11 + 2] [i_6] [i_6] [i_7] [i_5]));
                    }
                    var_22 ^= ((~-16) ? 1 : 65535);
                }
                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {
                    var_23 = (min(var_23, (arr_17 [i_12] [i_12] [i_5])));
                    arr_45 [i_6] = (((min((arr_26 [i_12] [i_12] [i_6] [i_6] [i_5] [i_5]), (var_2 | 3883767383))) & ((max((arr_42 [i_5] [i_5] [i_12] [i_6] [i_12]), ((39641 >> (arr_4 [i_6] [i_5]))))))));
                    var_24 -= (((min(var_5, (arr_16 [i_12] [i_5]))) != (arr_29 [i_12] [i_12])));
                }
            }
        }
    }

    for (int i_13 = 0; i_13 < 21;i_13 += 1)
    {
        arr_49 [i_13] = ((~(min(-23354, 255))));
        var_25 = ((!1) && (((arr_5 [i_13] [i_13] [i_13]) && var_8)));
        arr_50 [i_13] [i_13] = ((((arr_48 [i_13] [i_13]) >= (arr_48 [i_13] [i_13]))));
    }
    /* vectorizable */
    for (int i_14 = 4; i_14 < 16;i_14 += 1)
    {
        var_26 = (arr_46 [i_14] [i_14]);
        arr_54 [i_14 + 4] [i_14] &= (arr_4 [i_14] [i_14 + 1]);
    }
    var_27 = var_8;
    #pragma endscop
}
