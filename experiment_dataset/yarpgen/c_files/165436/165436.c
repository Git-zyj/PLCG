/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= ((~(~var_3)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2 - 3] = var_3;
                    var_17 = (max((((((max(var_5, var_2))) && ((max((arr_2 [i_1] [i_2]), var_1)))))), (max((min(var_13, 118)), (arr_1 [i_1])))));
                }
            }
        }
    }
    var_18 = max(28608, 3098000800);
    /* LoopNest 2 */
    for (int i_3 = 4; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            {
                arr_13 [i_3] = 1196966506;
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        {
                            arr_20 [i_3] [i_3] = ((var_6 ^ ((1196966495 ? 36927 : (-127 - 1)))));
                            var_19 ^= var_0;
                        }
                    }
                }

                /* vectorizable */
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    var_20 *= (arr_11 [i_3 - 4] [i_3 - 4] [i_4]);
                    var_21 = (3542805081 <= var_13);
                    arr_23 [i_3] [i_3] [i_7] = ((((((arr_10 [i_3]) && var_9))) / ((28608 ? var_9 : -102))));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    var_22 -= ((~(arr_16 [i_8] [i_3] [i_8])));
                    arr_26 [i_3] [i_3] = (~(arr_22 [i_3] [i_3] [i_3 + 1]));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            {
                                arr_31 [i_3 - 4] [i_3] [i_8] [i_9] [i_10] [i_10] = var_14;
                                arr_32 [i_8] [i_8] [i_8] [i_8] [i_3] [i_8] = (1196966486 & 3098000787);
                                arr_33 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((~(((arr_27 [i_3] [i_4] [i_8] [i_4] [i_10]) % var_15))));
                                var_23 -= ((-(arr_28 [i_9] [i_3 - 1] [i_3 - 1] [i_9])));
                                var_24 = (min(var_24, (((var_5 ? ((15567 ? (arr_25 [i_3] [i_3] [i_3 + 2] [i_3 + 2]) : var_7)) : (var_3 >= var_14))))));
                            }
                        }
                    }
                    arr_34 [i_8] [i_3] [i_3] [i_3] = var_10;
                    var_25 = (max(var_25, 752162209));
                }
                var_26 *= (+-36927);
            }
        }
    }
    #pragma endscop
}
