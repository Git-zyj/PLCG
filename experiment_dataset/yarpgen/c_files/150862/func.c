/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150862
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
    var_14 = ((/* implicit */short) ((unsigned int) var_1));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */short) arr_0 [i_1]);
                    var_16 ^= (~(((/* implicit */int) arr_7 [i_0] [(unsigned char)15] [i_1] [i_2 + 3])));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((short) ((-1) / (((/* implicit */int) (unsigned char)7)))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (var_7)))) ? (((((var_13) + (2147483647))) << (((((/* implicit */int) var_12)) - (2301))))) : (((/* implicit */int) arr_7 [i_0] [i_0] [(short)5] [i_0]))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) (+(((/* implicit */int) var_12))));
    /* LoopNest 3 */
    for (short i_3 = 3; i_3 < 9; i_3 += 1) 
    {
        for (short i_4 = 0; i_4 < 11; i_4 += 4) 
        {
            for (int i_5 = 3; i_5 < 9; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_6 = 1; i_6 < 10; i_6 += 2) 
                    {
                        for (signed char i_7 = 4; i_7 < 8; i_7 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18113300085042571814ULL)) ? (((/* implicit */int) max((arr_9 [i_3] [i_3]), (((/* implicit */unsigned short) (unsigned char)102))))) : ((~(((/* implicit */int) arr_19 [(short)8] [i_6] [(unsigned char)10] [i_3] [i_3])))))))));
                                arr_21 [i_3] = ((/* implicit */int) max(((!(((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_7] [(unsigned short)0] [i_7 + 2] [i_7])) % (var_9)))))), ((!(((/* implicit */_Bool) var_5))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_8 = 4; i_8 < 8; i_8 += 3) 
                    {
                        var_19 += ((/* implicit */unsigned int) ((((/* implicit */int) (short)-24760)) * (((/* implicit */int) (short)24746))));
                        arr_25 [i_3] [i_4] [i_5] [i_3] = ((/* implicit */short) (unsigned char)153);
                    }
                    for (long long int i_9 = 2; i_9 < 8; i_9 += 2) 
                    {
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_19 [i_3 - 1] [(signed char)10] [i_5] [i_5] [i_3]))) ? (((((var_3) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_12 [i_3] [i_4])) - (17860))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_9) : (arr_11 [i_3] [(short)6] [i_9]))))))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) 14918487143552508355ULL)) ? (arr_22 [(short)10] [i_9]) : (var_7))), (((/* implicit */unsigned int) (unsigned char)32))))) : (((((/* implicit */_Bool) -1521683305)) ? (((/* implicit */long long int) ((unsigned int) 1555409304))) : (((((/* implicit */_Bool) arr_7 [i_3] [i_4] [i_4] [i_9])) ? (-3559812161812019283LL) : (((/* implicit */long long int) -1521683301)))))))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_10 = 3; i_10 < 9; i_10 += 3) /* same iter space */
                        {
                            var_21 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 4294967295U))));
                            var_22 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [i_5] [i_4])) ? (((/* implicit */int) arr_4 [i_3 - 3] [i_5 - 3])) : (((/* implicit */int) arr_19 [i_3] [i_3 - 1] [(short)10] [(unsigned short)0] [i_5 - 3]))));
                        }
                        /* vectorizable */
                        for (unsigned short i_11 = 3; i_11 < 9; i_11 += 3) /* same iter space */
                        {
                            arr_32 [i_11] [i_11 + 2] [i_11] [i_11] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65534)) ? (-1521683305) : (((/* implicit */int) (unsigned short)65534))));
                            var_23 = ((/* implicit */signed char) (~(((/* implicit */int) var_8))));
                            var_24 = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)102)) - (1609542009))) + (((/* implicit */int) (unsigned char)86))));
                        }
                        for (unsigned short i_12 = 3; i_12 < 9; i_12 += 3) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((((((arr_17 [i_4] [i_4]) << (((((/* implicit */int) arr_10 [i_9])) - (43969))))) | (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)65535))))))) & (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) << (((var_6) - (5755072306905277127LL))))))))));
                            var_26 *= ((/* implicit */unsigned short) (~(max((((/* implicit */int) (short)32767)), (2147483624)))));
                            arr_35 [i_12] [5ULL] [i_12] [i_12 - 2] [i_3] [0] = ((/* implicit */int) (short)-32744);
                        }
                        var_27 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
                    }
                    for (unsigned char i_13 = 0; i_13 < 11; i_13 += 2) 
                    {
                        arr_38 [i_3] [i_4] [i_4] [i_5] [i_3] [(unsigned char)9] = ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_13])) ? (255533916) : (((/* implicit */int) arr_12 [(unsigned short)7] [i_4]))))) + (max((arr_30 [i_3 + 1]), (((/* implicit */long long int) arr_12 [i_13] [i_4])))));
                        /* LoopSeq 1 */
                        for (long long int i_14 = 1; i_14 < 9; i_14 += 2) 
                        {
                            var_28 *= ((/* implicit */signed char) ((short) (short)-695));
                            var_29 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? ((+(1921896969))) : (max((var_13), (1609542009)))))) * (min((((((/* implicit */_Bool) arr_6 [i_13])) ? (arr_31 [i_14] [2U] [2U] [7ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))), (((/* implicit */unsigned long long int) ((63) / (((/* implicit */int) (signed char)7)))))))));
                            var_30 = ((/* implicit */long long int) -1);
                            arr_42 [i_3] [i_13] [i_5] [i_4] [i_3] = (i_3 % 2 == zero) ? (((/* implicit */unsigned char) (((+(((/* implicit */int) ((arr_11 [i_3] [i_4] [i_13]) >= (((/* implicit */int) arr_12 [i_3] [i_3]))))))) << (((((/* implicit */int) arr_9 [i_5] [i_3])) - (15549)))))) : (((/* implicit */unsigned char) (((+(((/* implicit */int) ((arr_11 [i_3] [i_4] [i_13]) >= (((/* implicit */int) arr_12 [i_3] [i_3]))))))) << (((((((/* implicit */int) arr_9 [i_5] [i_3])) - (15549))) - (54))))));
                            arr_43 [8ULL] [i_3] [i_5] [i_13] [i_14] [i_3] [i_13] = ((/* implicit */signed char) arr_9 [i_13] [i_3]);
                        }
                        arr_44 [i_3] [(signed char)5] [i_5] [i_3] = (+(((/* implicit */int) (signed char)51)));
                        arr_45 [6LL] [i_3 - 3] [i_3] [i_3] = ((/* implicit */signed char) (((~(arr_28 [i_5 + 2] [5U]))) | (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-75)) ? (((/* implicit */int) (short)31066)) : (((/* implicit */int) (short)-7100)))))));
                        arr_46 [1LL] [i_4] [i_3] [i_4] [i_4] = ((/* implicit */unsigned char) ((5U) << (((((/* implicit */int) (unsigned char)141)) - (124)))));
                    }
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */int) ((unsigned short) max(((+(0U))), (((/* implicit */unsigned int) (~(-1620955489)))))));
}
