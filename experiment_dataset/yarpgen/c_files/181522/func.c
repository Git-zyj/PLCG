/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181522
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) >> (((((((/* implicit */_Bool) 1133903599U)) ? (((unsigned long long int) (short)(-32767 - 1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32753))))) - (18446744073709518823ULL)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (short)(-32767 - 1))) ? (6661100223570717829ULL) : (((/* implicit */unsigned long long int) 6480124476848370374LL))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_0 [i_0]))));
        arr_4 [i_0] = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)37)) : (arr_2 [i_0]));
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((1421092794U) >> (((11785643850138833786ULL) - (11785643850138833756ULL))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                {
                    var_21 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-104)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */unsigned long long int) arr_7 [i_2] [i_3])) ^ (arr_10 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])))));
                    /* LoopSeq 3 */
                    for (short i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        var_22 &= ((/* implicit */long long int) (_Bool)1);
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_1 - 1] [i_2] [i_1 - 1])) ? (((/* implicit */unsigned long long int) -763562486)) : (((unsigned long long int) var_0))));
                        var_24 = (+(((/* implicit */int) (short)6072)));
                    }
                    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            var_25 += ((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (18446744073709551615ULL)));
                            arr_20 [i_1 - 1] [i_2] [i_5] = ((/* implicit */long long int) (short)32767);
                        }
                        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 3) 
                        {
                            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((unsigned char) (signed char)0)))));
                            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_3]))))) : (((((/* implicit */unsigned int) 4177920)) + (var_4))))))));
                        }
                        /* LoopSeq 2 */
                        for (long long int i_8 = 0; i_8 < 12; i_8 += 4) /* same iter space */
                        {
                            var_28 -= ((/* implicit */unsigned short) (-(((-2661579966193767220LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
                            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)24576)) >> (((((((/* implicit */_Bool) 2845844973080400161LL)) ? (((/* implicit */int) var_8)) : (-310414673))) + (32541)))));
                            arr_25 [i_1 - 1] [i_1 - 1] [i_8] &= ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) (unsigned char)229)) << (0ULL))));
                        }
                        for (long long int i_9 = 0; i_9 < 12; i_9 += 4) /* same iter space */
                        {
                            var_30 *= ((/* implicit */unsigned long long int) ((arr_15 [i_1 - 1] [i_2] [i_9] [i_9] [i_9] [i_9]) ? (((/* implicit */int) arr_15 [i_1 - 1] [i_2] [i_3] [i_3] [i_5] [i_9])) : (((/* implicit */int) arr_15 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))));
                            var_31 = ((/* implicit */unsigned long long int) arr_1 [i_3]);
                        }
                        /* LoopSeq 1 */
                        for (signed char i_10 = 0; i_10 < 12; i_10 += 3) 
                        {
                            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1 - 1] [i_1 - 1] [i_1 - 1]))) : (var_16)));
                            arr_32 [i_5] = ((/* implicit */_Bool) arr_1 [i_3]);
                            arr_33 [i_5] [i_2] [i_5] [i_5] [i_5] = ((unsigned short) (short)32767);
                        }
                        arr_34 [i_1 - 1] [i_5] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_1 - 1] [i_2] [i_3] [i_5] [i_1 - 1]))) : (arr_7 [i_1 - 1] [i_1 - 1])));
                    }
                    for (unsigned char i_11 = 2; i_11 < 10; i_11 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_12 = 3; i_12 < 8; i_12 += 4) 
                        {
                            var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) ((-1248549623) / (((/* implicit */int) (unsigned char)56)))))));
                            arr_40 [i_3] [i_11 - 1] [i_12 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)175)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15))) : (5088138663314507505ULL)));
                            arr_41 [i_1 - 1] [i_2] [i_2] [i_3] [i_11 - 1] [i_12 + 4] [i_12 + 4] = ((/* implicit */long long int) ((signed char) arr_28 [i_1 - 1] [i_2] [i_11 + 2] [i_12 + 4] [i_12 - 2] [i_12 - 3]));
                            var_34 = ((/* implicit */_Bool) ((unsigned long long int) arr_35 [i_11 - 2] [i_3] [i_1 - 1] [i_1 - 1] [i_1 - 1]));
                            arr_42 [i_1 - 1] [i_2] [i_2] [i_3] [i_3] [i_11 + 2] [i_12 + 1] = ((/* implicit */long long int) (~(arr_22 [i_1 - 1] [i_2] [i_3] [i_11 + 1] [i_12 - 3] [i_12 + 3])));
                        }
                        for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) /* same iter space */
                        {
                            var_35 = ((/* implicit */unsigned char) ((long long int) 18446744073709551610ULL));
                            arr_47 [i_1 - 1] = ((/* implicit */unsigned int) var_15);
                        }
                        for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) /* same iter space */
                        {
                            var_36 = (unsigned char)140;
                            arr_50 [i_14] [i_3] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_1 - 1] [i_1 - 1] [i_3] [i_11 + 2] [i_14 + 1] [i_14 + 1]))) ^ (((((/* implicit */_Bool) -551319262)) ? (var_5) : (((/* implicit */unsigned long long int) 9187256841431148853LL))))));
                        }
                        for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) /* same iter space */
                        {
                            arr_54 [i_15] = (i_15 % 2 == zero) ? (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)115)) : (((/* implicit */int) (unsigned char)254)))) >> (((arr_16 [i_15]) + (1655659305251365103LL)))))) : (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)115)) : (((/* implicit */int) (unsigned char)254)))) >> (((((arr_16 [i_15]) + (1655659305251365103LL))) + (5619965813961075315LL))))));
                            var_37 = ((/* implicit */signed char) var_11);
                            arr_55 [i_1 - 1] [i_15] [i_1 - 1] [i_1 - 1] = ((/* implicit */unsigned short) var_7);
                            var_38 = ((/* implicit */unsigned char) (signed char)-38);
                            var_39 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_15 [i_1 - 1] [i_2] [i_3] [i_11 + 1] [i_15 + 1] [i_15 + 1])) : (((/* implicit */int) (_Bool)1))));
                        }
                        var_40 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_11 + 2])) ? (arr_9 [i_1 - 1]) : (arr_9 [i_2])));
                        var_41 = ((unsigned long long int) 17ULL);
                    }
                }
            } 
        } 
        var_42 = ((/* implicit */short) var_2);
    }
    for (unsigned long long int i_16 = 0; i_16 < 24; i_16 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_17 = 0; i_17 < 24; i_17 += 1) 
        {
            for (unsigned long long int i_18 = 1; i_18 < 23; i_18 += 2) 
            {
                for (unsigned long long int i_19 = 0; i_19 < 24; i_19 += 1) 
                {
                    {
                        arr_68 [i_16] [i_17] [i_17] [i_18 - 1] [i_19] = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)157))))), (min((((/* implicit */unsigned long long int) var_16)), (var_14))))), (((unsigned long long int) ((((/* implicit */int) (unsigned char)62)) * (((/* implicit */int) (short)-1)))))));
                        var_43 = ((/* implicit */unsigned char) arr_66 [i_16] [i_17] [i_18 - 1] [i_19]);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_20 = 0; i_20 < 24; i_20 += 4) 
                        {
                            var_44 = ((/* implicit */unsigned short) max((var_44), (((/* implicit */unsigned short) ((((/* implicit */int) arr_59 [i_20] [i_19] [i_18 - 1])) ^ (((/* implicit */int) arr_59 [i_20] [i_19] [i_18 + 1])))))));
                            var_45 = ((/* implicit */long long int) (unsigned char)142);
                        }
                        for (unsigned char i_21 = 0; i_21 < 24; i_21 += 2) 
                        {
                            var_46 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)128))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (1238812561258729057LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)63)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-120))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (18446744073709551615ULL))))))));
                            arr_74 [i_19] [i_21] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) 0U)), (65536ULL)));
                            arr_75 [i_19] [i_17] [i_17] [i_17] = ((/* implicit */signed char) min((max((((((/* implicit */_Bool) 1238812561258729057LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (1649267441664ULL))), (((/* implicit */unsigned long long int) arr_64 [i_19] [i_16])))), (((/* implicit */unsigned long long int) ((long long int) (unsigned short)44752)))));
                        }
                        for (long long int i_22 = 0; i_22 < 24; i_22 += 4) 
                        {
                            arr_79 [i_19] [i_19] [i_19] = var_10;
                            var_47 = ((/* implicit */int) min((12ULL), (((/* implicit */unsigned long long int) ((unsigned int) (short)-14011)))));
                        }
                    }
                } 
            } 
        } 
        var_48 = ((/* implicit */unsigned char) min((var_48), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 25ULL)) ? (((/* implicit */long long int) 1131867537)) : (-1238812561258729058LL))))));
        arr_80 [i_16] = ((/* implicit */short) ((_Bool) 1744593398745546523ULL));
    }
}
