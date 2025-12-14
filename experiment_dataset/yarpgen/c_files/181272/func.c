/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181272
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
    var_20 = ((/* implicit */int) var_11);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 7; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 1; i_2 < 7; i_2 += 1) 
                {
                    var_21 ^= ((/* implicit */unsigned char) var_18);
                    arr_7 [i_2] = ((/* implicit */int) ((((/* implicit */int) (short)-28970)) != (((/* implicit */int) ((((var_18) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)511))))) == (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_1])) / (arr_0 [i_0 + 2] [i_0 + 2])))))))));
                }
                for (unsigned long long int i_3 = 3; i_3 < 8; i_3 += 1) 
                {
                    var_22 = ((/* implicit */long long int) (~(((unsigned long long int) 31457280))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 2) 
                        {
                            {
                                arr_17 [i_0] [i_0 - 1] [i_0] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)597)) + (((/* implicit */int) (unsigned char)127))))) || (((/* implicit */_Bool) arr_2 [i_0] [i_0 + 1]))));
                                var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((arr_13 [2] [i_1 + 3] [i_3] [i_4] [7LL]) >> (31U))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_0] [i_1] [i_3])) | (((/* implicit */int) arr_9 [i_3] [i_3] [i_3] [i_1]))))), (arr_14 [6] [i_1] [i_1] [2U] [i_1 - 4])))) ? (((/* implicit */unsigned long long int) (((((~(((/* implicit */int) var_17)))) + (2147483647))) << (((((arr_1 [i_1 - 4] [i_1 - 4]) + (380790651))) - (4)))))) : (max((((/* implicit */unsigned long long int) arr_10 [i_0] [i_3])), (672090844670772366ULL)))));
                    var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_14) ? (((/* implicit */int) arr_9 [i_0] [i_3] [i_3] [i_3])) : (((/* implicit */int) (short)4954))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (arr_12 [i_0 + 1] [i_0 + 1] [i_1] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (short)597))))) : (((/* implicit */long long int) arr_13 [i_0 - 1] [i_3 + 2] [i_1 + 2] [i_0 + 2] [i_1 + 3]))))) ? (((((var_18) % (((/* implicit */unsigned long long int) arr_10 [i_1] [i_3])))) >> (((((((/* implicit */int) arr_2 [i_0] [i_0])) >> (((((/* implicit */int) (short)597)) - (592))))) - (309))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_19), (var_14))))));
                    var_26 = arr_5 [i_1 - 3] [i_0];
                }
                for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 2) 
                {
                    var_27 = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9)) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0])) ? (988412138691204676ULL) : (arr_19 [i_0] [i_1]))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)15)), (arr_18 [i_0])))) ? (((arr_13 [i_0] [i_1] [i_1] [i_6] [i_6]) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0 + 1] [i_0 + 2]))))))));
                    var_28 += ((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_16 [i_0] [i_0] [i_0 + 2]))))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_0 + 2] [i_0 + 2] [i_6])) * (((/* implicit */int) var_1))))) ? (((arr_13 [i_0] [i_0] [i_1] [i_6] [i_6]) & (((/* implicit */unsigned int) arr_8 [i_6])))) : (arr_10 [i_0 + 2] [i_0 + 1])))));
                    var_29 = ((/* implicit */unsigned short) var_2);
                    var_30 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 2754770946U)), (arr_14 [1LL] [1LL] [1LL] [i_6] [i_6])))) ? (((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 1])) : ((+(var_9)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_1 - 1] [i_1 + 3] [i_1 + 2] [i_1 - 2])) ? (((/* implicit */int) (short)-22587)) : (((/* implicit */int) arr_4 [i_0 + 2] [i_0 + 1] [i_1 + 2]))))) : (31U)));
                }
                var_31 -= ((/* implicit */_Bool) arr_8 [i_1]);
                var_32 |= ((/* implicit */unsigned long long int) (unsigned short)9714);
                /* LoopSeq 2 */
                for (short i_7 = 4; i_7 < 6; i_7 += 4) 
                {
                    arr_23 [i_0] [i_7] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((int) (_Bool)0))), (((((/* implicit */_Bool) arr_18 [i_0 - 1])) ? (arr_18 [i_0 + 2]) : (((/* implicit */unsigned long long int) 1972785895U))))));
                    /* LoopSeq 4 */
                    for (long long int i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        arr_26 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) arr_9 [i_8] [i_8] [i_8] [i_0]);
                        var_33 = ((/* implicit */unsigned short) min((max((((/* implicit */int) (signed char)-7)), (((((((/* implicit */int) (signed char)-100)) + (2147483647))) >> (((var_10) - (1776621033717829018LL))))))), (((/* implicit */int) (signed char)98))));
                        /* LoopSeq 1 */
                        for (int i_9 = 0; i_9 < 10; i_9 += 4) 
                        {
                            var_34 = ((/* implicit */unsigned char) (_Bool)1);
                            var_35 = ((/* implicit */signed char) var_7);
                        }
                        arr_30 [6ULL] [6ULL] [i_8] &= ((/* implicit */long long int) var_18);
                    }
                    for (unsigned long long int i_10 = 3; i_10 < 6; i_10 += 2) 
                    {
                        var_36 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_9)) ? ((+(arr_10 [i_1] [i_7]))) : ((((_Bool)1) ? (arr_10 [i_10 - 1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_0] [i_0] [i_7] [i_10 - 1]))))))) >> (((((((((/* implicit */int) (unsigned short)13115)) + (((/* implicit */int) arr_16 [2] [i_1] [3])))) * ((+(((/* implicit */int) arr_6 [i_10] [i_1 - 2] [i_10])))))) + (13035)))));
                        var_37 = ((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned short) (signed char)92))))) ? (var_5) : (((/* implicit */long long int) (-(arr_10 [i_1 - 3] [i_7 - 1])))));
                        var_38 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_9)), (31U)))) ? (((((/* implicit */int) arr_9 [i_10 - 2] [i_7] [i_10 - 1] [i_10 + 2])) << (((/* implicit */int) arr_9 [i_10 - 3] [i_1] [i_10 - 1] [i_10 - 2])))) : (((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */int) arr_9 [i_10 - 1] [i_1] [i_10 - 1] [i_10 + 4])) : (((/* implicit */int) arr_9 [i_10 + 2] [i_1] [i_10 - 3] [i_10 - 3]))))));
                    }
                    for (unsigned long long int i_11 = 2; i_11 < 7; i_11 += 4) 
                    {
                        arr_36 [i_0] [i_1] [i_7] [i_11 - 2] [(signed char)3] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0] [i_1] [i_7])) ? (((/* implicit */int) arr_9 [i_0] [i_7] [i_7] [i_0])) : (arr_34 [i_0 + 1] [i_0] [i_0])))) || (((/* implicit */_Bool) 0U)))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3031676684869234771ULL)) ? (((/* implicit */int) arr_6 [i_0] [i_1 + 1] [i_0])) : (((/* implicit */int) arr_4 [i_7] [i_7] [i_7]))))) ? (((788293186U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)6))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))));
                        var_39 ^= (~(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) var_18)))))));
                        var_40 = ((/* implicit */int) arr_18 [i_1]);
                        var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_25 [i_0 + 1] [i_0] [i_0 + 2] [i_0 + 1] [i_1] [i_1 + 1]) >> (((arr_18 [i_1 - 1]) - (17296392689757910755ULL)))))) ? (((/* implicit */int) var_11)) : (((max((arr_24 [i_0] [i_1] [i_11]), (((/* implicit */int) var_1)))) + (arr_1 [i_1 - 1] [i_7 + 2])))));
                    }
                    for (long long int i_12 = 1; i_12 < 9; i_12 += 4) 
                    {
                        var_42 += ((/* implicit */short) min((((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_1] [i_1 + 1] [i_7 - 3])) ? (arr_14 [i_1] [i_1 - 4] [7LL] [i_1 - 4] [i_7 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-63))))), (((/* implicit */unsigned long long int) ((arr_14 [i_0] [i_0] [5] [i_1 - 2] [i_7 + 2]) < (35184372088831ULL))))));
                        var_43 = ((/* implicit */int) min((var_43), (((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) < (((/* implicit */int) arr_39 [i_0 - 1] [i_12]))))), (((arr_13 [i_0] [i_0] [i_0 + 1] [i_0 - 1] [5]) / (arr_13 [i_0] [i_0 + 1] [i_0 + 2] [i_0] [i_0]))))))));
                        var_44 = ((/* implicit */short) 268435455U);
                    }
                    var_45 = ((((/* implicit */int) (short)1746)) & (((/* implicit */int) (_Bool)1)));
                }
                /* vectorizable */
                for (short i_13 = 1; i_13 < 9; i_13 += 1) 
                {
                    arr_43 [i_0] [i_1] |= ((/* implicit */long long int) ((((arr_10 [3LL] [i_13]) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32768))))) ? (arr_3 [i_0 + 2] [i_0 + 2]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-92)))))));
                    var_46 = ((/* implicit */signed char) ((unsigned int) ((unsigned int) (_Bool)1)));
                    var_47 = ((/* implicit */_Bool) arr_2 [i_0 + 1] [i_1]);
                }
            }
        } 
    } 
}
