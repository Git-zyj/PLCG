/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117965
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
    for (unsigned short i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    arr_8 [i_1 + 1] = ((/* implicit */signed char) var_6);
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */long long int) var_0);
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_2] [i_3] [i_0 - 2] = (signed char)0;
                        arr_14 [i_0] [i_0] = ((unsigned short) var_8);
                        var_11 ^= ((/* implicit */short) max((((/* implicit */long long int) ((((((/* implicit */_Bool) -993306577780440854LL)) ? (((/* implicit */int) (short)-4245)) : (((/* implicit */int) arr_5 [i_0 + 1])))) - (((/* implicit */int) ((_Bool) var_7)))))), (((((var_0) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) - (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_2 [i_0]))))))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        arr_18 [i_0] [i_0] = ((/* implicit */short) ((unsigned int) var_6));
                        arr_19 [19LL] = ((/* implicit */short) arr_5 [i_0]);
                        arr_20 [i_0] [i_0] = ((/* implicit */int) (short)4240);
                        arr_21 [i_0] [(short)18] [i_1] [i_0] [i_4] = min((var_8), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1 + 1] [i_1 + 1] [i_1]))) : (arr_10 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1])))));
                    }
                }
                /* vectorizable */
                for (signed char i_5 = 0; i_5 < 25; i_5 += 2) 
                {
                    arr_24 [i_0] [i_1] [i_5] = ((/* implicit */long long int) ((int) ((short) arr_1 [i_1])));
                    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_0 + 2] [i_0 + 2] [i_1])) ? (((/* implicit */unsigned long long int) arr_17 [i_0 + 2] [i_5] [i_5])) : (var_9)));
                    var_13 = ((/* implicit */signed char) ((var_0) && (((/* implicit */_Bool) var_5))));
                    arr_25 [i_0] [i_1] [i_5] = ((/* implicit */unsigned int) arr_22 [i_0] [i_1 + 4] [i_0] [i_1 + 4]);
                }
                /* LoopSeq 3 */
                for (unsigned char i_6 = 0; i_6 < 25; i_6 += 4) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 2) 
                    {
                        arr_31 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 2] = ((((((/* implicit */long long int) ((/* implicit */int) (signed char)91))) - (arr_26 [(signed char)14]))) <= (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0 - 2] [i_0 - 1] [i_1 + 4] [i_7]))));
                        var_14 = ((/* implicit */int) var_8);
                    }
                    for (signed char i_8 = 0; i_8 < 25; i_8 += 2) 
                    {
                        arr_35 [i_8] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */int) (short)-4236)) / (((/* implicit */int) (signed char)-92))));
                        var_15 = ((/* implicit */unsigned int) var_4);
                        arr_36 [i_0] [(short)13] [(short)13] [3] = ((/* implicit */short) (~(-3233865880601546687LL)));
                        arr_37 [i_0] [i_1] [i_1 - 1] [i_6] [i_6] [i_8] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_4)) ? (((((/* implicit */unsigned long long int) var_6)) / (14867650228122679440ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17080))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)70)))));
                        var_16 = ((/* implicit */long long int) 2560121460U);
                    }
                    for (long long int i_9 = 4; i_9 < 24; i_9 += 4) 
                    {
                        arr_41 [i_0] [i_1 + 3] [i_9] [i_9] [(short)19] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_27 [5LL] [i_1 - 2]) ? (((/* implicit */int) arr_27 [i_0 - 1] [i_1 + 1])) : (arr_17 [i_9 - 4] [i_1 + 1] [i_1])))) ? (((/* implicit */int) ((arr_17 [(unsigned short)2] [i_1] [i_0 + 2]) > (((/* implicit */int) arr_27 [i_9] [i_1 - 1]))))) : (((/* implicit */int) ((unsigned short) var_6)))));
                        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) arr_26 [i_0]))));
                    }
                    arr_42 [i_0] [i_1] [i_6] = ((unsigned char) ((((/* implicit */_Bool) var_10)) ? (arr_33 [i_0 - 2] [i_0] [i_0 - 2] [i_0 - 2]) : (arr_16 [i_1 + 4] [i_1 - 2] [i_0 + 1] [i_0] [i_0 - 2] [i_0 + 1])));
                    arr_43 [i_0 - 1] [i_0] [i_1 - 2] [12] = ((/* implicit */short) arr_16 [22LL] [i_1] [i_6] [i_6] [i_6] [i_6]);
                }
                /* vectorizable */
                for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 4) 
                {
                    /* LoopSeq 2 */
                    for (short i_11 = 1; i_11 < 22; i_11 += 2) 
                    {
                        arr_48 [i_11] = ((/* implicit */_Bool) var_4);
                        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)75))) | (11319057048697872129ULL))))));
                        var_19 = ((/* implicit */int) var_0);
                        /* LoopSeq 1 */
                        for (long long int i_12 = 2; i_12 < 21; i_12 += 2) 
                        {
                            arr_53 [i_11] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-92)) == (((/* implicit */int) (signed char)24))));
                            arr_54 [i_0 + 2] [i_1] [i_10] [i_10] [i_11] [i_11 + 3] [i_12] = ((/* implicit */long long int) ((short) arr_5 [i_10]));
                            arr_55 [i_11] [i_11] = ((/* implicit */_Bool) ((short) arr_30 [i_12 + 2] [i_0 - 1] [i_11 - 1] [i_1 - 1]));
                        }
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 4) 
                    {
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_30 [i_1 + 3] [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))));
                        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (+(((/* implicit */int) arr_11 [i_0 + 1] [i_1] [(signed char)19] [i_1 + 3])))))));
                    }
                    arr_58 [i_0 - 1] [i_1 + 3] [i_10] [i_10] = ((/* implicit */int) ((((/* implicit */int) arr_29 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_1 + 2])) > (((/* implicit */int) var_10))));
                }
                for (unsigned long long int i_14 = 1; i_14 < 24; i_14 += 2) 
                {
                    var_22 *= ((/* implicit */unsigned char) (signed char)0);
                    arr_61 [i_0] [i_1] [i_1] [i_14] = ((/* implicit */long long int) var_0);
                }
            }
        } 
    } 
    var_23 = ((int) ((((/* implicit */int) var_2)) % (((/* implicit */int) var_2))));
}
