/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_12 = 52551;
        var_13 = (min(2132913355471332635, 85));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_14 = (arr_4 [i_1] [i_1]);
        arr_5 [i_1] = (max((((arr_3 [i_1] [i_1]) ? (arr_3 [i_1] [i_1]) : (arr_3 [i_1] [i_1]))), (~211)));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        arr_13 [i_1] [i_2] [i_3] [i_4] = (((-(arr_3 [11] [i_1]))));
                        var_15 = 32755;
                    }
                    var_16 = ((arr_7 [i_3] [i_3]) ? (((0 ? 32755 : (arr_12 [10] [i_2] [i_2])))) : ((((((arr_12 [i_1] [i_2] [i_3]) ? 1 : 1))) ? (var_0 - var_10) : (arr_11 [i_1] [i_2] [i_3] [i_1]))));
                    arr_14 [i_3] [i_3] [1] [i_1] = (~((~(~1602682266))));
                    var_17 = (min(var_17, (arr_3 [i_1] [i_2])));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                {
                    arr_22 [i_5] [i_5] = ((~(((((127 ? 14954 : 24))) ? (~0) : ((~(arr_15 [i_5] [i_6])))))));
                    var_18 = ((-(((arr_7 [i_5] [i_6]) + (arr_7 [i_5] [i_6])))));
                }
            }
        }
        arr_23 [i_5] = ((~(max((((arr_2 [i_5]) ? (arr_21 [i_5] [11] [0] [i_5]) : var_4)), 1))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                {
                    arr_29 [6] [i_8] [i_5] = (((arr_2 [14]) ? (((~1) ? 1 : (((arr_20 [i_5] [10] [i_5]) ? (arr_6 [i_5] [i_5] [i_5]) : (arr_16 [i_5] [i_5]))))) : (arr_9 [i_9] [3] [3])));
                    var_19 = (((~15) ? (((~var_3) & (max(var_9, (arr_9 [i_5] [i_5] [i_5]))))) : (~1996583964552683429)));
                    var_20 = (arr_17 [i_5] [i_8] [i_9]);

                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        var_21 = ((~((1602682266 ? (min((arr_7 [i_5] [i_5]), 47)) : (~var_10)))));
                        var_22 = ((~((~(~185)))));
                        var_23 = 16450160109156868187;
                    }
                }
            }
        }
        arr_32 [i_5] = -1;
    }

    for (int i_11 = 0; i_11 < 13;i_11 += 1)
    {
        var_24 = (((((((-26 ? 2436197874 : var_2))) && 191913483)) ? (arr_34 [i_11]) : (((~(arr_28 [14] [i_11] [i_11] [i_11]))))));
        var_25 = (max(var_2, (((-127 - 1) ? 24 : 16450160109156868170))));
        var_26 |= (((((~(arr_28 [i_11] [i_11] [12] [i_11])))) ? ((~(~var_8))) : ((((arr_12 [i_11] [i_11] [5]) ? -var_2 : ((min(18062, -18062))))))));
    }
    for (int i_12 = 0; i_12 < 17;i_12 += 1)
    {
        var_27 = ((-((var_0 ? (arr_26 [i_12] [i_12] [i_12]) : 127))));
        arr_39 [i_12] [i_12] = (arr_9 [i_12] [i_12] [i_12]);
    }

    /* vectorizable */
    for (int i_13 = 0; i_13 < 13;i_13 += 1)
    {
        var_28 = ((~((1 ? 3343884661 : 4362862139015168))));
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 13;i_15 += 1)
            {
                for (int i_16 = 2; i_16 < 11;i_16 += 1)
                {
                    {
                        arr_50 [i_14] [i_15] [i_14] [i_14] = (arr_3 [i_15] [i_14]);
                        var_29 = (max(var_29, (~1)));
                    }
                }
            }
        }
        var_30 = (((~-57) & (((arr_9 [18] [i_13] [i_13]) ? var_8 : (arr_35 [i_13] [10])))));
    }
    for (int i_17 = 0; i_17 < 25;i_17 += 1)
    {
        var_31 = (max(var_31, (((~(min((arr_53 [i_17] [17]), (~var_0))))))));
        var_32 = max(((~(min(var_4, (arr_52 [i_17] [i_17]))))), (((((var_3 ? -32767 : var_1))) ? var_8 : (arr_52 [i_17] [i_17]))));

        for (int i_18 = 0; i_18 < 25;i_18 += 1) /* same iter space */
        {
            var_33 = (min(((((min(var_3, (arr_52 [i_17] [i_17])))) ? (((arr_53 [i_17] [i_18]) + var_8)) : (var_4 != 127))), (~var_1)));
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 25;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 1;i_20 += 1)
                {
                    {
                        arr_60 [i_18] [i_20] [i_20] = ((~(((arr_57 [i_17]) / (arr_59 [i_20])))));
                        arr_61 [i_20] [i_18] = ((~((~(((arr_59 [i_20]) ? 1996583964552683429 : (arr_59 [i_20])))))));
                    }
                }
            }
            var_34 = ((~(((((121 ? var_2 : (arr_51 [i_17] [i_17]))) <= (arr_53 [i_17] [i_18]))))));
        }
        /* vectorizable */
        for (int i_21 = 0; i_21 < 25;i_21 += 1) /* same iter space */
        {
            var_35 ^= (((arr_58 [i_17] [i_21] [i_21]) ? -28706 : var_1));
            var_36 |= ((548419465 ? 127 : 52655));
            var_37 = var_8;
        }
    }
    var_38 = (~var_5);
    var_39 = ((~((~(var_10 >= 3534849272)))));
    #pragma endscop
}
