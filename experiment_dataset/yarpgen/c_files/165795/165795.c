/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_6 [i_0] &= ((-(arr_4 [i_1] [i_0] [i_0])));
            var_18 = (((arr_5 [i_0] [i_1] [i_1]) + 4524));
        }
        var_19 = 31019;

        /* vectorizable */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            arr_9 [i_2] [i_2] [i_0] = (arr_3 [i_0]);
            var_20 *= 1;
            var_21 = var_8;
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 9;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        {
                            arr_18 [i_3] [i_5] = (((arr_14 [i_4] [i_4 - 3] [i_4 + 3] [7]) || (((10544224071403558739 ? var_5 : var_0)))));
                            arr_19 [i_3] = var_3;
                        }
                    }
                }
            }
            arr_20 [i_0] [i_0] [i_0] = (((947721841 >> (253 - 247))));
        }
        for (int i_6 = 2; i_6 < 9;i_6 += 1)
        {
            arr_23 [i_0] [i_0] = (arr_14 [i_0] [7] [i_0] [i_6]);
            arr_24 [i_0] &= (min(((var_16 ? (arr_1 [i_0]) : (arr_5 [i_0] [i_0] [i_6]))), (((arr_22 [i_0] [i_6]) ? ((min(124, var_13))) : (arr_12 [i_6 + 1] [i_6 + 3] [i_6 + 1] [i_6 + 1] [i_6] [i_6 - 1])))));
            var_22 = (max((!1), (min(88, 39))));
            arr_25 [i_6] = var_7;
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        {
                            arr_35 [i_0] [i_6] [i_6] [i_8 - 1] [i_9] = ((((min((arr_32 [i_8 - 1] [i_9] [i_9] [i_9]), (arr_32 [i_8 + 1] [i_8] [i_8 - 1] [i_9])))) ? ((((arr_33 [i_8] [i_8] [i_7] [i_6] [i_6] [i_6 + 1] [i_0]) + ((min(31004, var_12)))))) : ((((min(var_16, (arr_16 [i_9] [i_7] [i_0] [i_7] [i_0])))) ? (arr_14 [i_9] [i_0] [i_8 - 1] [i_6 - 2]) : 6287))));
                            arr_36 [i_0] [i_0] [i_7] [i_8] [i_9] = (max(((max(((min(236, var_5))), 55995))), ((~(arr_4 [i_0] [i_6] [i_7])))));
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 13;i_10 += 1)
    {
        arr_41 [i_10] = (((arr_39 [i_10]) ? (arr_39 [i_10]) : var_1));
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 13;i_12 += 1)
            {
                for (int i_13 = 3; i_13 < 11;i_13 += 1)
                {
                    {
                        var_23 &= ((!(arr_47 [i_13 + 2] [i_13 - 3] [i_13 - 3] [i_13 - 2] [i_13] [i_13 + 1])));
                        arr_50 [i_10] [i_11] [i_12] [i_10] [4] = var_7;
                        var_24 = (min(var_24, (!var_5)));
                        arr_51 [i_10] [i_11] [i_12] [i_13] &= 8;
                        var_25 = (arr_48 [i_10]);
                    }
                }
            }
        }
    }
    var_26 &= (min(1, var_9));

    for (int i_14 = 0; i_14 < 1;i_14 += 1)
    {
        arr_54 [i_14] [i_14] = min((min((((-(arr_53 [i_14])))), ((var_5 ? var_13 : 2070169405789999048)))), (arr_52 [6]));
        arr_55 [i_14] [i_14] = (arr_52 [i_14]);
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 17;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 17;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 15;i_17 += 1)
                {
                    {
                        arr_63 [i_16] &= ((-(((!227) ? (((var_5 / (arr_60 [i_14])))) : ((var_14 ? 6560715948597487594 : -1))))));
                        var_27 = var_13;
                    }
                }
            }
        }
    }
    var_28 = 34221;
    #pragma endscop
}
