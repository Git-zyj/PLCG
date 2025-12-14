/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135589
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
    var_20 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (short)-14821))))) | (((var_19) ^ (((/* implicit */long long int) ((/* implicit */int) var_14))))))) & (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)14838))) & (var_7)))) ? (((4076472448U) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-14845))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)-14838)) | (((/* implicit */int) var_14))))))))));
    var_21 = ((/* implicit */int) var_7);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_2 = 3; i_2 < 9; i_2 += 3) 
                {
                    var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_3 [i_2 - 1] [i_1 + 1] [i_1])) ? (((/* implicit */int) (short)14842)) : (((/* implicit */int) arr_6 [i_2] [i_1 + 1])))) > ((~(((/* implicit */int) arr_5 [i_0] [i_0] [2]))))));
                    var_23 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_1 + 2])) ? (((/* implicit */int) arr_6 [i_1 + 2] [i_1 + 2])) : (((/* implicit */int) arr_6 [i_1 + 2] [i_1 + 2]))));
                    var_24 = arr_1 [i_1 - 1];
                    var_25 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_2 + 1] [(signed char)2]))));
                }
                for (unsigned int i_3 = 1; i_3 < 6; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        for (int i_5 = 0; i_5 < 10; i_5 += 3) 
                        {
                            {
                                var_26 -= ((/* implicit */unsigned int) (+(((((((/* implicit */_Bool) arr_13 [(_Bool)1] [i_1 + 1] [9])) ? (779665575) : (arr_0 [(signed char)6] [0LL]))) << (((((((/* implicit */_Bool) (unsigned short)30073)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)182))) : (8018387809277367467ULL))) - (182ULL)))))));
                                arr_15 [i_0] [i_1] [i_0] [i_0] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) 1008806316530991104ULL)))))) ? (((/* implicit */int) ((arr_13 [i_0] [(_Bool)1] [i_0]) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_8 [(signed char)9])) != (((/* implicit */int) arr_2 [i_0]))))))))) : (((((/* implicit */_Bool) ((unsigned int) arr_12 [i_4] [(signed char)6] [i_3] [i_4] [i_0] [i_5] [0ULL]))) ? (((/* implicit */int) arr_3 [9ULL] [i_1] [i_4])) : (((((/* implicit */int) arr_4 [i_0])) + (((/* implicit */int) arr_5 [i_5] [i_0] [(_Bool)0]))))))));
                                arr_16 [i_0] [i_0] [i_0] [(unsigned short)6] [i_0] |= ((/* implicit */unsigned long long int) (-(max((arr_14 [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_1 + 1] [i_3 + 4]), (((/* implicit */long long int) arr_12 [i_1 - 1] [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_1 + 1] [i_1]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        for (long long int i_7 = 3; i_7 < 6; i_7 += 2) 
                        {
                            {
                                var_27 = (i_0 % 2 == zero) ? (((/* implicit */short) (((~((~(arr_14 [i_0] [i_1] [i_1 + 1] [i_0] [i_1] [(unsigned char)1]))))) << (((((/* implicit */int) arr_5 [i_0] [i_0] [i_7 + 2])) - (207)))))) : (((/* implicit */short) (((~((~(arr_14 [i_0] [i_1] [i_1 + 1] [i_0] [i_1] [(unsigned char)1]))))) << (((((((/* implicit */int) arr_5 [i_0] [i_0] [i_7 + 2])) - (207))) - (30))))));
                                arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((long long int) arr_0 [i_0] [i_6])) - (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) << (((1008806316530991127ULL) - (1008806316530991112ULL))))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_7 + 1] [i_7]))))) : (779665575)));
                                var_28 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_1 - 1] [i_3] [i_6] [i_7 - 1])) / (((/* implicit */int) arr_7 [i_0] [i_1 + 1] [i_6] [i_7]))))) ? ((+(((/* implicit */int) arr_12 [(signed char)7] [i_6] [8] [i_3] [i_3] [(signed char)6] [i_0])))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_3 + 4] [i_6])) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_7 - 3])) : (((/* implicit */int) arr_12 [i_0] [4U] [i_0] [(signed char)7] [i_0] [(_Bool)1] [i_0]))))));
                                arr_23 [i_0] [i_7] [5LL] [i_6] [i_7] = ((((/* implicit */int) (((+(18446744073709551615ULL))) >= (((/* implicit */unsigned long long int) arr_0 [i_0] [i_3 + 1]))))) << ((((+(((/* implicit */int) (unsigned short)17556)))) - (17534))));
                                var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) ((unsigned int) -2147483627))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-1)) && (((/* implicit */_Bool) (signed char)111))))) : (((/* implicit */int) arr_9 [i_3 - 1] [3U] [i_3 + 3] [i_3 + 4]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        for (short i_9 = 0; i_9 < 10; i_9 += 2) 
                        {
                            {
                                arr_31 [i_9] [i_0] [i_3 - 1] [i_3] [(signed char)9] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((((/* implicit */int) (short)14820)) * (((/* implicit */int) arr_7 [3U] [7U] [i_8 + 1] [i_9]))))))) - (((((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2177))) : (arr_17 [i_0] [i_1] [i_3]))) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_8 + 1] [i_3] [i_1])))))))));
                                var_30 = ((unsigned long long int) ((((/* implicit */int) arr_28 [i_9] [i_1 - 1] [i_3 + 4] [i_8 + 1] [i_9])) & (((/* implicit */int) arr_10 [i_3 + 1] [i_8 + 1] [i_8 + 1] [i_8] [i_8 + 1]))));
                                arr_32 [i_0] [i_9] [i_8] [i_8] [i_9] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_0] [i_1] [i_3] [6LL] [i_9])) && (((/* implicit */_Bool) (signed char)98))))) % (arr_0 [i_9] [i_3 + 3])))) || (((/* implicit */_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_3 + 1]))) & (arr_13 [0U] [i_3 + 3] [i_9]))))))));
                                var_31 *= ((/* implicit */unsigned char) (+((((-(((/* implicit */int) (unsigned short)32640)))) - (((/* implicit */int) max(((short)-27390), (arr_28 [i_0] [i_1] [i_3 + 4] [i_0] [i_9]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 3) 
                    {
                        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                        {
                            {
                                var_32 ^= ((/* implicit */unsigned short) (~((~(arr_0 [0LL] [i_3 - 1])))));
                                var_33 += ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) 349741841U)))))))) ? (((((/* implicit */int) arr_4 [6U])) % (((/* implicit */int) arr_12 [i_1 - 1] [i_1] [i_1 + 1] [i_1] [i_1 + 2] [i_1 + 1] [i_1 - 1])))) : ((((!(((/* implicit */_Bool) (-2147483647 - 1))))) ? (((((/* implicit */_Bool) arr_7 [(signed char)9] [i_1 - 1] [i_1] [i_1])) ? (((/* implicit */int) arr_10 [i_0] [3ULL] [(_Bool)1] [i_11] [3ULL])) : (((/* implicit */int) arr_35 [i_0] [i_0] [i_0] [i_0])))) : (max((((/* implicit */int) (signed char)102)), (1835269918)))))));
                                arr_39 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)111))));
                                arr_40 [i_0] [i_10] [(signed char)5] [0LL] = ((/* implicit */long long int) (((-(arr_27 [i_0]))) / (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_33 [i_0] [i_1] [i_0] [i_0] [i_11])))))))));
                            }
                        } 
                    } 
                }
                for (signed char i_12 = 0; i_12 < 10; i_12 += 3) 
                {
                    var_34 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_36 [i_0] [i_0] [(unsigned short)0] [(unsigned short)3] [(unsigned short)0]))));
                    var_35 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_30 [i_0] [i_1 + 1] [i_1 + 2] [i_1] [i_0])) ? (-2699128358661484607LL) : ((~(arr_13 [i_0] [i_0] [i_0]))))) < (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_20 [i_0] [i_0] [7LL] [i_0] [(signed char)8] [i_0])) << (((((/* implicit */int) arr_6 [i_0] [i_0])) - (50650)))))), (((959885740U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [4U] [i_1] [i_1] [(unsigned short)3] [i_1] [i_1 + 1]))))))))));
                }
                arr_43 [i_0] = ((/* implicit */unsigned short) max(((-(((/* implicit */int) ((arr_27 [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))))), ((~(((/* implicit */int) arr_28 [i_0] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 2]))))));
            }
        } 
    } 
}
