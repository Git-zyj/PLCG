/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163933
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
    var_16 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1131761373)) ? (var_13) : (((/* implicit */long long int) var_11))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 12572704376880279497ULL)) ? (((/* implicit */long long int) var_14)) : (var_7)))))) ? ((-(var_13))) : (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_13))) & (((/* implicit */long long int) (~(3553410469U)))))));
    var_17 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), (var_4)))) ? ((-(1401686815U))) : (((/* implicit */unsigned int) var_0)))));
    var_18 = ((/* implicit */unsigned int) (~(-589202081)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        arr_4 [i_0 - 2] = ((/* implicit */unsigned int) (signed char)121);
        arr_5 [i_0 + 1] [i_0 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (arr_3 [i_0 + 1]) : (var_13)));
        arr_6 [i_0 - 1] [i_0] = ((/* implicit */unsigned char) arr_2 [i_0 - 2] [i_0 + 1]);
    }
    for (unsigned int i_1 = 4; i_1 < 13; i_1 += 3) 
    {
        arr_9 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */long long int) ((((((/* implicit */int) (short)-32740)) & (1131761365))) << ((((~(((/* implicit */int) (short)-32756)))) - (32755)))))) : (min((arr_3 [i_1 + 1]), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)0)) >> (((((/* implicit */int) var_8)) - (236))))))))));
        arr_10 [i_1] = ((/* implicit */_Bool) var_9);
    }
    for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        arr_14 [1] &= ((/* implicit */unsigned char) (((-9223372036854775807LL - 1LL)) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25086)))));
        /* LoopNest 2 */
        for (long long int i_3 = 2; i_3 < 9; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                {
                    arr_21 [i_2] [i_3] = ((/* implicit */unsigned int) arr_15 [i_3 + 2] [i_3 + 2]);
                    arr_22 [i_2] [i_3 + 2] [i_4] = ((((/* implicit */_Bool) arr_19 [i_3 + 2] [i_3 + 2])) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)64))) ^ (max((var_10), (((/* implicit */long long int) -1245091637)))))) : (((/* implicit */long long int) arr_19 [i_3] [i_2])));
                    arr_23 [i_2] [i_3] [i_4] = (~(((((/* implicit */_Bool) (~(2229188763U)))) ? ((-(((/* implicit */int) arr_0 [i_3] [i_3])))) : (((/* implicit */int) arr_8 [i_4])))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_28 [0U] [0U] [i_6] [i_4] [i_5] [i_6] = ((/* implicit */int) var_13);
                            arr_29 [i_4] [i_6] [i_6] = ((((/* implicit */int) var_1)) << (((arr_24 [i_3 - 1] [i_3] [i_3 - 1] [i_3 + 1]) - (1493173520U))));
                        }
                        for (int i_7 = 0; i_7 < 11; i_7 += 4) 
                        {
                            arr_32 [i_2] [(_Bool)1] [(_Bool)1] [i_3] [i_4] [i_5] [i_7] = ((/* implicit */long long int) ((((/* implicit */long long int) arr_25 [i_3] [i_3 + 2] [3] [i_4] [i_5])) > (var_10)));
                            arr_33 [i_7] [i_5] = (!(((/* implicit */_Bool) arr_19 [i_5] [i_5])));
                        }
                        for (unsigned int i_8 = 0; i_8 < 11; i_8 += 3) 
                        {
                            arr_36 [i_4] [i_5] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (arr_19 [(unsigned short)4] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_3 - 2] [i_3 + 1] [i_3 - 2] [i_3] [i_3 - 1])))));
                            arr_37 [i_2] [i_3] [i_8] [i_5] [i_8] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -17)) ? (var_4) : (var_9))) ^ (((/* implicit */unsigned int) var_14))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_41 [i_2] [i_3] [i_4] [i_9] = ((/* implicit */unsigned short) ((2229188774U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)62)))));
                            arr_42 [i_3] [i_9] = ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) -8614975354197827295LL)))));
                        }
                        arr_43 [i_2] [i_3 + 1] [i_4] [i_4] [i_2] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32738)) || (((/* implicit */_Bool) arr_11 [i_3 - 2] [i_3 - 1]))));
                        arr_44 [i_3 + 2] [i_4] = ((/* implicit */_Bool) ((7408308449416068533LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                    /* vectorizable */
                    for (unsigned int i_10 = 0; i_10 < 11; i_10 += 3) 
                    {
                        arr_49 [(_Bool)1] [i_4] [i_10] = ((/* implicit */short) 1622346067);
                        arr_50 [i_10] [i_4] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)50))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                    }
                    for (unsigned short i_11 = 0; i_11 < 11; i_11 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_12 = 2; i_12 < 10; i_12 += 4) 
                        {
                            arr_57 [i_2] [i_2] [i_2] [i_3 - 1] [i_4] [i_11] [i_12] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_48 [i_11] [5LL] [i_11] [i_11])) ? (((/* implicit */long long int) arr_12 [i_12 - 1] [i_3])) : (var_10))), (var_7))))));
                            arr_58 [i_3] [i_2] [i_11] [i_2] [(unsigned short)9] = ((/* implicit */long long int) ((unsigned short) min((((((/* implicit */_Bool) var_8)) ? (2297321380U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_12 + 1] [1] [(unsigned char)0] [i_11] [i_3] [i_4] [i_4]))))), (((/* implicit */unsigned int) ((arr_53 [i_2] [i_2] [i_4] [i_11] [i_12]) ? (1131761387) : (((/* implicit */int) arr_8 [i_11]))))))));
                        }
                        for (int i_13 = 1; i_13 < 10; i_13 += 1) 
                        {
                            arr_61 [i_3] [(unsigned short)1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) var_11)), (((((/* implicit */_Bool) arr_47 [i_3 - 2] [i_13 + 1] [10U] [i_13 + 1] [i_13])) ? (arr_45 [i_13 - 1] [i_3 + 1]) : (arr_45 [i_13 - 1] [i_3 - 1])))));
                            arr_62 [i_13] [i_11] [i_4] [i_3] [i_2] = ((/* implicit */unsigned short) (-(max((((/* implicit */unsigned int) max(((short)2251), (((/* implicit */short) (_Bool)1))))), (arr_19 [i_11] [i_2])))));
                            arr_63 [i_4] [i_11] [i_11] [i_11] [(unsigned short)1] = ((/* implicit */unsigned char) ((_Bool) arr_11 [i_2] [i_2]));
                        }
                        arr_64 [i_11] = ((/* implicit */_Bool) (+((-(arr_52 [i_2] [i_3 - 1] [i_3 + 2] [i_3 - 2] [i_3 + 2] [i_11])))));
                        /* LoopSeq 4 */
                        for (unsigned char i_14 = 0; i_14 < 11; i_14 += 4) 
                        {
                            arr_69 [i_4] [i_11] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (4624295202823331945LL)));
                            arr_70 [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))));
                            arr_71 [i_2] [i_2] [i_3] [i_2] [i_11] [i_11] [i_14] = ((/* implicit */int) max(((!(((/* implicit */_Bool) (unsigned short)51719)))), (((arr_25 [i_3 - 1] [i_3] [i_3 + 2] [i_3 - 2] [i_3 - 1]) >= ((~(((/* implicit */int) var_3))))))));
                        }
                        for (int i_15 = 0; i_15 < 11; i_15 += 1) /* same iter space */
                        {
                            arr_76 [i_2] [i_3 - 2] [i_3] [i_4] [i_11] [i_11] [i_15] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (unsigned char)15))))) != (((((/* implicit */_Bool) var_2)) ? (arr_34 [i_2] [10LL] [i_3 - 2] [i_2]) : (((/* implicit */unsigned long long int) var_7)))))));
                            arr_77 [9U] [i_4] [i_3] [i_4] [i_2] = ((/* implicit */signed char) (!(((4624295202823331921LL) != (((/* implicit */long long int) var_4))))));
                        }
                        for (int i_16 = 0; i_16 < 11; i_16 += 1) /* same iter space */
                        {
                            arr_81 [i_4] [i_16] [i_11] [i_4] [i_11] = ((/* implicit */_Bool) arr_80 [i_3 + 2] [i_3 - 1] [i_3 + 2] [6LL] [i_3 + 2] [i_3] [(signed char)5]);
                            arr_82 [i_16] [i_11] [i_16] [i_3] [i_2] = ((/* implicit */unsigned short) (_Bool)1);
                            arr_83 [i_16] [i_3] [i_4] [3U] [i_16] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) 2400926172U)), (-4624295202823331932LL))))));
                        }
                        for (int i_17 = 0; i_17 < 11; i_17 += 1) /* same iter space */
                        {
                            arr_87 [i_2] [i_3] [i_4] [8U] [i_17] = ((/* implicit */long long int) (unsigned short)29984);
                            arr_88 [i_2] [i_3 + 2] [i_4] [i_4] [i_17] = ((/* implicit */unsigned short) max((((/* implicit */int) var_8)), (min((((/* implicit */int) arr_40 [i_11] [(short)9] [i_11] [i_11] [i_11] [i_11] [i_11])), (max((((/* implicit */int) var_2)), (-2098301899)))))));
                        }
                        arr_89 [i_3] [i_3] [i_4] [i_2] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 268435200U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)213)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_55 [i_2] [i_3 - 1] [i_11])))))))));
                    }
                }
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & ((+(((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) (unsigned char)136)) : (var_11)))))));
}
