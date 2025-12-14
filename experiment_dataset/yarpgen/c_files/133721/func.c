/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133721
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
    var_17 = ((/* implicit */signed char) (+(((var_15) / (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) (short)22906)) ? (-9223372036854775796LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-22533))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) != (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))))));
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((unsigned long long int) var_13)) >= (((/* implicit */unsigned long long int) min((288230376151711743LL), (((/* implicit */long long int) (_Bool)1)))))))) != (((((/* implicit */_Bool) 4294967285U)) ? (((/* implicit */int) ((3837765719U) > (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) : (((/* implicit */int) var_13)))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 3; i_3 < 21; i_3 += 2) 
                    {
                        var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_6 [i_0] [(unsigned char)22] [i_2] [i_3 + 1])) : (((/* implicit */int) arr_5 [i_0] [i_2] [i_3 - 2]))))) ? ((-(-6621573950341453697LL))) : (((((/* implicit */_Bool) 2553634356U)) ? (9200125232541900360LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)210)))))));
                        var_21 = ((/* implicit */unsigned short) var_10);
                    }
                    arr_8 [i_0] [i_2] = ((/* implicit */unsigned int) arr_4 [i_2] [0LL] [i_0]);
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (signed char)35)) ? (((/* implicit */int) arr_3 [i_0] [7LL] [i_2])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_2])))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        arr_12 [5LL] [5LL] [i_4] [i_4] &= ((/* implicit */signed char) min((max((((/* implicit */long long int) (signed char)2)), (arr_10 [i_2]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_4])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_4])) : (((/* implicit */int) (signed char)-34)))))));
                        arr_13 [i_0] [i_1] [(short)1] = ((/* implicit */signed char) (((-(1096740048U))) % (((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_2])))))));
                        var_23 = ((6226032779435743733LL) | (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_1] [i_1]))));
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_4])) == (((/* implicit */int) arr_11 [i_0] [i_1])))))))) : (((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned char)21]))) > (3837765719U))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_3 [(signed char)4] [21LL] [i_1])), ((short)-29198))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_4]))) & (var_2)))))));
                    }
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) 
    {
        for (short i_6 = 1; i_6 < 12; i_6 += 3) 
        {
            for (unsigned char i_7 = 0; i_7 < 13; i_7 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_8 = 4; i_8 < 12; i_8 += 2) 
                    {
                        for (signed char i_9 = 1; i_9 < 12; i_9 += 2) 
                        {
                            {
                                var_25 *= ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) arr_27 [i_6] [i_6 - 1] [i_6] [i_7] [i_6 + 1])) | (((/* implicit */int) arr_27 [i_6] [i_6 - 1] [i_6] [i_8] [i_6 + 1])))));
                                var_26 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_28 [(signed char)8] [i_6 - 1] [i_6] [i_7] [i_7] [i_8 + 1] [i_6])) ? (((long long int) (signed char)-123)) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_19 [i_7] [12ULL]))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_10 = 0; i_10 < 13; i_10 += 1) 
                    {
                        var_27 = ((((/* implicit */_Bool) ((((-6758233760715379079LL) + (9223372036854775807LL))) << (((5388469495922148209LL) - (5388469495922148209LL)))))) ? ((+(arr_26 [(unsigned char)10] [(unsigned char)10]))) : (((/* implicit */int) (signed char)11)));
                        /* LoopSeq 4 */
                        for (unsigned int i_11 = 0; i_11 < 13; i_11 += 2) 
                        {
                            var_28 ^= ((/* implicit */signed char) (~(1862010206U)));
                            arr_39 [i_5] [(short)1] [i_7] [i_6] [i_10] = ((/* implicit */_Bool) ((8U) ^ (((/* implicit */unsigned int) arr_18 [i_6 - 1] [i_6 - 1]))));
                        }
                        for (unsigned short i_12 = 1; i_12 < 12; i_12 += 2) 
                        {
                            var_29 += var_11;
                            arr_44 [i_5] [12LL] [i_6] [i_10] [i_6] = ((/* implicit */signed char) ((((/* implicit */long long int) (-(2432957090U)))) % (((long long int) 457201577U))));
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            arr_48 [i_5] [i_5] [i_7] [i_10] [i_7] |= ((/* implicit */unsigned short) (~(((((/* implicit */int) (signed char)2)) >> (((((/* implicit */int) (signed char)125)) - (120)))))));
                            arr_49 [i_5] [i_5] [i_7] [6U] [i_13] [i_6] = ((/* implicit */unsigned char) (~(arr_31 [i_6 + 1] [i_6] [i_6 - 1] [i_7])));
                            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_6 + 1] [i_6])) ? (arr_35 [i_6 + 1] [(signed char)2] [i_7] [i_7] [i_6] [i_6]) : (arr_18 [i_5] [i_5]))))));
                            var_31 |= ((/* implicit */signed char) (+((~(arr_40 [(unsigned short)6] [(unsigned short)6] [i_7] [i_10] [i_13])))));
                        }
                        for (long long int i_14 = 0; i_14 < 13; i_14 += 1) 
                        {
                            var_32 = ((/* implicit */signed char) (+(2432957089U)));
                            var_33 = ((/* implicit */_Bool) ((unsigned short) arr_36 [i_5] [i_5] [i_5] [i_6 + 1] [i_6] [i_6 - 1] [i_7]));
                            var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) (signed char)(-127 - 1)))));
                            var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_5 [i_6 + 1] [i_6 - 1] [i_6 + 1])))))));
                        }
                        var_36 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_18 [i_6 - 1] [i_6 - 1]))));
                        arr_52 [i_10] [i_7] [i_7] [i_5] |= ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) >= (((/* implicit */int) arr_28 [i_7] [i_6 + 1] [i_6] [i_6 - 1] [i_6] [i_6 + 1] [i_7]))));
                        var_37 += ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_50 [i_6 - 1] [i_6] [i_6 - 1] [i_6] [i_6 + 1]))));
                    }
                    for (unsigned char i_15 = 2; i_15 < 9; i_15 += 3) 
                    {
                        var_38 |= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_43 [i_5] [i_6 - 1] [i_7] [i_15] [i_15 + 2])) ? (((/* implicit */long long int) (~(((/* implicit */int) var_6))))) : (((((/* implicit */long long int) ((/* implicit */int) var_10))) | (-9200125232541900343LL)))))));
                        arr_56 [i_15] [i_6] [i_7] [i_6] [i_5] = ((/* implicit */long long int) ((_Bool) max((((/* implicit */unsigned long long int) ((signed char) arr_6 [i_5] [i_6] [i_7] [22U]))), (arr_15 [i_5] [i_5]))));
                        var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) (short)32767))));
                    }
                    /* LoopSeq 1 */
                    for (short i_16 = 0; i_16 < 13; i_16 += 2) 
                    {
                        var_40 |= ((/* implicit */short) (((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_55 [i_16] [(signed char)12]))))))) ? ((+((+(((/* implicit */int) arr_27 [0LL] [i_6 - 1] [i_6] [i_7] [i_16])))))) : (((((/* implicit */int) arr_53 [i_6 + 1] [(short)2] [i_6 - 1] [i_7] [(_Bool)1])) / (((/* implicit */int) var_14))))));
                        var_41 = (-((~(((((/* implicit */_Bool) (short)-6971)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [(short)3]))) : (-1LL))))));
                    }
                }
            } 
        } 
    } 
}
