/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142940
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 4111135687732706013;
    var_15 = (255 + var_9);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 = ((var_8 / (arr_1 [i_0] [i_0])));
        var_17 ^= (((arr_1 [i_0] [i_0]) >= (arr_1 [21] [i_0])));
        var_18 = ((var_12 ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_5 [i_1] = ((((!(arr_4 [i_1] [i_1]))) ? var_6 : (arr_0 [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    arr_11 [i_1] [i_2] [i_1] = (~var_3);
                    var_19 = var_1;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        var_20 = 26809;
        var_21 = ((var_9 * ((-(arr_14 [i_4] [10])))));
        arr_15 [0] [0] |= ((~(arr_12 [i_4])));
        arr_16 [i_4] [i_4] = ((-8 + 24284) ? (((8 ? 16 : (arr_3 [21])))) : (arr_9 [3] [3] [i_4]));
    }
    /* vectorizable */
    for (int i_5 = 4; i_5 < 16;i_5 += 1)
    {
        var_22 = (arr_7 [i_5] [5]);
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                {
                    var_23 = -16504;
                    arr_26 [2] = ((arr_24 [i_5] [i_6] [i_5 - 4] [5]) & (-18 != 8));
                    var_24 = (min(var_24, -5332));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 14;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    {

                        for (int i_11 = 1; i_11 < 16;i_11 += 1)
                        {
                            var_25 *= (((arr_33 [8] [i_11] [i_11 + 1] [i_11]) ? (arr_37 [i_8] [i_9 + 2] [15] [15] [15]) : (arr_22 [i_10] [i_10] [i_9 - 2])));
                            var_26 = (min(var_26, (((206 * (arr_37 [i_11] [i_11] [i_9 + 3] [i_10] [i_11 - 1]))))));
                            arr_39 [12] [i_10] [i_11] = ((((((arr_24 [i_5] [i_8] [8] [5]) ? 244 : (arr_25 [i_5] [i_5] [i_5] [8])))) ? (arr_3 [i_10]) : var_8));
                            arr_40 [3] [8] [i_11] [i_11] [13] = ((!(arr_1 [i_11] [i_5])));
                            arr_41 [15] [13] [7] [i_11] [14] [i_11] = (((var_10 < var_2) / ((549722259456 ? -30111 : -9))));
                        }
                        var_27 = (min(var_27, 244));
                        arr_42 [16] [15] [i_9] [4] [15] = ((-(arr_2 [i_10])));
                    }
                }
            }
        }
        var_28 *= ((127 / (arr_2 [16])));
        var_29 &= ((-(arr_17 [i_5 - 4] [i_5 - 4])));
    }
    #pragma endscop
}
