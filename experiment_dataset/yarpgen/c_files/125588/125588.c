/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= var_12;
    var_15 *= (min(((max(var_5, var_2))), ((((4025723413 ? 269243858 : var_7)) << (var_13 < 53)))));
    var_16 &= (max(((max(4025723413, 4025723419))), (((0 ? 1 : 3770607514)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_17 *= (arr_2 [2]);
        arr_4 [i_0] |= (min((((min(-3572702657114481224, -3286974648681633333)) ^ 269243877)), -3572702657114481224));
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        var_18 ^= (1 <= var_4);
        var_19 += (min((min(((3572702657114481224 ? 3572702657114481224 : -6672035638306074374)), 200)), var_5));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_20 ^= 269243883;
                                var_21 -= (((((-16384 ? 40497325985634437 : (arr_17 [i_2] [10] [8] [i_5 - 1] [i_6]))) <= 88)));
                            }
                        }
                    }
                    var_22 -= (arr_17 [i_2] [4] [i_2] [0] [i_4]);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 19;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 22;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 19;i_10 += 1)
                        {
                            {
                                var_23 = (arr_14 [i_9]);
                                var_24 += ((3498986877 ? 16381 : 269243894));
                            }
                        }
                    }
                    var_25 = 4025723419;
                    var_26 ^= 1;
                }
            }
        }
        var_27 = (max((var_13 | -16384), (4294967294 < -16381)));
        /* LoopNest 3 */
        for (int i_11 = 1; i_11 < 22;i_11 += 1)
        {
            for (int i_12 = 3; i_12 < 21;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 21;i_13 += 1)
                {
                    {
                        arr_38 [0] [0] [14] [i_13] [i_13 + 1] [16] |= ((4025723413 - 7236043747441066423) ? (--51335) : (((max(var_5, 1)) ? ((40497325985634437 ? 1909281053 : 269243888)) : -9385)));
                        var_28 ^= (((((min(134217727, var_6))) ? 9696 : (((2222647216 ? (arr_29 [i_2] [20] [i_12 - 3] [i_2]) : 163))))));
                    }
                }
            }
        }
    }
    var_29 *= 2385686248;
    #pragma endscop
}
