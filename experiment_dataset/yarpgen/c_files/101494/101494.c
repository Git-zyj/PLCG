/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= ((((((var_2 ? var_8 : 2147483648))) ? (var_9 - var_5) : var_12)) >> (var_12 - 4066966729));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                arr_14 [1] [1] [i_1] [i_1] [1] [i_3] [1] = ((1114037368 & ((((var_2 == (arr_3 [i_0 - 1] [i_1] [i_1 + 1])))))));
                                arr_15 [i_0] [i_0] [i_1] = (((arr_2 [i_0 - 3] [i_1]) ? 3180929932 : (((arr_10 [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1] [i_1]) << (arr_11 [i_0 - 1] [i_0 - 1] [i_0 - 1])))));
                                var_14 *= ((var_1 & (max(-4, -33))));
                                var_15 ^= (arr_3 [i_0] [10] [10]);
                                var_16 = (max(var_16, ((min((((max(var_2, var_6)) + (arr_0 [i_1 + 1]))), ((max((arr_0 [i_1 + 1]), (arr_11 [i_0 + 1] [i_1 + 1] [i_1 + 1])))))))));
                            }

                            for (int i_5 = 2; i_5 < 11;i_5 += 1)
                            {
                                arr_19 [i_0] [i_0] [i_1 + 1] [i_2] [i_1] [i_5] [i_2] = 3180929932;
                                arr_20 [i_0] [i_0] [i_1] = (max((((arr_7 [i_0 - 3] [i_1 + 1]) & (arr_7 [i_0 - 1] [i_1 + 1]))), (((arr_7 [i_0 - 3] [i_1 + 1]) ? var_0 : (arr_7 [i_0 + 2] [i_1 + 1])))));
                                var_17 = var_9;
                                arr_21 [i_0] [i_0] [i_0] [i_1] [i_1] = (max((~-var_3), (((arr_0 [i_0 + 2]) << (arr_0 [i_0 - 2])))));
                                var_18 = (max((((max((arr_11 [i_0 - 3] [i_0] [i_0 + 2]), var_6)) * (max(3180929928, var_9)))), 1114037369));
                            }
                            for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                            {
                                var_19 = (((max((((arr_2 [9] [i_1]) << var_10)), ((min(var_10, (arr_24 [1] [i_1 + 1] [3] [i_1] [1] [1]))))))) ? ((var_8 ? (arr_3 [i_0 + 1] [i_1] [i_0 + 1]) : 1114037369)) : (max((var_1 << var_1), (2115635867 | var_1))));
                                arr_25 [11] [9] [i_1] [1] = (((((3180929943 <= (arr_11 [i_0 - 1] [i_0 + 1] [i_0 - 3])))) << ((min(1, var_9)))));
                            }
                            for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                            {
                                var_20 = (min(((((639753199 ? var_4 : var_8)) / -var_4)), ((max((arr_6 [i_2] [i_3] [i_7]), 1114037363)))));
                                var_21 = ((((((arr_5 [i_0 - 3] [i_1 + 1] [i_1 + 1] [i_7]) ^ (arr_5 [i_0 - 3] [i_0 - 3] [i_1 + 1] [i_3])))) ? (((arr_5 [i_0 - 1] [i_0 + 1] [i_1 + 1] [i_2]) ? (arr_5 [i_0 - 1] [i_0] [i_1 + 1] [9]) : (arr_5 [i_0 + 1] [1] [i_1 + 1] [i_7]))) : ((max((arr_5 [i_0 + 2] [i_1] [i_1 + 1] [i_0 + 2]), (arr_5 [i_0 + 1] [i_0 + 1] [i_1 + 1] [i_1]))))));
                            }
                            var_22 = (arr_27 [i_0] [i_1 + 1]);
                        }
                    }
                }
                arr_29 [i_1] = (max(((((arr_24 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]) ? ((~(arr_5 [i_0] [i_0] [i_1 + 1] [i_0]))) : ((max((arr_16 [i_1]), (arr_11 [i_0] [i_0] [i_0]))))))), (((max(455406029, var_10)) & (((((arr_18 [i_0] [1] [1] [1] [1] [i_1] [1]) && var_10))))))));
                var_23 ^= (((arr_8 [i_0] [i_1 + 1]) ^ ((((((arr_22 [12] [0] [i_1 + 1] [i_1] [12]) ? (arr_22 [12] [12] [12] [6] [8]) : var_4)))))));
            }
        }
    }
    #pragma endscop
}
