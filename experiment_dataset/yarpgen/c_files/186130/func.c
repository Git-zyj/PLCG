/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186130
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
    var_15 = ((/* implicit */_Bool) var_13);
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((short)-21265), (var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : ((+(var_13)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) (signed char)-108);
                arr_7 [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (signed char)108)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37554))) : (arr_0 [i_1 - 1]))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_1 - 1]) : (arr_0 [i_0])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_4 = 0; i_4 < 23; i_4 += 4) /* same iter space */
                {
                    arr_16 [i_2] [i_3] [i_4] = ((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_14 [i_2]))))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (1152851135862669312ULL)))))));
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_19 [i_2] = ((/* implicit */int) max((max((-2525227840819856201LL), (((/* implicit */long long int) max((2147483640), (((/* implicit */int) (_Bool)1))))))), (min((((/* implicit */long long int) -683784932)), (arr_17 [i_2] [i_3] [i_5])))));
                        arr_20 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_18 [i_2] [i_3] [i_3] [i_4] [i_4] [i_5])), (arr_13 [i_2] [i_2] [i_2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_2] [i_3] [i_4])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-47))))) : (max((((/* implicit */unsigned long long int) (_Bool)0)), (arr_13 [i_2] [i_3] [i_4])))))) ? (((((/* implicit */_Bool) (-(1152851135862669312ULL)))) ? (((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) (signed char)28))))) : (((/* implicit */int) (short)32767)))) : (((/* implicit */int) ((((/* implicit */int) (short)32759)) != (((/* implicit */int) (short)31935)))))));
                        arr_21 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)59)) ? (((/* implicit */int) arr_12 [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) arr_11 [i_2] [i_5]))))) ? (min((854029547), (((/* implicit */int) arr_11 [i_4] [i_3])))) : (((((/* implicit */_Bool) (short)3618)) ? (((/* implicit */int) arr_11 [i_2] [i_5])) : (((/* implicit */int) (short)32762))))));
                    }
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_2] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_3)));
                        arr_24 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)7827)) ? (9861706661850070369ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)0)))))));
                    }
                    arr_25 [i_3] [i_4] = ((/* implicit */_Bool) (~(min((14756538019221376549ULL), (((/* implicit */unsigned long long int) 4143653496U))))));
                }
                for (long long int i_7 = 0; i_7 < 23; i_7 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_18 -= ((/* implicit */unsigned short) max((-749165281), (((/* implicit */int) (short)4096))));
                                arr_36 [i_9] [i_3] [i_7] [i_8] = ((/* implicit */short) arr_30 [i_2] [i_9] [i_7] [i_2] [i_9] [i_7]);
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 1) /* same iter space */
                    {
                        var_19 *= ((/* implicit */short) (((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_10] [i_10] [i_10])) ? (((/* implicit */int) arr_26 [i_10] [i_7] [i_2])) : (((/* implicit */int) arr_18 [i_2] [i_3] [i_7] [i_7] [i_10] [i_10]))))) : (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)49)), (1756217144U)))), ((+(9739488443982620640ULL)))))));
                        var_20 = ((/* implicit */unsigned long long int) (~(arr_32 [i_2] [i_2] [i_2] [i_2])));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 1) /* same iter space */
                    {
                        arr_41 [i_7] [i_3] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) >> (((arr_31 [i_2] [i_2] [i_7] [i_11]) - (1705169794U)))))) ? (((var_8) / (5568323577690800059LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_2] [i_11] [i_7])))));
                        arr_42 [i_11] [i_3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((var_3) == (((/* implicit */long long int) ((/* implicit */int) (signed char)18))))))));
                        arr_43 [i_2] [i_3] [i_7] [i_7] [i_11] |= ((/* implicit */unsigned short) (+(arr_10 [i_2] [i_3])));
                        arr_44 [i_2] [i_3] [i_7] [i_11] = ((/* implicit */int) arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]);
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 1) /* same iter space */
                    {
                        arr_47 [i_2] [i_3] [i_12] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_0))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (62) : (arr_40 [i_2] [i_3] [i_7] [i_12])))))), (2250700302057472LL)));
                        arr_48 [i_2] [i_3] [i_7] [i_12] [i_12] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned int) (_Bool)1))))) == (max((6951791514849654754ULL), (((/* implicit */unsigned long long int) arr_12 [i_2] [i_3] [i_7] [i_12]))))))), (((arr_10 [i_2] [i_7]) >> (((arr_10 [i_7] [i_3]) - (1916406627559334542LL)))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 2; i_13 < 22; i_13 += 3) 
                    {
                        for (unsigned short i_14 = 0; i_14 < 23; i_14 += 1) 
                        {
                            {
                                arr_54 [i_14] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1687827901U)) ? (max(((+(13101200457778246089ULL))), (((/* implicit */unsigned long long int) max((var_14), (((/* implicit */int) arr_46 [i_2] [i_3] [i_7] [i_7] [i_13] [i_14]))))))) : (min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_11)), (36028797002186752LL)))), (arr_29 [i_13] [i_13 + 1] [i_13 - 2] [i_13 + 1])))));
                                var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) 0ULL)))) ? (((((/* implicit */_Bool) (short)-19466)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_8 [i_7] [i_14])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_7] [i_3] [i_7] [i_13 - 2] [i_14] [i_3]))))))));
                                var_22 += ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) (short)19213))))), ((-(arr_52 [i_2] [i_3] [i_7] [i_13 + 1] [i_14])))));
                            }
                        } 
                    } 
                }
                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (~(((/* implicit */int) arr_50 [i_2] [i_3] [i_2] [i_2]))))), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)114))) : (arr_39 [i_3] [i_3] [i_2] [i_2] [i_2] [i_2])))))) ? (((((/* implicit */_Bool) ((arr_53 [i_2] [i_2] [i_3] [i_3] [i_3] [i_3] [i_3]) ? (arr_13 [i_2] [i_2] [i_2]) : (((/* implicit */unsigned long long int) arr_17 [i_2] [i_3] [i_2]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_3))))) : (((/* implicit */long long int) ((((/* implicit */int) max(((signed char)-110), ((signed char)53)))) >> (((((arr_11 [i_2] [i_3]) ? (10418987422027882658ULL) : (((/* implicit */unsigned long long int) arr_10 [i_2] [i_2])))) - (1916406627559334573ULL))))))));
            }
        } 
    } 
}
