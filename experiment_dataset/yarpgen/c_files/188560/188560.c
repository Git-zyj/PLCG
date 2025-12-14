/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_18 = (((((+((84 ? (arr_10 [i_0] [i_2] [i_3]) : (arr_3 [5] [0])))))) + (((arr_10 [i_0] [0] [i_2]) ? ((max(var_8, var_7))) : (((arr_0 [i_0]) ? var_10 : 4420928932799568674))))));
                            var_19 = ((-4420928932799568674 / ((((min(2610158778, (arr_5 [i_0]))) + var_4)))));
                            arr_12 [i_0] [i_0] [i_2] [i_3] = (max(((-(arr_11 [0] [i_1] [i_0] [i_2 - 2] [0]))), (arr_5 [i_2 + 1])));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_24 [i_0] [1] [1] [i_0] = arr_3 [i_1] [i_6];
                                var_20 = (min(var_20, (((((arr_11 [i_0] [1] [i_4] [i_5] [i_6]) + (var_16 >= var_1)))))));
                                arr_25 [i_0] [i_1] [i_4] [i_0] = -4420928932799568674;
                                arr_26 [i_6] [i_1] [i_1] [i_5] [i_4 - 1] [i_1] |= ((-(min((((var_0 ? (arr_17 [i_0] [i_5] [i_4] [i_6]) : (-2147483647 - 1)))), (((arr_15 [i_6] [i_1]) ? (arr_0 [i_4]) : var_9))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_21 = (min((((!((var_3 < (arr_6 [i_1])))))), (min(-2610158778, (((~(arr_15 [i_0] [i_9]))))))));
                                var_22 = (18446744073709551614 >= ((((((((arr_8 [i_0] [i_0] [i_7] [7]) != 1684808508))) >= -2828)))));
                                arr_34 [8] [i_0] = 1684808512;
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 |= (~(((var_4 && var_1) ? ((var_2 ? 2610158774 : var_2)) : -2610158767)));
    #pragma endscop
}
