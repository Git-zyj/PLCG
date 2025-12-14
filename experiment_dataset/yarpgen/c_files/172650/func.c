/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172650
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) /* same iter space */
                {
                    arr_7 [20U] [20U] [i_2] = ((/* implicit */unsigned int) ((int) arr_5 [i_0] [i_1]));
                    arr_8 [i_0] [20] [i_2] [i_2] = ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) var_0)) : (arr_6 [i_0]));
                    arr_9 [i_2] [22ULL] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [15U])) ? (((/* implicit */unsigned long long int) 4095U)) : (arr_2 [i_0])));
                    arr_10 [i_0] = ((/* implicit */int) (+(((unsigned int) var_3))));
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_11) : (arr_6 [i_0])));
                }
                for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) /* same iter space */
                {
                    arr_16 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_13 [i_0]) * (((/* implicit */unsigned long long int) var_5))))) ? (min(((-(18446744073709551610ULL))), (min((((/* implicit */unsigned long long int) var_11)), (18446744073709551615ULL))))) : (((/* implicit */unsigned long long int) ((var_1) * (var_7))))));
                    arr_17 [i_0] [i_0] [i_0] |= max((6ULL), (((((/* implicit */unsigned long long int) ((unsigned int) var_4))) * (arr_2 [i_1]))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        arr_20 [i_0] = ((/* implicit */int) (+(127U)));
                        /* LoopSeq 2 */
                        for (unsigned int i_5 = 0; i_5 < 23; i_5 += 3) 
                        {
                            arr_25 [20] [i_1] [i_5] [15] [i_5] [15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((4294967168U) ^ (arr_15 [i_0] [i_1] [i_3] [i_3])))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 1610612736U)) : (var_8))) : (((/* implicit */unsigned long long int) ((arr_3 [i_4] [i_5]) | (var_0))))));
                            arr_26 [i_3] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_3] [i_4] [i_5])) ? (((/* implicit */unsigned long long int) var_10)) : (var_3)));
                        }
                        for (int i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            arr_31 [i_6] [i_4] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_6);
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((arr_1 [i_4] [i_1]) > (((/* implicit */unsigned long long int) arr_30 [i_1] [i_0]))));
                            arr_33 [i_0] [i_1] [16] [i_3] [i_4] [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0])) ? (var_4) : ((-2147483647 - 1))))) ? (((var_3) >> (((var_8) - (2110457911220722647ULL))))) : (((/* implicit */unsigned long long int) (-(var_2))))));
                            arr_34 [i_0] [i_0] [2ULL] [i_0] [i_0] = ((((/* implicit */_Bool) var_12)) ? (arr_5 [19] [i_1]) : (((/* implicit */unsigned long long int) var_2)));
                        }
                    }
                    arr_35 [i_1] [i_3] = ((/* implicit */int) ((unsigned int) (+(min((((/* implicit */unsigned long long int) arr_14 [i_0] [i_0])), (arr_1 [i_1] [i_1]))))));
                    arr_36 [i_0] [i_0] = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_4)), (4095U)))) <= (max((((/* implicit */unsigned long long int) 0U)), (var_8))))))) : ((((+(var_1))) - (((var_11) | (127U))))));
                }
                arr_37 [16] = ((/* implicit */unsigned int) ((((arr_1 [i_0] [i_1]) - (((/* implicit */unsigned long long int) var_11)))) | (((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (arr_1 [i_1] [i_0])))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_8 = 0; i_8 < 22; i_8 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_9 = 0; i_9 < 22; i_9 += 1) 
            {
                for (int i_10 = 0; i_10 < 22; i_10 += 4) 
                {
                    {
                        arr_52 [i_7] [15U] [5U] [i_10] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((max((4294967285U), (arr_15 [i_10] [i_9] [i_8] [i_7]))), (max((((/* implicit */unsigned int) var_0)), (var_11)))))), (min((((unsigned long long int) var_6)), ((+(arr_39 [i_7])))))));
                        arr_53 [i_7] [i_7] = var_11;
                    }
                } 
            } 
            arr_54 [i_7] = ((/* implicit */int) 65535U);
        }
        arr_55 [18] = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) arr_51 [i_7] [i_7] [i_7]))))), (((((/* implicit */_Bool) var_11)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_10)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (0U) : (267911168U))))));
    }
    for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 1) 
    {
        arr_59 [i_11] = ((/* implicit */unsigned int) ((int) 4294967295U));
        arr_60 [i_11] = (-(((unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_44 [i_11]) : (((/* implicit */unsigned int) var_4))))));
    }
}
