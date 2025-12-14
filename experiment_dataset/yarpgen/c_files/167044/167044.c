/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_12 += (min((((!(arr_0 [i_1])))), -1));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_13 = (max(((37 ? 43 : -var_0)), ((min(var_8, ((((arr_5 [i_1]) ? (arr_2 [0] [0]) : -666750550))))))));
                                arr_12 [2] [i_1] [1] &= (arr_3 [i_4 - 2] [i_4 - 3]);
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 4; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                arr_21 [i_0] [i_6] [i_1] [i_7] = (min(var_9, (max(((~(arr_10 [i_6]))), 0))));
                                arr_22 [i_0] [i_0] [i_7] [i_6] [i_6] [i_0] = -666750550;
                                arr_23 [i_6] [i_6] = 1;
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        arr_26 [i_8] = ((var_10 & ((1 ? 45 : 1))));
        arr_27 [i_8] = ((((min(var_10, var_6)) < (~var_6))) && var_10);

        for (int i_9 = 2; i_9 < 9;i_9 += 1)
        {
            arr_31 [i_8] = ((((min((arr_20 [5] [i_8] [i_8] [i_9 - 2] [i_9 - 2] [i_9 - 2] [i_9 + 2]), 1))) ? (arr_20 [i_8] [i_8] [i_8] [i_9 - 2] [i_9 - 2] [i_9 - 2] [i_9 - 2]) : (max(7215, (arr_20 [i_8] [i_8] [i_8] [i_9 - 2] [i_9 - 2] [i_9 - 2] [0])))));
            arr_32 [i_8] = (((!(arr_14 [i_9 - 1] [i_9 - 1] [i_9] [i_9 - 1]))));
            arr_33 [i_9 - 2] [i_8] = ((-(((-8595 * 30442) ? 1 : (((arr_7 [2]) ? (arr_16 [i_8] [i_9] [i_9 - 2] [i_8]) : (arr_18 [i_8] [i_8] [i_9] [i_8] [i_9])))))));
            arr_34 [i_8] [1] &= ((!(arr_25 [2] [4])));
        }
    }
    #pragma endscop
}
