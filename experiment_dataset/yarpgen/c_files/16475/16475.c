/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_15 = var_12;
                    var_16 -= 8423836961689037223;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_17 = var_10;
                                arr_14 [i_0] [8] [i_2] [1] = (arr_2 [i_3]);
                                arr_15 [13] [i_3] = ((~(((!(!23565))))));
                                arr_16 [i_0] [i_1] [i_2 - 2] [9] [i_2 - 2] = 10;
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = 7626302788621697255;
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 9;i_9 += 1)
                        {
                            {
                                arr_31 [i_6] [i_6] [i_7] = ((-(arr_19 [i_5 + 1] [i_6])));
                                arr_32 [i_9] [i_9] &= var_5;
                                var_19 = var_10;
                                arr_33 [i_6 - 1] [i_7] [i_6] = (arr_13 [i_5] [i_6] [i_7] [i_8] [i_9]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 9;i_11 += 1)
                        {
                            {
                                var_20 = (arr_13 [i_5 + 2] [i_6] [i_6] [i_11] [i_10]);
                                var_21 = var_12;
                                var_22 = (arr_20 [6] [i_6 - 1] [i_5]);
                                var_23 = 25376;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 11;i_13 += 1)
                        {
                            {
                                var_24 = (max(var_24, -25377));
                                var_25 = 25387;
                                var_26 = (max(var_26, var_14));
                                arr_45 [i_5 + 1] [i_6] [i_6] [6] [i_7] [i_12] [i_5 + 1] = min((min(((min(var_7, 25389))), (arr_2 [i_13 - 2]))), var_9);
                                var_27 = -25376;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
