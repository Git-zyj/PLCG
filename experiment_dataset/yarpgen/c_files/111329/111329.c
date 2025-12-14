/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= (-71 ? ((min(188, 54667))) : var_9);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_12 = 0;
                var_13 -= ((~((var_8 ? 67 : ((min(19978, 85)))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            {
                var_14 = (max(var_14, (((10982546509629930250 ? 1 : 68)))));
                var_15 = ((((arr_4 [i_3]) ? ((1 ? var_7 : (arr_1 [i_2]))) : var_1)));

                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {
                    var_16 &= ((!((var_10 <= (arr_9 [i_4] [12] [12] [i_2])))));
                    arr_12 [10] [i_3] [i_4 + 2] |= (((arr_7 [12] [i_3] [i_3]) - (((arr_0 [i_4 + 3]) - (arr_10 [i_2 + 1] [i_3 + 1] [i_4 + 1])))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_17 = (((((((128 ? 1 : var_0))) ? (arr_1 [i_2 + 1]) : (!81))) / (((((var_10 ? (arr_9 [i_6] [i_2] [3] [i_2]) : var_0))) ? (((arr_14 [i_2] [5] [i_4] [i_5] [i_4] [i_3]) ? var_5 : (arr_1 [11]))) : ((0 ? (arr_8 [i_2] [i_5]) : 128))))));
                                var_18 |= ((((((((var_10 ? (arr_9 [i_4] [i_5] [i_4] [i_4]) : var_7))) ? -1 : ((max(var_4, (arr_13 [i_2] [i_2] [i_4] [i_4] [i_4] [i_6]))))))) ? ((var_1 ? (arr_10 [i_3] [i_3 + 1] [i_4]) : (arr_11 [i_3] [i_3 + 1] [i_5]))) : ((min((arr_9 [i_4 + 3] [i_5] [i_3 + 1] [i_6]), var_9)))));
                                var_19 = (min(var_19, (((~((~(arr_6 [i_5] [i_5] [i_4 + 3]))))))));
                                var_20 |= (--1);
                                var_21 *= var_9;
                            }
                        }
                    }
                    var_22 = ((~(((19 <= var_6) | (((227 >= (-32767 - 1))))))));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            {
                                var_23 = -var_7;
                                var_24 = (min(var_24, ((((arr_13 [i_7] [i_2 + 1] [i_7] [i_8] [i_8] [i_8]) % 1631991006)))));
                                var_25 = (arr_7 [i_2] [i_3] [i_7]);
                                var_26 = -1030861790;
                            }
                        }
                    }

                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_27 = (var_2 ? (arr_23 [i_2 - 1] [i_2 + 1] [i_3 + 1] [i_3 + 1] [i_2]) : (arr_17 [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1] [i_3 + 1]));
                        var_28 = (min(var_28, 171));
                        var_29 = var_1;
                    }
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    arr_31 [i_2] [i_3] [i_3] = ((1 ? ((((arr_0 [i_2]) ? var_5 : var_5))) : ((var_6 ? var_6 : 4574194490601348747))));
                    var_30 ^= ((-(arr_28 [14] [i_2 + 1] [i_3] [i_11] [i_11])));
                }
            }
        }
    }
    #pragma endscop
}
