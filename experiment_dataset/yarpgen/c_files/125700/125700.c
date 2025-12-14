/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_15 = (min((min((arr_2 [i_0 - 2] [i_1]), -var_1)), (var_4 > var_11)));
                var_16 -= (((arr_1 [i_0 - 1]) ? (min(-1509430727, (min(2047, var_1)))) : (var_14 > var_9)));
                var_17 += (max(((min((arr_5 [i_1] [i_0 - 3]), var_8))), (max(((((arr_5 [i_0 - 1] [i_0]) ? 1072345018 : var_9))), ((-1509430718 ? (arr_3 [i_0] [i_0] [4]) : 1509430732))))));
                var_18 = ((((!(arr_0 [i_0 + 1]))) && (arr_5 [i_0] [i_0])));
            }
        }
    }
    var_19 = var_6;

    /* vectorizable */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {

        for (int i_3 = 2; i_3 < 21;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    {
                        var_20 = -1509430720;

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_17 [i_2] [i_3] [i_3] [i_5] [i_6] = -1509430732;
                            arr_18 [16] [i_6] [i_4] [i_6] = var_4;
                            var_21 = (arr_13 [i_3 + 1]);
                            var_22 = (((arr_8 [i_2] [i_3 - 2]) ? (arr_6 [i_3 - 1]) : (arr_6 [i_3 - 2])));
                        }
                        var_23 ^= ((-(arr_16 [5] [i_3] [i_4] [1] [i_4] [i_5] [4])));
                    }
                }
            }
            arr_19 [i_2] = -1509430705;
        }
        arr_20 [i_2] &= ((-(arr_11 [i_2] [i_2])));
        arr_21 [i_2] = (--186);
        var_24 += (((arr_6 [i_2]) - (arr_6 [i_2])));
    }
    for (int i_7 = 1; i_7 < 15;i_7 += 1)
    {
        var_25 = (min(var_25, (((min(var_5, (arr_15 [i_7 - 1] [20] [i_7 + 1] [6] [20] [i_7])))))));
        arr_24 [i_7 + 1] [0] |= arr_11 [i_7] [i_7];
        arr_25 [i_7] [i_7 - 1] = (((582077551 << (((((arr_14 [10] [i_7 + 1]) + 1449458128)) - 29)))));
        arr_26 [i_7] = (max((((!(arr_12 [i_7] [i_7] [i_7] [i_7 + 1] [i_7])))), ((-(arr_12 [i_7 - 1] [3] [i_7 - 1] [i_7 + 1] [i_7 - 1])))));
    }
    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 3; i_9 < 20;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 23;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 0;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 24;i_12 += 1)
                        {
                            {
                                var_26 = (((((~(arr_35 [i_11 + 1] [i_10 + 1] [i_10] [i_9 + 2])))) || (-1509430758 & 1509430726)));
                                var_27 = (arr_36 [i_8] [i_9] [i_10 - 1] [i_11 + 1] [i_11 + 1] [i_11]);
                            }
                        }
                    }
                    arr_41 [i_9] [i_9] [i_10] [i_10] = (((((arr_37 [i_9] [i_9] [i_9 + 3] [i_10 - 1] [i_10] [16]) / (arr_37 [i_10] [i_10] [i_9 + 3] [i_10 - 1] [i_10 - 1] [i_9]))) * (min((arr_37 [i_8] [i_9] [i_9 - 1] [i_10 - 1] [i_8] [i_8]), (arr_37 [12] [1] [i_9 + 2] [i_10 + 1] [1] [i_8])))));
                }
            }
        }
        var_28 = (max(var_28, ((((min(((((arr_32 [i_8] [i_8] [i_8]) << (((arr_28 [i_8] [i_8]) + 7299231484985926735))))), (min(var_14, (arr_33 [7] [i_8] [i_8]))))) + ((min((arr_27 [i_8] [i_8]), (arr_40 [i_8] [i_8])))))))));
    }
    #pragma endscop
}
