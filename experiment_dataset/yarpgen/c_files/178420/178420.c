/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_1] = ((2730532667 + (((var_4 ? (((arr_1 [i_0]) + var_6)) : (arr_1 [i_1 - 3]))))));
                var_14 = (min(((+((239 ? (arr_3 [i_1]) : var_10)))), 4272096580));
                var_15 = (max(((-(arr_2 [i_1 - 3] [i_1 - 2] [i_1 - 3]))), (arr_2 [i_1 - 2] [i_1 - 4] [i_1 - 2])));
                var_16 = ((-(504403158265495552 / 125)));
            }
        }
    }
    var_17 = var_11;

    /* vectorizable */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_18 = (1 < 1174709863);
        var_19 = (((((arr_5 [i_2] [i_2]) == (arr_6 [12]))) ? var_2 : ((((arr_5 [i_2] [i_2]) > 9265517454304346926)))));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 24;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    arr_14 [i_3] [i_3] [i_5] = ((var_3 ? -255 : (var_7 <= -1388296682)));
                    var_20 = (((arr_7 [i_3]) & (arr_7 [i_3])));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 23;i_7 += 1)
                        {
                            {
                                arr_19 [i_3] [i_3] [i_5] [i_6] [i_7 - 1] = ((((-(arr_17 [i_3] [i_3])))) ? (((31 ? 1 : 504403158265495552))) : 18446744073709551615);
                                arr_20 [i_3] [i_4] [i_6] [i_3] = -var_6;
                                arr_21 [i_7] [i_7] [i_3] [i_6] [i_3] [i_4] [16] = (arr_7 [i_3]);
                                var_21 &= (arr_18 [i_4 + 1] [2] [i_7 + 1]);
                            }
                        }
                    }

                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        var_22 = (min(var_22, var_6));

                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            var_23 = var_6;
                            var_24 = (arr_18 [i_3] [i_3] [i_5]);
                            arr_27 [i_4 + 2] [i_3] [i_3] [i_4 + 2] = (arr_16 [i_3] [i_3 + 1]);
                            var_25 = 6;
                            arr_28 [i_3 - 1] [i_3] [i_5] [8] [8] = 15373337999105153186;
                        }
                        var_26 = (((arr_7 [i_3]) ? 9007199254740991 : (arr_7 [i_3])));
                    }
                }
            }
        }
        var_27 = var_9;
    }
    var_28 = ((~var_3) <= ((-var_3 ? (~var_8) : (!-16))));
    #pragma endscop
}
