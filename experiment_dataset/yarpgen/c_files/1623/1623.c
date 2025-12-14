/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (!var_7)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_1 - 1] = ((!((!(!18446744073709551605)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_11 = arr_4 [i_1] [i_3];
                                var_12 = ((-(max((arr_11 [i_0] [1] [i_2] [i_3] [i_3] [i_3] [1]), -8023409030907677395))));
                            }
                        }
                    }
                }
                arr_13 [i_0 + 2] [i_0 - 2] [11] = (((-(arr_3 [i_1 - 1] [i_0 - 2]))));
                arr_14 [17] = ((-((-(!10795868972375245649)))));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            {
                                arr_25 [i_6] = (arr_16 [i_0 - 1]);
                                arr_26 [i_0 - 1] [i_0 - 1] [i_6] [i_6] [i_6] [i_7] = ((-(min(3968633279719719063, (!10795868972375245662)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 -= -1;
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 15;i_9 += 1)
        {
            {
                var_14 = (min(var_14, (((!((min((((!(arr_11 [i_8] [i_8] [i_8] [2] [i_9 + 2] [12] [i_8])))), (arr_19 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9] [1] [i_8])))))))));
                /* LoopNest 2 */
                for (int i_10 = 3; i_10 < 15;i_10 += 1)
                {
                    for (int i_11 = 4; i_11 < 15;i_11 += 1)
                    {
                        {
                            var_15 = (max(var_15, (arr_33 [i_8] [6] [6])));
                            var_16 = (min(var_16, 329818694424441653));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 17;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 17;i_14 += 1)
                        {
                            {
                                arr_44 [i_13] [i_9] [i_12] [i_13] [i_9 + 1] = ((-(~329818694424441649)));
                                var_17 = ((!((!(arr_36 [i_8] [i_13])))));
                                var_18 = ((-((min(329818694424441637, (arr_12 [i_8] [i_9 - 1] [11] [i_12] [11] [11] [15]))))));
                            }
                        }
                    }
                }
                var_19 += ((~(((!(!11373))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_15 = 1; i_15 < 1;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 13;i_16 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_17 = 1; i_17 < 12;i_17 += 1)
                {
                    for (int i_18 = 1; i_18 < 12;i_18 += 1)
                    {
                        {
                            var_20 = (-(arr_16 [19]));
                            arr_58 [i_15] [i_15] [7] [i_15 - 1] = (arr_20 [i_15]);
                            var_21 -= (min((arr_54 [i_15] [i_16] [i_17 - 1] [i_18]), (((-(arr_19 [i_15] [i_16] [i_16] [i_16] [i_17] [16]))))));
                            var_22 = (min(var_22, (arr_55 [i_16] [i_17] [i_18 - 1])));
                        }
                    }
                }
                var_23 = (~17548681171510657253);
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 13;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 13;i_20 += 1)
                    {
                        {
                            arr_64 [i_20] [i_19] [i_15] [i_15] [2] [2] = (-((~((~(arr_29 [i_19] [i_19]))))));
                            arr_65 [i_15] [i_16] = (min((arr_24 [i_15]), ((~(min((arr_50 [i_15]), (arr_0 [i_15] [i_15])))))));
                            arr_66 [i_16] [i_15] = (+-10795868972375245630);
                            arr_67 [i_15] [i_16] [i_15] [i_20] [i_19] [4] = 329818694424441619;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
