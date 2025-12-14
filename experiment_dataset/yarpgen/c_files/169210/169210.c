/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_9 != var_7);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_2 [11] = 137436942;
        arr_3 [i_0] = (arr_1 [1]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            var_15 = (((((arr_4 [21] [i_2]) - (arr_0 [i_1]))) - 1));
            arr_10 [8] [i_2] [i_2] = 2212958146;

            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                var_16 &= 1;
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {
                        {
                            var_17 ^= 7627;
                            var_18 *= ((3743166877 ? -104 : (arr_11 [i_4] [10])));
                            var_19 -= (arr_12 [i_4 - 1] [5] [13] [14]);
                            arr_19 [2] [i_2] [i_3] [3] [i_5] = (arr_5 [i_2]);
                        }
                    }
                }
                arr_20 [20] [i_3] [15] [i_2] = (arr_12 [13] [6] [i_2] [i_1]);
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 21;i_7 += 1)
                    {
                        {
                            arr_25 [i_7] [8] [i_3] [i_2] [i_7] = var_12;
                            var_20 = -1536409886;
                        }
                    }
                }
            }
            arr_26 [i_2] [i_1] = (!1536409899);
            arr_27 [7] [20] = var_8;
        }
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            var_21 -= (-1536409913 - -89667977);
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        {
                            arr_38 [8] [6] [i_9] [i_10] [i_11] = 0;
                            var_22 = ((var_8 >= (!var_1)));
                            arr_39 [i_10] [i_10] [i_10] = (arr_8 [18] [16]);
                            arr_40 [i_10] = (arr_15 [i_1] [12] [i_9] [i_10] [11] [i_11]);
                            var_23 = (arr_9 [i_10]);
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 22;i_13 += 1)
                {
                    {
                        var_24 += ((~(arr_8 [11] [i_12])));
                        arr_46 [13] [i_12] [i_12] [7] = (arr_28 [i_12] [10]);
                    }
                }
            }
            arr_47 [1] [i_1] = (((arr_21 [i_8] [i_1]) ? (((arr_14 [8] [3] [9] [1]) ? (arr_45 [i_1] [i_8]) : 0)) : 8126464));
        }

        for (int i_14 = 0; i_14 < 0;i_14 += 1) /* same iter space */
        {
            arr_50 [1] = (((arr_23 [13]) ? (arr_5 [i_14 + 1]) : 158));
            arr_51 [21] [i_14] [7] = var_2;
        }
        for (int i_15 = 0; i_15 < 0;i_15 += 1) /* same iter space */
        {
            arr_54 [7] [i_15] = var_1;
            arr_55 [7] [i_15] [i_1] = (((arr_37 [1] [i_15] [i_15] [i_15 + 1] [i_15] [i_15]) && var_4));
            var_25 = (((-32767 - 1) || (arr_7 [i_15 + 1] [i_15 + 1])));
        }
        for (int i_16 = 0; i_16 < 0;i_16 += 1) /* same iter space */
        {

            for (int i_17 = 2; i_17 < 19;i_17 += 1)
            {
                var_26 = (arr_4 [i_1] [16]);

                for (int i_18 = 1; i_18 < 19;i_18 += 1)
                {
                    var_27 -= ((1651792690 ? (arr_34 [i_1] [i_16 + 1] [i_16] [16]) : (arr_34 [i_17] [i_16 + 1] [i_16] [i_16])));
                    var_28 -= var_9;
                }
                for (int i_19 = 0; i_19 < 22;i_19 += 1)
                {
                    var_29 *= (14115 | 1);
                    var_30 += ((var_7 / (var_6 || 686617639327900924)));
                }
            }
            var_31 *= (arr_32 [i_1] [0]);
            /* LoopNest 2 */
            for (int i_20 = 2; i_20 < 20;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 22;i_21 += 1)
                {
                    {
                        var_32 *= 23389;
                        arr_71 [1] [i_16] [7] = var_0;
                    }
                }
            }
        }
        for (int i_22 = 0; i_22 < 1;i_22 += 1)
        {
            var_33 = var_3;
            /* LoopNest 3 */
            for (int i_23 = 0; i_23 < 22;i_23 += 1)
            {
                for (int i_24 = 0; i_24 < 22;i_24 += 1)
                {
                    for (int i_25 = 0; i_25 < 22;i_25 += 1)
                    {
                        {
                            var_34 = ((((arr_6 [14] [i_25]) ? (arr_41 [i_1] [14] [i_23] [8]) : 13299)));
                            arr_80 [10] [i_24] [16] [11] [i_22] [i_22] [i_1] = (arr_32 [i_1] [i_25]);
                            arr_81 [i_1] [i_1] [i_22] [2] [i_24] [i_25] = (((arr_41 [12] [20] [2] [i_24]) / (arr_58 [i_1] [14] [1] [11])));
                            arr_82 [i_25] [i_24] [i_23] [1] [i_22] [i_22] [i_1] = (((arr_68 [i_1]) / var_11));
                        }
                    }
                }
            }
            var_35 = -8312966419225243813;
            /* LoopNest 3 */
            for (int i_26 = 0; i_26 < 22;i_26 += 1)
            {
                for (int i_27 = 3; i_27 < 18;i_27 += 1)
                {
                    for (int i_28 = 0; i_28 < 22;i_28 += 1)
                    {
                        {
                            arr_91 [i_1] [i_22] [i_22] [1] [1] [i_22] [6] |= var_11;
                            arr_92 [i_1] [i_26] = arr_5 [i_27 + 4];
                        }
                    }
                }
            }
        }
        var_36 = (((((arr_15 [21] [10] [8] [18] [i_1] [1]) || -13300)) ? (arr_64 [10] [i_1] [7] [0] [i_1]) : (((arr_78 [i_1] [1] [i_1] [17] [13]) << 15))));
    }
    #pragma endscop
}
