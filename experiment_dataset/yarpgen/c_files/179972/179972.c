/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_12 += ((min((arr_4 [i_0 + 1] [i_3]), var_2)));
                            arr_10 [i_0 - 1] [i_1] [i_2] [i_3] = (min((((arr_7 [i_0 + 1] [i_0 + 1] [i_2 - 1]) - 128)), 34));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        {
                            arr_18 [i_0 - 1] [i_1] [i_4 - 1] [1] = (((((max(106, 110))) >> (((arr_9 [i_0] [i_0 + 1] [i_1] [i_1] [i_5 + 2] [i_5]) + 9786)))));
                            var_13 = (((~((max((arr_9 [i_0] [i_0 + 1] [i_4] [i_0 + 1] [i_1] [i_0]), var_2))))));
                            arr_19 [i_0] [i_1] [i_4] [i_0] = (max((max(154, var_6)), (min(var_11, 109))));
                        }
                    }
                }
            }
        }
    }
    var_14 = ((((-(min(2147483622, 128)))) / var_7));
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        for (int i_7 = 4; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                {
                    arr_30 [i_6] [i_7 - 2] [i_8] = 7936;
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 23;i_10 += 1)
                        {
                            {
                                var_15 = ((!((max((arr_24 [i_7 + 2] [i_10 - 2]), var_3)))));
                                arr_36 [11] [i_7] [i_7] [i_9] [i_10] [i_10 - 2] [i_8] = (((min(141, var_9)) >= (((max(var_10, 125))))));
                                arr_37 [i_8] [2] [10] [10] [10] [i_10] = (((var_4 / var_6) - (63 * 157)));
                                var_16 = ((!((max(((max(1, 8616))), (577186562 - 111))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 15;i_11 += 1)
    {
        for (int i_12 = 2; i_12 < 11;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 15;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 15;i_15 += 1)
                        {
                            {
                                arr_51 [i_11] [i_11] [i_11] [i_11] [i_11] = (min((((200 ? 8192 : 84))), (max(24, (228 && 126)))));
                                var_17 = ((((min(137, var_3))) ? 214 : (min((((arr_9 [i_11] [i_12] [i_14] [i_14] [i_15] [i_12]) - (arr_49 [i_15] [i_11] [i_13] [i_11] [i_11]))), (arr_46 [i_11] [i_12] [i_13] [i_14])))));
                                arr_52 [i_11] [i_11] [i_11] [i_11] [6] [i_11] [i_11] = (min(var_5, ((min(var_11, 85)))));
                            }
                        }
                    }
                    var_18 -= (max((((((arr_28 [i_11]) ? (arr_15 [i_11] [i_11] [i_12] [i_13]) : (arr_47 [1] [i_12] [i_12 + 4] [0]))) >> (((min(var_9, (arr_6 [14] [i_12] [i_12]))) - 378624714)))), ((min(1, 1)))));
                    var_19 = ((-((var_6 - (arr_11 [i_12 - 1] [i_12 + 3] [10])))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 17;i_16 += 1)
    {
        for (int i_17 = 2; i_17 < 15;i_17 += 1)
        {
            {
                var_20 *= (((((arr_16 [i_17 - 1] [i_17 - 2] [i_17 + 2] [i_17] [i_17]) ^ (arr_16 [i_17 - 2] [i_17 - 1] [i_17 + 2] [i_17 + 2] [i_17]))) << (((max((arr_57 [i_16] [i_16] [i_16]), 255)) * (((arr_0 [i_16]) / var_5))))));
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 17;i_19 += 1)
                    {
                        {
                            var_21 = ((((31743 == var_1) >> (92 - 72))));
                            arr_66 [i_18] [i_17] = (!11851499740838107961);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_20 = 3; i_20 < 15;i_20 += 1)
                {
                    for (int i_21 = 2; i_21 < 16;i_21 += 1)
                    {
                        {
                            arr_73 [i_16] [10] [16] [i_17] |= ((118 % (max((((((arr_16 [i_16] [i_17] [i_20] [i_20] [i_20]) + 2147483647)) >> (((arr_31 [i_16] [i_21] [i_17] [i_21]) - 31175)))), ((max(1, var_7)))))));
                            arr_74 [i_16] [i_20] [i_20] [i_20] [i_20] [i_21] = (max(((-(2147483646 == 6595244332871443648))), (((((8926545127915589806 ? var_0 : var_2)) == (-32767 - 1))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
