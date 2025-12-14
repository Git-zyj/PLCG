/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_10 ^= (min((max(var_9, ((max(0, var_3))))), (((-0 >= (arr_9 [i_2]))))));
                            var_11 = (((var_7 ? ((-(arr_8 [i_0] [i_1] [i_1] [i_2] [i_3]))) : 1)));
                            var_12 = (max(var_12, (255 >= 0)));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_13 = (arr_10 [i_6] [i_1] [i_1] [i_0]);
                                var_14 += ((((arr_2 [i_4]) ? (min(var_5, (arr_12 [i_1] [i_5]))) : -var_1)));
                                var_15 = (max(var_15, (((((arr_12 [i_0] [i_1]) ? (arr_12 [i_0] [i_0]) : (arr_12 [i_1] [i_1])))))));
                                var_16 &= ((~((-(((arr_4 [i_5] [i_6]) ? var_6 : (arr_8 [i_0] [14] [i_4] [i_1] [i_4])))))));
                            }
                        }
                    }
                }
                var_17 = (min(((~(arr_18 [i_0] [i_0] [i_0] [1] [i_0]))), (~var_4)));
                arr_19 [i_1] [i_1] = ((-(min((((var_1 ? -15 : 0))), ((17029575231984438055 ? (arr_11 [23] [i_0] [i_1] [i_1]) : (arr_6 [i_0] [i_1])))))));
                arr_20 [i_0] [i_0] [i_1] |= ((((-1 < (arr_5 [i_0] [2] [i_1]))) ? ((((1 >= (arr_0 [i_0]))))) : (max((arr_4 [i_0] [i_0]), ((3038303616114734005 ? 8 : 1417168841725113560))))));
            }
        }
    }

    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        var_18 = (max(var_18, (-24 * -1)));
        var_19 += ((var_8 ? (max(((var_4 ? (arr_5 [i_7] [i_7] [i_7]) : (arr_2 [i_7]))), (((var_1 ? (arr_1 [i_7] [i_7]) : var_7))))) : (((~var_4) ? 237 : (arr_5 [i_7] [i_7] [i_7])))));
    }
    for (int i_8 = 2; i_8 < 15;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                {
                    var_20 = (min(var_20, (((((2147483643 ? (arr_9 [i_10]) : var_5)) >= ((min(127, var_4))))))));
                    var_21 = (min(-199, ((((max((arr_15 [i_8] [i_9] [i_10] [i_10] [i_10]), var_9))) ? (-3556770071203835675 < 31) : 0))));
                }
            }
        }

        /* vectorizable */
        for (int i_11 = 1; i_11 < 16;i_11 += 1)
        {
            var_22 = ((1744440769 ? (arr_22 [14] [i_11 - 1]) : (arr_22 [i_8 + 1] [i_11 + 1])));
            var_23 = ((-(arr_36 [i_11] [i_11])));
        }
        arr_37 [i_8] [i_8] = ((-1 ? -16902 : 54));
    }
    var_24 = (min(var_24, ((-1 ? var_3 : -var_8))));
    var_25 = (((-1 != 63) >> ((((65532 ? var_5 : var_8)) % (196 >= 196)))));
    #pragma endscop
}
