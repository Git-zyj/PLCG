/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (~var_3)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 *= (((arr_6 [i_0] [i_2] [i_0]) ? (((~((var_11 ? var_1 : var_9))))) : (min((arr_0 [i_0 - 1] [i_1]), ((((arr_4 [i_0] [i_2]) ? -106 : var_4)))))));
                    var_14 = ((+((((arr_3 [i_1] [i_1]) != (arr_3 [i_1] [i_1]))))));
                    var_15 = var_11;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_16 = ((~101) / -324977950);
                                var_17 = (((var_11 ? var_4 : (arr_7 [i_0] [i_3] [i_0] [i_0] [i_0 + 4] [i_3]))));
                                arr_12 [i_1] [5] [i_1] = ((~((((arr_8 [i_0] [i_0] [i_0] [i_3] [i_4]) < var_6)))));
                            }
                        }
                    }
                    arr_13 [i_1] [i_1] = (((((var_3 + (~var_7)))) && 6645808799795308820));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            var_18 = (min(var_18, (!var_3)));
            var_19 = (!var_9);
            arr_18 [i_5] [i_5] [i_5] = (arr_16 [i_6]);
            var_20 = (!324977943);
        }
        arr_19 [9] [i_5] = var_3;

        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            var_21 ^= -13774;
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 23;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    {
                        var_22 = (15144879562561415531 && -324977968);
                        var_23 = ((1735 ? (arr_15 [i_7]) : (arr_27 [i_8 - 1] [1] [i_8 + 1] [i_8 + 1])));
                    }
                }
            }
            var_24 = (((arr_22 [17] [13] [i_7] [17]) ? (((arr_17 [i_5] [i_5]) - 14)) : var_5));
        }
        for (int i_10 = 2; i_10 < 23;i_10 += 1)
        {
            var_25 -= -13767;
            var_26 ^= ((5904328174218472415 ? var_7 : var_3));
        }
    }
    for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
    {
        arr_34 [11] = 7;
        var_27 = var_8;

        /* vectorizable */
        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {
            arr_39 [i_11] [1] = ((21 ? 1579386052 : (arr_30 [i_11] [i_12] [i_12])));
            var_28 -= ((~(arr_26 [i_11])));
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 24;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 24;i_14 += 1)
                {
                    {
                        var_29 = var_7;
                        var_30 = 468047072;
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 24;i_15 += 1)
        {
            var_31 = 40;

            for (int i_16 = 0; i_16 < 24;i_16 += 1)
            {
                var_32 = ((var_2 ? var_9 : var_1));
                var_33 |= (15768831066276855626 / 212);

                for (int i_17 = 0; i_17 < 24;i_17 += 1)
                {
                    var_34 = ((58078 >> (2147483647 - 2147483617)));

                    for (int i_18 = 1; i_18 < 22;i_18 += 1)
                    {
                        var_35 = (~19);
                        arr_56 [i_11] [i_11] [15] [20] [1] [1] = (var_10 > 8604917587125452759);
                        var_36 ^= var_1;
                        var_37 = (-25 == 47077);
                    }
                }
                for (int i_19 = 4; i_19 < 23;i_19 += 1)
                {
                    var_38 = ((((var_6 ? var_1 : var_2)) * -10));
                    arr_60 [i_19] [i_16] [i_19] &= (arr_42 [i_11] [i_11]);
                }
                var_39 &= (~6242178000700826975);
            }
        }
    }
    #pragma endscop
}
