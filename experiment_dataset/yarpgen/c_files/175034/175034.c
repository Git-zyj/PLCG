/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_13 = ((!(-127 - 1)));
        var_14 = (max(var_14, var_11));
        var_15 ^= (max(var_5, -var_8));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 |= (min((~var_5), ((~(arr_5 [i_1] [i_1 - 2])))));
                    var_17 = ((8323072 ? ((1 ? 12 : 4)) : ((((arr_0 [i_0] [i_1 - 2]) ? (arr_6 [i_1] [i_1 - 1] [i_1] [i_1 - 1]) : var_2)))));
                    var_18 = 0;
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_19 = (((+-11445233024848193994) ? (arr_7 [i_3] [i_3]) : 11445233024848193994));
        arr_9 [i_3] [16] &= (((--0) | var_7));
        var_20 = (min(var_20, ((max(7001511048861357611, -1093633115)))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_21 = 936796652032375991;
        var_22 = 1002830582;
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 19;i_7 += 1)
                {
                    {
                        var_23 = ((((-((~(-127 - 1))))) ^ ((max(-26499, 16416)))));
                        var_24 = (((min(-1274447425, 4208211284916587612)) / (arr_12 [12] [i_4])));
                        arr_18 [i_4] [14] [13] [i_4] = ((var_1 ? (arr_13 [i_4]) : (min(var_1, (max((arr_14 [i_4] [i_5] [16] [1]), var_9))))));
                        arr_19 [i_5] [i_5] [i_5] [i_5] [i_4] = (arr_14 [i_4] [i_5] [i_6] [7]);
                        arr_20 [i_4] [i_5] [i_4] [i_7] = (((~var_3) / (-9223372036854775807 - 1)));
                    }
                }
            }
        }
    }
    var_25 = (max(var_25, var_2));

    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        var_26 -= (((((((16416 ? var_9 : 134184960))) + (((arr_12 [i_8] [i_8]) ^ var_0)))) <= ((((~var_7) ? 16408 : (arr_8 [i_8]))))));
        var_27 = (min(65520, var_11));
        var_28 = (((arr_15 [1] [i_8] [i_8] [18]) || (((-(arr_15 [i_8] [i_8] [i_8] [i_8]))))));
        var_29 = (var_6 < (min(189, (arr_14 [i_8] [i_8] [i_8] [i_8]))));
        /* LoopNest 2 */
        for (int i_9 = 4; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                {
                    var_30 *= (469762048 && 26499);
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 13;i_12 += 1)
                        {
                            {
                                var_31 = var_1;
                                arr_32 [10] [i_11] [i_9] = (min((arr_17 [i_11] [i_9 + 1] [i_9] [i_9] [i_11]), (arr_30 [7] [i_9])));
                                arr_33 [i_10] [i_11] = 256;
                                var_32 = ((((((((max(8545, -127)))) / var_11))) ? (arr_7 [i_9 + 2] [i_9]) : var_10));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 21;i_13 += 1)
    {
        var_33 = (min(var_33, var_1));
        var_34 |= ((!((((!(arr_35 [i_13])))))));
        var_35 = (max((((arr_34 [i_13]) ? var_6 : (0 - var_0))), (16414 && 65520)));
    }
    var_36 &= var_4;
    #pragma endscop
}
