/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((max(var_13, (((var_1 + 9223372036854775807) >> (7276928397988749119 - 7276928397988749077)))))) ? ((((!(((var_11 ? var_13 : (-2147483647 - 1)))))))) : (((((min(-1, 255)))) / ((var_8 ? 7276928397988749119 : var_12))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 = (min(var_18, ((max((((arr_12 [i_1] [i_2]) ? 508 : (arr_12 [i_1] [i_2]))), (arr_12 [i_0] [i_3]))))));
                                var_19 = (min(((-(max(11169815675720802469, (arr_10 [i_0] [i_1] [i_2] [i_3] [i_4]))))), var_13));
                            }
                        }
                    }
                }
                var_20 = 1;
                arr_13 [i_0] = (((((max(var_3, 7276928397988749120))) ? (arr_0 [i_0] [5]) : 128)) < (min((min((arr_11 [i_0] [i_1] [i_0] [i_0] [i_0]), (arr_2 [i_1]))), var_1)));
                /* LoopNest 3 */
                for (int i_5 = 3; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_21 = (!65535);
                                arr_20 [i_0] [i_1] [i_5] [i_6] [i_0] = (max(((min((arr_4 [i_5 + 1]), 92))), var_15));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 23;i_9 += 1)
        {
            {
                arr_26 [i_8] &= (var_13 <= var_3);
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            {
                                var_22 = 2781906610;
                                var_23 = var_14;
                                var_24 = max((((arr_24 [i_9 + 1]) / (arr_37 [i_8] [i_8]))), ((((~var_7) && ((((arr_22 [i_8]) / 7276928397988749118)))))));
                                arr_39 [i_8] [i_8] [i_10] [i_12] [i_12] [i_8] [i_8] = ((1 | (((arr_32 [i_8] [i_9] [i_9 - 2]) >> (836546433 - 836546409)))));
                            }
                        }
                    }
                }
                var_25 = (max(var_25, ((max(((min((arr_34 [i_9 + 1] [i_9] [i_9] [i_9 - 1]), (((4294967295 > (arr_31 [i_8] [i_9] [i_8]))))))), (min(1, -62898374)))))));
                /* LoopNest 2 */
                for (int i_13 = 3; i_13 < 23;i_13 += 1)
                {
                    for (int i_14 = 3; i_14 < 23;i_14 += 1)
                    {
                        {
                            var_26 = ((((((arr_35 [i_8] [i_8] [i_8] [i_13] [i_14] [i_14]) != (arr_23 [i_13])))) >= ((((((var_11 ? var_10 : 28758))) || 2147483647)))));
                            var_27 = ((~(((arr_41 [i_9 - 2] [i_14] [i_14 + 1]) ? (min((arr_44 [i_8]), (arr_44 [i_8]))) : (arr_36 [19] [i_8] [i_13] [19] [i_14] [i_13] [i_14])))));
                            var_28 = ((~(arr_41 [i_8] [i_9 - 1] [i_8])));
                            var_29 = (min(var_29, ((min((arr_40 [i_14 - 2] [i_14] [i_14 - 2]), (((!(arr_40 [i_14 - 2] [i_14 - 2] [i_14])))))))));
                        }
                    }
                }
                arr_45 [i_8] = (((max((arr_37 [i_9 - 2] [i_9 + 1]), (((arr_42 [i_8] [i_9]) ^ var_5)))) != (min(var_1, (arr_31 [i_9 - 1] [i_9 - 1] [i_9 + 1])))));
            }
        }
    }
    #pragma endscop
}
