/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_16 = ((var_0 ? ((~(arr_0 [i_0] [i_0]))) : ((max(var_7, (!var_4))))));
                var_17 = (arr_2 [i_0]);
                var_18 = (max((((var_2 & var_1) ? (arr_1 [2]) : var_9)), (((~(max(var_10, -2147483624)))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_19 = ((var_11 ? (((((arr_6 [i_5 - 1]) <= (arr_6 [i_5 + 1]))))) : -var_1));
                                arr_20 [i_2] [i_3] [0] [i_4] [i_5] [i_6 - 1] = ((+(((arr_15 [i_6 - 1] [i_6] [i_6] [i_6 + 1] [i_6]) ? (arr_15 [i_6 + 1] [i_6] [i_6 + 1] [i_6] [i_6]) : (arr_15 [i_6 - 1] [i_6] [i_6] [i_6 - 1] [i_6])))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                arr_31 [i_7] [i_3] [i_3] [0] [i_8] [i_8] = ((var_0 ? ((((((arr_11 [i_2] [1]) ? var_12 : (arr_4 [6])))) ? var_12 : var_5)) : (((max(var_15, 17757))))));
                                var_20 = ((max(var_6, (arr_3 [i_3]))) % var_0);
                                arr_32 [i_2] [i_8] [i_7] [i_8] [i_8] [i_9] = 8417;
                            }
                        }
                    }
                }
                arr_33 [i_2] [i_3] = (((arr_28 [i_2] [i_2] [i_2] [i_2] [i_3]) ? (arr_15 [i_2] [i_2] [i_2] [11] [i_2]) : (((var_14 ? ((var_4 ? var_4 : var_7)) : -25304)))));
            }
        }
    }
    var_21 = var_3;
    #pragma endscop
}
