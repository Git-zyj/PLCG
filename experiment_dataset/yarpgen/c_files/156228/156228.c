/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;
    var_18 = var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 = (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0] [16]) : (arr_1 [i_0] [i_0])));
        var_20 = (max(var_20, (((!((2184079209 || (arr_0 [i_0] [10]))))))));
        var_21 = (((arr_0 [i_0] [i_0]) || (arr_0 [i_0] [i_0])));
        var_22 = (min(var_22, var_10));
        var_23 = (((arr_0 [i_0] [i_0]) ? var_1 : (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 4; i_1 < 18;i_1 += 1)
    {
        var_24 &= 31976;
        var_25 = (((max(var_13, (arr_4 [i_1]))) ^ (var_12 - var_5)));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_26 |= (((((arr_6 [i_2 - 1] [i_2 - 1] [i_2 + 1]) ? (arr_6 [i_1 + 2] [9] [i_1 + 2]) : var_11)) | ((((arr_2 [i_2 + 1]) % 371839014)))));
                    var_27 ^= max(2184079209, 3923128283);

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_28 = var_9;
                        var_29 = -2147483618;
                    }
                    var_30 = var_8;
                    arr_13 [i_2] = (min(((var_1 ? 15342 : ((var_0 ? var_9 : (arr_7 [12] [12]))))), (((((((arr_6 [i_1] [6] [i_3]) ? var_7 : var_6))) && ((min(var_15, 13))))))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 2; i_5 < 19;i_5 += 1)
    {
        var_31 = 2110888094;
        var_32 = ((-((var_1 | (arr_6 [i_5] [i_5] [i_5])))));
    }
    for (int i_6 = 1; i_6 < 21;i_6 += 1)
    {
        var_33 = (arr_18 [i_6]);
        var_34 = (min(var_1, var_14));
        var_35 = (((((arr_17 [i_6] [i_6 + 2]) ? (arr_17 [i_6 - 1] [i_6 + 2]) : (arr_17 [6] [i_6 + 1]))) & (arr_17 [i_6] [i_6 - 1])));
        var_36 ^= var_3;
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        var_37 = min((((var_0 ? (15342 + var_11) : (!var_9)))), 2083564891);
        var_38 |= (-1 ^ 65528);
        var_39 = (min(var_39, var_14));
        var_40 -= 42;
        var_41 = (min(var_41, (((-9200093913687812242 ? var_13 : (arr_18 [i_7]))))));
    }
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        var_42 = (min((((arr_10 [3] [3] [i_8] [i_8]) ? (max((arr_18 [3]), var_2)) : ((min(-2147483599, 2147483599))))), (((var_2 | (min(var_11, (-2147483647 - 1))))))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                {
                    arr_30 [i_8] [i_9] [5] [i_8] = (max(235, var_1));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 16;i_12 += 1)
                        {
                            {
                                var_43 = (max((arr_4 [i_8]), ((-(arr_4 [i_8])))));
                                var_44 ^= var_9;
                                var_45 = 16388;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 16;i_14 += 1)
                        {
                            {
                                var_46 *= 1698;
                                var_47 = ((0 ? (arr_8 [i_14] [i_10] [i_8]) : ((max(-2, (arr_31 [i_8] [i_9] [i_10] [i_13] [i_14] [i_14]))))));
                            }
                        }
                    }
                }
            }
        }
        var_48 -= ((!(arr_28 [i_8] [i_8] [i_8] [i_8])));
    }
    var_49 = var_11;
    #pragma endscop
}
