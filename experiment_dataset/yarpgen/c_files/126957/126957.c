/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    var_12 = (min((max(var_2, 1292603411)), var_9));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_1] = (((arr_1 [i_0]) ? -4294967295 : (((~(~var_7))))));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_10 [i_0] [i_1] [5] [i_2] = (!(((((max(0, -89))) ? ((var_9 ? (arr_0 [i_0] [i_0]) : 4294967295)) : -1292195494))));
                    var_13 = ((-((((arr_3 [i_2]) || (arr_3 [i_0]))))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    var_14 = (((~(arr_5 [i_0] [i_0] [i_3]))));
                    arr_13 [i_1] = ((-((((arr_5 [i_0] [i_0] [17]) != (arr_8 [i_1]))))));
                    var_15 += (((((4294967295 ? (arr_0 [i_3] [i_3]) : -1))) ? 4294967294 : (((((arr_2 [i_1]) || 0))))));
                    var_16 = 7047301903359651966;
                }
                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    var_17 = ((var_9 ? (min((((arr_8 [i_1]) ? 4294967295 : 33776997205278720)), (((255 ? -1 : 0))))) : (((((arr_15 [12] [i_1] [i_4] [12]) / -9202)) / (arr_8 [i_1])))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_22 [i_0] [i_1] [i_4] [i_5] [i_1] [i_1] = (arr_21 [i_6] [i_1] [i_1] [17] [17]);
                                arr_23 [i_0] [i_0] [14] [i_5] [i_6] [i_0] |= (((((min((arr_6 [i_0] [i_0]), (arr_9 [4] [i_4] [4] [4]))) <= ((((arr_11 [i_0] [i_1] [i_6]) ? (arr_17 [1] [i_1] [i_1] [9]) : (arr_17 [i_1] [i_4] [i_4] [i_6]))))))) % ((min(0, -11653))));
                            }
                        }
                    }
                    arr_24 [i_0] [i_1] [i_4 + 3] = (((arr_19 [i_0] [1] [i_0] [i_0] [i_0] [i_0] [i_0]) ? 1 : (((!(arr_15 [i_0] [i_0] [i_0] [i_0]))))));
                    var_18 = 508163655;
                }
                arr_25 [i_1] = (max((((!(((1 ? 4294967295 : (arr_8 [i_1]))))))), var_6));
            }
        }
    }
    #pragma endscop
}
