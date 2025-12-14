/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_16 = (min(var_16, (arr_8 [i_3] [i_2] [15] [1])));
                            arr_9 [i_2] [17] [17] [1] [i_1] [i_1] = (min((max(var_3, var_9)), (arr_2 [i_3] [i_2] [i_0])));
                        }
                    }
                }
                arr_10 [13] = (max((((arr_8 [3] [15] [i_1] [5]) ? (min(var_12, (arr_8 [i_0 + 1] [1] [i_1] [i_1]))) : (((var_3 * (arr_6 [18] [i_1 + 2] [16] [i_1])))))), (((~(var_0 & var_0))))));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        {
                            arr_17 [4] [i_5] = ((var_4 == ((((0 ? 4294967295 : 4294967292)) * (!var_11)))));
                            var_17 ^= (((arr_15 [i_5 - 1] [i_5] [i_5] [i_4] [i_5]) ? ((-(arr_15 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_4] [i_5]))) : (arr_15 [i_5 - 1] [i_5 + 1] [i_5] [i_4] [i_5])));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        {
                            arr_30 [1] [i_8] = ((max(((max(4, 1))), (((arr_20 [i_8]) % 24)))));
                            arr_31 [23] [i_7] [i_7] [14] = (~15);
                            var_18 = (max(var_18, ((((arr_28 [0] [i_7] [i_8] [14]) || ((max(4294967292, 4294967289))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        {
                            var_19 &= ((!(arr_36 [10] [10] [17] [21])));
                            arr_37 [i_6] [i_7] [i_10] [i_11] [i_11] = ((-(var_12 ^ var_0)));
                            var_20 = (max(var_20, (arr_29 [12] [14] [i_10])));
                        }
                    }
                }
                var_21 = ((18446744073709551590 >= (arr_22 [13] [i_7])));
                /* LoopNest 3 */
                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 24;i_14 += 1)
                        {
                            {
                                arr_45 [i_6] [i_14] [i_6] [i_6] = (arr_23 [i_7] [i_14]);
                                arr_46 [i_6] [i_6] [i_6] [i_6] [i_14] [i_6] [i_6] = (((min((arr_23 [i_7] [i_12]), (arr_20 [i_7]))) - (max(6694733305388557197, (var_10 <= var_0)))));
                                arr_47 [i_6] [i_7] [14] [i_13] [i_14] = (max(15063791942467227211, 52664));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
