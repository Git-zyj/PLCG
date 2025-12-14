/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156553
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) min((min((arr_0 [i_0 - 1]), (((/* implicit */unsigned short) arr_1 [i_0 - 1])))), (((/* implicit */unsigned short) var_3))));
        arr_3 [i_0] [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) % (((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) arr_1 [i_0 + 1]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) (((~(4190796579U))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 - 1])) == (((((/* implicit */int) (unsigned short)32933)) / (((/* implicit */int) var_6))))))))));
        arr_5 [(unsigned short)1] &= ((/* implicit */short) (+((+(var_10)))));
    }
    for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        var_15 -= ((/* implicit */long long int) min((((/* implicit */int) ((unsigned short) (signed char)-1))), (((((/* implicit */int) arr_7 [i_1])) >> (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_13)))) - (15272)))))));
        arr_8 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (arr_6 [i_1] [(signed char)1]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) ((arr_6 [0ULL] [i_1]) < (var_5)))))) >= (((/* implicit */int) arr_7 [i_1]))));
        var_16 += ((/* implicit */unsigned int) arr_6 [i_1] [i_1]);
        /* LoopSeq 1 */
        for (long long int i_2 = 2; i_2 < 21; i_2 += 2) 
        {
            arr_13 [i_1] = ((/* implicit */short) (~(min((((/* implicit */unsigned int) var_0)), (arr_11 [i_2 - 1])))));
            arr_14 [i_1] [i_1] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)46))))), (max((9075736368209829771ULL), (9371007705499721844ULL)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) var_1)))))) : (((((/* implicit */_Bool) (signed char)-116)) ? (9371007705499721845ULL) : (((((/* implicit */_Bool) arr_9 [i_1])) ? (9755248136128790706ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6578))))))));
            var_17 = ((/* implicit */_Bool) (+(9075736368209829762ULL)));
        }
        arr_15 [i_1] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) min((arr_9 [i_1]), (((/* implicit */unsigned short) arr_7 [i_1]))))) ? (arr_11 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1])))))));
    }
    for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
    {
        var_18 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))), (max((((/* implicit */long long int) arr_7 [i_3])), (arr_16 [i_3] [i_3])))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
        {
            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)29473))) : (((arr_2 [i_3]) + (((/* implicit */long long int) ((/* implicit */int) var_3))))))))));
            /* LoopNest 2 */
            for (signed char i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                for (signed char i_6 = 2; i_6 < 8; i_6 += 2) 
                {
                    {
                        arr_30 [i_3] [(signed char)0] [i_3] [4LL] [i_5] [i_3] = ((((/* implicit */_Bool) arr_2 [(signed char)4])) ? (((((/* implicit */_Bool) var_5)) ? (arr_19 [i_3] [i_3]) : (arr_19 [i_5] [i_5]))) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_5] [i_6 + 2]))));
                        var_20 = ((/* implicit */unsigned short) var_1);
                        arr_31 [i_3] [i_3] [i_3] [i_3] [i_5] [(unsigned char)3] = (i_5 % 2 == zero) ? (((/* implicit */signed char) (~(((((/* implicit */int) arr_29 [i_3] [i_3] [i_3])) << (((((/* implicit */int) arr_26 [i_3] [i_5] [i_3] [i_3])) + (26583)))))))) : (((/* implicit */signed char) (~(((((/* implicit */int) arr_29 [i_3] [i_3] [i_3])) << (((((((/* implicit */int) arr_26 [i_3] [i_5] [i_3] [i_3])) + (26583))) + (4041))))))));
                        arr_32 [i_3] [i_5] [i_5] [(short)7] = ((/* implicit */unsigned long long int) var_3);
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 2) 
                        {
                            arr_35 [i_3] [i_4] [i_5] = ((/* implicit */unsigned char) ((_Bool) 2572448869U));
                            arr_36 [i_5] [i_6] [(signed char)8] [(signed char)9] [i_5] = ((/* implicit */unsigned int) ((arr_16 [i_6 - 1] [i_6 - 2]) ^ (arr_16 [i_4] [i_6 - 2])));
                            var_21 &= (signed char)127;
                        }
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned int i_8 = 0; i_8 < 11; i_8 += 2) /* same iter space */
            {
                var_22 -= ((/* implicit */short) (-(4294967295U)));
                /* LoopNest 2 */
                for (short i_9 = 0; i_9 < 11; i_9 += 3) 
                {
                    for (unsigned char i_10 = 0; i_10 < 11; i_10 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) arr_25 [i_10] [i_9] [i_4] [(signed char)2]))));
                            arr_45 [2ULL] [i_4] [2ULL] [2ULL] [(short)3] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)206)) ? (arr_21 [i_3]) : (arr_21 [i_9])));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967295U)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_8]))))))));
            }
            for (unsigned int i_11 = 0; i_11 < 11; i_11 += 2) /* same iter space */
            {
                arr_48 [i_4] [i_3] [i_4] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_7 [i_3]))));
                arr_49 [i_3] [(short)9] [i_3] &= ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)44726))));
                arr_50 [i_3] [i_3] [i_3] [i_11] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_4] [i_4]))) >= ((~(var_10)))));
            }
            for (signed char i_12 = 0; i_12 < 11; i_12 += 3) 
            {
                arr_53 [(short)5] [i_3] [i_4] [i_12] |= ((/* implicit */short) 9755248136128790706ULL);
                var_25 -= ((/* implicit */signed char) (+(((/* implicit */int) arr_47 [i_12] [i_3] [i_3]))));
            }
        }
        for (long long int i_13 = 1; i_13 < 10; i_13 += 4) 
        {
            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) min((((/* implicit */unsigned short) (signed char)-20)), ((unsigned short)20810))))));
            var_27 += ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) / (((/* implicit */int) ((var_4) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_13 - 1] [i_13 - 1] [i_3] [(signed char)5] [i_3] [i_3] [i_3]))))))))) ? (((/* implicit */unsigned long long int) ((((arr_52 [i_13 - 1] [i_13 - 1] [i_13 + 1] [i_13 - 1]) + (9223372036854775807LL))) << (((((arr_52 [i_13 - 1] [i_13 + 1] [i_13 + 1] [i_13 - 1]) + (9025673990274602823LL))) - (43LL)))))) : (max((arr_38 [i_13 + 1]), (arr_38 [i_13 - 1]))));
            arr_56 [i_13] [i_13] = ((/* implicit */unsigned long long int) var_1);
            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))) * (((((/* implicit */unsigned long long int) 4294967295U)) | (9075736368209829771ULL))))))));
        }
        arr_57 [i_3] = ((/* implicit */long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)7))) != (4294967295U))), (min((var_3), ((!(((/* implicit */_Bool) 12ULL))))))));
    }
    var_29 = ((/* implicit */_Bool) var_2);
    var_30 = (~(var_5));
}
