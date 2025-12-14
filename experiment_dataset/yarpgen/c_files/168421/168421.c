/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_8 % var_16);

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_18 = (min((max((arr_0 [i_0 - 3]), (arr_0 [i_0 + 1]))), (((arr_0 [i_0 - 1]) ? var_0 : (arr_0 [i_0 - 2])))));
        var_19 &= (min(((((0 >> (-19936 + 19965))) ^ (-2147483647 - 1))), (arr_0 [i_0 - 2])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_20 = (min(var_20, var_8));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 10;i_3 += 1)
            {
                {
                    var_21 -= ((var_13 ? ((var_2 ? 864584927 : var_0)) : (arr_9 [i_3 - 3] [i_3 - 1] [i_3 + 1])));
                    arr_10 [i_2] = (arr_8 [i_1] [i_1] [i_1]);
                    arr_11 [i_1] [i_1] [i_2] [i_3] = (~-1470269925);
                    var_22 -= (arr_7 [i_3 - 3]);
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        var_23 -= var_11;
        var_24 = ((34 ? (max((arr_12 [i_4] [i_4]), (max(var_6, 8270397185274242707)))) : var_10));
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {

        /* vectorizable */
        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 4; i_9 < 18;i_9 += 1)
                    {
                        {
                            var_25 = 115240742;
                            arr_26 [i_5] [i_6] [2] [i_8] [i_8] [i_8] [i_9 + 1] = (~8270397185274242725);
                        }
                    }
                }
            }
            var_26 = (((((2147483647 ? var_2 : var_16))) || (((123 ? -750230247 : -23092)))));
            var_27 += (((var_12 ? -95 : var_0)));
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
        {
            var_28 += 17261491211913199916;
            var_29 = ((arr_19 [i_5] [i_5]) ? ((~(arr_19 [i_5] [i_5]))) : (((var_10 <= (arr_19 [i_10] [i_10])))));
            var_30 = (min(var_30, (((-(arr_21 [i_5] [i_10] [1] [i_10] [i_10]))))));
            var_31 ^= (((((arr_17 [i_10] [i_5] [i_5]) ? 23092 : (arr_17 [i_5] [i_5] [i_10]))) / (127 * -1)));
            arr_30 [i_5] = ((((var_7 + ((min(var_10, var_6))))) ^ ((((((0 ? var_9 : var_12)) >= (arr_27 [i_5] [i_5])))))));
        }
        for (int i_11 = 2; i_11 < 19;i_11 += 1)
        {
            var_32 = (max(var_32, (!var_14)));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 22;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 18;i_13 += 1)
                {
                    {
                        var_33 = (min(var_33, var_1));
                        arr_39 [i_5] [i_11] [i_5] [i_13 + 2] = 1;
                    }
                }
            }
            var_34 += var_13;
        }
        var_35 = (min(var_35, ((((-1551315797 / 8192) <= ((-18 ? -115240742 : var_9)))))));
        var_36 |= (((((arr_29 [1] [i_5] [0]) - ((min((arr_17 [i_5] [i_5] [i_5]), var_13))))) - (((arr_22 [i_5]) ? (arr_22 [i_5]) : (arr_22 [i_5])))));
    }

    /* vectorizable */
    for (int i_14 = 0; i_14 < 10;i_14 += 1)
    {
        arr_42 [i_14] = (arr_37 [i_14] [8] [i_14] [i_14] [18]);
        /* LoopNest 2 */
        for (int i_15 = 1; i_15 < 9;i_15 += 1)
        {
            for (int i_16 = 2; i_16 < 7;i_16 += 1)
            {
                {
                    var_37 = (((arr_8 [i_16 + 3] [i_15] [i_15 - 1]) / var_9));
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 10;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 10;i_18 += 1)
                        {
                            {
                                var_38 = (((arr_44 [i_16]) ? (arr_28 [i_16 + 2] [21]) : (arr_50 [i_15] [i_15] [i_15] [i_16 + 2] [i_15 + 1])));
                                var_39 += ((var_7 % ((((arr_20 [i_14] [i_15 - 1] [i_16] [i_17]) ? 1 : var_2)))));
                                var_40 = (~-286447754);
                            }
                        }
                    }
                }
            }
        }
        var_41 = (!var_9);
    }
    var_42 = 18420;
    #pragma endscop
}
