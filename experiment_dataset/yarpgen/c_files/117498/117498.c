/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~var_3);

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        var_18 = var_0;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_4 [i_0] [i_1] = (((arr_0 [i_0 - 2]) ? var_2 : (arr_0 [i_0 - 4])));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_11 [i_3] [i_0] [i_0] [i_3] = (arr_5 [i_0 - 4] [i_0]);
                        arr_12 [i_3] [i_1] [i_1] [i_2] [i_3] [i_1] = ((((((arr_5 [i_2] [i_1]) != (arr_0 [i_0])))) ^ (arr_3 [i_0 - 4] [i_3 + 1])));
                        arr_13 [i_3] [i_1] [i_2] [i_3] = (((arr_5 [i_1] [i_1]) ? (arr_8 [i_3] [i_3] [i_1] [i_2] [i_3] [i_3]) : (arr_1 [i_1])));
                    }
                }
            }
        }
        var_19 = (-(arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]));
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 19;i_5 += 1)
            {
                {
                    var_20 = (max(var_20, (((((-65535 ? ((var_15 ? -1 : (arr_20 [i_0] [i_4] [i_5 + 2] [i_4]))) : ((max((arr_0 [i_0]), var_13)))))) ? (~0) : (((((-(arr_15 [i_0])))) ? 9223372036854775807 : 1185409555608889966))))));
                    arr_21 [i_5] [i_5] = (65524 - 925993631);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_21 = ((var_11 ? ((~(arr_17 [i_4] [i_5] [i_4] [i_4 + 1]))) : (arr_16 [i_4] [i_6] [i_7])));
                                var_22 = ((-((3 << (1314105726 - 1314105715)))));
                                arr_28 [i_0] [i_5] [i_5] [i_5] [i_5] = (min(0, (((~var_1) != (arr_9 [i_0] [i_4 - 1] [i_4])))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                {
                    var_23 = (min(((min((arr_32 [i_8] [i_8]), (arr_32 [i_10] [i_9])))), (max(((min(var_7, (arr_32 [i_9] [i_9])))), (arr_31 [i_9])))));

                    for (int i_11 = 0; i_11 < 0;i_11 += 1)
                    {
                        arr_41 [i_11] = -1;

                        for (int i_12 = 1; i_12 < 18;i_12 += 1)
                        {
                            var_24 = ((((((!(((1220730042 ? (arr_31 [i_8]) : var_3))))))) ^ (arr_32 [i_8] [i_12 + 4])));
                            var_25 = (max(var_25, (((-((698194530 >> (arr_40 [i_8] [i_8] [i_8] [i_8] [i_8]))))))));
                        }
                        for (int i_13 = 0; i_13 < 22;i_13 += 1)
                        {
                            arr_46 [i_8] [i_9] [i_8] [i_9] [i_11 + 1] = (arr_39 [i_8] [i_9] [i_10] [i_13]);
                            var_26 = (arr_44 [i_9] [i_10] [i_11 + 1]);
                            var_27 = -7036576439743777171;
                        }
                        var_28 = ((-30265 ? 3880023763 : -1));
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 22;i_14 += 1)
                    {
                        for (int i_15 = 4; i_15 < 20;i_15 += 1)
                        {
                            {
                                var_29 = (min(var_1, (((arr_33 [i_9] [i_9]) ? (arr_50 [i_9] [i_9] [i_10] [i_9] [i_15 + 1]) : (((arr_29 [i_8]) ? (arr_33 [i_8] [i_10]) : -65552))))));
                                arr_53 [i_8] [i_8] [i_15] [i_8] = ((((!(arr_43 [i_15 - 3] [i_15] [i_15 - 1] [i_15 + 2] [i_15]))) ? (arr_37 [i_8] [i_8] [i_10]) : 7612346905279439557));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
