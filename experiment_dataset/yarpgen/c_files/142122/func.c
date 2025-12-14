/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142122
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (-6220605937102572237LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-116)))))) ? (((/* implicit */long long int) min((((var_4) >> (((((/* implicit */int) var_14)) - (15509))))), (((unsigned int) var_7))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_14))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */long long int) ((/* implicit */int) var_10))) - (511LL)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 9; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 |= ((/* implicit */unsigned int) arr_5 [i_0] [i_0]);
                                var_18 -= ((/* implicit */unsigned int) (+(((/* implicit */int) ((signed char) (((_Bool)1) ? (arr_5 [i_0 + 3] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [(signed char)2] [(signed char)2] [i_2] [i_2])))))))));
                                arr_14 [i_4] [i_0] [i_1] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_11 [i_3] [i_0] [i_0] [i_0]))));
                            }
                        } 
                    } 
                    arr_15 [i_0 + 2] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (short)24611))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) min((arr_10 [i_0] [i_1] [i_2] [i_2]), (((/* implicit */signed char) (_Bool)1))))) >> (((max((((/* implicit */unsigned int) (_Bool)1)), (var_7))) - (4108737819U)))))) : (((unsigned int) ((arr_9 [i_0] [i_1 + 1] [i_1 - 3] [i_1] [i_1 + 1]) & (arr_4 [i_0] [i_0])))));
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 3; i_5 < 7; i_5 += 2) 
                    {
                        var_19 |= ((/* implicit */long long int) (_Bool)1);
                        var_20 = ((/* implicit */signed char) ((((unsigned int) arr_5 [i_1] [i_1 - 3])) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_3 [i_0] [i_0 + 1])) : (((/* implicit */int) arr_0 [i_5 + 4])))))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) var_15);
                        arr_21 [i_0] [i_0] [i_1] [i_1] [i_2] [i_6] = ((/* implicit */unsigned int) var_2);
                        /* LoopSeq 4 */
                        for (int i_7 = 0; i_7 < 11; i_7 += 1) /* same iter space */
                        {
                            arr_25 [i_0] [i_0] [i_2] [i_6] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((long long int) arr_22 [i_0] [i_0] [i_0]))) < (min((arr_17 [i_0] [i_0] [i_2]), (((/* implicit */unsigned long long int) (_Bool)1))))))) - (((/* implicit */int) ((signed char) arr_24 [i_1] [i_1 + 1] [i_1] [i_1] [i_1 - 3] [i_1 + 1])))));
                            arr_26 [i_0] = ((/* implicit */signed char) var_5);
                            var_22 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_0 - 1] [i_0 + 2] [i_1 - 1] [i_1 - 2])) || (((/* implicit */_Bool) arr_20 [i_0 - 1] [i_0 + 2] [i_1 + 1] [i_1 - 3]))))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_0 + 2] [i_0 + 3] [i_1 - 3] [i_1 - 2])))))));
                        }
                        for (int i_8 = 0; i_8 < 11; i_8 += 1) /* same iter space */
                        {
                            var_23 -= ((/* implicit */short) (!(((/* implicit */_Bool) (~((+(((/* implicit */int) arr_27 [i_0] [i_6] [i_0] [i_0] [i_0])))))))));
                            var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_27 [i_8] [i_0] [i_2] [i_0] [i_0])))) ? (arr_12 [i_8] [i_2] [i_2] [i_1 - 2] [i_1 - 2]) : (var_5))))));
                            arr_29 [i_8] [i_6] [i_2] [i_6] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_6] [i_2] [i_6] [i_8])) % (((/* implicit */int) arr_13 [i_6] [i_1 - 3] [i_2] [i_6]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) arr_13 [i_6] [i_2] [i_1] [i_6]))))) : (((/* implicit */int) arr_13 [i_6] [i_1] [i_2] [i_6]))));
                            arr_30 [i_1] [i_0] [i_2] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_22 [i_0] [i_0 + 2] [i_2])) ? (arr_17 [i_0 + 1] [i_2] [i_0 + 1]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_22 [i_0 + 2] [i_0 + 2] [i_0 + 1])))))))));
                            var_25 = ((/* implicit */_Bool) (-(min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_0] [i_1] [i_0] [i_6] [i_8]))) ^ (arr_7 [i_2])))), (((((/* implicit */long long int) var_7)) / (arr_1 [i_0])))))));
                        }
                        for (int i_9 = 0; i_9 < 11; i_9 += 1) /* same iter space */
                        {
                            arr_33 [i_2] [i_0] = 25165824U;
                            arr_34 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((signed char) 4294967284U));
                            arr_35 [i_0] [i_1] [i_0] [i_6] [i_0] = ((/* implicit */unsigned int) min((var_10), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-29))) <= (3022486213U))))));
                        }
                        for (int i_10 = 0; i_10 < 11; i_10 += 1) /* same iter space */
                        {
                            arr_38 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_8 [i_0] [i_0 + 2] [i_1 - 3] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_0 - 1] [i_1 + 1] [i_1]))))) ? (((/* implicit */unsigned int) min(((~(((/* implicit */int) var_14)))), (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_12))))))) : ((~(((arr_12 [i_0] [i_1 - 1] [i_2] [i_6] [i_10]) * (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))));
                            arr_39 [i_0] [i_1] [i_1] [i_1 - 1] [i_1 - 1] [i_0] [i_0] = arr_2 [i_0];
                            arr_40 [i_0] [i_1 + 1] [i_0] [i_0] [i_1 + 1] [i_2] [i_1 + 1] = ((/* implicit */int) arr_18 [i_1 - 2] [i_0]);
                            arr_41 [i_0] [i_0 + 3] [i_0] [i_0 + 3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_23 [i_0] [i_2]), (((/* implicit */int) arr_11 [i_6] [i_6] [i_0] [i_6]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_19 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_1 + 1] [i_0] [i_2] [i_6] [i_10]))) : (max((var_6), (((/* implicit */unsigned long long int) var_8)))))))));
                        }
                    }
                    for (signed char i_11 = 0; i_11 < 11; i_11 += 1) 
                    {
                        arr_44 [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) ((unsigned int) min((arr_37 [i_0 - 1] [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0 - 1] [i_0] [i_0 + 1]), (((((/* implicit */unsigned long long int) 1795216906U)) ^ (arr_5 [i_11] [i_1]))))));
                        var_26 -= var_10;
                        arr_45 [i_0] [i_1] [i_0] [i_11] = ((/* implicit */unsigned int) arr_24 [i_0 - 1] [i_1] [i_2] [i_11] [i_11] [i_11]);
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) ? (arr_31 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)98))))) * (((((/* implicit */_Bool) (signed char)87)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1202677928U)))))) ? (((/* implicit */unsigned int) var_11)) : (282245672U)));
                    }
                    for (unsigned char i_12 = 3; i_12 < 9; i_12 += 2) 
                    {
                        arr_50 [i_0] [i_0] [i_12] = ((/* implicit */signed char) min((((((/* implicit */_Bool) min((16383ULL), (((/* implicit */unsigned long long int) (unsigned char)131))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)65)) : (((/* implicit */int) (signed char)115))))) : (min((2199023255551ULL), (((/* implicit */unsigned long long int) (unsigned short)45916)))))), (((/* implicit */unsigned long long int) (_Bool)1))));
                        arr_51 [i_12] [i_0] [i_0] [i_0 - 1] = ((/* implicit */short) var_13);
                        arr_52 [i_0] [i_0] [i_2] [i_12] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-116)))))));
                    }
                }
            } 
        } 
    } 
}
