/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_17 += (((((arr_7 [i_3] [i_1] [i_2] [i_0]) ? 110 : (arr_7 [i_0] [i_0] [i_1 + 3] [i_0])))) ? (4818 & -4819) : (arr_10 [i_2]));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_18 = (arr_3 [i_0] [i_0]);
                            var_19 *= ((var_9 ? (arr_6 [i_1 - 1]) : -4818));
                        }
                        for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                        {
                            arr_16 [i_3] [i_2] [i_1] = ((15949493875486320334 ? 1 : 13251));
                            var_20 = (~var_16);
                            var_21 = (~var_11);
                        }
                        for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                        {
                            var_22 = ((~((-4818 ? var_2 : (arr_9 [i_0] [1] [i_0] [i_0])))));
                            var_23 |= ((-((29128 | (arr_1 [i_1] [i_6])))));
                            arr_19 [i_0] [i_1] [i_2] [i_3] [i_6] = -var_14;
                            arr_20 [14] [i_1] [14] [i_1] [i_1] = ((4818 && (((-(arr_0 [i_0] [i_1 - 1]))))));
                        }
                        arr_21 [i_2] [i_3] = (1 || 2103040394);
                        var_24 = (3861888691 | -8971);
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_25 = (max(var_25, (((((var_14 ? var_8 : (max(6206317909587482757, 433078604)))) & (((((((arr_23 [i_1]) ? var_4 : 17996112245086559966))) ? ((3861888691 ? (arr_14 [i_0] [i_1] [i_2] [i_1] [i_7]) : -4807)) : (((max(4818, var_15))))))))))));
                        var_26 = (min(var_26, (arr_23 [0])));
                        var_27 = (-21634 % 23097);
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        var_28 = (((~var_16) ? 4819 : var_10));
                        var_29 = (((arr_13 [i_0] [i_2] [i_2] [i_8] [i_0] [i_8] [i_0]) % ((3305531134 ? 3305531134 : 14060072395024901967))));
                        arr_26 [i_0] [i_8] [i_2] [i_0] |= (-(443541958 % 12932806377554003172));
                    }
                    var_30 = (((~var_3) ? (((var_12 * var_7) ? (min(-4795, (arr_6 [i_0]))) : (((1204385538 * (arr_10 [12])))))) : ((((((min(var_9, (arr_15 [i_0] [i_1] [i_1] [i_1] [i_2] [i_1])))) || (!var_1)))))));
                    var_31 *= 3401139391475608337;
                }
            }
        }
    }
    var_32 = 4054170636;
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 17;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            {
                var_33 = (18446744073709551595 < 0);
                var_34 = (max(var_34, ((((min(3203445165, -51)) | (((-4835 ? ((((arr_28 [i_9] [i_9]) > var_16))) : var_13))))))));
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 13;i_13 += 1)
                        {
                            {
                                var_35 = (arr_31 [i_12]);
                                var_36 = ((-(arr_35 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])));
                                var_37 = ((-(34705 & var_4)));
                                var_38 ^= ((((min((arr_37 [i_9] [i_13 + 4] [i_13] [i_13 - 1] [i_9]), (arr_37 [i_10] [i_13 + 4] [i_13] [i_13 - 1] [i_10])))) ? (((((3203445165 + (arr_34 [i_11])))) + (((arr_34 [i_13]) ? (arr_32 [i_10] [i_10]) : var_8)))) : 1091522130));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
