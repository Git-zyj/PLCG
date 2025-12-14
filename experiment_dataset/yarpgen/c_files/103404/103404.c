/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_1));

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_4 [0] = 1084583288;

        for (int i_1 = 1; i_1 < 16;i_1 += 1) /* same iter space */
        {
            var_16 *= (max((((var_3 & (((var_12 && (arr_1 [i_0] [i_0]))))))), ((65530 + (var_12 | 1084583274)))));
            var_17 = (((((!(arr_3 [i_0 - 1] [i_1 + 1])))) <= ((((arr_3 [i_0 - 1] [i_1 + 1]) && var_0)))));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 16;i_2 += 1) /* same iter space */
        {
            var_18 = 3210383995;
            var_19 *= (((var_1 << (((arr_2 [i_0]) - 4766077488951171169)))));
        }
        for (int i_3 = 2; i_3 < 15;i_3 += 1)
        {

            /* vectorizable */
            for (int i_4 = 2; i_4 < 16;i_4 += 1)
            {
                arr_13 [i_4] [i_3] [i_0] = ((~(((arr_3 [i_3] [i_4]) ? (arr_8 [3]) : var_9))));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 14;i_6 += 1)
                    {
                        {
                            arr_19 [i_6] = ((3897235884 ? 7419862772453299915 : 6844830814921844638));
                            var_20 *= (((3210384004 << (var_11 - 5928953983451825881))));
                            var_21 = var_6;
                            var_22 = (max(var_22, -var_2));
                            var_23 = (max(var_23, (((-347462293665116742 ? (((arr_1 [i_0 + 1] [i_3]) ? var_4 : var_11)) : ((var_2 ? 11601913258787706975 : (arr_14 [i_0] [15] [i_5]))))))));
                        }
                    }
                }
            }
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                arr_24 [i_0] [i_7] [i_7] = (((var_5 ^ var_2) >= ((((arr_18 [i_7] [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3]) ? (arr_18 [i_7] [i_7] [i_7] [i_7] [i_7]) : (arr_3 [i_0 - 2] [i_0 - 2]))))));
                var_24 *= ((((((arr_7 [i_0 - 1] [i_3 - 1]) ? (arr_22 [i_3] [i_3] [i_7]) : var_10))) ? (arr_7 [i_0 + 1] [i_3 + 1]) : ((var_5 << (var_12 - 69)))));
                arr_25 [i_7] = ((!(~78)));
            }
            for (int i_8 = 2; i_8 < 16;i_8 += 1)
            {
                var_25 = 11601913258787706997;
                var_26 = (max(var_26, (((~(((arr_22 [i_0] [i_0 - 1] [i_0]) ? (arr_22 [i_8] [i_3 + 2] [i_8]) : (arr_22 [i_0] [i_0] [i_0]))))))));
                var_27 = ((-(arr_14 [i_0] [i_0] [i_8 - 1])));
            }
            for (int i_9 = 2; i_9 < 14;i_9 += 1)
            {
                var_28 *= (((~var_14) ? ((((((arr_10 [15] [i_3 - 2] [i_0]) & 4013312171))) ? (((var_12 ? (arr_15 [i_9] [i_3] [i_0] [i_0 + 1]) : 1587797292))) : ((var_14 / (arr_1 [i_0] [i_9 + 2]))))) : ((var_9 ? (max(var_11, (arr_26 [i_9] [i_3 + 2] [i_0]))) : (var_5 << var_10)))));
                var_29 *= (((arr_21 [i_0] [i_9] [i_9]) || (arr_21 [i_3] [i_0] [i_3 + 2])));
                var_30 = (arr_15 [i_0] [i_3] [i_3] [i_9 - 1]);
                arr_30 [i_0] [i_3 + 2] [i_9] [i_3] = (--3210383985);
            }
            arr_31 [i_0] = (~2645047708);
        }
        /* vectorizable */
        for (int i_10 = 1; i_10 < 14;i_10 += 1)
        {
            arr_36 [i_10] = var_12;
            var_31 = var_4;
            var_32 *= (((arr_20 [i_10 + 2] [i_0 + 1] [i_0]) << (arr_20 [i_10 + 1] [i_0 - 2] [i_0])));
        }
        arr_37 [i_0] [i_0 + 1] = 0;
    }
    var_33 = ((-(min(var_5, var_13))));
    #pragma endscop
}
