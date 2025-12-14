/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168661
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_2) : (12237422778209321661ULL)))) ? (((/* implicit */long long int) 2147483646)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_1)) : (var_0))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_4))))));
    var_15 = ((/* implicit */_Bool) var_10);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    var_16 ^= ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_1 [i_0])))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2])))))));
                    arr_6 [i_0] [i_0] [i_2] [8] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) 28)) : (var_7)))));
                    arr_7 [i_0] [i_1] [i_2] [i_1] |= ((/* implicit */int) ((((/* implicit */_Bool) ((arr_4 [i_0] [i_0] [i_0] [(_Bool)1]) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (-31))))))) ? (9520010959209273240ULL) : (max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0] [i_1])), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) / (var_9)))))));
                    var_17 = ((/* implicit */long long int) max((var_17), (max((((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))), (min((arr_3 [i_1]), (arr_3 [i_0])))))));
                }
                for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    arr_10 [i_1] [i_3] = ((/* implicit */unsigned int) ((max((arr_8 [(unsigned short)6] [i_1] [i_1] [i_3]), (arr_8 [i_0] [i_0] [i_3] [i_1]))) / ((+(((/* implicit */int) arr_9 [i_0] [i_0]))))));
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_0 [i_1] [i_3])) : (((/* implicit */int) ((unsigned char) arr_2 [i_0] [i_0] [i_0])))))) : (var_8)));
                }
                for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    var_19 -= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((arr_11 [i_0] [i_1]) <= (var_0))) ? (((1105985877U) ^ (849862499U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4])))))), (var_0)));
                    var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) max(((-(var_11))), (var_8))))));
                    arr_15 [i_4] [i_1] [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 3445104796U)) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_13 [i_0])), (arr_2 [i_0] [i_1] [i_4])))) : (((var_6) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1])))))))));
                    var_21 = ((/* implicit */_Bool) var_6);
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (-((~((~(var_2))))))))));
                                var_23 -= arr_19 [i_0] [(short)6] [i_4] [i_5 - 1] [i_6] [i_5];
                                var_24 -= ((/* implicit */unsigned int) ((((((/* implicit */int) var_3)) == (((/* implicit */int) var_3)))) ? (min(((+(((/* implicit */int) var_10)))), (((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (arr_13 [3LL])))))) : (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (short)31783)) / (((/* implicit */int) (unsigned char)182))))) == (((((/* implicit */_Bool) arr_0 [8LL] [i_1])) ? (2514929049289271798LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_4]))))))))));
                                var_25 -= ((unsigned char) 912406903U);
                            }
                        } 
                    } 
                }
                for (signed char i_7 = 0; i_7 < 10; i_7 += 4) 
                {
                    var_26 = ((/* implicit */int) var_8);
                    arr_23 [i_0] [i_1] [i_7] [i_7] = ((/* implicit */int) arr_20 [i_0] [i_1] [(signed char)1] [i_0] [i_1] [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (signed char i_8 = 4; i_8 < 9; i_8 += 4) 
                    {
                        for (signed char i_9 = 0; i_9 < 10; i_9 += 4) 
                        {
                            {
                                arr_29 [i_0] [i_7] [i_8] [i_9] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((arr_26 [i_0] [i_1] [i_7] [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_8] [i_1] [(unsigned short)7])))))))) | (var_8)));
                                var_27 ^= ((/* implicit */long long int) min((arr_17 [i_0] [i_0] [i_7] [i_8] [(unsigned char)9] [i_0]), (arr_19 [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_8 - 4] [i_9])));
                                arr_30 [i_0] [(signed char)3] [i_0] [i_9] |= ((/* implicit */int) (((!(var_13))) ? (arr_25 [i_8 - 1] [i_8] [(signed char)1]) : (min((arr_25 [i_8 - 4] [i_8] [(signed char)2]), (arr_25 [i_8 - 2] [5U] [i_8 + 1])))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_12 [i_0] [i_0] [i_0]) + (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))) : (((((/* implicit */_Bool) 8926733114500278380ULL)) ? (8926733114500278376ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-38)))))));
                }
                arr_31 [i_1] = ((/* implicit */_Bool) arr_9 [i_1] [(unsigned char)2]);
                var_29 = 3492135049U;
            }
        } 
    } 
}
