/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((((((min(3656770164, 16574791104781062304)) - -134217696)) - var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] = (arr_4 [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [5] [i_0] [i_0 + 2] = ((var_3 ? (~var_11) : (((arr_9 [i_3 - 1] [i_1 - 1] [i_0 + 2] [i_0]) - var_9))));
                                var_14 = ((-1823162141 || (arr_2 [i_0] [2])));
                                var_15 = (min(var_15, (arr_2 [i_0] [i_2])));
                            }
                        }
                    }
                }
                arr_16 [i_0] [i_0] [i_0] = (((!var_8) ? (((!(arr_12 [i_1] [i_1 - 1] [i_1] [i_1])))) : (arr_12 [i_0] [i_0] [i_0] [i_0])));
            }
        }
    }
    var_16 *= var_8;
    var_17 = var_2;

    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        var_18 = var_10;
        var_19 = ((((~(arr_17 [i_5])))));
        var_20 = ((((((-1823162141 ? -1823162155 : -4701)) ? ((-1428681620 ? 1146363812 : 41572)) : (arr_18 [i_5])))));
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 16;i_8 += 1)
            {
                {
                    arr_26 [i_7] [i_7] [i_7] [13] = ((var_4 ? var_12 : (((((min(2349, 3456268988))) ? ((4701 ? 1 : 107)) : (arr_18 [i_7]))))));
                    var_21 -= (max(((166 + (arr_18 [i_6]))), ((+(((arr_23 [14] [14] [i_8] [i_8]) * 2147483647))))));
                    var_22 = (((arr_18 [i_6]) * (max(4160749599, -1823162145))));
                    var_23 = (max(var_23, 4160749610));
                    arr_27 [4] [10] [i_7] [i_8] = -var_8;
                }
            }
        }

        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                var_24 &= (max((((21007 ? -993994777 : (arr_23 [i_6] [i_6] [i_6] [i_6])))), ((~(arr_33 [i_10] [i_9])))));
                var_25 = var_0;
            }
            var_26 *= (((4160749631 && 4068960558985097991) ? (((-(arr_19 [i_6])))) : (arr_22 [5])));
            arr_34 [i_6] [i_6] = ((+((max(var_2, ((((arr_22 [i_9]) < (arr_18 [i_6])))))))));
            var_27 += ((~(arr_33 [i_6] [i_9])));
            var_28 ^= (((((~(arr_23 [14] [i_6] [i_6] [i_9])))) ? (arr_25 [i_6] [i_9]) : var_9));
        }
        for (int i_11 = 0; i_11 < 18;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    {
                        var_29 = ((-(((arr_31 [i_13]) ? (arr_31 [i_6]) : (arr_31 [i_13])))));
                        var_30 = (max(var_30, (((((max((arr_41 [i_6] [i_12] [14] [i_11] [i_6]), (arr_41 [i_6] [16] [i_6] [i_13] [i_13])))) | (arr_22 [i_6]))))));
                    }
                }
            }
            var_31 = (max(var_31, (arr_36 [i_6])));
        }
        for (int i_14 = 2; i_14 < 14;i_14 += 1)
        {
            arr_46 [i_6] [i_6] [i_6] = (((arr_35 [i_6]) & (arr_20 [i_14])));
            var_32 ^= var_7;
        }
    }
    #pragma endscop
}
