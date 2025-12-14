/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= ((+(((254 / 898622500) - var_1))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                arr_8 [i_0] [i_2] = var_15;
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 10;i_4 += 1)
                    {
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_3] [i_3] [i_3] = ((!var_6) ^ (!var_16));
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_2] = ((((~(arr_10 [i_0] [i_0] [i_2 - 2] [i_3]))) - var_8));
                            arr_17 [i_0] [i_0] [i_0] [i_1] [i_4] [i_4] [i_1] = ((2043241323 % (arr_10 [i_0] [i_1] [i_2 + 1] [i_1])));
                        }
                    }
                }
                arr_18 [8] [i_2] = var_10;
            }

            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 4; i_7 < 10;i_7 += 1)
                    {
                        {
                            arr_26 [i_0] [1] [i_5] [i_6] [i_7] = (arr_25 [i_7 - 3] [i_7 - 3] [i_7] [i_7 - 3] [i_7 - 2] [i_7]);
                            arr_27 [i_7] [i_7] [i_5] [i_6] [i_5] = ((var_13 == (!var_5)));
                            arr_28 [i_1] = var_5;
                            arr_29 [i_0] [1] [i_6] [i_6] [i_6] [i_7 - 3] [i_1] = -20057;
                        }
                    }
                }
                arr_30 [i_0] [i_1] [i_0] = (((30965 ? 1099458881 : 1048576)) >> (((arr_23 [i_0] [i_0] [i_5]) - 17834)));
                arr_31 [i_0] [i_1] [i_1] = (0 | 1649649290);
            }
            arr_32 [i_0] = (((1024 << var_10) % (arr_9 [i_0] [i_1] [i_1] [i_0])));
        }

        /* vectorizable */
        for (int i_8 = 3; i_8 < 9;i_8 += 1)
        {
            arr_35 [i_0] [i_8] [i_8] &= var_12;
            arr_36 [i_8] = (((~(arr_34 [i_8] [i_8] [3]))));
        }

        for (int i_9 = 1; i_9 < 7;i_9 += 1)
        {
            arr_39 [i_0] [i_9] [i_9 + 1] = (min(((!(0 || 40643))), (!9193)));
            arr_40 [i_0] [i_9] = (((arr_37 [i_0] [i_0] [i_9 + 2]) + (arr_2 [i_9 + 3] [i_0])));
            /* LoopNest 3 */
            for (int i_10 = 1; i_10 < 9;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        {
                            arr_48 [i_0] [i_9] [i_10] [i_9] [i_9] [i_10] = (-(max(-901428695, (arr_45 [i_0] [i_0] [i_9 + 1] [i_10 + 1] [i_11] [4] [2]))));
                            arr_49 [8] [3] [i_10 + 2] [3] [i_11] [i_12] [i_12] = var_4;
                        }
                    }
                }
            }
        }
    }
    var_18 = (((min(var_1, (min(20911, 327671290)))) << (var_13 - 20807)));
    #pragma endscop
}
