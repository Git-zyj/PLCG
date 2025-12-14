/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_20 ^= ((((min(283726776524341248, ((((arr_6 [i_0] [i_3] [1]) <= 283726776524341248)))))) ? ((min(-104, 62992))) : ((min((min(61, 1)), var_10)))));
                        arr_11 [i_1] [i_1] [16] [14] [i_1] = (((((arr_6 [i_0 + 3] [i_1] [i_2 + 1]) - (arr_3 [i_0 - 2] [i_1 - 1] [i_1]))) / ((var_15 ? ((var_7 ? (arr_2 [i_2] [11]) : (arr_9 [9] [1] [19] [0]))) : (arr_10 [i_2 + 1] [i_1 - 2] [i_0 + 3])))));
                        arr_12 [i_0] [4] [i_1] = ((((190 <= (arr_8 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2])))));
                        arr_13 [i_0] [i_1] [i_0] [i_1] [i_1] [i_1] = (((arr_6 [19] [i_1] [i_2 - 2]) < (((var_7 | (arr_2 [i_2 - 2] [i_1 - 1]))))));
                    }
                }
            }
        }
        arr_14 [10] = min(864893062, (((var_13 && (((var_15 ? (-32767 - 1) : (arr_3 [10] [i_0] [1]))))))));
    }
    /* vectorizable */
    for (int i_4 = 4; i_4 < 15;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 15;i_7 += 1)
                {
                    {
                        arr_26 [i_5] [i_7] [13] = (((arr_20 [i_7] [5] [5]) >= (arr_1 [i_4 - 1])));
                        arr_27 [i_7] [i_6] [12] = arr_4 [i_7];
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 13;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        arr_36 [i_9] [i_4] [i_4] [i_9] = (20 != 34429);
                        arr_37 [i_9] [i_9] = 382668979;
                    }
                }
            }
        }
        var_21 ^= 38;

        for (int i_11 = 0; i_11 < 17;i_11 += 1)
        {

            for (int i_12 = 4; i_12 < 13;i_12 += 1)
            {
                var_22 = (arr_31 [8] [i_11] [8]);
                var_23 = (((arr_21 [i_4 - 1] [i_4 - 4] [i_11] [i_4 - 1]) != (arr_17 [8] [i_11] [1])));
                var_24 = (((((-610500399 ? var_18 : var_9))) ? var_18 : (~0)));
            }
            for (int i_13 = 0; i_13 < 17;i_13 += 1)
            {
                var_25 ^= ((var_19 != (arr_15 [i_11])));
                arr_47 [5] [5] [14] = (((arr_17 [i_4 - 2] [i_4 - 3] [i_4 - 4]) ? (arr_39 [i_4 + 1]) : (arr_17 [i_4 + 1] [i_4 - 4] [i_4 + 1])));
            }
            /* LoopNest 2 */
            for (int i_14 = 3; i_14 < 15;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 17;i_15 += 1)
                {
                    {
                        arr_52 [i_4] [i_11] [0] [i_15] = var_17;
                        var_26 ^= var_7;
                    }
                }
            }
        }
        for (int i_16 = 0; i_16 < 17;i_16 += 1)
        {
            var_27 = (arr_4 [18]);
            arr_56 [i_4] = (((arr_17 [i_4 + 1] [i_4 + 1] [i_4 + 1]) != (arr_35 [i_4 + 1] [16])));
        }
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 16;i_17 += 1)
    {
        var_28 = (min(var_28, (((~(arr_45 [i_17] [i_17] [i_17] [i_17]))))));
        var_29 ^= ((arr_45 [i_17] [i_17] [i_17] [i_17]) - var_13);
        arr_59 [7] = ((arr_42 [i_17] [i_17] [i_17] [i_17]) ? var_18 : (arr_10 [11] [i_17] [15]));

        for (int i_18 = 0; i_18 < 16;i_18 += 1)
        {
            var_30 ^= ((2634543943 ? var_8 : 1015718963));
            arr_63 [i_17] [i_18] [i_17] |= (((arr_21 [i_17] [i_17] [i_17] [16]) ? ((var_9 ? var_14 : (arr_7 [i_17]))) : ((var_8 ? var_16 : 129))));
            arr_64 [i_17] [i_18] |= (var_1 | var_8);
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 1;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 16;i_20 += 1)
                {
                    {
                        arr_69 [8] [i_17] = var_3;
                        var_31 ^= var_0;
                    }
                }
            }
        }
    }
    var_32 = (31 / var_19);
    #pragma endscop
}
