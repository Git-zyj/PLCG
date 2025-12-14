/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_12 = 3097964160;
                            var_13 = (((max((arr_9 [1] [i_2] [1]), (var_5 != var_10))) ? ((((!3097964164) == (arr_10 [i_3] [i_1] [4])))) : ((((((~(arr_9 [3] [i_1] [i_0])))) || (((~(arr_10 [i_0] [i_1] [i_2])))))))));
                            var_14 = (max(var_14, (arr_0 [i_3])));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    arr_16 [i_1] = (((arr_6 [i_4]) ? var_8 : ((~((max((arr_4 [i_4] [i_1] [i_0]), (arr_2 [i_0] [i_1]))))))));
                    arr_17 [i_1] = ((max(3097964164, 26564)));
                    arr_18 [i_1] [i_1] = (((-(arr_13 [i_0] [i_1] [i_4] [i_4]))) > (1197003132 > -41));
                    var_15 = ((((max((arr_8 [i_0]), (arr_0 [11])))) ? ((+((var_8 ? (arr_14 [i_0] [i_1] [i_4]) : var_1)))) : (((~(arr_2 [i_0] [i_4]))))));
                    var_16 = (max(var_16, ((max(var_7, (!1197003132))))));
                }
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                var_17 = ((((((arr_3 [i_0]) ? -var_6 : (arr_0 [i_1])))) ? (arr_13 [i_0] [i_5] [5] [i_7]) : (arr_22 [i_0] [i_1] [i_5] [i_6] [i_0])));
                                var_18 = (arr_5 [i_0] [1]);
                                var_19 += ((1751517780 ? 1751517780 : 1197003116));
                                var_20 = (arr_20 [i_5] [i_6] [i_5]);
                                var_21 = (arr_9 [i_7] [i_1] [i_5]);
                            }
                        }
                    }
                    arr_28 [6] [i_0] [i_0] [i_0] |= max((((arr_19 [i_5] [i_1] [i_0] [i_0]) + (((arr_23 [i_5] [i_0] [i_0]) ? var_9 : (arr_0 [i_0]))))), (arr_10 [i_0] [i_0] [i_5]));
                }
                arr_29 [i_0] [i_0] [i_1] = (arr_8 [i_1]);
            }
        }
    }
    var_22 -= var_3;
    var_23 &= var_10;
    var_24 = (min(var_24, var_9));
    #pragma endscop
}
