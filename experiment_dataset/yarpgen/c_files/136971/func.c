/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136971
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 4 */
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                var_19 = ((/* implicit */long long int) ((arr_2 [i_0 + 1]) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0 - 1]))));
                /* LoopSeq 2 */
                for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) /* same iter space */
                {
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */int) (unsigned short)36521);
                    arr_11 [i_1] = ((/* implicit */unsigned long long int) arr_9 [i_0 - 3] [i_0 - 2]);
                    arr_12 [i_3] = ((((-1407323560832118471LL) >= (((/* implicit */long long int) 573382805U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 3]))) : (((((/* implicit */unsigned long long int) 3721584490U)) / (13052693873813610047ULL))));
                    arr_13 [i_0 - 2] [i_0 - 2] [i_1] [i_2] [i_3] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_5 [i_1]))));
                }
                for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 2) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned char) (((~(3721584490U))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 1])))));
                    var_21 ^= ((/* implicit */long long int) ((5394050199895941579ULL) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-110)))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) 573382799U)) ? (arr_5 [i_0]) : (((/* implicit */unsigned long long int) 3721584496U))));
                        arr_20 [i_0] [i_1] [i_2] [i_2] [i_4] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_18 [i_5] [i_4] [i_2] [10ULL] [10ULL])) ? (573382805U) : (3848551532U))) | (((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [3LL])))))));
                        var_23 = ((/* implicit */short) (((~(arr_14 [i_0] [i_0 + 1] [i_4] [i_0]))) - (1528350361U)));
                    }
                }
                var_24 *= ((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [i_0 - 1])) + (2147483647))) >> (((((573382821U) | (2255429328U))) - (2792308450U)))));
            }
            for (long long int i_6 = 2; i_6 < 12; i_6 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_7 = 3; i_7 < 10; i_7 += 2) 
                {
                    var_25 = ((((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_6] [i_7 - 2] [i_7])) ? (((/* implicit */int) (signed char)89)) : (((/* implicit */int) (unsigned short)59942)))) >= (((((/* implicit */int) (unsigned char)229)) >> (((((/* implicit */int) (unsigned char)197)) - (191))))));
                    var_26 = ((/* implicit */long long int) (signed char)51);
                }
                var_27 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (arr_1 [i_0] [i_1])))));
                var_28 = ((/* implicit */short) (~(((/* implicit */int) arr_17 [i_0 - 2] [i_6 - 1] [i_6 - 2] [i_6 - 1] [i_6 + 1]))));
            }
            for (unsigned char i_8 = 2; i_8 < 11; i_8 += 4) /* same iter space */
            {
                var_29 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) * (3848551545U)))) / (arr_8 [i_0 - 1] [i_8 - 2])));
                var_30 += ((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)1)) <= (((/* implicit */int) (signed char)110)))) || (((/* implicit */_Bool) 573382821U))));
                var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3848551530U)) ? ((-(13052693873813610047ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_8 - 1] [i_8] [i_0] [i_0 - 1])))));
            }
            for (unsigned char i_9 = 2; i_9 < 11; i_9 += 4) /* same iter space */
            {
                var_32 = ((/* implicit */signed char) ((arr_14 [i_0 - 3] [i_9 - 2] [i_9 - 2] [i_9 + 1]) / (arr_14 [i_0 - 2] [i_9 + 2] [i_9 + 2] [i_9 + 2])));
                /* LoopSeq 3 */
                for (unsigned short i_10 = 0; i_10 < 13; i_10 += 2) 
                {
                    var_33 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_27 [i_9] [i_9 - 1] [i_9 - 1] [i_9])) + (((/* implicit */int) (signed char)8))));
                    arr_31 [i_10] [i_1] [i_9] [i_10] = ((/* implicit */unsigned int) (~(arr_8 [i_10] [i_9 + 1])));
                    var_34 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0 + 1])) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_18 [i_10] [i_9] [i_9 - 2] [i_9] [i_1]))))) : ((+(arr_30 [i_0] [i_1] [i_0])))));
                    arr_32 [i_10] [i_9 + 2] [i_9] [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_23 [i_9] [i_9 + 2] [i_9] [i_9 + 1] [i_9]))));
                }
                for (signed char i_11 = 0; i_11 < 13; i_11 += 1) 
                {
                    var_35 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8))) + (arr_34 [i_11] [i_11] [i_0 - 1] [i_11] [i_0 - 1]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_0] [(unsigned short)1] [i_0 + 1])))));
                    arr_36 [i_9] [i_11] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)521))));
                }
                for (unsigned short i_12 = 0; i_12 < 13; i_12 += 2) 
                {
                    var_36 = ((/* implicit */short) arr_39 [i_0 + 1] [i_0 + 1] [i_0] [i_0 - 3] [i_0 - 1] [i_0 - 3]);
                    var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) ((((((/* implicit */_Bool) 13052693873813610047ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)19))) : (arr_5 [i_0 - 2]))) * (((/* implicit */unsigned long long int) (-(arr_6 [i_0] [i_0] [i_1] [i_12])))))))));
                }
                var_38 -= ((/* implicit */short) ((arr_6 [i_1] [i_9 + 1] [i_9] [i_1]) | (arr_6 [i_1] [i_9 + 1] [i_1] [i_9])));
                /* LoopSeq 2 */
                for (unsigned int i_13 = 0; i_13 < 13; i_13 += 4) /* same iter space */
                {
                    var_39 = ((/* implicit */int) (~(134217216U)));
                    var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-34)) ? (((/* implicit */int) arr_15 [i_9 + 2] [i_9 - 2] [i_9 + 2])) : (((/* implicit */int) arr_15 [i_9 + 1] [i_9 - 2] [2ULL])))))));
                    var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) < (13052693873813610037ULL))))) & (arr_6 [i_0 - 1] [i_1] [i_9] [(short)3])));
                    var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_13] [i_13] [i_9 - 2] [i_0 - 1])) && (((/* implicit */_Bool) 134217217U))));
                }
                for (unsigned int i_14 = 0; i_14 < 13; i_14 += 4) /* same iter space */
                {
                    arr_46 [i_0] [i_14] [i_0] = ((/* implicit */unsigned int) (short)-25921);
                    var_43 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 2984782594U))));
                }
            }
            var_44 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)29))));
        }
        for (long long int i_15 = 3; i_15 < 12; i_15 += 2) 
        {
            var_45 = ((/* implicit */unsigned int) (signed char)-61);
            arr_49 [i_15] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */unsigned int) (-(arr_24 [i_15] [i_15] [i_15])))) : (arr_19 [i_0] [i_15])));
        }
        var_46 = ((/* implicit */_Bool) ((((arr_30 [i_0] [i_0 - 1] [i_0]) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_17 [(unsigned char)5] [i_0] [i_0] [i_0 - 2] [i_0 - 1])) - (111)))));
        var_47 = ((/* implicit */int) arr_6 [i_0 + 1] [i_0] [i_0] [i_0 + 1]);
    }
    for (unsigned long long int i_16 = 0; i_16 < 24; i_16 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_17 = 0; i_17 < 24; i_17 += 1) 
        {
            var_48 = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned long long int) max((446415753U), (((/* implicit */unsigned int) arr_51 [i_16]))))) & ((~(arr_52 [i_17])))))));
            var_49 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (signed char)25)), ((unsigned short)34317)))), (min((((/* implicit */unsigned long long int) (unsigned char)241)), (arr_52 [i_17])))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)227)) ? (-1493839101529840652LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44830)))))), (0ULL))) : (((/* implicit */unsigned long long int) (((-(1507143620U))) - (arr_53 [i_16] [i_16]))))));
            var_50 = ((10175438570925253021ULL) * (((/* implicit */unsigned long long int) 573382799U)));
            var_51 = arr_53 [i_16] [i_17];
        }
        var_52 = (+(max((2490974727U), (arr_53 [i_16] [i_16]))));
    }
    var_53 = ((/* implicit */unsigned char) max((var_1), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((1493839101529840668LL), (((/* implicit */long long int) (unsigned char)14))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) var_1)), (830037659U)))))))));
}
