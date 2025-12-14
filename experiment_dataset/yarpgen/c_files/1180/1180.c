/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= ((((-(20 ^ 793196434))) >> 20));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 11;i_1 += 1) /* same iter space */
        {
            var_13 += (-var_9 & var_9);
            arr_6 [i_1] = (-21 | -9);
        }
        for (int i_2 = 1; i_2 < 11;i_2 += 1) /* same iter space */
        {
            arr_9 [i_0] &= ((~(min(var_9, (min((arr_4 [i_2]), (arr_3 [i_0] [i_0] [i_0])))))));

            /* vectorizable */
            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                var_14 = (-1 == 20);
                arr_14 [i_2] [i_2] = (arr_7 [i_2]);

                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    var_15 = (min(var_15, -19));
                    var_16 = (1 ^ 3600646067);
                    arr_18 [i_2] [i_2] [i_3] [i_4 - 1] = ((!(((arr_16 [i_0] [i_2] [i_3] [i_4]) && 5478870142653363467))));
                    var_17 = (-20 - var_7);
                    arr_19 [i_0] [i_3 + 1] [i_2] [i_0] &= (((((var_11 << (var_7 - 3756586275)))) ? (arr_3 [i_0] [i_2 + 3] [i_2 + 3]) : -7));
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {

                    for (int i_6 = 3; i_6 < 11;i_6 += 1)
                    {
                        arr_26 [i_0] [i_6] [i_6] [i_6] [i_6] [i_6] &= (var_4 || -89);
                        arr_27 [i_0] [i_2] [i_2] = var_3;
                    }
                    arr_28 [i_0] [i_2] [i_0] [1] = -97;
                }
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    var_18 = (((var_0 ? 41 : -6995101436075761312)));
                    arr_31 [1] [i_2] [i_2] [i_2 + 2] [i_2] = (((arr_13 [i_0 - 1]) | var_5));
                }
            }
        }
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            arr_34 [i_8] [i_8] = (max((((arr_20 [i_0] [i_0] [i_8] [i_0]) ? var_7 : (arr_20 [i_0] [i_0] [i_8] [i_0]))), (((~((~(arr_24 [6] [i_0] [i_0]))))))));
            var_19 = (max(var_19, 20));
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 12;i_10 += 1)
            {
                {
                    arr_39 [i_9] [i_0] = -29;
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            {
                                arr_46 [i_0 + 1] [i_9] [i_0 + 1] = ((((((((var_7 ? 29450 : (arr_38 [i_12] [i_11] [i_0])))) ? (arr_0 [i_0 + 1] [i_10 - 1]) : 2048))) ? ((((arr_37 [i_0 + 1]) ? (((92 < (arr_7 [i_0])))) : (max(var_9, var_0))))) : -var_2));
                                arr_47 [i_0] [i_9] [i_9] [1] [i_11] = ((((arr_33 [i_0 - 1]) * (arr_33 [i_0 - 1]))));
                                var_20 = ((-((min((arr_23 [i_10] [i_12] [i_10] [i_10 - 2] [i_10]), (arr_23 [i_10] [i_0] [i_10] [i_10 - 2] [i_10]))))));
                            }
                        }
                    }
                }
            }
        }
        var_21 -= (((min((arr_25 [i_0]), var_7))) & (((((141877154 ? (arr_11 [i_0] [i_0] [i_0] [6]) : (arr_16 [i_0] [i_0] [i_0] [i_0])))) ? ((1889151024394292406 | (arr_30 [i_0] [i_0] [i_0 - 1] [i_0] [i_0]))) : var_8)));
        var_22 |= (arr_2 [10]);
    }
    /* LoopNest 3 */
    for (int i_13 = 0; i_13 < 21;i_13 += 1)
    {
        for (int i_14 = 1; i_14 < 20;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 21;i_15 += 1)
            {
                {

                    for (int i_16 = 0; i_16 < 21;i_16 += 1)
                    {
                        arr_61 [i_14] [i_14] = (max(((((min(var_10, var_10))) ? var_7 : (min((arr_54 [i_15]), -7921)))), ((((((var_8 ? -1636591137 : 20))) || (var_6 || var_5))))));
                        arr_62 [i_13] [i_13] [i_14] [i_16] = (!(21 ^ -456026506));
                        arr_63 [i_14] = -21;
                        var_23 = (max(((max(-4665, 1250036592))), (min((min(var_3, (arr_50 [i_13] [i_15]))), ((min((arr_51 [i_13]), (arr_51 [i_13]))))))));
                        var_24 &= 63;
                    }
                    var_25 = (min(var_25, (((-(min((arr_52 [i_13] [i_14 + 1]), var_11)))))));
                    var_26 = (((((max(var_3, (arr_52 [i_14] [i_14 + 1])))) ? var_10 : (~0))));
                }
            }
        }
    }
    var_27 = var_0;
    var_28 = var_9;
    #pragma endscop
}
