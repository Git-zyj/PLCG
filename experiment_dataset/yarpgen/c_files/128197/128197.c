/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (!var_6);
    var_14 = ((((-1 ? 12356 : 148))));
    var_15 = (max(var_11, (((0 ? var_0 : var_7)))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 = (arr_1 [11]);
        arr_2 [i_0] = (((-(arr_1 [i_0]))));
        var_17 = (((arr_0 [i_0] [i_0]) ? (((arr_1 [8]) + (arr_0 [i_0] [i_0]))) : (arr_1 [i_0])));
        var_18 = var_10;
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 21;i_5 += 1)
                        {
                            {
                                arr_19 [i_3] [i_3] = (~764751472);
                                var_19 = (var_12 <= -92);
                                var_20 = 12356;
                            }
                        }
                    }
                    arr_20 [i_3] [i_2] [21] = (arr_17 [i_1 + 1] [i_1] [i_1] [i_1] [i_3] [i_1 + 1]);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 20;i_7 += 1)
            {
                {
                    var_21 = ((~(((arr_23 [i_7] [i_7] [i_6 - 1] [i_1 - 3]) ? ((var_5 ? var_8 : (arr_14 [i_1] [i_6] [i_6] [i_7]))) : ((1073741568 ? var_5 : (arr_14 [i_1] [i_6] [i_7] [i_7])))))));
                    var_22 = ((!((max(((-(arr_22 [i_1] [i_6]))), (((arr_0 [i_7 + 2] [i_6]) ? 49951 : (arr_24 [i_1 - 2] [i_7 + 2] [i_7]))))))));
                    var_23 = 0;
                }
            }
        }
        arr_25 [6] = var_5;
        arr_26 [i_1] = 12;
        var_24 = (((((!(arr_7 [i_1 + 2])))) / ((((((arr_23 [i_1] [i_1] [i_1] [i_1]) & (arr_21 [12]))) == (!var_12))))));
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 24;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                {
                    var_25 = 10;
                    var_26 = 23360;

                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        var_27 = (((((63798 ? (arr_30 [i_11] [i_8] [i_8]) : (arr_28 [i_8] [15])))) ? ((6446 ? (arr_33 [i_9] [i_9] [23]) : (arr_30 [i_8] [i_8] [i_11]))) : 4));
                        arr_37 [i_8] [20] [i_9] [i_8] = var_2;
                        var_28 = (((arr_27 [i_8]) ? (arr_36 [i_8 - 1] [i_8 + 1] [i_8] [i_8] [i_8 - 1] [i_8]) : var_8));
                    }
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {

                        for (int i_13 = 0; i_13 < 25;i_13 += 1)
                        {
                            arr_42 [i_13] [i_8] [i_8] = arr_38 [24] [i_8] [20] [5];
                            arr_43 [i_8] [3] [14] [14] [i_8] = (arr_29 [i_10] [i_9]);
                            var_29 = ((0 & (!10)));
                        }
                        var_30 = arr_28 [i_8] [i_9];
                        var_31 ^= ((var_0 ? (arr_38 [1] [0] [0] [i_8 - 1]) : 1));
                    }
                    arr_44 [i_8] [i_9] [i_8] = ((arr_39 [i_8] [i_9] [i_9] [i_8]) ? (~860456313) : ((-(arr_27 [i_8]))));
                    var_32 = (min(var_32, var_1));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 25;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 25;i_15 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        for (int i_17 = 1; i_17 < 21;i_17 += 1)
                        {
                            {
                                var_33 = (((arr_53 [i_8 + 1]) ? (arr_38 [i_14] [i_8] [i_16] [5]) : (arr_51 [i_8] [i_8] [i_15] [i_16] [6] [i_17])));
                                var_34 = ((!(arr_48 [i_8 - 1] [i_17 + 2])));
                                var_35 = ((((((arr_52 [i_8] [i_14] [i_14] [i_15] [i_16] [i_17]) ? -1 : (arr_47 [i_8])))) ? (arr_33 [i_8] [13] [i_17]) : (arr_47 [i_8])));
                                var_36 = (max(var_36, ((((((var_3 ? (arr_36 [i_8] [i_14] [i_15] [i_14] [i_17] [i_17]) : (arr_49 [i_14] [i_14])))) ? (arr_39 [i_8] [i_8] [0] [i_14]) : -858200524)))));
                                var_37 = ((((((arr_48 [i_8] [i_14]) ? var_7 : (arr_46 [i_16])))) / (4294967295 & var_5)));
                            }
                        }
                    }
                    arr_56 [i_15] [i_14] [i_8] [i_8] = (((arr_40 [i_8] [11] [i_15] [20] [i_8 - 1] [i_15]) > 339113109));
                    var_38 = (((((arr_47 [i_8]) >> (3955854186 - 3955854167))) == var_4));
                    var_39 = 59090;
                }
            }
        }

        for (int i_18 = 0; i_18 < 25;i_18 += 1)
        {
            var_40 = var_10;
            /* LoopNest 3 */
            for (int i_19 = 1; i_19 < 23;i_19 += 1)
            {
                for (int i_20 = 1; i_20 < 24;i_20 += 1)
                {
                    for (int i_21 = 2; i_21 < 24;i_21 += 1)
                    {
                        {
                            var_41 = (~(arr_51 [i_18] [i_18] [21] [21] [i_18] [i_18]));
                            var_42 = (arr_29 [i_18] [i_20]);
                            arr_67 [i_21] [i_18] [i_19] [i_20] [i_8] [6] = (var_6 ? var_4 : (arr_55 [i_20 + 1] [i_18] [i_20] [i_20] [i_21]));
                        }
                    }
                }
            }
            arr_68 [i_8] = var_8;
        }
        var_43 = (arr_61 [i_8] [i_8] [i_8]);
    }
    #pragma endscop
}
