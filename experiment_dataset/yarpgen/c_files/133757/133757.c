/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_13;
    var_21 = ((-(max(var_5, var_19))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_9 [i_3] [i_3] [i_3] [i_3] [i_3] = var_18;
                        var_22 *= (arr_7 [i_0 + 1] [i_1 + 2] [i_1 + 2] [i_3]);
                        var_23 = (arr_8 [i_0] [i_0] [10] [i_3]);
                    }

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_24 = -103;
                        var_25 = (arr_6 [i_0 - 1] [i_1] [i_1 + 2]);

                        for (int i_5 = 1; i_5 < 19;i_5 += 1)
                        {
                            arr_16 [i_5] [i_2] [i_0] = ((6 <= (arr_10 [i_5] [i_4] [i_1] [i_0])));
                            var_26 += (((arr_8 [i_1 - 2] [i_1 - 2] [i_1 + 2] [i_1 - 1]) > (arr_8 [i_1 + 3] [i_1 + 2] [i_1 + 3] [i_1 - 2])));
                        }
                        var_27 = (~(((!(arr_8 [i_4] [i_2] [i_1] [i_0])))));
                    }
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {

                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 18;i_7 += 1)
                        {
                            var_28 *= (((arr_18 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_2 - 2]) ? 3998 : var_13));
                            arr_21 [i_0] [i_1] [i_1] [i_6] [i_7] [6] [i_7] = 124;
                            arr_22 [i_7] [14] [i_7] [i_1] [i_7] = var_6;
                            var_29 = ((0 || (arr_4 [i_1 - 1])));
                        }
                        var_30 ^= 0;

                        for (int i_8 = 1; i_8 < 19;i_8 += 1)
                        {
                            arr_25 [i_0] [15] [3] [17] [i_8] [12] = (((((-(arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])))) == (max(((8 ? var_7 : 65528)), (arr_10 [i_1 - 2] [i_2 - 1] [i_8 - 1] [i_8 + 2])))));
                            arr_26 [i_0] = 0;
                        }
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            var_31 ^= ((((max(158622043, (62667 * 228)))) ? -24 : (((max(var_4, -124))))));
                            var_32 = var_9;
                        }
                        /* vectorizable */
                        for (int i_10 = 2; i_10 < 21;i_10 += 1)
                        {
                            arr_33 [i_0 - 1] [i_2] [6] [i_6] [i_6] |= ((var_10 && (arr_19 [5] [5] [i_10] [i_10] [16] [i_6])));
                            var_33 = (((arr_30 [i_2 + 2]) & 249));
                            var_34 = (max(var_34, (((var_10 >= (((arr_10 [i_10] [i_6] [8] [i_1]) ? (arr_7 [i_0] [10] [10] [i_0]) : var_4)))))));
                            var_35 = -16;
                        }
                    }

                    /* vectorizable */
                    for (int i_11 = 3; i_11 < 19;i_11 += 1)
                    {
                        arr_36 [i_0] [i_0] [i_0 - 1] [i_0] [16] [i_0] = (((((arr_23 [i_0] [i_0] [i_1] [i_2 + 1] [i_11] [i_11]) ? var_1 : 4011111689)) < (((~(arr_35 [i_11 + 2] [i_11 - 1] [i_11 + 2] [i_11]))))));
                        arr_37 [i_0] [i_2] [i_0] [i_0] = ((-(arr_35 [i_2 + 1] [i_1 - 1] [i_0 + 1] [i_0 + 1])));
                    }
                    var_36 ^= (max((((+((max((arr_20 [i_1] [i_1 + 1] [i_2] [i_1] [i_1 + 1] [14] [8]), (arr_14 [i_1]))))))), 1911847809));
                    arr_38 [i_0 - 1] [20] [i_0 - 1] = (max((arr_10 [15] [i_2] [i_2 - 1] [i_1 - 1]), 158622043));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_12 = 0; i_12 < 15;i_12 += 1)
    {
        var_37 = (((226 >= 469762048) ^ (-1 + 255)));
        var_38 = ((!((48 == (arr_39 [1])))));
        var_39 = (!255);
    }
    var_40 = var_2;
    #pragma endscop
}
