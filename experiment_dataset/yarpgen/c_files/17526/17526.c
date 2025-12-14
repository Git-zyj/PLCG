/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_17 = -8470471615810649111;
                arr_5 [i_1] = (arr_4 [i_1]);
            }
        }
    }
    var_18 = (var_2 | var_15);

    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 10;i_4 += 1)
            {
                {
                    var_19 ^= (arr_14 [i_2] [i_2]);
                    arr_15 [i_4] [i_4] [i_4] = (min(-5175, (min((min((arr_2 [i_2] [i_2]), var_9)), -24054))));
                    var_20 = (arr_13 [i_2] [0] [i_2] [i_4]);
                    var_21 = var_0;
                    arr_16 [i_4] [i_3] [i_3] = min(((!((min(6012614103569052360, (arr_13 [i_4] [i_4] [i_4] [i_4])))))), ((!((max(var_11, var_2))))));
                }
            }
        }
        var_22 = (((arr_10 [i_2] [i_2]) & (arr_7 [i_2] [i_2])));
        arr_17 [i_2] = (~(max((max(var_2, var_5)), (arr_1 [i_2]))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 13;i_9 += 1)
                    {
                        {
                            arr_34 [i_5] [i_5] [i_5] [i_5] [i_5] = 255;
                            var_23 = ((arr_31 [i_5] [i_6] [i_7] [i_7] [i_8] [i_5]) & (arr_31 [i_5] [i_8] [i_7] [i_6] [i_5] [i_5]));
                            var_24 = (!873740808);
                            var_25 = (arr_19 [i_7] [i_6]);
                        }
                    }
                }
            }
            var_26 = ((-5459136267234755737 ? (arr_27 [4] [i_5] [i_5] [i_6] [i_6] [i_6]) : 873740808));
            var_27 = 17802;
        }
        for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 15;i_12 += 1)
                {
                    {
                        arr_43 [i_5] [i_5] [i_5] [i_12] [i_12] = (!-2405602627908736071);
                        arr_44 [i_5] [i_5] [i_5] = ((!(((var_8 ? 2790192973 : (arr_4 [i_12]))))));
                        var_28 = (min(var_28, (((~(arr_32 [i_12 - 1] [i_12] [i_12 - 1] [i_12 - 1]))))));
                    }
                }
            }
            var_29 = (arr_23 [i_5]);
            var_30 = (arr_38 [i_5] [i_10]);
            arr_45 [i_5] [i_5] = (arr_2 [i_5] [i_10]);
        }
        for (int i_13 = 0; i_13 < 16;i_13 += 1) /* same iter space */
        {
            var_31 = (arr_0 [i_13] [i_13]);
            arr_49 [i_5] [i_13] [i_13] = (arr_1 [10]);
        }

        for (int i_14 = 3; i_14 < 14;i_14 += 1)
        {
            arr_53 [2] [i_14] [i_5] = (((arr_3 [i_5] [i_14]) ? (arr_36 [i_14 - 3] [i_5]) : (arr_30 [i_5])));
            arr_54 [i_5] [i_14 - 1] = (~var_6);
        }
        arr_55 [i_5] = -8890753652751370960;
        var_32 = (!((((arr_40 [i_5] [i_5] [i_5] [i_5]) ? (arr_38 [i_5] [i_5]) : -91))));
    }
    for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
    {
        var_33 = (max(var_33, (((!((((((arr_56 [i_15]) ? 106 : 0)) >> (((arr_42 [i_15] [i_15] [i_15]) - 88))))))))));

        for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
        {
            var_34 = ((min(var_12, ((((arr_48 [i_15] [i_15] [i_16]) * 0))))));
            arr_62 [i_15] [i_16] = 525514652;
        }
        for (int i_17 = 0; i_17 < 1;i_17 += 1) /* same iter space */
        {
            arr_65 [1] = var_4;
            var_35 = ((6332328095069342228 ? 2471497036993275595 : 2147483647));
            var_36 = ((~(arr_48 [1] [i_15] [1])));
        }
        for (int i_18 = 0; i_18 < 1;i_18 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 1;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 16;i_20 += 1)
                {
                    {
                        arr_72 [i_15] [i_15] [i_15] = (((max(((max(var_9, (arr_68 [2] [i_19] [i_18] [i_15])))), 9)) - ((((max((arr_51 [i_20]), (arr_25 [i_15] [i_20] [i_19] [i_20]))))))));
                        arr_73 [i_15] [i_15] [i_18] [2] [13] [i_20] = (~1);
                    }
                }
            }
            arr_74 [i_18] [i_15] [i_15] = (min(((((max((arr_50 [i_15] [i_15] [i_15]), var_13))) ? var_3 : (arr_25 [i_15] [1] [i_15] [i_18]))), ((~(arr_24 [i_15] [i_18] [i_15])))));
        }
    }
    var_37 = var_6;
    #pragma endscop
}
