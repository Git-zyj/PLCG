/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_1] [i_1] [i_3] = arr_10 [i_2 - 1] [i_2 - 1] [3] [13];
                            var_16 = var_11;
                        }
                    }
                }
                var_17 = (max((var_3 - var_2), (arr_4 [i_0] [i_1] [i_1])));

                for (int i_4 = 3; i_4 < 13;i_4 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_18 = (max(4294967284, 955319395));
                                var_19 = (((((((arr_18 [i_0] [i_5] [1] [i_5] [i_6]) % var_10))) ? (!3968) : ((max(var_14, var_6))))));
                                var_20 = (arr_17 [i_0] [i_1] [i_0]);
                                var_21 = (arr_15 [i_0] [7] [i_4] [5]);
                                var_22 = (arr_4 [i_4] [3] [i_6]);
                            }
                        }
                    }
                    var_23 -= (max((arr_12 [i_1]), (arr_18 [i_0] [4] [2] [i_1] [i_4 - 3])));
                    var_24 = ((min((arr_8 [i_4 - 3] [i_4 - 1] [i_4 - 1]), ((max(-76, 1734387224))))));
                    var_25 &= (max((arr_6 [i_4 - 3] [i_0]), var_9));
                }
                for (int i_7 = 3; i_7 < 13;i_7 += 1) /* same iter space */
                {
                    arr_27 [i_7] [i_7] = var_2;
                    var_26 = (arr_24 [i_0] [i_7] [i_1] [i_1]);
                    var_27 = var_8;
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                var_28 = ((-104 <= ((var_5 ? ((var_13 ? var_4 : var_6)) : (18801 & 155)))));
                                arr_33 [i_0] [i_7] [i_7] [4] [i_8] [i_8] [i_9] = (43 ? 29 : (max((((arr_11 [i_0] [i_0]) ? var_9 : var_11)), (arr_8 [i_8 + 3] [i_8 + 1] [i_7 - 1]))));
                            }
                        }
                    }
                }
                var_29 = (max(var_29, ((~(max((-80 / 68), var_10))))));
            }
        }
    }
    var_30 = (max(((24 ? -59 : 2016)), (((!(((var_3 ? var_12 : var_13))))))));
    /* LoopNest 3 */
    for (int i_10 = 1; i_10 < 6;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 9;i_12 += 1)
            {
                {
                    var_31 = (min((~var_10), (min((arr_6 [i_10 + 4] [i_10 + 4]), (arr_25 [i_12] [i_11])))));
                    var_32 = (((~65533) ? 99 : (arr_31 [4] [i_12] [i_10 + 1] [i_10 + 1] [i_10 + 1])));
                }
            }
        }
    }
    #pragma endscop
}
