/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11923
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_12 = ((/* implicit */signed char) (unsigned short)62707);
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_13 += ((/* implicit */long long int) ((4323455642275676160LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62700)))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)62686)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_1]))));
                        var_15 ^= ((/* implicit */unsigned long long int) (+(arr_5 [i_2] [i_3])));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_16 |= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_1 [i_1]))));
                        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((short) arr_12 [i_0] [i_1])))));
                        var_18 = ((/* implicit */unsigned short) var_11);
                        var_19 = ((/* implicit */int) ((signed char) (-(((/* implicit */int) arr_4 [i_0])))));
                    }
                    for (short i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        var_20 = ((/* implicit */long long int) var_7);
                        arr_15 [i_0] [i_0] [i_0] [i_5] [i_5] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)62720)) ? (((/* implicit */int) (unsigned char)120)) : (((/* implicit */int) var_0))))) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */int) ((unsigned short) arr_11 [i_0] [i_0] [i_0] [i_5])))));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)2829))))) && (((/* implicit */_Bool) var_7))));
                    }
                    for (short i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        var_22 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)62720)) ? (((/* implicit */int) arr_1 [i_6])) : (((/* implicit */int) arr_1 [i_0]))));
                        var_23 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])) / (1077734805)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42795))) : (arr_0 [i_0]));
                    }
                }
            } 
        } 
    }
    var_24 = min((((/* implicit */unsigned int) min(((unsigned char)215), (((/* implicit */unsigned char) (!(var_8))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)61375))))) ? (((((/* implicit */_Bool) (unsigned short)255)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) min((var_7), (((/* implicit */int) (unsigned short)22741))))))));
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 23; i_7 += 4) 
    {
        for (unsigned short i_8 = 0; i_8 < 23; i_8 += 2) 
        {
            for (long long int i_9 = 2; i_9 < 22; i_9 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 2) 
                    {
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            {
                                arr_31 [i_7] = max(((-(((/* implicit */int) ((var_9) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)44)))))))), (((/* implicit */int) ((((/* implicit */int) min((var_0), (((/* implicit */unsigned short) (unsigned char)120))))) >= (((((/* implicit */_Bool) (signed char)-119)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_29 [i_8]))))))));
                                arr_32 [i_11] [i_10] [i_7] [i_8] [i_8] [i_7] [i_7] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) arr_23 [i_9 - 2])))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned int i_12 = 1; i_12 < 21; i_12 += 3) 
                    {
                        arr_35 [i_12 + 1] [i_12] [i_9] [i_8] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_9 - 1])) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)215)))));
                        arr_36 [i_7] [i_7] [i_8] [i_8] [i_9] [i_8] = ((/* implicit */int) (signed char)122);
                    }
                    for (unsigned char i_13 = 1; i_13 < 20; i_13 += 4) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned short) (-(max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)3))))), (var_7)))));
                        arr_40 [i_7] [i_7] [i_7] [i_9] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2073250193)) ? (((/* implicit */int) (signed char)-104)) : (((/* implicit */int) (unsigned short)253))))) && (((/* implicit */_Bool) (unsigned short)42780)));
                        var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))));
                    }
                    /* vectorizable */
                    for (unsigned char i_14 = 1; i_14 < 20; i_14 += 4) /* same iter space */
                    {
                        arr_43 [i_7] [i_8] [i_9 - 2] [i_14 - 1] [i_9] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) -2667296418529317789LL)) ? (((/* implicit */unsigned long long int) var_9)) : (15352133038135116309ULL)))));
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)4181))))) ? (((((/* implicit */int) (unsigned char)243)) - (((/* implicit */int) arr_23 [i_14])))) : (((/* implicit */int) arr_25 [i_14 - 1]))));
                        arr_44 [i_8] = ((((/* implicit */_Bool) arr_30 [i_7] [i_7] [i_9 + 1] [i_7])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_7] [i_8] [i_8] [i_14 - 1] [i_8])) ? (arr_33 [i_7] [i_7] [i_9 - 2] [i_7] [i_9 - 2]) : (arr_42 [i_7])))));
                        var_28 = ((/* implicit */unsigned int) var_10);
                    }
                    for (unsigned int i_15 = 1; i_15 < 20; i_15 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (short i_16 = 3; i_16 < 22; i_16 += 4) 
                        {
                            var_29 ^= ((/* implicit */signed char) var_7);
                            arr_50 [i_7] [i_7] [i_7] [i_15] [i_15] = ((/* implicit */long long int) (+(((/* implicit */int) ((((arr_26 [i_8]) ? (((/* implicit */int) var_0)) : (var_7))) == (((/* implicit */int) var_0)))))));
                        }
                        var_30 += ((/* implicit */signed char) (~((((+(((/* implicit */int) (unsigned short)253)))) + (((/* implicit */int) (_Bool)1))))));
                        arr_51 [i_15] = ((/* implicit */int) (unsigned short)2839);
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_17 = 0; i_17 < 23; i_17 += 4) 
                    {
                        for (unsigned char i_18 = 0; i_18 < 23; i_18 += 3) 
                        {
                            {
                                var_31 = ((/* implicit */short) arr_56 [i_7] [i_7] [i_8] [i_8] [i_9 - 2] [i_17] [i_18]);
                                arr_57 [i_7] [i_7] [i_8] [i_9] [i_17] [i_9] [i_18] = ((/* implicit */_Bool) arr_45 [i_7] [i_7] [i_8] [i_17]);
                                arr_58 [i_7] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */long long int) (unsigned char)127);
                                arr_59 [i_7] [i_7] [i_8] [i_7] [i_17] [i_17] [i_18] = ((/* implicit */_Bool) (((-(((/* implicit */int) arr_48 [i_9] [i_9] [i_9] [i_9 - 2] [i_9 - 2])))) + ((-(((/* implicit */int) max(((short)9795), (((/* implicit */short) (_Bool)1)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
