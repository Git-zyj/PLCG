/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_11 = ((~(max(((var_9 ? var_6 : var_8)), ((min(var_1, var_0)))))));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_12 = (arr_7 [i_1] [0]);

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            var_13 = (min(var_13, var_10));
                            arr_13 [i_0 + 1] [i_0 + 1] [i_2] [2] [i_4] = (arr_12 [i_0] [i_1] [i_2] [i_3] [i_4]);
                            var_14 = 27893;
                            var_15 = (max(var_15, var_8));
                            var_16 = (((var_3 * var_3) * (arr_7 [i_1 - 1] [i_0 + 1])));
                        }
                        for (int i_5 = 1; i_5 < 10;i_5 += 1)
                        {
                            var_17 += -114;
                            var_18 = arr_12 [i_0 - 1] [i_1 + 1] [i_5 + 2] [i_5] [i_5 - 1];
                            var_19 = (arr_9 [i_0] [i_0] [4] [i_0 - 1] [i_2] [5]);
                            var_20 = (max(var_20, ((((328 / -31) ? (arr_0 [i_3] [i_1]) : var_6)))));
                        }
                        for (int i_6 = 1; i_6 < 11;i_6 += 1)
                        {
                            var_21 = (max(var_6, ((~(4823 / -6528187780288112972)))));
                            var_22 = ((~(arr_6 [i_0 + 1])));
                            var_23 = 4826;
                            var_24 = (((arr_2 [i_6 - 1] [i_6]) ? (((200 ? 92 : 55))) : ((((arr_4 [i_0] [i_0] [3] [i_0 - 1]) ? var_2 : var_0)))));
                        }
                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 9;i_7 += 1)
                        {
                            var_25 |= ((~((37643 ? var_5 : var_9))));
                            var_26 &= (-9089322161114993336 ? 255 : 64870);
                            var_27 &= ((var_2 ? var_9 : (arr_1 [i_0])));
                        }
                    }
                }
            }
        }
    }
    var_28 *= var_9;
    #pragma endscop
}
