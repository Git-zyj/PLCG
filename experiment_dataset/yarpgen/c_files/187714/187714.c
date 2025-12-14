/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_11 = (max(var_10, 11));
                arr_5 [i_0] = (max((min((arr_4 [i_1 + 1] [i_1 - 2] [i_1 - 2]), (arr_0 [i_1 + 1] [i_1 - 2]))), ((min((arr_0 [i_1 + 1] [i_1 - 2]), (arr_0 [i_1 + 1] [i_1 - 2]))))));
                var_12 += ((~((max(var_0, 51712)))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_13 = (arr_10 [i_0] [i_1] [i_1]);
                                var_14 = (max(var_14, (arr_7 [i_4] [i_3] [16] [i_0])));
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] [i_2] [i_0] = var_0;
                    var_15 = (min(var_15, (arr_6 [i_1])));

                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        arr_19 [i_5] [i_0] [i_0] [i_0] = ((13823 * (arr_4 [i_1] [i_1 - 2] [i_1 + 1])));
                        var_16 = (max(var_16, (arr_15 [18] [18])));
                        arr_20 [i_0] [i_0] [i_0] = (arr_6 [i_1 - 1]);
                        arr_21 [2] [i_1] [i_1 - 2] [i_2] [i_5] |= (((arr_11 [i_0] [i_1] [i_1] [i_2] [i_5] [i_5]) & ((1073741760 ? 51712 : 4294967295))));
                        var_17 = (arr_3 [i_1 - 2]);
                    }
                    for (int i_6 = 3; i_6 < 18;i_6 += 1)
                    {
                        var_18 = (var_4 >= var_2);
                        arr_24 [i_0] [i_0] [i_2] [i_0] = (arr_18 [i_0] [i_6 - 1] [i_1 - 2] [i_6]);
                    }
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        arr_28 [i_7] [i_0] [i_0] [0] = ((~(arr_23 [i_1 - 2])));
                        var_19 += -var_6;
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        var_20 ^= ((0 ? (arr_12 [i_8]) : (arr_12 [i_8])));
                        var_21 = (max(var_21, (arr_4 [2] [i_1] [i_0])));
                        arr_32 [i_0] [12] [12] [i_8] = var_5;
                    }
                }
                for (int i_9 = 4; i_9 < 17;i_9 += 1)
                {
                    var_22 = (min(var_22, (((((max(((min((arr_29 [i_0] [i_0] [i_0] [i_0] [17] [i_0]), var_0))), ((2566 ? (arr_9 [6] [i_1]) : var_9))))) ? (min(14, ((var_1 >> (((arr_33 [i_0] [i_1] [6]) - 44)))))) : (max((min((arr_10 [i_0] [i_0] [i_0]), (arr_33 [i_9] [i_1] [i_0]))), (var_8 * 2555))))))));
                    var_23 *= ((((max((arr_7 [i_9 - 4] [i_9 - 4] [i_1 - 3] [i_1 + 1]), (arr_7 [i_9 - 4] [i_9 + 1] [i_1 - 3] [i_1 - 1])))) | (~28)));
                }
            }
        }
    }
    var_24 = ((((max(var_9, (min(0, 511))))) ? (((var_9 ^ ((var_6 ? var_8 : -1))))) : ((var_4 ? var_9 : var_2))));
    #pragma endscop
}
