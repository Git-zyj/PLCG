/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (((var_2 ? var_4 : (min(-var_3, var_1)))))));
    var_11 = (min((max(-3516020876444525914, ((max(var_4, var_7))))), var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] [i_0] = (min(((min((126 < var_5), (max((arr_0 [i_1]), 239))))), (((max(var_6, -3516020876444525914)) ^ 142))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_12 = 14;
                            var_13 = ((~((-(arr_0 [i_1 - 1])))));
                            var_14 -= (((!(arr_11 [i_1] [i_1]))));
                            var_15 = (((((((((arr_1 [i_2] [i_2]) << (var_1 - 65)))) ? (arr_0 [i_1]) : ((-(arr_8 [i_1] [i_0] [i_1])))))) ? ((min((arr_10 [i_1] [i_1] [i_1 - 1] [i_1 + 1] [i_1 - 1]), (arr_4 [i_0] [i_1] [i_1 - 2])))) : var_4));
                            var_16 = (((((0 ? var_1 : 0))) == ((((arr_9 [i_0] [i_1 - 2] [i_2] [i_3]) > (arr_4 [i_1 + 1] [i_1 - 2] [i_1 - 1]))))));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                {

                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_17 -= ((~((max((arr_0 [i_1 - 1]), var_2)))));
                        arr_18 [i_0] = (min((((var_4 & var_9) / ((((arr_5 [i_0] [i_1] [i_1]) ? 152 : 147))))), var_6));
                        var_18 = -6206919768338359263;
                    }
                    var_19 = (max(var_19, (((-((((125 ? 95 : 0)) << ((((1 | (arr_7 [i_0] [i_0]))) - 683040254)))))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_20 = 0;
                                arr_23 [i_0] [i_0] [i_0] [i_0] = ((((((122 * 1) ? (((arr_14 [i_1] [i_1] [i_0]) / (arr_14 [i_0] [i_6] [i_0]))) : (arr_12 [i_7] [i_0] [i_7 - 1] [i_1 - 2] [i_0] [i_1 - 2])))) != ((((min((arr_10 [i_7] [i_6] [i_0] [i_1] [i_0]), (arr_8 [i_7] [i_0] [i_0])))) ? 9028421196957830486 : ((((arr_17 [i_0] [i_0] [i_0] [i_6]) / (arr_17 [i_0] [i_0] [i_0] [i_6]))))))));
                            }
                        }
                    }
                    var_21 = 1601552673;
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                {
                    var_22 *= (min((arr_15 [i_8] [i_1] [i_0]), ((((240 ? (arr_11 [i_0] [i_0]) : -3516020876444525934)) / ((min(126, (arr_19 [i_1] [i_1]))))))));
                    var_23 = (max(var_23, (((~((((arr_20 [i_1 - 2] [i_1 - 1] [i_1 + 1] [i_1 - 2] [i_1] [i_1 + 1]) == 0))))))));
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                {
                    var_24 = (min(var_24, (arr_10 [i_0] [i_0] [i_9] [i_1] [i_1])));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            {
                                arr_35 [i_11] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_28 [i_0]);
                                var_25 = (((((((arr_24 [i_0]) & 4294967295))) & (min((arr_19 [i_0] [i_1]), (arr_33 [i_0] [i_1] [i_9] [i_0] [i_1]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 22;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            {
                                var_26 = ((!(((((((arr_27 [i_1] [i_0] [i_0]) ? 1103307915 : (arr_15 [i_0] [i_0] [i_13])))) ? (arr_36 [i_0] [i_0] [i_0] [i_0]) : (max(0, 9028421196957830474)))))));
                                var_27 = (min(var_27, ((((arr_43 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1]) ? ((((268435456 | (arr_13 [i_0] [i_1] [i_9] [i_9]))) | (max(var_9, var_9)))) : (arr_3 [i_0] [i_0]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 16;i_14 += 1)
    {
        for (int i_15 = 1; i_15 < 1;i_15 += 1)
        {
            {
                arr_49 [i_14] = (((arr_39 [i_14] [i_14] [i_14] [i_15] [i_15]) != (((384 != (arr_15 [i_15 - 1] [i_15 - 1] [i_15 - 1]))))));
                var_28 = ((((max((arr_38 [i_14] [i_14] [i_14] [i_14]), (arr_38 [i_14] [i_14] [i_14] [i_14])))) ? (124 != 4294967295) : 32767));
            }
        }
    }
    #pragma endscop
}
