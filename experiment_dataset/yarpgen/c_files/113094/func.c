/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113094
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
    var_10 = ((/* implicit */_Bool) ((short) (+(((/* implicit */int) var_2)))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_11 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (min((arr_3 [i_0 + 1]), (((/* implicit */unsigned int) arr_5 [i_0 - 2] [i_0 + 1]))))));
                /* LoopSeq 4 */
                for (signed char i_2 = 1; i_2 < 13; i_2 += 3) 
                {
                    arr_9 [(_Bool)1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_6)) ? (((4132240683371054912ULL) / (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1])))) : (((unsigned long long int) 226598956)))) / (((/* implicit */unsigned long long int) max((((((/* implicit */int) var_8)) * (((/* implicit */int) arr_1 [i_0 - 2])))), (((/* implicit */int) max((((/* implicit */short) (signed char)-51)), (var_5)))))))));
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((short) max(((signed char)-4), ((signed char)-68))));
                }
                for (int i_3 = 2; i_3 < 13; i_3 += 1) /* same iter space */
                {
                    var_12 = ((/* implicit */long long int) ((14934744433754310162ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)305)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 2) 
                    {
                        arr_17 [i_0] = ((/* implicit */signed char) var_4);
                        var_13 -= ((/* implicit */signed char) ((((/* implicit */long long int) (-(min((arr_5 [i_0] [i_0]), (((/* implicit */int) arr_2 [i_1] [i_0]))))))) != ((-9223372036854775807LL - 1LL))));
                        var_14 = (~(14934744433754310148ULL));
                    }
                }
                for (int i_5 = 2; i_5 < 13; i_5 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (int i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_7)), ((unsigned short)65535)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-120))))) : (((long long int) arr_16 [i_0 - 1] [i_1] [i_0] [i_6]))))) ? ((~(((/* implicit */int) ((unsigned char) (signed char)120))))) : (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) var_1)))) ^ (((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_5 + 1] [(unsigned short)10]))))));
                        var_16 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_13 [(signed char)2])) <= (14934744433754310160ULL)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)86))) | (9799624331183152483ULL))))) & (((/* implicit */unsigned long long int) (-(arr_5 [i_5] [i_6]))))));
                        arr_23 [i_0 + 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-120)) ? (2147483647) : (((/* implicit */int) (signed char)127))))) / ((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0])) : (min((arr_6 [i_1] [i_1] [i_6]), (((/* implicit */unsigned long long int) 0U))))))));
                        var_17 = ((/* implicit */unsigned char) (-(arr_3 [i_1])));
                    }
                    var_18 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)21680)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) 3949863281U)) != (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) - (18446744073709551595ULL)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_5 - 2] [i_0 + 1] [i_0])))))));
                }
                for (int i_7 = 2; i_7 < 13; i_7 += 1) /* same iter space */
                {
                    var_19 += ((/* implicit */long long int) max((((/* implicit */short) (unsigned char)190)), (arr_11 [i_0] [i_0 + 1] [i_0 - 2] [i_0])));
                    arr_26 [i_0] [i_1] [i_1] [i_7 + 1] = ((/* implicit */short) ((signed char) var_5));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_8 = 0; i_8 < 14; i_8 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_9 = 1; i_9 < 10; i_9 += 2) 
                    {
                        var_20 = ((/* implicit */signed char) ((((arr_8 [i_0 - 1]) + (9223372036854775807LL))) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) - (14934744433754310162ULL))) - (3511999639955241675ULL)))));
                        var_21 = ((/* implicit */unsigned int) var_9);
                    }
                    for (signed char i_10 = 0; i_10 < 14; i_10 += 4) 
                    {
                        var_22 = ((/* implicit */short) var_3);
                        arr_37 [i_0] [i_0] [i_0] = arr_13 [i_1];
                        arr_38 [(unsigned short)13] [i_1] [(_Bool)1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(89831689731963132ULL)))) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) == (arr_24 [i_0] [i_0] [i_0]))))));
                        var_23 -= ((((/* implicit */int) arr_14 [i_0 + 1] [i_0 - 2])) & (((/* implicit */int) arr_14 [i_0 + 1] [i_0 - 1])));
                    }
                    var_24 ^= ((/* implicit */short) ((long long int) -417283695));
                    var_25 = ((/* implicit */unsigned short) (-(arr_34 [i_0] [11U] [11U])));
                }
                /* LoopSeq 1 */
                for (long long int i_11 = 0; i_11 < 14; i_11 += 4) 
                {
                    /* LoopSeq 1 */
                    for (short i_12 = 1; i_12 < 13; i_12 += 4) 
                    {
                        var_26 = ((/* implicit */signed char) min((((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)235)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-13163))))) * (min((arr_8 [i_0]), (((/* implicit */long long int) var_8)))))), (((/* implicit */long long int) (~(((/* implicit */int) var_4)))))));
                        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_43 [i_12 + 1] [i_11] [i_11] [i_11] [(signed char)5])) * (((/* implicit */int) (unsigned char)235))))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_39 [i_12 + 1] [i_11] [i_1] [(_Bool)0])))))));
                        var_28 = ((/* implicit */short) arr_24 [i_0] [(signed char)9] [i_0]);
                    }
                    /* LoopNest 2 */
                    for (short i_13 = 0; i_13 < 14; i_13 += 4) 
                    {
                        for (signed char i_14 = 0; i_14 < 14; i_14 += 1) 
                        {
                            {
                                var_29 = ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_2)) ? (14934744433754310169ULL) : (((/* implicit */unsigned long long int) min((2670461236U), (((/* implicit */unsigned int) var_7))))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) max(((short)-32757), (((/* implicit */short) (unsigned char)187))))), ((+(((/* implicit */int) var_2))))))));
                                var_30 = max((((/* implicit */unsigned short) arr_28 [i_0] [i_0])), (((unsigned short) ((((/* implicit */_Bool) arr_4 [i_13] [i_13] [i_11])) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (1576676120U)))));
                                var_31 = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_34 [(unsigned short)1] [i_1] [i_0 + 1])))) ? (arr_40 [i_0] [(signed char)1] [i_0] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_11] [i_11])))));
                                var_32 += ((/* implicit */unsigned short) max((((/* implicit */int) ((short) (unsigned char)65))), ((+(((/* implicit */int) min((var_4), (((/* implicit */short) arr_43 [i_14] [(short)3] [i_11] [i_1] [i_0])))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
