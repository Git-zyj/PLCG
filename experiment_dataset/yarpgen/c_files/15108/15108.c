/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_13 [8] [i_1] [i_2] [i_3] [i_4] &= ((((max(1, (max((arr_12 [i_0] [i_1] [i_3]), 2146435072))))) ? ((((arr_5 [i_0] [i_0] [8] [i_0]) ^ 2146435072))) : (((~var_14) & (1059957370 | 0)))));
                                arr_14 [7] [1] [i_2] [i_2] [i_0] [i_3] [19] = (((12 ^ 3584) % ((12 ^ ((((16214777288833315913 >= (arr_3 [i_0] [i_0])))))))));
                                arr_15 [12] [i_2] [12] &= 2146435051;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_0] [i_1] [i_2] [i_0] [9] = (min(((~((var_9 ? 1059957398 : var_13)))), (((((max((arr_12 [i_0] [i_2] [i_5]), 0))) ? (arr_20 [i_0] [i_1] [i_1] [i_5] [i_5] [i_5] [i_6]) : 62)))));
                                arr_22 [20] [i_1] [i_2] [20] |= (min((arr_12 [6] [10] [i_6]), (((29 | var_6) ? (min(var_7, (arr_18 [i_5] [i_1]))) : (arr_16 [i_2])))));
                            }
                        }
                    }
                    arr_23 [i_0] [i_1] [i_0] = ((~(max((((-15 ? (arr_1 [i_0]) : (arr_4 [i_0] [i_0] [i_0])))), (max((arr_4 [i_0] [i_0] [i_0]), var_0))))));
                    var_15 = (((((((18446744073709551603 ? 65474 : (arr_2 [i_0])))) ? 1059957372 : (arr_12 [i_0] [i_0] [i_2]))) >= var_12));
                }
            }
        }
        var_16 = (min(var_16, (((-24 ? (min((arr_7 [i_0] [i_0] [i_0]), (arr_9 [i_0] [i_0] [11] [i_0]))) : (((max((arr_1 [i_0]), (arr_1 [i_0]))))))))));
    }
    var_17 = (((min((min(3235009871, 8534792024486022913)), ((1059957423 ? var_11 : var_9)))) ^ var_9));
    var_18 = (min(var_18, ((var_7 ? 5510772970208526817 : var_4))));
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 10;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        {
                            arr_34 [i_7] [i_10] [2] [i_9] [i_8] [i_7] = (max(var_11, (max(((18 ? 5142491451890883864 : 3235009926)), ((((var_2 + 2147483647) >> (var_1 - 3748653434394805080))))))));
                            arr_35 [i_10] [i_7] [i_7] [i_7] = max((max((~var_8), ((min((-127 - 1), var_14))))), 61);
                            arr_36 [i_7] [i_7] [4] [i_7] [i_7] [i_7] = (var_14 * 4448269784316929884);
                            arr_37 [i_7] = (~4448269784316929884);
                        }
                    }
                }
                var_19 = (arr_6 [i_7 - 1] [i_7] [i_7 - 1] [i_7 + 2]);
                var_20 = (max((arr_30 [i_7 + 2] [i_7 + 2] [i_7] [i_8]), (arr_30 [i_7 + 3] [i_7 - 1] [i_7] [12])));
            }
        }
    }
    #pragma endscop
}
