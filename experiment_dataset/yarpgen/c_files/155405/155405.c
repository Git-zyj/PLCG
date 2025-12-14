/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_10 = (max(var_10, (((max((arr_0 [i_0 - 1]), (arr_0 [i_0 - 1])))))));
        var_11 = (max(var_11, (((14751 ? 1 : 1)))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 = (max(var_12, (((((max(var_4, var_9))) ? (max(45921, ((var_4 ? (arr_5 [i_1 + 1] [i_1 + 1] [i_0]) : 1)))) : (arr_3 [3] [i_0 - 1]))))));
                    arr_6 [i_2] [0] [0] &= (min((max((((-14304 ? 1 : 1))), ((8871643130256457190 ? 8256245253732517632 : 0)))), (((~((~(arr_4 [6] [i_1 + 1]))))))));
                }
            }
        }
        var_13 *= ((var_4 ? (var_7 + var_1) : (arr_2 [i_0 + 2] [i_0 + 1])));
    }
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 14;i_4 += 1)
        {
            {
                arr_11 [i_3] [i_4] = ((((8256245253732517634 ? var_7 : 0))));
                var_14 = (arr_10 [i_3]);
                arr_12 [i_3] [14] [0] &= (min((min(((min((arr_8 [i_4 + 3]), 37188))), ((47888 ? 1 : 1)))), (((var_9 < (~var_0))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        {
                            var_15 = (~var_0);
                            arr_17 [i_5] [i_5] &= (min((((((0 ? (arr_13 [i_3 - 3] [i_5] [i_5] [i_6]) : -7168))) ? ((0 ? 13 : 1)) : ((4263897368 ? (arr_16 [i_3] [i_3] [i_3] [i_3 + 2] [i_3]) : 7698312061687851145)))), (!245)));
                            var_16 ^= 1;
                        }
                    }
                }

                for (int i_7 = 0; i_7 < 17;i_7 += 1)
                {
                    var_17 = var_0;
                    arr_20 [i_4] = 7791010487872676741;
                    var_18 = ((((1 ? (-32767 - 1) : -32767)) > 28348));
                    arr_21 [6] [i_4 - 1] [6] &= ((10190498819977033973 ? (-127 - 1) : 10));
                    var_19 = (((((arr_7 [i_3 + 2] [i_3 + 1]) + (arr_7 [i_3 - 3] [i_3 - 1]))) + (-73 + -5445868032777013797)));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 15;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 15;i_10 += 1)
                        {
                            {
                                var_20 = ((arr_10 [9]) ? (arr_24 [i_3 - 3]) : ((11 << (((arr_24 [i_3 + 1]) - 123219615)))));
                                var_21 = (max(var_21, var_0));
                                arr_30 [i_3 + 2] [i_3 + 2] [i_8] [10] [i_4] = (~4);
                                arr_31 [i_3] [i_4 + 1] [i_9 - 1] [i_4] = (arr_18 [i_4] [i_3 - 2] [i_4]);
                            }
                        }
                    }
                    var_22 &= -94;
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 15;i_12 += 1)
                        {
                            {
                                var_23 = (max(var_23, ((((!-32767) ? -617564261 : var_8)))));
                                var_24 = (max(var_24, ((((arr_13 [i_11] [4] [4] [i_3]) | 1)))));
                                arr_39 [i_3] [i_3] [1] [i_3 + 1] [i_4] = -var_6;
                                var_25 = (max(var_25, -1498523214));
                                var_26 ^= ((60 ? (arr_29 [i_3] [i_3 - 2] [i_12 - 1] [i_12] [i_12] [4] [i_12 + 1]) : (arr_29 [i_3] [i_3 - 1] [i_12 + 2] [i_12 + 1] [i_12 - 1] [8] [i_3 - 1])));
                            }
                        }
                    }
                    arr_40 [i_4] [i_4 + 2] [i_8] = ((!(((arr_27 [i_8] [i_4] [i_4] [i_4 + 3] [i_4] [i_3]) && 1))));
                }
            }
        }
    }
    #pragma endscop
}
