/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = (min(var_20, ((max(var_5, -var_0)))));
                var_21 = ((((((arr_1 [i_0 + 2] [i_1]) ? (arr_1 [i_0] [i_1]) : var_7)) ^ (24 & var_12))));
            }
        }
    }
    var_22 = var_3;

    /* vectorizable */
    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        var_23 = (((arr_1 [i_2] [i_2]) != ((var_4 ? (arr_2 [i_2] [11]) : (arr_2 [i_2] [i_2 - 1])))));
        arr_9 [i_2 + 1] [i_2 - 1] = (arr_6 [i_2]);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    var_24 = (((((arr_4 [14] [8]) != 10570)) ? (!var_2) : (arr_4 [i_2] [i_2])));
                    var_25 = ((var_9 ? (arr_3 [8] [i_4]) : (arr_6 [i_2])));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 9;i_6 += 1)
                        {
                            {
                                var_26 += var_1;
                                arr_19 [i_3] [i_3] = (((arr_2 [i_2 + 1] [i_6 + 1]) >= var_18));
                                var_27 = (min(var_27, var_9));
                            }
                        }
                    }
                    var_28 = ((((1 ? 4808 : 19867)) != (!19127)));
                }
            }
        }

        for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
        {
            arr_22 [11] [i_2] = ((var_9 ? (arr_12 [i_2] [i_7] [i_2 - 1] [i_7]) : var_5));
            arr_23 [i_7] [i_2] [i_2] = var_0;
        }
        for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        {
                            var_29 |= (-7948 != var_15);
                            var_30 |= ((((6411154117292737302 * (arr_29 [i_11] [i_10] [i_9] [2]))) >= (((var_16 ? -13070 : (arr_4 [21] [i_8]))))));
                        }
                    }
                }
            }
            var_31 = (((var_3 + 7405) ? (arr_27 [i_2 + 1] [i_8] [i_2]) : var_1));
            var_32 = ((((((arr_12 [8] [i_2] [i_2 + 2] [11]) >> (var_6 - 24141)))) ? var_9 : 7336541595531359193));
        }
        arr_35 [i_2] [12] = ((((33546240 ? 184 : 3108868463015903017)) - (((var_10 ? var_2 : 5654)))));
    }
    for (int i_12 = 0; i_12 < 17;i_12 += 1)
    {
        arr_39 [i_12] = ((var_4 ^ (((((var_8 ? var_11 : var_6))) ? (((arr_3 [i_12] [i_12]) * 255)) : ((var_11 ? 205 : -26923))))));
        var_33 = (min((((21941 != 57239) ? (-30795 && 149) : 255)), var_7));
        arr_40 [5] = (((((59566 ? -11627 : 10443)))) | var_18);
        arr_41 [8] = (min((min(16693, var_15)), var_17));
    }
    for (int i_13 = 0; i_13 < 12;i_13 += 1)
    {
        var_34 = ((((max((min(4779, -10672)), var_5))) / var_4));
        var_35 = ((7808897677466284461 << (((arr_27 [i_13] [i_13] [i_13]) - 56837))));
    }
    /* vectorizable */
    for (int i_14 = 3; i_14 < 14;i_14 += 1)
    {
        arr_46 [i_14 - 2] [13] |= ((var_15 ? (arr_45 [i_14 + 1]) : (arr_36 [i_14 - 1] [i_14 - 2])));
        arr_47 [7] = (((~var_5) ? (~var_1) : var_0));
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 15;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 15;i_16 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 15;i_17 += 1)
                    {
                        for (int i_18 = 2; i_18 < 14;i_18 += 1)
                        {
                            {
                                arr_59 [i_14 - 3] [i_17] [i_18] = ((-10870 ? (arr_38 [i_18 + 1] [i_14 + 1]) : var_14));
                                var_36 = ((~(arr_53 [i_14 - 2] [i_15] [7])));
                            }
                        }
                    }
                    var_37 = (~-14722);
                }
            }
        }
        arr_60 [1] = -6954;
    }
    #pragma endscop
}
