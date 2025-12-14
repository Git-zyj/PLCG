/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_15 [i_2] [i_3] [i_2] [i_1] [i_2] = -var_13;
                                arr_16 [i_4] [i_3] [i_2] [i_2] [i_1] [i_0] = (arr_0 [i_0]);
                                var_14 = -1661981600;
                                arr_17 [8] [i_1] [0] [i_3] [i_2] [i_3] [i_4] = var_4;
                            }
                        }
                    }
                }
                var_15 = ((((((-(arr_5 [i_0] [9] [i_1]))))) ? (min((arr_0 [i_0]), ((1661981598 ? -1661981608 : 65535)))) : ((var_4 ? -3407033429 : (((((arr_1 [i_0]) > 35138))))))));
                var_16 = ((-((min(191, (min(var_4, (arr_12 [i_0] [i_1] [2] [i_1] [i_0] [i_0] [i_0]))))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_17 = (+(((arr_21 [i_0] [i_1] [i_6 + 1] [i_6 + 2]) << 1)));
                            var_18 = -30232;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        {
                            var_19 = (max(1114851141, 18446744073709551608));
                            arr_30 [i_8] [i_1] [i_7] [i_8] [i_8] [i_1] &= ((1 ? 28611 : -16228));
                            var_20 = (-14260 ? 28610 : 28610);
                        }
                    }
                }
            }
        }
    }
    var_21 *= 35133;
    var_22 = var_4;
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 25;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 22;i_11 += 1)
            {
                {
                    var_23 = var_13;
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 25;i_13 += 1)
                        {
                            {
                                arr_44 [i_9] [i_10] [i_11] [i_11] [i_12] [i_11] [i_13] = (min((var_2 | 10917261290734948540), var_4));
                                arr_45 [i_9] [i_12] [i_12] [i_12] [i_12] [i_13] [i_11] = (((arr_32 [i_9] [i_11 - 1]) ? (((arr_32 [i_9] [i_11 + 2]) / (arr_32 [i_9] [i_11 - 1]))) : (arr_32 [i_9] [i_11 + 3])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 2; i_14 < 23;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 25;i_15 += 1)
                        {
                            {
                                var_24 = ((var_11 | (~30)));
                                var_25 = var_9;
                                arr_52 [i_11] [1] [i_14] [i_15] = var_1;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 2; i_16 < 23;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 25;i_17 += 1)
                        {
                            {
                                arr_59 [i_11] [i_11] [i_11] = (!5537);
                                arr_60 [i_11] = 17566937085755009454;
                                arr_61 [i_11] [i_10] = var_6;
                            }
                        }
                    }
                    var_26 = 1;
                }
            }
        }
    }
    var_27 = (((((var_9 ? var_8 : var_2))) ? (((~var_4) << (((var_1 + 1271031015) - 14)))) : (var_3 == var_13)));
    #pragma endscop
}
