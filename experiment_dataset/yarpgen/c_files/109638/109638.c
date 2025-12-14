/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_13 -= (min(3532554591, 1));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_14 += ((15028 ? var_4 : (((var_2 ? 255 : var_3)))));
            var_15 = (arr_3 [i_0]);
            arr_6 [i_1] [i_0] [i_1] = -65535;
            arr_7 [i_1] [i_1] [i_1] = 0;
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_11 [i_0] [i_2] [2] = 1265187493;

            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_16 = min((-71 | 3226808105), ((max((arr_9 [i_5] [i_2]), (arr_9 [i_0] [i_4])))));
                            var_17 = ((((min(11431009791736957159, var_10))) ? ((max(var_3, var_10))) : ((var_11 ? (arr_15 [i_0] [i_2] [i_3] [i_3] [i_3]) : -4764437967829760825))));
                            arr_19 [i_0] = max(((((min(var_8, (arr_16 [i_0])))) ? (max(var_10, var_3)) : 48)), ((min((arr_9 [i_0] [i_0]), (arr_9 [4] [i_2])))));
                        }
                    }
                }
                arr_20 [i_2] [i_2] [i_3] [20] = (((((((arr_16 [i_0]) ? 4764437967829760819 : 24)) == 1)) ? 1 : ((1 ? -var_8 : 1080856580))));
            }
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                arr_24 [i_0] = ((1 ? 1 : ((31721 ? 31730 : ((var_9 ? 6351682133134075449 : 112))))));
                var_18 = ((((max(18446744073709551615, 59))) ? (((((var_3 ? (arr_10 [i_0] [i_2]) : var_7))))) : ((((-(arr_17 [i_0] [i_2] [i_2] [i_2] [i_2] [i_6]))) % var_5))));
                arr_25 [6] [i_2] [i_6] [i_6] = (arr_3 [i_0]);
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                arr_29 [i_0] [i_0] [20] = var_4;

                for (int i_8 = 3; i_8 < 20;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        arr_35 [i_2] [20] [i_8] [i_7] [i_2] [2] = ((~(arr_13 [i_0] [i_0] [i_0] [18])));
                        var_19 = (((arr_1 [i_8 - 3]) < var_8));
                        var_20 = (min(var_20, (-4764437967829760844 % -31701)));
                        var_21 = (max(var_21, var_0));
                    }
                    var_22 -= var_9;
                    var_23 = 2699457855;

                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        arr_38 [i_0] [i_0] [1] [i_0] [i_0] [i_0] [i_0] = (arr_15 [i_10] [i_8 - 1] [i_7] [1] [0]);
                        var_24 -= (((((-81 ? 1 : 8191))) ? (arr_36 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_30 [15] [i_2])));
                        arr_39 [i_0] [i_0] [i_7] [i_8] [i_8] [i_8 - 2] [i_10] = ((((!(arr_27 [i_0] [10] [i_7] [14]))) ? (!-4764437967829760820) : (((arr_26 [i_0] [i_7] [i_10]) ? var_1 : var_6))));
                    }
                }
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    arr_42 [i_0] [i_2] [0] [15] [i_0] = (((arr_18 [14] [i_0] [11] [i_7] [i_11] [11] [i_11]) | 1));

                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        var_25 = (-(arr_2 [i_12]));
                        var_26 = 48;
                    }
                    var_27 = (max(var_27, 160));
                }
            }
            var_28 = var_10;
        }
        var_29 |= ((((min(4764437967829760842, ((max((arr_10 [i_0] [i_0]), 31826)))))) ? var_11 : (arr_15 [1] [1] [i_0] [i_0] [i_0])));
        arr_47 [16] = ((((max(var_7, 2147483647))) ? ((0 >> (-1 + 11))) : (arr_16 [i_0])));
    }
    /* LoopNest 2 */
    for (int i_13 = 1; i_13 < 16;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 18;i_14 += 1)
        {
            {
                var_30 += -1369003409;
                var_31 = ((-4764437967829760812 ? (max((arr_33 [12] [i_14] [i_14] [i_14] [i_14]), var_4)) : ((((arr_45 [i_13] [9] [i_13] [i_13 + 1] [i_13]) ? (arr_3 [i_14]) : var_8)))));
                arr_52 [i_14] [i_14] = var_2;
                var_32 += ((~(arr_40 [3] [i_13 - 1] [i_13] [i_13])));
            }
        }
    }
    var_33 = var_8;
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 1;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            {
                arr_59 [i_16] = (max((((arr_27 [i_16] [i_16] [i_15] [i_15]) * var_7)), (max((arr_27 [i_15] [i_15] [i_15] [0]), -4764437967829760788))));
                var_34 = (min(var_34, (arr_21 [i_15] [8] [i_15])));
                var_35 = -32762;
            }
        }
    }
    #pragma endscop
}
