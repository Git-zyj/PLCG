/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187623
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
    var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */int) (signed char)92)) < (((/* implicit */int) (unsigned short)11098)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 523264)) && (((/* implicit */_Bool) (unsigned short)25431)))))) : (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_0)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((var_3) / (-9223372036854775788LL)));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0 - 1])) != (((/* implicit */int) var_10))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [7LL] [i_1] = ((/* implicit */signed char) var_3);
        arr_7 [i_1] [i_1] = ((var_13) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) (short)122);
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                {
                    arr_14 [i_1] [i_2] [3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_1] [i_2] [i_3] [i_3])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_14))));
                    /* LoopSeq 3 */
                    for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        arr_19 [i_2] [i_4] = ((((arr_0 [i_1]) ? (((/* implicit */int) arr_15 [i_1] [i_2] [i_1] [i_2] [i_3] [i_4])) : (((/* implicit */int) (short)122)))) < (((/* implicit */int) arr_17 [i_1] [i_2] [i_3] [i_1])));
                        arr_20 [i_1] [(signed char)8] [i_3] [(signed char)8] = ((/* implicit */long long int) ((arr_9 [i_1] [i_4]) ? (((/* implicit */int) (short)-110)) : (((/* implicit */int) var_0))));
                        arr_21 [8ULL] [i_2] [i_3] [i_4] [i_4] = ((((/* implicit */int) arr_5 [i_1] [i_4])) == (((/* implicit */int) var_16)));
                    }
                    for (short i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        arr_26 [i_2] [0ULL] [i_2] [i_2] [i_3] [i_5] = ((/* implicit */_Bool) (signed char)23);
                        arr_27 [i_1] [(unsigned short)4] [(unsigned short)4] [i_1] [i_5] [2ULL] = ((/* implicit */short) arr_23 [i_1] [i_2] [i_3] [i_5]);
                        arr_28 [i_2] [6LL] [i_2] [i_3] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (arr_13 [i_1] [i_2] [i_2] [i_5]) : (((/* implicit */unsigned long long int) var_7))));
                        /* LoopSeq 1 */
                        for (signed char i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            arr_31 [(short)6] [i_2] [i_5] [i_6] = ((/* implicit */int) ((((/* implicit */int) arr_10 [i_5] [i_6])) >= (((/* implicit */int) var_2))));
                            arr_32 [i_1] [i_5] [i_5] [i_5] [i_6] [i_1] [i_6] = ((/* implicit */signed char) (~(((/* implicit */int) (short)149))));
                            arr_33 [i_2] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) * (0ULL))));
                        }
                        arr_34 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_12 [i_3] [i_5])) : (((/* implicit */int) arr_30 [i_2] [i_5] [i_5]))));
                    }
                    for (int i_7 = 1; i_7 < 6; i_7 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_8 = 2; i_8 < 6; i_8 += 3) 
                        {
                            arr_40 [i_2] [i_3] = (!(((/* implicit */_Bool) var_2)));
                            arr_41 [2LL] [(_Bool)0] [i_2] [(_Bool)1] [3] [i_8 + 1] [(signed char)2] = ((/* implicit */unsigned char) ((arr_24 [i_1] [i_2] [i_1]) - (((/* implicit */unsigned long long int) arr_36 [i_1] [i_1] [i_3] [i_3] [i_8]))));
                            arr_42 [i_1] [0ULL] [6] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_5 [i_7 - 1] [i_8 + 1])) : (((/* implicit */int) arr_5 [i_7 + 3] [i_8 + 4]))));
                        }
                        for (signed char i_9 = 0; i_9 < 10; i_9 += 3) 
                        {
                            arr_46 [i_1] [i_2] [i_2] [i_3] [(unsigned char)9] [1U] &= ((/* implicit */long long int) (+(var_13)));
                            arr_47 [i_1] [i_2] [i_3] [8ULL] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */int) var_5)) + (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) var_9)) ^ (((/* implicit */int) (unsigned short)59852))))));
                            arr_48 [i_2] [i_3] [i_9] = ((/* implicit */long long int) ((unsigned long long int) (unsigned char)2));
                            arr_49 [(_Bool)1] [i_7] [i_9] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)1)) >= (((/* implicit */int) (unsigned short)59852))));
                        }
                        for (long long int i_10 = 0; i_10 < 10; i_10 += 3) 
                        {
                            arr_53 [i_3] [i_7] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_9 [i_1] [i_2]) && ((_Bool)1))))) > (var_3)));
                            arr_54 [i_10] = ((/* implicit */signed char) var_6);
                            arr_55 [i_1] [i_10] [i_3] [i_7 + 1] [8] [i_10] [3] = ((/* implicit */unsigned char) ((var_6) ? (arr_50 [i_2] [i_7 + 3] [i_7] [i_10] [i_10]) : (arr_50 [i_3] [i_7 + 3] [6LL] [i_7] [i_10])));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            arr_58 [i_2] [i_2] [i_7] [(unsigned short)7] = (!(((/* implicit */_Bool) var_16)));
                            arr_59 [i_1] [i_2] [i_3] [i_7] = ((/* implicit */_Bool) var_4);
                            arr_60 [(signed char)1] [i_2] [i_3] [(signed char)7] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) 5329459734606158823LL)) && (((/* implicit */_Bool) arr_38 [i_7 - 1]))));
                        }
                        arr_61 [(_Bool)1] [(_Bool)1] = ((/* implicit */long long int) (~(arr_50 [i_1] [i_2] [i_3] [4U] [i_2])));
                    }
                    arr_62 [(signed char)4] [(signed char)4] [8ULL] = ((/* implicit */unsigned long long int) var_14);
                    arr_63 [(unsigned char)8] [(unsigned char)8] [(unsigned char)8] [i_3] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) < (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-122))))));
                }
            } 
        } 
    }
    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
    {
        arr_67 [i_12] [i_12 + 1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_12] [16LL])) ? (min((((/* implicit */long long int) var_0)), (var_7))) : (((arr_64 [i_12 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) (short)99))) : (arr_65 [i_12 + 1]))))) % (((/* implicit */long long int) max((964856266), (((/* implicit */int) arr_0 [i_12 + 1])))))));
        arr_68 [i_12] = ((/* implicit */long long int) (~(((/* implicit */int) var_1))));
    }
}
