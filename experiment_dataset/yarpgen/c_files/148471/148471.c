/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [16] = ((+((((min((arr_1 [5]), (arr_4 [i_2])))) ? (max(34048, -1)) : (arr_6 [i_2 - 3] [i_2 + 3] [i_2 + 2])))));
                    var_11 &= 1661870833;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_12 = ((arr_3 [i_2 - 2] [3]) - (arr_11 [i_2 - 4] [i_2] [i_2] [i_2 + 1]));
                        var_13 = (~1);
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_14 ^= var_9;
                        arr_16 [1] = (arr_14 [4] [i_1] [i_1] [i_1]);
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        arr_20 [i_0] [i_0] = ((var_3 ? (arr_10 [i_2 - 2] [10] [10] [i_2] [i_2] [i_2 + 1]) : var_6));
                        arr_21 [i_5] [i_2 - 4] [1] [3] [3] [i_0] = var_5;
                        var_15 = ((var_8 ? 2633096463 : 419829775));
                    }
                    arr_22 [i_2] [i_0] = (((((arr_17 [i_2 + 3] [i_2] [i_2 - 4] [i_2] [i_2 - 2] [i_2]) ? 419829800 : ((4112363400 ? -1992638238 : var_6)))) - ((var_8 ? (max((arr_14 [21] [i_1] [16] [i_1]), var_7)) : (arr_6 [i_0] [i_2 - 2] [i_2 + 2])))));

                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        var_16 = (((((((arr_9 [i_0] [i_0] [i_2] [i_2 - 1]) <= (max(var_8, -1435902864)))))) / (min(4112363400, var_9))));
                        arr_25 [1] [1] [i_2] [1] [i_0] [5] = ((((((2650498119 > -2136189949) ? (~var_4) : (arr_24 [i_0] [i_2 - 1] [i_2 - 2] [i_6] [i_0] [i_0])))) ? (((-var_3 ? ((var_8 ? -2136189949 : 4095)) : ((var_8 ? var_10 : var_4))))) : (max(var_1, (arr_19 [i_2 + 2] [i_2 + 3] [i_2 + 3] [i_0] [i_0] [i_0])))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 16;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            {
                var_17 = (min(var_17, ((min(5782115038040962023, ((4294967295 ? 1 : (arr_14 [i_8] [i_7 + 2] [i_7 + 2] [i_7 + 2]))))))));
                arr_32 [i_7] [i_7] [i_7] = ((((min((arr_7 [i_7 + 1] [i_7 + 1]), (arr_7 [i_7 + 2] [i_7 - 1])))) ? (max((arr_10 [i_7 + 1] [i_7] [i_7] [i_8] [i_8] [i_8]), (arr_7 [i_7 - 1] [i_7 - 1]))) : (min((arr_10 [i_7 + 1] [i_7] [1] [i_7] [i_8] [i_8]), 4264))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            {

                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {

                    for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
                    {
                        var_18 = ((var_3 ? ((((!(arr_19 [i_9] [i_9] [i_9] [i_11] [i_11] [i_12]))))) : (max(((var_2 ? (arr_35 [i_9] [i_9] [i_9]) : 419829790)), (!-1)))));
                        arr_43 [i_9] [i_10] [11] = ((+(min((arr_11 [i_12] [i_11] [i_9] [i_9]), (arr_30 [i_9])))));
                        arr_44 [i_9] [i_11] [i_10] [i_9] = ((419829790 ? (((arr_29 [i_9] [i_10]) ? (arr_29 [i_9] [i_9]) : (arr_29 [i_10] [3]))) : (((arr_29 [i_11] [i_11]) ? var_7 : (arr_29 [i_11] [i_12])))));
                        arr_45 [i_9] = (((((((max(var_9, 1262926897))) - -17))) <= ((-(arr_14 [i_12] [i_10] [i_11] [i_12])))));
                        arr_46 [i_9] [i_10] [i_10] [i_9] = var_7;
                    }
                    for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
                    {
                        var_19 = (max((((~(arr_41 [i_9])))), (arr_19 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])));
                        arr_51 [9] [i_9] [i_13] = ((56367 / (min(((~(arr_6 [i_9] [i_9] [i_9]))), (max((arr_4 [20]), (arr_31 [i_9] [14] [i_13])))))));
                    }
                    /* vectorizable */
                    for (int i_14 = 0; i_14 < 14;i_14 += 1) /* same iter space */
                    {
                        var_20 -= ((-1 ? ((23244 ? var_8 : 4294967295)) : ((((!(arr_35 [i_9] [i_9] [10])))))));
                        arr_55 [i_11] [i_10] [i_11] [i_11] [i_9] = ((var_7 ? ((~(arr_50 [i_9] [1] [i_9] [i_11] [i_11] [1]))) : (((0 ? (arr_5 [i_9] [i_10]) : var_7)))));
                    }
                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 14;i_15 += 1) /* same iter space */
                    {
                        var_21 = ((~(((arr_56 [i_9] [i_10] [i_9] [i_15]) / (arr_35 [i_9] [i_10] [i_9])))));
                        arr_59 [i_9] [i_10] [i_9] [i_15] = ((var_9 ? (arr_9 [i_15] [i_10] [i_15] [i_9]) : 33554400));
                        arr_60 [i_9] = var_6;
                    }
                    var_22 &= (min(((var_9 ? (arr_41 [i_9]) : (arr_41 [i_9]))), (arr_41 [i_10])));
                }
                var_23 = (min(var_23, (((~(min((arr_26 [i_9]), (arr_26 [i_9]))))))));
                var_24 = (min(var_24, (((max(var_1, var_10))))));
            }
        }
    }
    var_25 = 49391;
    #pragma endscop
}
