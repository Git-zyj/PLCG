/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_12 [i_0] [i_2] [14] [i_3] = var_2;
                        arr_13 [i_1] [i_2] [i_3] = 13;
                        arr_14 [4] [12] [i_0] [10] [i_2] &= var_1;
                        var_10 *= 21559;
                    }
                    for (int i_4 = 3; i_4 < 15;i_4 += 1)
                    {
                        var_11 = var_2;
                        var_12 -= 52669933;
                        arr_18 [i_4] [10] [10] [i_0] &= (arr_0 [2] [i_1]);
                        arr_19 [i_2] [8] [i_1] [i_2] = var_3;
                    }
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        arr_22 [i_0] [i_0] [i_2] [i_0] [4] = var_7;
                        arr_23 [i_0] [13] [4] [i_2] = var_9;
                    }
                    var_13 = var_3;
                    var_14 = var_2;
                    var_15 *= (arr_5 [i_0] [14] [15]);
                    var_16 += var_5;
                }
            }
        }
        var_17 = 0;
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
    {
        var_18 = (arr_17 [0] [2] [0] [4] [i_6]);
        var_19 = (arr_20 [i_6] [i_6]);
        arr_26 [i_6] = var_6;
        arr_27 [i_6] = 43970;
        arr_28 [i_6] = var_5;
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
    {
        arr_31 [i_7] [5] = -64;
        /* LoopNest 2 */
        for (int i_8 = 2; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 17;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            {
                                arr_43 [i_7] [i_7] [i_9] [17] [i_11] [i_9] [14] = 0;
                                var_20 = 750218769929209034;
                                var_21 = (arr_25 [17]);
                                arr_44 [4] [14] [8] [i_7] [1] = var_8;
                                var_22 = (arr_4 [i_9]);
                            }
                        }
                    }
                    arr_45 [i_7] [i_7] [2] [i_7] = var_7;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_12 = 3; i_12 < 14;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 18;i_13 += 1)
            {
                {
                    var_23 = (arr_47 [i_13] [i_7]);
                    var_24 = -4384;
                    /* LoopNest 2 */
                    for (int i_14 = 3; i_14 < 15;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 18;i_15 += 1)
                        {
                            {
                                var_25 = -1;
                                var_26 = (arr_46 [i_15] [i_15]);
                            }
                        }
                    }
                    arr_57 [i_7] = 255;
                }
            }
        }
    }
    var_27 = 6;
    var_28 = var_8;
    #pragma endscop
}
