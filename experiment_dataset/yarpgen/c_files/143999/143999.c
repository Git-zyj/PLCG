/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 = (42694 || (((((((arr_1 [i_1] [i_2]) % var_3))) ? (159 | 7547466478537875930) : ((((arr_9 [i_0] [3] [i_2] [i_3] [i_4] [i_4]) ? var_10 : var_12)))))));
                                var_16 -= (max((42694 * 73), 76));
                                var_17 = (50 - 22842);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_18 &= ((var_6 ? (arr_6 [i_6] [i_1] [i_1]) : (((arr_12 [i_0] [i_1] [i_2] [i_5] [i_6]) + (arr_12 [i_0] [i_0] [10] [i_5] [i_6])))));
                                var_19 = var_9;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_20 = var_1;
                                var_21 = (-(arr_14 [i_0] [i_1] [i_2] [i_8] [i_8] [i_0]));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 3; i_9 < 10;i_9 += 1)
    {
        for (int i_10 = 3; i_10 < 12;i_10 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_11 = 2; i_11 < 11;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 13;i_13 += 1)
                        {
                            {
                                var_22 = ((14940730747303270271 ? 616282884 : (-127 - 1)));
                                var_23 = (max(var_23, ((max(76, 18415073989274339040)))));
                                var_24 = (((((!192556851) ? ((max(97, 192556851))) : var_13)) <= (((((!-919150300) || ((((arr_23 [i_13]) ? var_6 : var_7)))))))));
                                var_25 = (arr_5 [i_10]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 13;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        {
                            var_26 = 1;

                            /* vectorizable */
                            for (int i_16 = 0; i_16 < 13;i_16 += 1)
                            {
                                var_27 -= (arr_26 [i_15] [i_14] [i_10 - 1]);
                                var_28 = (((478652099 >> (((arr_12 [i_16] [i_15] [i_14] [i_10 + 1] [i_9]) - 1233879228)))));
                            }
                            var_29 |= ((-(((!((-1087960694444313862 != (arr_30 [7] [5] [i_15]))))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 13;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 13;i_19 += 1)
                        {
                            {
                                var_30 = ((min(22842, 87)));
                                var_31 = (min(var_31, 90));
                                var_32 = (((3418961226281277010 ? 14940730747303270295 : 1)));
                            }
                        }
                    }
                }
                var_33 = (arr_1 [i_9] [i_10]);
            }
        }
    }
    var_34 -= 1087960694444313864;
    #pragma endscop
}
