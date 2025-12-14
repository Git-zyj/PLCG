/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_11 > var_3);
    var_15 = ((var_1 ? var_11 : (max((~var_9), var_7))));
    var_16 = var_8;

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] = 0;
        arr_5 [15] = 68;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                var_17 = (arr_1 [i_1] [i_2]);
                var_18 = ((max(18446744073709551614, (!83))));
                var_19 = (-64 || var_3);
                var_20 = var_11;
            }
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                var_21 = (~6);
                var_22 = ((((min((arr_1 [i_1] [i_2]), 8388607))) ? (arr_10 [i_1]) : (var_4 * var_8)));
                var_23 = (min(((var_13 ? (arr_10 [i_4]) : -20)), 15));
                var_24 = 5;
            }
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    arr_21 [i_1] [i_2] [i_5] = var_13;
                    var_25 = ((2282614374 ? 206 : 212));
                    var_26 = -var_6;
                }
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    var_27 = (max(((9223372036854775798 ? 1841649207 : 114)), var_13));
                    var_28 = max(var_12, ((min(((var_9 != (arr_18 [13] [i_2] [13] [13] [i_7]))), var_1))));
                }
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 14;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        {
                            var_29 = (min((((arr_25 [i_9] [i_8 - 1] [i_2] [i_1]) - 78)), 14));
                            var_30 = (max(var_2, (max(var_11, (arr_7 [i_8 + 2])))));
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                var_31 = var_4;
                var_32 = var_13;
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 16;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        {
                            var_33 = 5028;
                            var_34 = (arr_27 [i_1] [i_12]);
                            var_35 = (((237 & 239) ? var_10 : -10533));
                            var_36 = 328825291690331368;
                        }
                    }
                }
            }
            var_37 = 236;
        }
        for (int i_13 = 0; i_13 < 16;i_13 += 1) /* same iter space */
        {
            var_38 = var_2;
            arr_40 [i_1] [i_1] [i_1] = (max((arr_14 [i_13]), (((-113 ? 1 : 246)))));
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 16;i_14 += 1) /* same iter space */
        {
            var_39 = (arr_36 [i_1] [i_1] [i_1] [i_14] [i_14] [i_1]);
            var_40 = (((arr_14 [i_1]) % -35902299));
        }
        for (int i_15 = 0; i_15 < 16;i_15 += 1) /* same iter space */
        {
            arr_47 [i_1] [i_1] = (~4294967295);
            var_41 = (min((max(var_12, (~var_13))), 1));
        }

        for (int i_16 = 1; i_16 < 13;i_16 += 1)
        {
            var_42 = (max(((max(157, var_4))), -2147483636));
            var_43 = (min(var_1, -216));
            var_44 = (((((arr_29 [i_16 + 1] [i_16] [i_16 + 2] [i_16 + 1]) ? 106 : (arr_35 [i_1] [i_1] [i_16 - 1] [i_16] [i_16]))) != (arr_35 [i_16] [i_1] [i_16 + 3] [i_16] [12])));
        }
        /* vectorizable */
        for (int i_17 = 0; i_17 < 16;i_17 += 1)
        {
            var_45 = (119 & var_7);
            var_46 = var_4;
            arr_54 [i_1] = 210;
            var_47 = (((arr_22 [i_1] [i_17] [i_17]) ? var_12 : 2431394747419825798));
        }
    }
    #pragma endscop
}
