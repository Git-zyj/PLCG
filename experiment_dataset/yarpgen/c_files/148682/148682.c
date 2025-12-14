/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_13 = (min(var_13, (((-((4294967295 ? -932365342 : (arr_3 [i_0] [13]))))))));
        var_14 |= (((arr_0 [12]) != 1905187783));
        var_15 += (~var_10);
        arr_4 [i_0] = (arr_2 [i_0]);
        var_16 = 494978277;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_8 [i_1] = 1036609610;
        var_17 *= (min((~2389779502), ((0 ? 0 : 1))));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    var_18 = (max(var_18, (((~((~(min(4294967295, 2)))))))));
                    arr_13 [i_1] [i_2 + 1] [i_3] = (~18446744073709551611);
                }
            }
        }

        /* vectorizable */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            var_19 -= (arr_11 [i_4] [i_4] [4] [i_1]);
            var_20 = (arr_7 [i_1]);
            arr_16 [i_1] = (arr_11 [i_1] [i_4] [i_4] [i_1]);
            var_21 |= (!3);
            var_22 = ((1 ? (arr_10 [i_1] [10] [i_1]) : (arr_10 [i_1] [i_4] [i_1])));
        }
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 17;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 18;i_8 += 1)
                {
                    {
                        var_23 -= 18446744073709551615;
                        var_24 = 4294967295;
                        var_25 = (~18446744073709551588);
                    }
                }
            }
        }

        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 19;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 18;i_12 += 1)
                    {
                        {
                            var_26 = (((((250 ? 4840862587868596929 : 229))) ? 0 : 1905187783));
                            var_27 = (arr_12 [i_11] [i_5 - 2] [i_5 - 1] [i_5 + 2]);
                            var_28 = var_7;
                            var_29 = (((!5) ? 17 : 1905187783));
                            arr_36 [i_5] [i_5] [i_5] [i_11] [i_11] [i_5] [i_12 + 1] = ((((arr_12 [i_11] [i_9] [i_11] [i_12]) ? var_7 : var_12)));
                        }
                    }
                }
            }
            arr_37 [i_5] [i_9] = ((908644600 ? 1905187787 : 18446744073709551611));
        }
        for (int i_13 = 2; i_13 < 17;i_13 += 1)
        {
            var_30 = 65535;
            var_31 = (min(var_31, (((~(~var_4))))));
        }
    }

    /* vectorizable */
    for (int i_14 = 0; i_14 < 23;i_14 += 1)
    {
        arr_42 [7] = 254;
        var_32 -= ((-(!var_10)));
    }
    for (int i_15 = 0; i_15 < 19;i_15 += 1)
    {
        var_33 = -var_11;
        var_34 = 15;
        var_35 = ((((((arr_17 [i_15]) ? (arr_24 [i_15]) : ((var_8 ? var_7 : var_0))))) ? var_0 : (arr_25 [i_15])));
    }
    /* vectorizable */
    for (int i_16 = 3; i_16 < 13;i_16 += 1)
    {

        for (int i_17 = 2; i_17 < 11;i_17 += 1)
        {
            var_36 = ((4294967295 ? ((var_8 ? (arr_47 [i_16 - 1]) : var_11)) : ((((arr_2 [i_16]) ? (arr_5 [i_17 + 2] [i_17]) : (arr_9 [i_17]))))));
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {
                for (int i_19 = 2; i_19 < 12;i_19 += 1)
                {
                    {
                        var_37 += ((4294967295 ? 13 : (arr_49 [i_18])));
                        var_38 -= ((6 ? (1 >= 11835) : 768));
                    }
                }
            }
            var_39 |= (!var_5);
        }
        /* LoopNest 3 */
        for (int i_20 = 0; i_20 < 14;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 14;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 1;i_22 += 1)
                {
                    {
                        var_40 = (arr_46 [6] [i_22]);
                        var_41 -= ((var_5 ? (arr_54 [i_16 - 1] [i_20]) : 0));
                    }
                }
            }
        }
    }
    var_42 = var_2;
    var_43 ^= 14720473765214763298;
    #pragma endscop
}
