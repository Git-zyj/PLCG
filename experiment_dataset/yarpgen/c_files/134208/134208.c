/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_18 = (arr_2 [i_0] [i_1]);
                                var_19 &= ((((((arr_5 [i_2 + 2] [i_4]) / (((max((arr_8 [i_0]), 0))))))) ? var_5 : ((-var_1 ? (max(3190796672, 3904943134642680496)) : (max(18747, var_12))))));
                            }
                        }
                    }
                    var_20 = 85;
                    arr_14 [i_1] [i_1] = ((((max(((((arr_9 [i_2] [i_1] [i_1] [i_1] [i_0]) <= (arr_12 [4] [i_1] [i_2] [2] [1] [i_2])))), (max(50, (arr_0 [i_2])))))) ? ((((((arr_8 [i_0]) ? var_12 : (arr_11 [10] [i_1] [i_1] [0] [1])))) ? (0 <= 43) : var_10)) : ((((arr_5 [8] [i_1]) ? (arr_13 [i_0] [i_0 + 2] [i_2 - 2] [i_1]) : (arr_7 [2]))))));
                    var_21 = ((!((max(3904943134642680496, (arr_12 [i_0] [i_1] [8] [i_2 + 1] [i_2 - 2] [i_2]))))));
                    var_22 = (max((max((((205 || (arr_7 [i_1])))), (max(238, -1775247774)))), (max((((arr_13 [11] [i_1] [i_2] [i_1]) ? (arr_7 [i_0]) : var_14)), ((((arr_2 [i_2] [4]) && (arr_9 [i_0] [i_0] [i_0] [i_1] [1]))))))));
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_23 = (max((arr_0 [i_0]), (max((arr_9 [i_0] [i_0] [i_0] [i_1] [1]), (arr_7 [i_0 + 3])))));
                    var_24 = max((max((arr_13 [i_0 + 3] [i_0 + 3] [i_1] [i_1]), (arr_13 [i_1] [i_1] [i_5] [i_1]))), -20);
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    var_25 = (max(var_25, 7));
                    arr_20 [i_1] [i_6] = (((arr_3 [i_0] [i_1] [i_6]) <= ((-(arr_18 [i_0] [i_0] [i_0] [i_0])))));
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 11;i_8 += 1)
                        {
                            {
                                var_26 += (arr_25 [i_0 + 3]);
                                var_27 = (((((-(arr_22 [i_0] [i_8] [i_6] [i_1] [i_8])))) ? 120 : 130));
                                var_28 = (--13229138052853328194);
                            }
                        }
                    }
                    var_29 = -14541800939066871120;
                }
                /* vectorizable */
                for (int i_9 = 3; i_9 < 10;i_9 += 1)
                {
                    var_30 = ((arr_16 [i_9] [i_9 - 1] [i_9] [i_1]) ? (arr_16 [i_9] [i_9 + 2] [i_9] [i_1]) : (arr_16 [i_9] [i_9 + 2] [i_9] [i_1]));
                    var_31 = (((((-909 * (arr_1 [12])))) ? 11550 : ((-11551 ? 49 : (arr_19 [i_0] [i_1] [i_9])))));
                    var_32 = 1292943014;
                }
                var_33 = ((((-12148 ^ 72) > (max(22200291998186202, 33)))) ? -909 : (14541800939066871120 / -3124));
            }
        }
    }
    var_34 = (max(var_34, ((((((var_16 ? var_13 : (max(10436433018810771932, var_16))))) ? -115 : (((var_7 > (~855725493)))))))));
    var_35 = ((((((((var_9 ? 18446744073709551615 : var_7)) <= (0 - var_11))))) < (max((max(var_10, var_17)), 248))));
    #pragma endscop
}
