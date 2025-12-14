/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_1] [i_2] = ((var_14 % ((~(max(var_1, (arr_0 [i_0] [i_1])))))));
                    var_16 -= -var_0;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            {
                arr_15 [i_4] [i_4] = (((arr_14 [i_4] [1]) ? (arr_14 [i_4] [i_4]) : (((((arr_13 [i_3] [i_4]) >= ((49 - (arr_14 [i_4] [i_4])))))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        {
                            arr_22 [i_3] [i_3] [i_5] [i_4] = ((min(((-(arr_18 [i_6] [i_4] [i_4] [i_3])), (-31673 * 16983)))));
                            arr_23 [i_4] = ((max(var_12, ((((arr_13 [i_3] [i_4]) == (arr_12 [i_3])))))));

                            for (int i_7 = 0; i_7 < 16;i_7 += 1)
                            {
                                arr_27 [i_3] [i_5] [i_7] [i_6] [i_7] [i_4] = (max((arr_18 [i_3] [11] [i_4] [i_7]), ((1 ? 3002637304573889926 : (arr_18 [i_6 + 1] [i_5] [i_4] [i_5])))));
                                var_17 = (max(var_17, (((arr_14 [i_7] [i_5]) >= (((((arr_18 [i_5] [i_5] [i_7] [i_6 + 2]) || (arr_18 [i_3] [i_3] [i_7] [i_5])))))))));
                                arr_28 [i_4] [i_4] [1] [i_7] = ((~((min((arr_26 [i_4] [i_4]), (arr_17 [i_5] [i_4]))))));
                                arr_29 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = arr_13 [i_5] [i_7];
                            }

                            for (int i_8 = 0; i_8 < 16;i_8 += 1)
                            {
                                var_18 = (min(var_5, (1 >> 1)));
                                var_19 = (min(var_19, (((-(~1576548448835074168))))));
                                arr_32 [i_4] [i_4] = (arr_20 [i_3] [i_4] [i_4] [i_6]);
                            }
                            /* vectorizable */
                            for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
                            {
                                arr_35 [i_4] [i_4] [i_5] [i_4] [i_9] = (((arr_31 [i_5]) ^ (arr_24 [i_9] [i_5] [i_5] [i_4] [i_4] [i_3])));
                                arr_36 [i_3] [i_4] [i_4] [i_4] [i_9] [i_6] = ((1576548448835074159 == ((((var_13 < (arr_18 [i_4] [i_4] [i_4] [i_4])))))));
                                arr_37 [i_4] [i_4] [i_4] = (((arr_33 [i_3] [6] [i_5] [i_4] [i_3]) % (~65524)));
                            }
                            for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
                            {
                                var_20 = ((((1 > (max((arr_18 [i_3] [i_5] [i_4] [i_10]), 29380)))) ? (((((((arr_39 [i_4] [i_6 - 1] [i_6 + 3] [i_6]) ? (arr_30 [0] [i_4] [0] [i_4] [i_10]) : var_5)) > (~1))))) : (~1576548448835074168)));
                                var_21 = ((-1576548448835074169 ? 1478537517 : 32744));
                            }
                            for (int i_11 = 0; i_11 < 16;i_11 += 1) /* same iter space */
                            {
                                arr_44 [4] [4] [15] [i_6 + 1] [i_4] = (1 * 135434953);
                                var_22 = ((-(arr_24 [i_3] [i_5] [i_6 + 2] [i_6 + 3] [i_6 + 1] [i_6 + 2])));
                                var_23 = ((~((((arr_34 [i_3] [i_4] [i_4] [i_4] [i_3] [i_11]) & var_10)))));
                                arr_45 [i_3] [i_4] [0] [i_3] [12] = (arr_12 [i_11]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
