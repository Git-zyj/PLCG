/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = (((arr_3 [i_1 - 2] [i_1 + 1]) ? ((var_7 ? var_3 : (((arr_5 [i_1] [i_1]) | (arr_5 [i_1] [i_1 - 1]))))) : var_13));
                var_16 = (((((arr_1 [i_1 + 2] [i_1]) || (((arr_5 [i_1] [i_1]) && var_4)))) ? ((((arr_3 [i_1 - 2] [i_1]) ? var_10 : ((var_4 ? var_9 : var_10))))) : (min(((var_0 ? var_0 : var_2)), (arr_3 [i_0] [i_1])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            {
                arr_14 [i_2] [i_3] = ((~(!var_6)));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_17 -= ((!(!var_0)));

                            for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                            {
                                var_18 = ((!((min(var_15, (arr_9 [1] [7]))))));
                                arr_23 [i_2] [i_5] [i_4] [i_4] [i_5] [i_5] [4] = (((var_15 ? var_15 : (arr_16 [i_2]))));
                                arr_24 [i_6] [i_6] [i_5] [i_5] [i_5] [4] [i_2] = (((((max((arr_0 [i_2]), (arr_0 [i_2])))) ? (var_5 && var_2) : ((var_15 ? var_12 : (arr_9 [i_2] [8]))))));
                            }
                            for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
                            {
                                arr_28 [i_5] [i_5] [i_5] [i_5] [i_5] = ((var_13 % ((var_13 ? var_15 : (arr_20 [i_3 - 1] [i_3 - 1] [i_3] [i_3 + 1] [i_3] [i_3])))));
                                var_19 = ((~(arr_1 [i_3 - 1] [i_3 - 1])));
                                var_20 = (max(var_20, (((((((var_4 ? var_2 : var_13))) ? ((var_4 ? var_0 : var_9)) : (((var_9 ? (arr_7 [i_5]) : var_3)))))))));
                                arr_29 [i_5] = (((var_10 ? (max((arr_3 [i_2] [i_2]), var_7)) : var_4)));
                            }
                            for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
                            {
                                var_21 = ((var_14 ? var_10 : (arr_9 [i_2] [i_2])));
                                var_22 = ((var_11 ? (((arr_10 [i_2] [i_2]) ? (arr_17 [3] [i_3 - 1]) : var_15)) : (((max((arr_17 [i_3] [i_4]), (arr_10 [i_8] [i_5])))))));
                                var_23 ^= min(((var_2 ? -var_8 : ((-(arr_15 [i_4] [2] [2]))))), var_8);
                                arr_33 [i_2] [i_5] [i_2] [8] [i_2] = (min(((((arr_27 [i_8] [i_3] [i_5] [3] [i_8]) || (((var_8 ? var_0 : var_2)))))), ((~(~var_7)))));
                            }
                            var_24 *= (max((arr_27 [i_4] [i_4] [0] [i_4] [i_4]), (((arr_27 [i_5] [i_5] [4] [i_5] [i_5]) ? var_7 : (arr_27 [i_5] [i_4] [6] [i_5] [0])))));
                        }
                    }
                }
                var_25 = ((((((var_14 ? var_0 : (arr_15 [2] [2] [1]))) < (~var_9))) ? (((arr_12 [i_3 + 1] [i_3 - 1]) * (arr_32 [i_3 + 1] [i_2] [i_3 + 1] [i_2] [i_2]))) : (((-((var_15 << (((arr_1 [i_3] [1]) - 11924773561691544442)))))))));
            }
        }
    }
    #pragma endscop
}
