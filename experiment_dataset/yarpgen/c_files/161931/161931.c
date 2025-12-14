/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = (((max((max((arr_4 [i_0] [i_1]), var_2)), 69))) ? ((max((arr_0 [i_0 - 3]), (arr_0 [i_0 - 1])))) : (max((arr_1 [i_0 + 1]), var_3)));
                var_13 = var_11;
                var_14 ^= (arr_1 [i_0]);
                var_15 = 800838914457045195;
                var_16 = ((((max((arr_2 [i_0 - 2] [i_0 - 3]), (!6128260999560226660)))) ? -3053980557459202620 : (min(800838914457045205, 8662516757821706839))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                var_17 = (min(var_17, (max((((min(var_7, var_10)))), ((~(((arr_7 [i_3]) ? (arr_9 [i_3] [i_2] [i_3]) : var_11))))))));
                arr_11 [i_2] [i_3] = (((min(var_9, ((max(-800838914457045202, (arr_7 [i_2]))))))) ? ((-((-1098230163 ? var_9 : 8662516757821706839)))) : (arr_9 [i_2] [i_3] [i_3]));
                arr_12 [i_2] [9] [i_2] = ((((((arr_10 [i_2]) && -800838914457045195)))) ? (min(((509666776114768794 ? (arr_6 [10] [10]) : 13365242782988485218)), (((-800838914457045202 ? -238465887997500266 : var_7))))) : var_9);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 3; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 17;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 17;i_8 += 1)
                        {
                            {
                                var_18 = (min(var_18, (arr_13 [i_7])));
                                var_19 ^= ((-(((arr_16 [i_5 + 1]) ? (arr_15 [i_7 + 3] [i_4]) : (arr_16 [i_5 + 1])))));
                                arr_25 [i_4 + 1] [i_4 + 1] [i_6] [i_6 - 4] [i_4] [i_8] = (((-(arr_21 [i_6 - 2] [i_6] [i_6 - 1] [i_6 - 3]))));
                                var_20 = ((((var_6 < (arr_21 [i_8 - 2] [i_4] [i_5] [i_4]))) ? (((arr_22 [i_4] [i_4 - 2] [i_4] [i_4 - 1]) ? ((var_9 ? var_9 : var_11)) : 11638151133349758815)) : (min(var_6, (((15953026984691644746 ? (-9223372036854775807 - 1) : var_7)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 14;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 14;i_10 += 1)
                        {
                            {
                                var_21 = (arr_17 [i_10] [i_4] [i_4] [i_5]);
                                var_22 = ((-(((arr_27 [i_4] [i_4 - 3] [i_5 - 1] [i_6 - 4] [i_10 + 1]) ? (arr_27 [i_4] [i_4 - 3] [i_5 + 1] [i_6 - 4] [i_10 + 2]) : (arr_27 [i_4] [i_4 - 1] [i_5 - 1] [i_6 - 4] [i_10 + 2])))));
                                arr_31 [15] [i_6 - 4] [i_6 - 4] [i_9] [i_4] [i_4] = ((~(((!(((var_11 ? (arr_17 [9] [i_4] [i_6] [i_9 + 4]) : (arr_21 [14] [14] [i_9 - 2] [i_9 - 2])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
