/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            arr_4 [i_1] [i_0] = (min(133, (max((((14975 ? (arr_2 [i_0] [i_0] [i_0]) : 51192))), var_2))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_18 = (max(var_12, ((var_2 ? (!18446744073709551615) : var_15))));
                        var_19 += ((((!(((var_3 ? 0 : 1))))) ? -1548833030 : (!var_11)));
                        var_20 += (((!247) ? (((!0) ? -7 : (((var_0 ? (arr_7 [i_0 + 1] [i_1] [i_2] [i_0 + 1]) : 17))))) : (((-(15649 < var_9))))));
                    }
                }
            }
        }
        arr_10 [i_0] |= (min(((-(var_14 >> 0))), (((var_17 < (arr_1 [i_0 - 1]))))));
        arr_11 [i_0] [i_0] = ((!(~var_17)));
        arr_12 [i_0 - 1] = (max(var_11, 65526));
        var_21 = var_16;
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        arr_16 [i_4] = ((9 << (-24381 + 24390)));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 22;i_6 += 1)
            {
                {
                    var_22 |= 41931;
                    arr_21 [i_5] = (arr_20 [i_4] [i_4]);
                    arr_22 [i_5] [i_5] = var_6;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                {
                    var_23 -= (((((-23810 ? (-9223372036854775807 - 1) : var_2))) ? 23604 : 54888));
                    arr_30 [i_8] = ((1 ? (arr_15 [i_7] [i_8]) : ((var_9 ? (arr_18 [i_8] [i_8] [i_4]) : (arr_24 [i_7] [i_8])))));
                    arr_31 [i_8] [i_7] [i_7] = (arr_17 [15] [15]);
                    var_24 = (arr_23 [0]);
                }
            }
        }
        var_25 = (max(var_25, ((((var_11 <= -23801) >= ((var_17 ? 41931 : 63929)))))));
    }
    for (int i_9 = 0; i_9 < 13;i_9 += 1)
    {
        arr_36 [i_9] [i_9] = ((((((var_14 ? var_9 : (arr_9 [i_9] [i_9]))) & (((min((arr_13 [13]), -1)))))) ^ ((max(var_5, (!233))))));
        var_26 = (max(var_26, (arr_2 [i_9] [i_9] [i_9])));
        var_27 = (max(var_27, (((153385993 > (arr_25 [i_9] [i_9] [i_9]))))));
        arr_37 [i_9] = var_2;
    }
    for (int i_10 = 0; i_10 < 10;i_10 += 1)
    {
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 8;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 10;i_13 += 1)
                {
                    {
                        arr_48 [i_13] [i_12] [i_10] [i_12] [i_10] = (arr_26 [i_10] [i_10] [i_10]);
                        var_28 = (((!var_4) ? (((max(var_5, var_14)))) : (min(12583, 12))));
                        arr_49 [i_12] = (max((arr_8 [14] [i_11] [i_12] [7]), (((var_7 ? (arr_44 [i_12] [i_12 + 1] [i_12 + 1]) : (arr_41 [i_12 - 1]))))));
                    }
                }
            }
        }

        for (int i_14 = 1; i_14 < 9;i_14 += 1)
        {
            var_29 ^= ((2159133623 ? (((arr_35 [i_14 - 1]) - (arr_0 [i_14 - 1] [i_14 + 1]))) : (max(9, (arr_0 [i_14 - 1] [i_14 + 1])))));
            /* LoopNest 2 */
            for (int i_15 = 1; i_15 < 9;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 10;i_16 += 1)
                {
                    {
                        arr_59 [i_10] [i_14] [i_14] [3] [i_10] [i_15] = var_10;
                        arr_60 [6] |= (((arr_9 [i_14 + 1] [i_16]) ? ((min(var_8, (max((arr_44 [i_15] [1] [9]), var_8))))) : -24381));
                    }
                }
            }
        }
        var_30 = (min((min(0, 23604)), 44));
        arr_61 [i_10] [6] = (max(var_0, var_11));
    }
    var_31 -= ((var_17 ? -var_11 : 3));
    #pragma endscop
}
