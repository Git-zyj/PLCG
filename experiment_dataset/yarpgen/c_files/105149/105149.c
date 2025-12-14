/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 191;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {

                            for (int i_4 = 3; i_4 < 11;i_4 += 1)
                            {
                                var_13 = (min(var_13, (~-var_5)));
                                var_14 = var_10;
                                arr_14 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] = min((((~(~1)))), 1020382725067938552);
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                var_15 = (max(var_15, ((((arr_4 [i_3] [i_5]) ? 65535 : var_7)))));
                                var_16 += ((-14853 ? -var_2 : (arr_11 [i_0] [i_1] [i_2] [i_5])));
                                var_17 = -569367458;
                            }
                            for (int i_6 = 1; i_6 < 10;i_6 += 1)
                            {
                                var_18 = ((-(min((arr_4 [i_2] [i_3]), (arr_16 [i_0] [i_0] [i_1] [i_2] [i_3] [i_6] [i_6 - 1])))));
                                arr_19 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3] [i_6 + 1] = var_11;
                            }
                            for (int i_7 = 3; i_7 < 10;i_7 += 1)
                            {
                                arr_22 [i_0] [i_1] [i_2] [i_2] [i_7] = var_7;
                                arr_23 [i_0] [i_0] [i_0] [i_2] [i_3] [i_3] [i_7] = (arr_7 [i_0] [i_0] [i_2] [i_7 + 2]);
                                var_19 = var_7;
                            }
                            var_20 = -var_7;
                        }
                    }
                }
                arr_24 [i_0] [i_1] = -var_3;
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 8;i_9 += 1)
                    {
                        {
                            arr_32 [i_0] [i_1] [i_9] [i_9 + 3] [i_9] = var_4;
                            var_21 = (((((48 ? (arr_20 [i_0] [i_1] [i_8] [i_9]) : var_1))) ? -32767 : (arr_0 [i_0])));
                        }
                    }
                }
                var_22 = ((1 ? (((arr_0 [i_0]) ? 35 : (((!(arr_17 [i_0] [i_0] [i_0] [i_1] [i_1])))))) : -1));
            }
        }
    }
    #pragma endscop
}
