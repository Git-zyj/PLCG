/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_5));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_18 -= (max((min((arr_1 [i_0 + 1]), (arr_2 [i_0 - 2] [i_0 - 1]))), 201));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_19 |= (~var_12);
                    arr_8 [4] &= (arr_7 [i_0 + 1]);
                }
                var_20 = 201;
                arr_9 [i_0] [i_0] [i_0] = (((((((41164 ? 54 : 262143)) - (arr_5 [i_0])))) ? (~56) : var_11));
                var_21 = (max(var_21, ((((arr_3 [i_0 - 3] [i_0 + 1]) <= (arr_6 [8] [i_1 + 3]))))));
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 3; i_3 < 11;i_3 += 1)
    {
        var_22 = (((arr_1 [i_3 - 3]) || var_0));

        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            var_23 = 201;
            var_24 = (((arr_2 [i_3 - 1] [i_4 + 1]) ? (((arr_4 [i_3] [i_3 - 1] [16]) ? var_16 : 40824)) : (!var_11)));
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 4; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        {
                            var_25 = (-(!579548699));
                            var_26 = (~4091154203);
                            var_27 = (855809366 || 199);
                            var_28 &= 18760;
                        }
                    }
                }
            }
            var_29 = 116;
        }
        for (int i_8 = 2; i_8 < 11;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                var_30 = (max(var_30, (arr_18 [i_3 + 3] [2] [i_8 + 1] [i_3 + 2])));
                var_31 -= (((arr_19 [i_8] [i_9] [i_8 - 1] [i_3] [i_8]) != (arr_19 [i_3] [i_3] [i_8 - 2] [i_3] [i_8 - 1])));
                var_32 ^= (!56639);
            }
            arr_27 [i_8] = ((~(arr_17 [11] [i_3] [i_8] [i_8])));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 11;i_11 += 1)
                {
                    {
                        var_33 = var_1;

                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            var_34 = (max(var_34, var_3));
                            arr_35 [i_12] [i_8] [11] [i_8] [i_3] = ((var_14 <= (arr_24 [i_3])));
                            var_35 = (((((var_15 ? var_11 : (arr_12 [12])))) ? (arr_14 [i_8 + 3] [i_8 - 2] [i_8 + 1]) : (arr_33 [i_3] [i_8 - 2] [i_8] [i_11 - 1] [i_12])));
                            var_36 = (((arr_10 [i_3 - 2]) ? (arr_2 [i_3] [i_11 + 1]) : (((arr_18 [i_3] [i_8] [i_11] [i_12]) ? (arr_1 [i_3 - 1]) : (arr_29 [i_3 + 1] [i_8 - 1] [i_10] [i_8])))));
                        }
                        var_37 = ((var_16 ? 66 : var_13));
                        var_38 |= (4691117085980912210 % 202);
                    }
                }
            }
        }

        for (int i_13 = 2; i_13 < 13;i_13 += 1)
        {
            var_39 = 9223372036854775803;
            var_40 |= var_13;
        }
        for (int i_14 = 0; i_14 < 14;i_14 += 1) /* same iter space */
        {
            var_41 = ((223 ? (arr_30 [i_3 + 3] [i_3] [i_3]) : var_11));
            var_42 = ((-(arr_13 [i_3 + 3])));
        }
        for (int i_15 = 0; i_15 < 14;i_15 += 1) /* same iter space */
        {
            arr_45 [i_3] [i_15] = (((arr_1 [i_3 - 3]) ? (arr_1 [i_3 - 3]) : (arr_1 [i_3 - 3])));
            arr_46 [i_15] [i_3] = ((var_10 ? 24717 : (arr_28 [i_3 - 1] [i_3])));
            arr_47 [i_3] [i_15] [i_15] &= (arr_34 [2] [i_3 - 2] [i_3 + 3] [i_3 - 1]);
        }
    }
    var_43 = var_1;
    #pragma endscop
}
