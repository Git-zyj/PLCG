/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [14] [i_1] [i_0] [i_3] [i_4] = -5576304335698579834;
                                arr_13 [i_0] [i_4] = (min((((!(arr_0 [i_3 + 1])))), (((arr_0 [i_3 + 2]) ? (arr_0 [i_3 + 2]) : 5608521576871696529))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_14 += (min((((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), (((-(arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                                var_15 = (((arr_0 [i_0]) ? var_11 : ((~(min(3189688520, var_4))))));
                            }
                        }
                    }
                    var_16 = (max(var_7, ((5576304335698579841 ? (32023 - 5608521576871696529) : 31))));
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 24;i_8 += 1)
                        {
                            {
                                arr_24 [i_0] [i_0] [i_0] [i_7] [i_8 - 1] = (max(((((max(718341081797167793, var_1))) ? (arr_4 [i_0]) : var_9)), (arr_22 [i_8] [i_8] [i_8 - 1] [i_7] [i_7 + 2])));
                                var_17 -= (((((arr_10 [i_0] [i_0] [i_2] [i_7 - 3] [i_1]) > (arr_10 [i_0] [i_1] [i_2] [i_7 - 1] [i_8]))) ? (((arr_14 [i_7 + 1] [i_7]) >> (((60106 | -5576304335698579834) + 5576304335698530628)))) : ((((((5576304335698579841 ? var_3 : (arr_0 [i_7])))) ? (arr_8 [i_7 - 1] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1]) : 149)))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 2; i_9 < 23;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 25;i_13 += 1)
                        {
                            {
                                var_18 ^= ((((((var_1 | var_11) ? (min(46971, 5608521576871696529)) : (((var_6 / (arr_1 [1]))))))) ? ((((arr_8 [i_9 - 1] [i_9 + 1] [i_9 - 1] [i_9] [i_9 + 1]) & (~0)))) : ((8646911284551352320 ? var_10 : (((((arr_9 [i_9 - 2] [i_9 - 2] [i_11] [i_11] [i_13] [i_10]) != (arr_41 [i_9 + 2] [i_10] [i_11] [i_12] [i_13] [4] [4])))))))));
                                arr_43 [i_9] [i_9] [i_11] [i_10] [i_11] = var_12;
                                arr_44 [i_10] [i_10] [i_11] [i_12] [i_9] = (arr_37 [i_9] [i_11] [i_10] [i_11]);
                            }
                        }
                    }
                    arr_45 [i_10] [i_10] [i_10] [i_11] = arr_19 [i_9] [i_9 + 2];
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 25;i_15 += 1)
                        {
                            {
                                arr_50 [i_10] = -38;
                                arr_51 [i_9] [i_15] [15] [i_14] [i_11] [i_10] [i_10] = (max(((max(((22 ? 8 : var_6)), (((!(arr_41 [i_11] [13] [i_11] [i_14] [i_15] [i_10] [i_15]))))))), 4194304));
                                var_19 = (arr_49 [i_9] [i_14] [i_11] [i_14] [i_10] [i_14] [i_11]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (((var_11 % var_1) ? (max((((var_7 ? var_11 : var_7))), -4769157992008269011)) : var_4));
    #pragma endscop
}
