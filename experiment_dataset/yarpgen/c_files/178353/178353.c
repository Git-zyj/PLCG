/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_4] [i_4] [i_4] [i_4] = ((((min((arr_4 [i_0 - 1] [i_0] [i_2 - 2]), ((max((arr_7 [i_0 + 1] [11] [i_0]), (arr_2 [i_0 + 1] [i_0] [i_0 - 1]))))))) ? ((-(arr_6 [i_0 - 1] [i_0] [i_0] [15]))) : (max(29358, ((((arr_4 [3] [i_0] [i_2 - 1]) && var_9)))))));
                                var_18 = (min(var_18, ((((arr_2 [i_0] [i_0] [i_0]) ^ var_6)))));
                                var_19 = (2305843009211596800 || 1);
                            }
                        }
                    }
                    arr_13 [i_1] [i_1] [i_1] &= ((((((!(((4294967288 ? var_16 : 3890845357349630250))))))) - 2305843009211596800));
                }
            }
        }
    }
    var_20 -= (((((-7639 & var_8) + 2147483647)) >> (((~var_4) - 32047))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 13;i_6 += 1)
        {
            {
                var_21 = (min(var_21, (((-((~(min((arr_18 [i_6]), (arr_0 [i_5] [i_5]))))))))));

                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    var_22 = (max((!var_1), ((-(arr_4 [i_5] [i_6] [i_5])))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                arr_31 [i_5] [i_6] [i_7] [i_5] [i_9] [i_7] [i_8] = ((((max((~var_10), ((min((arr_23 [i_5] [i_5] [i_5] [i_5]), var_4)))))) && (var_4 / var_16)));
                                var_23 = ((~(min((max(var_2, (arr_10 [i_5]))), 48))));
                            }
                        }
                    }
                }
                for (int i_10 = 2; i_10 < 13;i_10 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        for (int i_12 = 4; i_12 < 10;i_12 += 1)
                        {
                            {
                                arr_41 [i_5] [i_5] = (min((arr_22 [i_5]), (((!(var_8 || 9223372036854775796))))));
                                var_24 |= min((min((arr_5 [i_6] [i_6] [i_10 - 2] [i_12 + 1]), (arr_30 [i_6 - 2] [i_6 - 1] [i_10 - 2] [i_12 + 1] [i_12]))), (arr_28 [i_6] [i_6] [i_10 - 1] [i_12 - 4] [i_12 + 3] [i_12] [i_12]));
                            }
                        }
                    }
                    arr_42 [i_5] [i_5] = var_3;
                }
                /* vectorizable */
                for (int i_13 = 1; i_13 < 13;i_13 += 1)
                {
                    arr_46 [i_13 + 1] [i_5] = (~225);
                    var_25 = (arr_43 [i_5] [i_13] [i_13 - 1] [i_6 - 1]);
                    var_26 = (arr_22 [i_6 + 1]);
                    arr_47 [i_5] [i_5] = var_11;
                    var_27 *= ((((((arr_2 [i_13] [i_13] [i_5]) ? -2305843009211596796 : (arr_6 [i_5] [i_6] [i_5] [i_6])))) ? ((((arr_21 [i_5] [i_5]) < var_9))) : (((arr_15 [i_5]) << (var_2 - 1892807513)))));
                }
                var_28 = (arr_30 [i_6 - 2] [i_6 - 2] [i_6 + 1] [i_6 - 2] [i_6 - 2]);
            }
        }
    }
    var_29 = (~-var_6);
    #pragma endscop
}
