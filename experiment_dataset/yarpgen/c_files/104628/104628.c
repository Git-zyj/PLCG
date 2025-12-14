/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1 + 1] [i_2] = ((-((~(~861683686)))));
                    var_13 = (((arr_2 [i_0] [i_0]) ? (min(((~(arr_7 [i_0] [i_2] [i_1] [i_0]))), ((~(arr_2 [i_0] [i_0]))))) : ((min(23, 2)))));
                    arr_10 [i_0] = ((((((min(0, -1))))) ^ (arr_8 [i_0] [i_0] [i_0])));
                    arr_11 [i_0] [i_1 + 1] [i_0] [i_0] = (!(~var_3));
                }
            }
        }
    }
    var_14 = (max((((((9223372036854775807 ? var_11 : var_2))) ? var_9 : (min(var_7, var_5)))), (((-652050540 ? var_3 : var_11)))));
    var_15 = var_0;

    /* vectorizable */
    for (int i_3 = 2; i_3 < 15;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                {
                    var_16 = ((1 ? -253872649 : 9057066349034724606));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            {
                                var_17 ^= ((~((((arr_4 [i_4]) == (arr_19 [i_3] [i_5 - 1] [i_5 - 1] [i_4]))))));
                                arr_26 [i_3] [i_4] [i_5] [i_5] [i_5] = 5565999313321537028;
                                var_18 = (((arr_19 [14] [i_5 - 1] [i_7] [i_5]) ? (arr_1 [i_5 - 1]) : (arr_22 [i_3] [i_4] [i_5 - 1] [i_5] [i_6] [i_7])));
                            }
                        }
                    }
                    var_19 = (((arr_5 [13]) || (arr_19 [i_3] [i_5] [i_5] [i_5])));

                    for (int i_8 = 1; i_8 < 14;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            var_20 = 2147483647;
                            var_21 = arr_17 [i_8];
                            arr_31 [9] [i_4] [0] [i_5] [i_9] = (arr_13 [i_5 - 1] [i_5 - 1]);
                        }
                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            arr_34 [i_3] [i_4] [i_5] [i_5] [i_8] [i_10] [i_10] = ((arr_12 [i_3 + 1]) + (arr_12 [i_3 - 2]));
                            arr_35 [i_3] [i_5] [i_5] = (arr_0 [i_5]);
                        }
                        for (int i_11 = 0; i_11 < 16;i_11 += 1)
                        {
                            arr_39 [i_5] [i_8] [i_4] [i_4] [i_5] = 4;
                            arr_40 [i_3 + 1] [i_5] [i_5] [i_5] [11] = -5565999313321537029;
                        }
                        arr_41 [15] [i_5] [i_5] = (((arr_19 [i_3 - 2] [i_3 - 2] [i_5 - 1] [i_5]) ? (arr_17 [10]) : (arr_2 [i_8 + 2] [i_5])));
                        var_22 ^= ((var_10 ? (arr_14 [i_3 + 1] [i_3 + 1]) : (arr_28 [i_3 - 1])));
                    }
                    var_23 = (~var_5);
                }
            }
        }
        arr_42 [i_3] = ((~(arr_27 [i_3])));
        var_24 = 1797930039;
    }
    #pragma endscop
}
