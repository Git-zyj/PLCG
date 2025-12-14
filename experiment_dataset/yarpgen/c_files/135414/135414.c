/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_7 > 32767);
    var_21 *= ((var_16 | (((((var_7 ? 31491 : -18619))) ? ((min(var_16, 86))) : ((var_8 ? var_18 : var_7))))));

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0 - 1] = (((arr_0 [i_0 - 1] [i_0 - 1]) >= 125));
        arr_3 [i_0] = 63066;
        var_22 = (min(var_22, (((((~(min(var_0, var_12)))) - var_0)))));
        var_23 += ((((192 && var_2) >> ((((39145 ? 13668 : 192)) - 13655)))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 12;i_5 += 1)
                        {
                            {
                                arr_19 [i_2] [i_4] [6] [12] [i_2] [i_2] = (!(!192));
                                var_24 = (min(var_24, (((-(min(((878281440589719798 ? 0 : -103)), 59)))))));
                                var_25 = 189;
                            }
                        }
                    }
                    var_26 = (((-6449 ? 0 : ((-32763 ? var_15 : var_18)))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            {
                                arr_26 [8] [i_2] [8] [8] [i_7] [i_1] [i_1] = ((1 ? (-32767 - 1) : 1));
                                arr_27 [i_1] [i_1] [6] [i_6] [i_7] &= max((((170 == 170) != 183)), (!2470));
                                arr_28 [i_7] [i_2] [5] [i_2] [i_2] [i_1] = (max(((((min(179, -10))) ? ((0 ? (arr_21 [11] [i_2] [i_3] [1] [1] [9]) : 32764)) : 112)), (((!(!var_19))))));
                                arr_29 [11] [i_2] [i_3] [6] [i_7] = (-(!183));
                            }
                        }
                    }
                    arr_30 [i_1] [i_2] = (((+-203) ? ((max(((-3 ? 32759 : var_3)), (min(var_13, 24949))))) : (max((((-4 ? (-2147483647 - 1) : 0))), (arr_8 [i_1] [i_2] [i_3])))));
                }
            }
        }

        /* vectorizable */
        for (int i_8 = 3; i_8 < 12;i_8 += 1)
        {
            var_27 = ((((-(arr_14 [i_8] [i_8] [i_1]))) | var_18));
            arr_34 [i_8] = ((4775 ? (arr_23 [i_1] [i_1] [i_1] [4] [i_1] [i_8]) : (arr_33 [i_8 - 3] [i_8] [i_8 + 1])));
            arr_35 [i_1] &= (arr_25 [i_1] [i_1] [i_1] [1] [i_8] [i_8]);
            arr_36 [i_1] [i_8] [i_8] = (!-16564);
        }
        /* LoopNest 3 */
        for (int i_9 = 1; i_9 < 9;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 9;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    {
                        var_28 = 1628238797;
                        var_29 = (--23026);
                    }
                }
            }
        }
        var_30 -= ((16 & 16702) ? ((-((max(-1, 72))))) : (((-72 + 2147483647) >> ((((0 ? (arr_13 [i_1] [i_1] [i_1] [i_1] [i_1]) : -26977)) + 26993)))));
    }
    for (int i_12 = 3; i_12 < 12;i_12 += 1)
    {
        var_31 = (max(var_31, var_14));

        /* vectorizable */
        for (int i_13 = 0; i_13 < 13;i_13 += 1)
        {
            arr_52 [i_12 + 1] [i_13] [i_13] = -var_18;
            var_32 ^= var_10;
            var_33 -= ((((-106 + 2147483647) >> 0)));

            for (int i_14 = 0; i_14 < 13;i_14 += 1)
            {
                var_34 += ((!(arr_17 [i_14] [i_12 + 1] [i_12 - 1] [i_12 - 1] [i_12] [8] [i_12])));
                var_35 ^= (((~var_4) ? var_18 : 29678));
                var_36 -= 22;
                /* LoopNest 2 */
                for (int i_15 = 1; i_15 < 11;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        {
                            var_37 = 32751;
                            arr_59 [i_13] [i_13] = 17255010291680327342;
                            var_38 = 20;
                            var_39 -= (15958 > -113);
                        }
                    }
                }
                var_40 = ((2456 >> (-92 + 92)));
            }
        }
    }
    #pragma endscop
}
