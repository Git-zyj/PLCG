/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (var_14 + var_3);
                var_16 ^= (((((var_11 ? var_8 : var_8))) & (min(3876239668, (((var_10 ? var_2 : var_14)))))));
                var_17 = (max(var_17, ((-(!var_0)))));

                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    var_18 -= var_10;
                    arr_9 [i_0] [i_1] [0] [i_1] = max((~var_11), -1691137138);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_19 = -1394171969;
                                var_20 *= ((-(((!(-6 & 1747037631))))));
                            }
                        }
                    }
                    var_21 = (max(var_21, (((!((min(var_2, (((var_2 ? var_14 : 17)))))))))));
                }
                for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            {
                                arr_23 [i_5] [i_6] [i_5] [i_5] [17] [i_0] [i_0] = (max(((-1109183075 ? var_10 : var_7)), ((-(1 == var_11)))));
                                arr_24 [i_6] [i_6] [i_5] [i_1 - 1] [i_0] = 7397;
                            }
                        }
                    }
                    arr_25 [i_5] [i_1] [i_0] [i_0] = (((~1) | (~var_13)));
                }
                for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
                {
                    arr_28 [0] = (((!-4529) <= ((var_8 ? var_1 : 9223372036854775807))));
                    arr_29 [i_0] [12] [i_0] = var_1;
                }
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 17;i_11 += 1)
                        {
                            {
                                var_22 = var_1;
                                arr_40 [i_11] = ((min(var_5, var_11)));
                                var_23 *= var_9;
                                arr_41 [i_0] [i_0] [i_10] [i_10] [1] = var_8;
                            }
                        }
                    }
                    arr_42 [i_9] [i_1] = (~-4);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 16;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 16;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 16;i_14 += 1)
            {
                {
                    var_24 = (min(var_24, var_0));
                    var_25 = ((((1653894540 ? var_6 : var_3)) + ((min(22334, 26755)))));
                }
            }
        }
    }
    #pragma endscop
}
