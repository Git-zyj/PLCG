/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143082
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
    for (long long int i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1] [i_0]))) >= (2126840461U))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0] [i_0])), (var_10)))) : (((/* implicit */int) arr_0 [i_0] [i_0]))))), (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) & (var_13)))));
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)48409)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48846))) : (6815983343483294877ULL))))));
        var_20 += ((short) (-(((/* implicit */int) var_10))));
    }
    /* LoopSeq 3 */
    for (short i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) min((((((/* implicit */_Bool) arr_2 [i_1])) ? (min((var_5), (((/* implicit */long long int) var_10)))) : (arr_2 [i_1]))), (((/* implicit */long long int) var_14)))))));
        var_22 ^= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((2126840461U), (((/* implicit */unsigned int) (unsigned short)16689))))), (((unsigned long long int) arr_3 [i_1]))));
        var_23 &= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_2 [(unsigned char)16]) <= (arr_2 [i_1]))))) | (((9223372036854775807LL) >> (((((/* implicit */int) (unsigned short)13819)) - (13759)))))));
        arr_4 [i_1] = (-(((/* implicit */int) var_17)));
        arr_5 [i_1] = ((unsigned short) (-(((/* implicit */int) arr_3 [i_1]))));
    }
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) /* same iter space */
    {
        var_24 = (~(((/* implicit */int) ((unsigned short) var_6))));
        arr_9 [i_2] [i_2] &= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)16690))))) ? (((((/* implicit */int) arr_3 [i_2])) * (var_15))) : (((((/* implicit */_Bool) (-(arr_8 [i_2])))) ? (((int) (_Bool)0)) : (arr_8 [i_2])))));
    }
    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_4 = 4; i_4 < 15; i_4 += 3) 
        {
            for (unsigned short i_5 = 0; i_5 < 17; i_5 += 1) 
            {
                {
                    var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) arr_13 [i_3]))) ? ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_16))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */int) (unsigned char)23)) : (((/* implicit */int) arr_17 [i_5])))))))) * (((((/* implicit */_Bool) (unsigned char)152)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_20 [i_4] [2ULL])) : (var_1))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_4 + 1] [i_5])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_17)))))))));
                    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */unsigned long long int) arr_10 [i_4 - 1])) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) min(((short)(-32767 - 1)), (((/* implicit */short) (_Bool)1)))))))) ? ((+(((/* implicit */int) var_10)))) : (arr_20 [i_4 + 2] [i_4]))))));
                    var_27 += ((/* implicit */short) ((min((((/* implicit */long long int) arr_13 [i_5])), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48847))) : (var_4))))) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)32)))));
                }
            } 
        } 
        var_28 += ((min(((+(((/* implicit */int) arr_11 [i_3])))), (((/* implicit */int) ((short) arr_13 [i_3]))))) * (((/* implicit */int) (_Bool)1)));
        /* LoopSeq 3 */
        for (unsigned int i_6 = 1; i_6 < 14; i_6 += 1) 
        {
            arr_24 [(unsigned short)16] |= ((/* implicit */unsigned short) (-(var_16)));
            /* LoopSeq 4 */
            for (short i_7 = 2; i_7 < 14; i_7 += 4) /* same iter space */
            {
                arr_27 [i_3] [i_6] [i_7 + 3] = (-(((/* implicit */int) ((unsigned short) 0LL))));
                var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((unsigned char) min((((/* implicit */short) arr_14 [i_7 - 2] [i_7] [i_7 + 1])), (arr_11 [i_7])))))));
                var_30 = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned char) arr_8 [i_6 - 1])));
                arr_28 [i_7] [i_6] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)232))) : ((((_Bool)1) ? (arr_18 [i_3] [i_6] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) (_Bool)0)) : (661264938));
            }
            for (short i_8 = 2; i_8 < 14; i_8 += 4) /* same iter space */
            {
                arr_31 [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)48847)) ? (((((/* implicit */int) (unsigned short)9669)) >> (((var_4) - (6265068599974928851LL))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)168)) || (arr_19 [i_3] [i_6] [i_8 + 1]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_3] [i_3] [i_3])) >> (((arr_7 [i_6]) - (4533913659535422292LL))))))))) : (((((/* implicit */int) (signed char)-24)) & (((/* implicit */int) (signed char)-94))))));
                var_31 += ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_6])) > (((((/* implicit */_Bool) ((int) (short)4034))) ? (((/* implicit */int) (unsigned char)232)) : (((/* implicit */int) arr_6 [i_6 + 2]))))));
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 17; i_9 += 4) 
                {
                    for (unsigned int i_10 = 0; i_10 < 17; i_10 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_34 [i_3] [i_6] [i_8 + 2] [i_9]), (arr_34 [i_6] [i_8] [i_8 + 3] [i_8])))) ? (((/* implicit */int) (short)4036)) : (((/* implicit */int) arr_34 [i_3] [i_3] [i_8 + 2] [(unsigned short)1]))));
                            var_33 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) 1543806583))) & ((~(((/* implicit */int) arr_6 [i_6 - 1]))))));
                            var_34 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)9669), (((/* implicit */unsigned short) (signed char)93)))))) != (((unsigned long long int) arr_7 [i_3]))))), (((((/* implicit */_Bool) arr_32 [i_6] [i_6] [i_6] [i_6 + 2])) ? (arr_32 [i_3] [i_3] [i_3] [i_6 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-94)))))));
                        }
                    } 
                } 
            }
            for (unsigned short i_11 = 0; i_11 < 17; i_11 += 4) /* same iter space */
            {
                arr_42 [i_3] [i_3] [i_11] [i_6] = ((min(((((_Bool)1) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_34 [i_3] [i_6] [i_3] [i_11])))), (((/* implicit */int) (unsigned short)9)))) % (((((((/* implicit */_Bool) (short)4034)) ? (((/* implicit */int) (unsigned short)487)) : (((/* implicit */int) (unsigned short)487)))) - (((/* implicit */int) (_Bool)1)))));
                arr_43 [i_6] = ((/* implicit */unsigned short) var_15);
                arr_44 [i_3] [12] [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) (short)(-32767 - 1))) && (((/* implicit */_Bool) (~(((((/* implicit */int) (signed char)101)) << (((6662638195948209799ULL) - (6662638195948209790ULL))))))))));
                arr_45 [i_3] [i_6] = ((/* implicit */unsigned short) ((int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))) ^ (((/* implicit */int) var_6)))));
            }
            for (unsigned short i_12 = 0; i_12 < 17; i_12 += 4) /* same iter space */
            {
                arr_49 [i_6] [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)173)) ? (max((var_15), (((/* implicit */int) arr_6 [i_3])))) : (((/* implicit */int) arr_30 [i_3] [i_3] [i_6 + 2]))));
                var_35 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)6318)) ? (140737488347136ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20234)))));
                arr_50 [i_3] [i_6] [i_12] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) (short)8)) + (((/* implicit */int) (short)0))))))));
            }
        }
        for (signed char i_13 = 0; i_13 < 17; i_13 += 2) 
        {
            var_36 ^= ((/* implicit */unsigned int) 0ULL);
            arr_53 [i_3] [i_13] = min((((/* implicit */unsigned short) ((var_11) > (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)16)) : (((/* implicit */int) (unsigned short)16)))))))), (((unsigned short) arr_8 [i_3])));
            /* LoopSeq 2 */
            for (int i_14 = 0; i_14 < 17; i_14 += 4) 
            {
                arr_56 [i_3] [i_3] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((-(4294967295U))), (((/* implicit */unsigned int) (short)9))))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_3] [(unsigned short)3] [i_14])) ? (((/* implicit */int) arr_51 [i_3] [i_3])) : (((/* implicit */int) arr_25 [i_13] [i_14] [i_13] [i_13]))))), (((0LL) << (((((/* implicit */int) arr_26 [i_3] [i_13] [i_14])) - (41374))))))) : (((/* implicit */long long int) min(((~(567470807U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */int) arr_41 [i_3] [i_13] [i_14])) : (((/* implicit */int) (unsigned short)0))))))))));
                arr_57 [i_3] [i_13] [i_14] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) max((var_2), ((unsigned short)0))))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_3] [i_14]))))) % (((/* implicit */int) arr_25 [i_14] [i_13] [i_13] [i_3])))) : (((/* implicit */int) (unsigned short)8))));
                var_37 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_52 [i_13])) ? (((/* implicit */int) arr_6 [i_13])) : (((/* implicit */int) (_Bool)1))))))) - (arr_12 [i_13])));
            }
            for (unsigned short i_15 = 0; i_15 < 17; i_15 += 4) 
            {
                arr_60 [i_3] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) arr_25 [i_3] [i_13] [i_15] [i_15]))))));
                var_38 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-93)) | (((/* implicit */int) (_Bool)1)))))));
            }
            var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) arr_2 [i_3]))) ? (((((/* implicit */unsigned long long int) 1948503248)) ^ (arr_47 [i_3] [i_13]))) : (((/* implicit */unsigned long long int) ((int) var_11)))));
        }
        for (long long int i_16 = 1; i_16 < 15; i_16 += 2) 
        {
            var_40 ^= ((/* implicit */unsigned long long int) ((((long long int) var_9)) & (((/* implicit */long long int) ((/* implicit */int) arr_59 [i_16] [i_16] [i_3])))));
            var_41 = ((/* implicit */int) ((((/* implicit */int) ((((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (unsigned short)59279)) : (((/* implicit */int) var_8)))) > ((-(((/* implicit */int) arr_48 [(short)16] [i_16 + 1] [i_16] [(short)16]))))))) == (((/* implicit */int) ((_Bool) max((127U), (((/* implicit */unsigned int) (short)16383))))))));
            arr_64 [i_16] = ((/* implicit */int) arr_22 [i_16 - 1] [i_3]);
            var_42 = ((/* implicit */unsigned long long int) ((((arr_2 [i_3]) + (9223372036854775807LL))) >> ((((~(((unsigned int) (_Bool)1)))) - (4294967232U)))));
        }
    }
}
