/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_4 [i_0] = (((((arr_3 [i_0 - 1] [i_0 - 1]) ? (arr_3 [i_0 + 1] [i_0 + 1]) : (arr_3 [i_0 + 1] [i_0 + 1]))) <= ((max((arr_3 [i_0 + 1] [i_0 - 1]), 255)))));
        var_13 = ((~(~3429373331)));
        var_14 = (max((((arr_1 [i_0]) ? var_3 : (arr_2 [i_0] [i_0 - 1]))), (((arr_0 [i_0] [i_0 + 1]) ? (arr_0 [i_0] [i_0 + 1]) : var_5))));
        var_15 = (max(var_15, ((min(var_4, ((11026 ? var_1 : (arr_3 [i_0] [i_0 + 1]))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_16 = (max(var_16, ((((arr_6 [i_1]) ? (arr_5 [i_1]) : (arr_6 [i_1]))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    arr_12 [i_3] = ((-31984 ? -11026 : var_4));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 15;i_5 += 1)
                        {
                            {
                                var_17 = (min(var_17, ((((arr_7 [i_3] [i_4]) & ((8 ? -1363697580087388044 : -1363697580087388029)))))));
                                var_18 -= ((4096 ? 1363697580087388043 : var_2));
                            }
                        }
                    }
                }
            }
        }
        var_19 = (~246);
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 14;i_7 += 1)
        {
            for (int i_8 = 4; i_8 < 15;i_8 += 1)
            {
                {
                    var_20 = 1;
                    var_21 |= (arr_5 [i_7]);
                }
            }
        }
        var_22 = ((-((15 ? var_12 : (arr_7 [i_6] [i_6])))));
    }
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        arr_33 [i_9] [i_9] = (((((arr_9 [i_9] [i_9] [i_9]) ? var_8 : (arr_9 [i_9] [i_9] [i_9]))) - ((var_3 ? (arr_9 [i_9] [i_9] [i_9]) : (arr_9 [i_9] [i_9] [i_9])))));
        var_23 = ((((1363697580087388047 ? 602713341 : 255))) ? (((arr_15 [i_9] [14] [9]) ? 11012 : 6283316950169574377)) : ((13 ? 2274875839814961390 : (arr_18 [i_9] [i_9] [i_9] [i_9] [i_9] [1] [i_9]))));
        var_24 = ((((min((arr_14 [i_9] [i_9]), (arr_14 [i_9] [i_9])))) ? (min((arr_14 [i_9] [i_9]), (arr_14 [i_9] [i_9]))) : 0));
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 20;i_11 += 1)
        {
            for (int i_12 = 4; i_12 < 18;i_12 += 1)
            {
                {
                    arr_40 [i_11] [i_11] = (((!((((arr_34 [i_10]) ? var_2 : (arr_39 [i_10] [i_11 - 1] [i_12])))))));
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 20;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 21;i_14 += 1)
                        {
                            {
                                arr_46 [i_11] = arr_42 [i_10] [i_10] [i_10] [i_13] [i_14];
                                arr_47 [i_10] [i_10] [i_12] [i_13] [i_11] = (((((602713341 ? -1 : -32765))) * ((-571423381 ? 8589803520 : (arr_39 [i_12] [i_11 + 1] [i_13 + 1])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 21;i_15 += 1)
                    {
                        for (int i_16 = 2; i_16 < 20;i_16 += 1)
                        {
                            {
                                arr_55 [8] [i_11] [i_12 + 3] [i_15] [i_15] = var_3;
                                arr_56 [i_15] [i_11] = var_7;
                                var_25 = (min(((-8292409682552294565 ? 38 : 34932142)), 4294967283));
                                arr_57 [i_16] [i_11] [i_15] [i_12] [i_11] [i_10] = (((+-2252921276) - 38));
                            }
                        }
                    }
                    var_26 = 1095759407;
                }
            }
        }
    }
    #pragma endscop
}
