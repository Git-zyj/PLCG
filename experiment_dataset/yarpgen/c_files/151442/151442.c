/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 8;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [2] [i_0] = (arr_3 [i_1]);
                        arr_13 [i_3] = -48;
                        arr_14 [i_0] [i_3] [i_2] [i_2] = (((var_3 + 41) < 1));
                    }
                }
            }
        }
        arr_15 [i_0] [i_0] = (arr_9 [i_0] [i_0]);
        arr_16 [i_0] [i_0] = arr_9 [i_0] [i_0];
        arr_17 [i_0] [i_0] = (((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : 48));
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 4; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {
                    arr_28 [i_4] [i_4] [i_4] [i_4] = (((arr_25 [i_5 - 1] [i_5 - 1] [i_5]) >= (arr_18 [11] [i_5 - 3])));
                    arr_29 [i_4] [i_5] [i_6] [i_4] = var_8;
                    arr_30 [i_4] [i_4] [i_5] [i_6] = (((99803481503029238 + -6448) / ((var_7 ? (arr_21 [i_5 - 3]) : -315202436457576811))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 9;i_8 += 1)
                        {
                            {
                                arr_37 [i_4] [9] [i_4] [i_4] [i_4] [i_4] [i_4] = (2239507198736153809 ? -30226 : 7488654166756850229);
                                arr_38 [11] = var_13;
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = 16911433728;
    #pragma endscop
}
