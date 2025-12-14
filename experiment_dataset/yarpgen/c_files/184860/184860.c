/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_11 = 65024;

        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 13;i_3 += 1)
                {
                    {
                        var_12 -= ((max((max((arr_0 [i_0] [1]), (arr_7 [7]))), (((!(arr_0 [i_0] [i_1])))))));

                        /* vectorizable */
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            arr_14 [i_2] [i_1] [i_2 + 1] [i_3] [i_2] [11] = 1;
                            arr_15 [i_0] [i_1] [1] [i_2] [i_2 + 1] [i_3] [i_2] = (!var_10);
                            arr_16 [i_0] [i_0] [6] [i_2] [i_0] [i_4] = (arr_6 [i_1 - 2] [i_2] [0] [i_4 + 1]);
                            var_13 ^= (arr_7 [i_0]);
                            var_14 *= ((20 ? (((!(arr_9 [10])))) : -var_4));
                        }
                        var_15 *= (min((arr_13 [i_0] [11] [i_0] [i_0]), ((-(arr_10 [i_1 + 1] [i_2 + 1] [i_3 - 1])))));
                    }
                }
            }
            var_16 *= ((min((arr_0 [i_0] [i_1]), 502)));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    {
                        arr_26 [i_0] [i_0] [i_0] [6] = (((arr_3 [i_7 - 1] [i_7 - 1]) ? (arr_7 [i_7 - 1]) : (arr_2 [i_7 - 1])));
                        arr_27 [i_0] [i_5] [i_6] [i_7] = ((1 ? 1 : 68169720922112));
                    }
                }
            }
            var_17 = (14 == 72);
        }
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 12;i_10 += 1)
                {
                    {
                        var_18 = (min(var_18, ((((((~(1 * 185)))) ? var_2 : (2147483631 - 72))))));
                        var_19 -= ((min((arr_29 [i_0] [1]), var_10)));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    {
                        arr_46 [i_0] [i_8] [i_11] [9] [8] = var_8;
                        var_20 *= ((((-794213745 ? (arr_39 [12] [i_8] [8]) : (arr_9 [8])))));
                    }
                }
            }
            arr_47 [i_0] [i_8] [i_8] = (min(var_9, (arr_13 [i_0] [0] [i_8] [i_0])));
        }
        /* vectorizable */
        for (int i_13 = 2; i_13 < 12;i_13 += 1)
        {
            var_21 ^= (((arr_38 [12] [i_0]) + 1));
            arr_51 [i_13] [i_13] [3] = ((!(arr_24 [i_13 + 2] [i_13 + 2] [i_13] [i_13 - 1])));
            arr_52 [i_13] [i_13] = 6422325733284597130;
            var_22 ^= 1;
        }
    }
    /* vectorizable */
    for (int i_14 = 1; i_14 < 12;i_14 += 1)
    {
        var_23 -= var_6;
        arr_55 [i_14] = (((arr_29 [i_14 + 2] [i_14 + 2]) <= (!1)));
    }
    for (int i_15 = 0; i_15 < 10;i_15 += 1)
    {

        for (int i_16 = 0; i_16 < 10;i_16 += 1)
        {
            arr_64 [i_16] [i_16] [i_15] = (arr_39 [2] [i_16] [4]);
            var_24 = (min(var_24, -2371682126094004625));
        }
        /* vectorizable */
        for (int i_17 = 4; i_17 < 9;i_17 += 1)
        {
            arr_69 [4] [4] [i_17] = var_5;
            var_25 *= (((~-4096) || (arr_36 [i_17] [i_17] [i_15] [i_15] [i_15])));
        }
        var_26 *= (((arr_0 [i_15] [i_15]) - ((((var_1 ? var_5 : var_3)) - (arr_22 [i_15])))));
        var_27 = ((!(arr_66 [2] [0] [i_15])));
        var_28 = 13013155792394030248;
    }
    var_29 = (((!var_0) % 6240468844698147048));
    #pragma endscop
}
