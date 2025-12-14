/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_7 [10] [i_1] [i_1] = ((+((~(((arr_2 [i_1]) ? (arr_5 [4] [i_1] [i_0]) : (arr_3 [i_0])))))));
                arr_8 [i_0] [i_0] [i_0] = (min(var_5, (!var_4)));
                arr_9 [i_1] = ((var_2 ? (min((31519 < 7937), (((arr_6 [i_0] [i_1]) ? var_2 : var_3)))) : var_5));
                var_12 = (min(((((min(11951008769459557598, 40))) ? (arr_0 [i_0]) : (min(14191422370142419191, var_5)))), ((((arr_4 [i_1] [i_1]) ? 135 : var_8)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_22 [i_3] = arr_21 [i_2] [i_3] [i_3] [3] [i_5] [i_5];
                                arr_23 [i_3] [i_3] = (((((((arr_17 [1] [i_3] [i_5] [i_6]) ? var_9 : var_1))) ? var_9 : var_4)));
                            }
                        }
                    }
                }
                var_13 = min(var_1, ((min((var_3 <= 15560), (min((arr_3 [i_3]), (arr_20 [i_2] [i_2] [8] [i_3] [7] [i_2])))))));
            }
        }
    }

    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        var_14 = ((((((arr_24 [i_7]) ? var_9 : var_9))) ? ((~(min(var_0, var_6)))) : (((min((arr_26 [i_7] [i_7]), (arr_25 [i_7])))))));
        var_15 = (((-((-(arr_24 [i_7]))))) * (((((min((arr_24 [i_7]), var_5))) ? var_10 : var_4))));
        var_16 = (min(-var_2, var_5));
    }
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {

            /* vectorizable */
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                var_17 *= ((((((arr_28 [i_9]) ? (arr_19 [i_10]) : (arr_29 [i_8] [9])))) ? (var_7 + var_8) : 163));
                var_18 = arr_13 [i_10];
            }
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                arr_35 [i_11] = (min((min(var_10, (arr_4 [i_8] [i_8]))), (((var_7 != (arr_19 [i_11]))))));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        {
                            var_19 = ((((((arr_1 [i_13]) ? ((((arr_11 [i_8]) ? var_7 : (arr_26 [i_8] [8])))) : (min((arr_15 [i_11]), var_9))))) ? var_4 : (arr_36 [i_11] [9] [i_11] [2] [8])));
                            arr_42 [i_8] [i_8] [i_8] [i_11] [i_11] [i_8] [i_13] = ((((min((arr_25 [i_11]), (min(var_10, (arr_2 [i_8])))))) ? ((((var_2 ? var_3 : 1125895611875328)))) : (min((arr_37 [i_8] [i_9] [i_11] [i_11]), ((var_0 ? var_6 : (arr_15 [i_11])))))));
                        }
                    }
                }
            }
            for (int i_14 = 0; i_14 < 11;i_14 += 1)
            {

                for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
                {
                    var_20 = (((((((arr_1 [13]) ? 241 : 96))) ? var_4 : var_2)));
                    var_21 = (min(var_21, var_7));
                }
                for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
                {
                    arr_51 [i_16] [i_16] = (min((var_5 | 82), ((min(var_9, (arr_16 [i_16] [i_14] [i_9] [i_16]))))));
                    arr_52 [i_14] |= ((min((arr_20 [4] [i_9] [4] [i_14] [i_14] [i_16]), (arr_20 [i_8] [i_9] [i_8] [i_14] [i_8] [i_8]))));
                }
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 11;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        {
                            arr_58 [i_8] [i_18] [i_14] [1] [i_9] [i_9] [i_8] = (min((min((arr_44 [i_8] [i_8] [i_14] [i_17]), var_5)), var_8));
                            var_22 = (min((((min(0, var_0)))), (((((-(arr_1 [i_9])))) ? (arr_29 [i_17] [i_18]) : (arr_5 [i_8] [10] [i_14])))));
                            arr_59 [i_18] [i_18] [i_18] [i_8] = (((((min(244, (arr_28 [i_8]))))) ^ ((min(((min(83, (arr_41 [i_8] [i_9] [6] [i_17] [2])))), (min((arr_43 [i_17] [i_9]), (arr_17 [i_8] [i_9] [i_17] [3]))))))));
                            var_23 -= ((127 << (((arr_32 [i_8] [i_14] [i_8]) - 18220818163124366320))));
                        }
                    }
                }
            }
            var_24 += ((var_0 ? (((((min(var_7, var_0)))) % ((-108 ? var_4 : var_1)))) : ((((((var_2 << (var_5 + 30695))) != (arr_33 [5] [i_8] [i_9] [3])))))));
        }
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 11;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 1;i_20 += 1)
            {
                {
                    var_25 = ((((((arr_19 [i_20]) - (arr_50 [i_20] [i_19] [i_8] [i_8] [i_8])))) ? (min(((((arr_39 [i_8] [i_19] [i_8] [i_20]) ? var_7 : (arr_24 [i_20])))), (min((arr_6 [i_8] [i_8]), var_7)))) : (arr_19 [i_20])));
                    arr_66 [i_8] [i_20] [i_8] = (min((((255 ? var_7 : (arr_41 [i_20] [i_20] [i_20] [i_19] [i_8])))), (((((min(var_0, var_4)))) - (arr_6 [i_8] [i_8])))));
                }
            }
        }
    }
    for (int i_21 = 0; i_21 < 22;i_21 += 1)
    {
        /* LoopNest 2 */
        for (int i_22 = 0; i_22 < 22;i_22 += 1)
        {
            for (int i_23 = 0; i_23 < 22;i_23 += 1)
            {
                {
                    var_26 = ((-var_4 ? (arr_69 [1] [i_22]) : ((~((min(var_4, var_5)))))));
                    var_27 *= ((~(arr_69 [i_22] [i_23])));
                }
            }
        }
        var_28 = var_8;
        var_29 = 1;
        arr_73 [i_21] = min((min((arr_71 [i_21] [i_21]), var_10)), (((arr_68 [i_21]) * (arr_67 [i_21] [i_21]))));
    }
    #pragma endscop
}
