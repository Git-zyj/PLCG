/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -1;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 += -1597259314;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_2] = (-134209536 << 1);
                        var_21 = (min(var_21, (arr_2 [i_1] [i_3])));
                        var_22 = (min(var_22, 8));
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_4] [i_2 - 1] [i_1] [i_0 + 1] = (max(((~((1 ? 1 : var_6)))), (((arr_4 [i_0] [i_1]) ? var_2 : var_5))));
                        var_23 |= var_6;
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_1] [11] [i_2] [i_5] = 0;
                        arr_19 [5] [i_2] [i_1] [5] = -87;
                    }
                    var_24 = (min(-var_16, (arr_4 [i_0] [i_1])));
                    arr_20 [i_2] = 1;
                    arr_21 [3] [i_1] [i_0] [i_0 + 2] = 22;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 2; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 19;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 16;i_10 += 1)
                        {
                            {
                                var_25 |= -419819261;
                                arr_34 [i_9] [i_9] [i_10] [i_7] [i_6] = 1092357421;
                            }
                        }
                    }
                    var_26 = (8 + -2147483637);
                }
            }
        }
    }

    for (int i_11 = 0; i_11 < 14;i_11 += 1)
    {
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 12;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 14;i_14 += 1)
                {
                    {
                        var_27 = ((+((var_18 ? (arr_41 [i_11] [i_13 - 2] [i_11] [i_14]) : 4323455642275676160))));
                        var_28 |= ((118 ? 3783745782600546446 : ((((1 ? -5 : -13166))))));
                        var_29 = (!((min(var_2, var_0))));
                    }
                }
            }
        }
        var_30 = (max(var_30, ((min(var_9, ((var_3 ? ((0 ? 83 : 18190)) : 909465610)))))));
        /* LoopNest 2 */
        for (int i_15 = 1; i_15 < 11;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 14;i_16 += 1)
            {
                {
                    var_31 &= 1474188931;
                    arr_52 [i_16] [i_15 - 1] [i_15 + 3] [12] |= 0;
                    var_32 = 3920751742;
                    var_33 *= ((1044480 ? 2026475416 : 1738673831));
                }
            }
        }
    }
    for (int i_17 = 1; i_17 < 14;i_17 += 1)
    {
        var_34 = (((min(var_1, 1474188931))) ? (min((max(11, 4293922815)), 36)) : (((-22138 ? 226 : 0))));
        var_35 = (max(var_35, (((126 ? 11772 : (+-63))))));
        var_36 = max(var_5, ((197 ^ (-58 / var_11))));
    }
    #pragma endscop
}
