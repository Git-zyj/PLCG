/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_12 = (max(var_12, ((((((arr_6 [i_0] [i_1 - 3]) * var_2)) % (((max((-127 - 1), -9)))))))));
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] |= 0;
                                var_13 = (((((-(arr_1 [i_0])))) >= var_0));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        {
                            arr_17 [i_0] = (1041454247 || 243);
                            arr_18 [i_0] [i_1 - 2] [i_0] [i_0] [i_6] [i_0] = min((arr_16 [i_6] [i_5] [i_5] [i_6] [i_5] [i_6]), (((var_6 ? ((max(var_7, 248))) : (12036773029509018475 >= 0)))));
                            var_14 += (((((((max(-31, 0))) ? ((8 ? 0 : 65)) : 0))) ? ((max((arr_5 [i_1 - 1] [i_6] [i_6] [i_1]), (arr_5 [i_1 - 2] [i_6] [i_6] [i_0])))) : ((((arr_1 [i_6]) > (arr_1 [i_6]))))));

                            /* vectorizable */
                            for (int i_7 = 4; i_7 < 14;i_7 += 1)
                            {
                                var_15 = ((~(arr_1 [i_0])));
                                var_16 = -684522826;
                                arr_21 [i_0] [5] [12] [i_0] [i_7] [i_7] [i_0] = 61;
                            }
                            for (int i_8 = 1; i_8 < 16;i_8 += 1)
                            {
                                arr_26 [14] [i_0] [i_6] [14] [14] [i_0] [i_0] = 1;
                                arr_27 [i_0] = ((!((max(1730319732, 4294967290)))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_9 = 0; i_9 < 13;i_9 += 1)
    {
        var_17 = ((!(((arr_9 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) && 63775))));
        arr_30 [i_9] = ((!((((var_5 >= var_8) ? ((-684522814 % (arr_4 [i_9]))) : ((min((arr_8 [i_9] [i_9] [i_9] [i_9] [11]), var_6))))))));
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 1;i_10 += 1)
    {
        arr_33 [i_10] = ((1296381794 < (arr_14 [i_10 - 1])));
        arr_34 [i_10] [i_10] = (arr_12 [16] [i_10] [i_10 - 1] [16]);
        arr_35 [i_10] [2] = ((var_1 ? var_2 : 20));
        arr_36 [6] = (~4416713107975230972);

        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            arr_39 [i_11] [i_11] = ((-(arr_7 [i_11] [i_11] [i_11] [13] [i_10])));
            var_18 = (max(var_18, ((((!1) ? var_5 : (((0 ? -119 : 1))))))));
            var_19 = (((arr_23 [i_10 - 1]) | (arr_23 [i_10 - 1])));
        }
    }
    var_20 = ((!((((!128) ? ((var_1 ? 130 : var_4)) : var_7)))));
    #pragma endscop
}
