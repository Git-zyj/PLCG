/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_14 = ((!(((23035 ? ((-11 ? (arr_3 [i_0] [i_1]) : (arr_0 [i_1] [i_1]))) : (arr_1 [i_0]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] [i_1] = ((-(arr_12 [i_4 + 1] [i_0] [i_3] [i_0] [i_0] [i_0])));
                                var_15 = (min(var_15, var_12));
                                var_16 &= ((5862558926688484801 ? ((((((var_5 ? var_10 : (arr_14 [i_2] [i_2] [i_1])))) ? (arr_3 [i_3] [4]) : ((-8230706969065764744 ? 950 : 1))))) : (min(var_1, var_4))));
                                var_17 ^= (max((!var_7), (!var_7)));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 8;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            {
                                arr_30 [i_5] [i_6] [i_7] [i_5] [i_6] [i_9] = (arr_24 [i_5]);
                                arr_31 [i_9] [4] [i_7] [4] [i_5] |= ((max((arr_13 [i_8 + 4] [i_8] [i_8] [i_8 + 1]), (max(1, (arr_23 [i_9] [i_7] [i_5]))))));
                                var_18 |= ((+(((arr_11 [i_5] [i_8 + 1] [i_8] [i_8 + 1] [i_9]) ? 106 : var_1))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 11;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        {
                            var_19 = (max(var_19, (((((max((max(22988, var_8)), (((var_2 - (arr_9 [i_5] [i_6] [i_10] [0]))))))) ? (((max((arr_24 [4]), var_2)))) : (((((1 ? 6 : 55984))) ? 6934970796170246279 : -2128694976083574822)))))));
                            arr_37 [8] [8] &= (!var_3);
                            arr_38 [i_5] = ((((-951 ? ((var_0 ? 17402 : var_7)) : var_9)) - ((-(arr_33 [i_10 + 1] [i_10 + 1] [i_10 + 1])))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 12;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        {
                            arr_44 [i_6] [i_6] [0] [0] &= (var_11 ? (((((arr_12 [i_5] [i_5] [0] [i_5] [i_5] [i_5]) >= var_12)))) : ((((arr_21 [i_5]) >= ((950 - (arr_12 [i_5] [i_6] [i_12] [4] [i_5] [4])))))));
                            var_20 = (max(var_20, (((50 ? 15360 : 281088312)))));
                            var_21 = (max(var_21, ((((((arr_6 [4] [i_5]) + 9223372036854775807)) >> (((((((-2147483647 - 1) + 17458)))) - 17441)))))));
                            arr_45 [i_5] [i_5] [i_12] [i_13] = ((20321 ? ((min(var_12, (~114)))) : (((arr_26 [i_5] [i_6] [i_12] [i_13] [i_13] [i_13]) >> (var_8 - 4385178310591306270)))));
                            arr_46 [i_5] [i_5] [i_5] [i_5] = (((((6807 ? (arr_4 [i_6]) : (arr_3 [i_5] [i_5]))) + 9223372036854775807)) >> (-9330 / var_0));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 12;i_14 += 1)
                {
                    for (int i_15 = 2; i_15 < 10;i_15 += 1)
                    {
                        {
                            var_22 ^= var_5;
                            var_23 = (min(var_23, ((max((arr_36 [i_5] [i_5]), var_11)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
