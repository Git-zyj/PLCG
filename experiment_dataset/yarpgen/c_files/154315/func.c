/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154315
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
    var_17 += ((/* implicit */int) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    var_18 |= max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_3 [i_0] [i_1] [i_2]))) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_2])) : (((((/* implicit */int) (short)-17810)) ^ (((/* implicit */int) (signed char)-111))))))), (max((min((var_12), (((/* implicit */unsigned int) arr_8 [i_0])))), (((/* implicit */unsigned int) (_Bool)1)))));
                    var_19 += ((/* implicit */unsigned int) ((arr_0 [i_2] [i_0]) << (((((((/* implicit */_Bool) arr_6 [i_1] [i_1] [10U] [10U])) ? (((/* implicit */unsigned long long int) ((589336928U) ^ (((/* implicit */unsigned int) arr_5 [i_0] [2ULL]))))) : (min((((/* implicit */unsigned long long int) var_7)), (arr_0 [i_1] [i_2]))))) - (3931671835ULL)))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_20 += ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (arr_11 [i_0] [(short)3] [i_2] [i_3]))) ? (((((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_3] [i_4])) ? (arr_11 [i_2] [i_3] [i_2] [i_2]) : (arr_11 [i_0] [i_1] [i_2] [0ULL]))) : (((arr_11 [i_0] [i_2] [i_3] [9]) / (arr_11 [i_0] [(short)3] [i_2] [i_4])))));
                                var_21 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -2028678884)) && (((/* implicit */_Bool) 2028678867))));
                                var_22 -= ((((/* implicit */int) (_Bool)1)) << (((-2013070159) + (2013070166))));
                                arr_15 [i_0] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((2013070158) > (((/* implicit */int) arr_7 [i_3] [i_2] [i_1]))))), (var_15)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 12; i_6 += 3) 
                        {
                            {
                                arr_22 [i_6] [i_6] [i_6] [i_0] = ((/* implicit */unsigned short) ((long long int) var_8));
                                var_23 = ((/* implicit */_Bool) (+(((-2028678884) & ((-2147483647 - 1))))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_7 = 2; i_7 < 10; i_7 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_8 = 4; i_8 < 8; i_8 += 2) 
                    {
                        for (signed char i_9 = 0; i_9 < 12; i_9 += 1) 
                        {
                            {
                                var_24 = max((arr_13 [(signed char)9] [i_1] [i_7 + 2] [i_7 + 2] [i_9] [i_9]), (((/* implicit */unsigned int) ((_Bool) ((((/* implicit */unsigned long long int) 3068841912U)) / (17591917608960ULL))))));
                                arr_29 [i_8 + 4] [i_1] [i_7] = ((/* implicit */signed char) min((((/* implicit */int) (_Bool)1)), (((((((/* implicit */int) var_2)) / (((/* implicit */int) arr_3 [i_1] [i_8] [i_9])))) - ((((_Bool)1) ? (-1732182409) : (((/* implicit */int) (short)15212))))))));
                            }
                        } 
                    } 
                    var_25 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)56119)) ? (((/* implicit */unsigned int) min((((/* implicit */int) arr_21 [(unsigned short)4] [(unsigned short)4] [i_1] [i_0])), (arr_14 [i_0] [i_1] [i_7] [i_7] [i_7])))) : (((unsigned int) arr_16 [i_0] [i_1] [i_1] [i_1] [i_1]))))) ? (arr_13 [i_0] [i_1] [i_1] [i_7 - 1] [i_7] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_0] [i_1] [i_7 + 2] [i_0] [(unsigned short)4])))));
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 12; i_10 += 1) 
                {
                    arr_34 [i_0] [i_1] [i_10] = ((/* implicit */unsigned int) ((unsigned short) (signed char)44));
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 1; i_11 < 11; i_11 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483647)) ? (-661641456) : (((/* implicit */int) (_Bool)1)))))));
                        var_27 += ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) var_6))) * (((/* implicit */int) arr_21 [i_11 - 1] [i_11 - 1] [i_0] [i_11 - 1]))));
                        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) arr_4 [i_0]))));
                        var_29 += ((/* implicit */long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))) / (arr_9 [i_10])));
                        arr_38 [i_0] [i_1] [i_10] = ((/* implicit */int) var_12);
                    }
                    var_30 = ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_10] [i_10])) ? (((arr_19 [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51501))))) : (((/* implicit */unsigned long long int) var_16)));
                    var_31 -= ((/* implicit */int) ((arr_11 [i_1] [i_1] [i_0] [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) -2013070162))))));
                }
                for (signed char i_12 = 0; i_12 < 12; i_12 += 4) 
                {
                    var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) (((~(((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_4 [(signed char)8]))))))) > (((/* implicit */int) var_2)))))));
                    arr_42 [i_12] [i_0] [6U] [i_0] &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((arr_11 [i_0] [i_0] [i_0] [i_0]) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [i_1] [i_1])) ? (arr_6 [i_0] [i_0] [i_12] [i_0]) : (((/* implicit */int) (signed char)-56)))))))) & (max((((/* implicit */unsigned long long int) 0U)), (((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
                    var_33 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)14034)) ? (-2013070145) : (((/* implicit */int) (signed char)-63))));
                    var_34 -= ((/* implicit */signed char) arr_19 [i_0]);
                    arr_43 [i_0] [i_0] = max((min((((((/* implicit */_Bool) var_16)) ? (arr_13 [i_0] [i_1] [i_0] [i_1] [i_12] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [(signed char)6] [(signed char)5] [(_Bool)1] [(_Bool)1]))))), (((/* implicit */unsigned int) min((arr_4 [i_0]), ((unsigned short)49765)))))), (((/* implicit */unsigned int) (!(var_7)))));
                }
                arr_44 [i_0] [5U] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((4294967295U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))))) ^ (max((((/* implicit */unsigned long long int) var_1)), (max((1699212009926970885ULL), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0]))))))));
            }
        } 
    } 
    var_35 = ((/* implicit */int) (signed char)-24);
    var_36 = ((/* implicit */unsigned long long int) max((max((((((/* implicit */_Bool) var_11)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned int) ((unsigned short) var_15))))), (((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)60938)) || (((/* implicit */_Bool) 743399878U))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (var_1))))))));
}
