/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177871
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
    var_16 = ((/* implicit */unsigned long long int) var_11);
    var_17 ^= ((((((/* implicit */int) var_4)) == (((/* implicit */int) ((unsigned char) 127LL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((min((17119402076593521662ULL), (((/* implicit */unsigned long long int) var_4)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) < (var_7))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_2 [i_0 + 2] [i_0 + 1]) % (18446744073709551615ULL)))) ? ((~(((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))) : (((/* implicit */unsigned long long int) ((int) arr_5 [i_0 + 1] [i_1])))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */short) (_Bool)0)), ((short)15069)))) - (((/* implicit */int) ((((/* implicit */int) (unsigned short)35642)) != (((/* implicit */int) (short)-15069)))))));
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((short) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 + 2] [i_2])) > (((/* implicit */int) arr_7 [4ULL]))))) << (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (5907231661741239456ULL)))))))));
                                arr_12 [8] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */signed char) min(((~(((/* implicit */int) ((var_4) || (((/* implicit */_Bool) -2110180645))))))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)7))) > (var_7))))));
                                var_21 -= ((/* implicit */unsigned int) max((((/* implicit */int) arr_7 [i_0 + 1])), (((((/* implicit */int) arr_7 [i_0 + 1])) * (((/* implicit */int) arr_7 [i_0 + 2]))))));
                                var_22 = ((/* implicit */short) arr_1 [i_0] [i_3]);
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_0] [i_1] [i_0] = max((((/* implicit */unsigned int) ((int) var_5))), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) var_1))))), (((((/* implicit */_Bool) 262144LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_9 [i_0] [i_0] [i_1] [i_2]))))));
                    var_23 &= ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-1))));
                    arr_14 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_7 [i_0 - 1]);
                    arr_15 [(_Bool)1] [i_0] [i_0 + 1] = ((/* implicit */signed char) var_6);
                }
                var_24 -= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)6)), (var_15))))))) ^ ((+(((/* implicit */int) arr_10 [i_0 + 1]))))));
                /* LoopSeq 3 */
                for (unsigned char i_5 = 2; i_5 < 11; i_5 += 3) 
                {
                    var_25 = ((/* implicit */unsigned long long int) ((max((arr_0 [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)23297)) ? (((/* implicit */int) (signed char)73)) : (((/* implicit */int) (short)18468))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
                    var_26 *= ((/* implicit */short) ((long long int) (_Bool)1));
                    arr_18 [i_1] &= ((/* implicit */unsigned char) ((unsigned long long int) arr_3 [i_0] [i_5]));
                    arr_19 [i_0] [i_0] [(short)0] = ((/* implicit */unsigned long long int) ((((long long int) arr_10 [i_0 - 1])) ^ (-1LL)));
                    arr_20 [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_5 + 1] [i_5]))) <= (arr_9 [i_0 - 1] [4ULL] [i_1] [i_5])))) << (((((arr_2 [i_0 + 2] [i_0]) << (((arr_6 [i_1] [2ULL]) - (2099600097U))))) - (10092818728931459060ULL))))), (((/* implicit */int) ((_Bool) arr_0 [i_0 - 1])))));
                }
                for (unsigned int i_6 = 0; i_6 < 12; i_6 += 3) 
                {
                    var_27 = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_1] [i_1]))))), (max((((/* implicit */unsigned long long int) arr_21 [i_6] [i_6] [i_6])), (var_14))))), (((((/* implicit */_Bool) (-(3ULL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) & (var_14))) : ((~(var_14)))))));
                    arr_23 [i_0] [i_0] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) 689503243)) / (762034810U)));
                    var_28 ^= ((/* implicit */unsigned int) arr_17 [i_0 + 1] [i_0 + 1] [i_0 + 2] [2LL]);
                }
                for (unsigned long long int i_7 = 2; i_7 < 11; i_7 += 4) 
                {
                    arr_28 [(_Bool)1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0 - 1] [i_1] [i_7 - 1]))) | (((((/* implicit */_Bool) arr_11 [i_0] [i_0 + 1] [i_7 - 1] [i_0 + 1])) ? (arr_16 [i_1] [i_1]) : (arr_16 [i_0 - 1] [i_0 + 2])))));
                    var_29 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_24 [i_0 + 2] [i_0 + 2] [i_0 + 2])) && (((/* implicit */_Bool) (signed char)0)))) || (((/* implicit */_Bool) var_10))));
                }
                var_30 = ((/* implicit */short) (~((+(((/* implicit */int) (signed char)-35))))));
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)64))))))))));
    var_32 = ((/* implicit */_Bool) var_11);
}
