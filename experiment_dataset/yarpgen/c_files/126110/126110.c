/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_14 = (arr_0 [i_1]);
                    var_15 = (arr_1 [9]);
                    var_16 = (max(var_16, (((((max(22, (1209168116 + 233)))) ? (((!((min(var_3, var_1)))))) : var_13)))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_13 [1] [i_1] [i_2] = ((((((((arr_3 [i_2] [i_3]) <= (arr_6 [i_0] [i_1] [i_2]))) ? 1 : (((arr_10 [i_3]) + var_6))))) ? (227 || 247) : (~1)));
                                var_17 = (max(((-(arr_12 [i_1] [i_3 - 2] [i_2] [i_3]))), ((-((55 % (arr_3 [10] [i_3])))))));
                                arr_14 [i_1] = (((min(891484672, (min(1, (arr_9 [i_0] [i_1] [8] [i_1]))))) <= ((((216 / var_7) ? ((~(arr_2 [i_0] [i_0]))) : ((26009 ? var_10 : 126)))))));
                                var_18 -= (((1 ? 1 : 1572864)));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 18;i_6 += 1)
        {
            {
                var_19 |= var_12;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        {
                            arr_25 [i_7] [i_6] = 1;
                            arr_26 [i_5] [i_6 - 2] [i_7] = ((-(((((2415002156350948635 ? 13666 : var_3))) ? 5133391981180180680 : ((min(4212337449, var_9)))))));

                            for (int i_9 = 0; i_9 < 19;i_9 += 1)
                            {
                                arr_30 [i_7] [15] [i_7] [i_8] [1] [18] = ((-(arr_20 [i_6 + 1] [i_6 + 1] [i_6 - 1])));
                                var_20 = (arr_15 [14]);
                            }
                            for (int i_10 = 0; i_10 < 19;i_10 += 1)
                            {
                                var_21 = (!(-2147483647 - 1));
                                var_22 = (-28 <= 121);
                                var_23 = ((var_12 != (arr_27 [i_7] [1] [i_6 - 1] [i_8] [i_10])));
                                var_24 = -64;
                                var_25 ^= ((((((((1 ? (arr_16 [7]) : 26680))) ? (arr_27 [i_5] [i_6 - 2] [i_6 - 2] [i_8] [i_10]) : (((-9223372036854775797 + 9223372036854775807) << 50))))) == ((8380416 ? 233 : 5096603793817085366))));
                            }
                            var_26 |= (((((((max(1, 8760133738367507387))) ? (arr_20 [i_5] [i_5] [i_5]) : (arr_27 [i_5] [i_6 + 1] [9] [5] [i_8])))) ? (((((max(var_11, 31457))) == -8380417))) : (((!(((46864 ? (arr_16 [11]) : (arr_20 [i_5] [i_7] [i_5])))))))));
                        }
                    }
                }
                var_27 = 90;
                var_28 = ((-(min((arr_22 [i_5] [i_5] [i_5] [i_6 + 1]), (arr_17 [i_5])))));
                /* LoopNest 3 */
                for (int i_11 = 1; i_11 < 16;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 4; i_13 < 18;i_13 += 1)
                        {
                            {
                                var_29 -= (arr_16 [i_5]);
                                var_30 = (arr_38 [i_12] [i_13 - 3]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
