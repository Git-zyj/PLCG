/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145625
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        arr_10 [i_0] [i_1] [i_2] [12LL] [i_3] &= ((/* implicit */int) (!(((/* implicit */_Bool) 18ULL))));
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_4 [i_1])))) ? (((18446744073709551597ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (signed char)107)) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : (arr_0 [i_0]))))))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        var_16 &= ((/* implicit */unsigned char) arr_6 [i_1] [i_0] [23] [i_4]);
                        var_17 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_7 [20U] [(signed char)16] [i_2] [i_2])) ? (arr_6 [i_0] [i_0] [(short)16] [(short)16]) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_4]))))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) ((((unsigned int) var_9)) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                        arr_14 [i_0] [i_0] [i_0] [i_2] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((arr_4 [i_0]) < (((/* implicit */unsigned long long int) ((arr_6 [5ULL] [i_2] [i_1] [i_0]) ^ (-870131743))))))) : (870131738)));
                    }
                    arr_15 [i_2] [i_2] [i_2] [i_2] |= ((/* implicit */short) ((((/* implicit */int) (signed char)-46)) | (((/* implicit */int) (_Bool)1))));
                    var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_13 [i_0] [i_1])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) (signed char)116)))))) : ((+(arr_2 [i_1] [i_2]))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        var_19 ^= ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_5] [i_5])) / (((/* implicit */int) arr_5 [i_5] [i_2] [i_0] [i_0]))));
                        var_20 = ((/* implicit */long long int) arr_18 [i_0] [23LL] [i_0] [i_0] [i_0] [23LL]);
                        var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) * (((var_10) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                        var_22 = ((/* implicit */signed char) ((((/* implicit */int) arr_12 [i_0] [7LL] [i_2])) + ((+(-1170950052)))));
                        /* LoopSeq 2 */
                        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 2) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((unsigned char) (signed char)-94)))));
                            arr_22 [i_0] [i_1] [i_2] [i_5] [i_6] = ((/* implicit */short) (+(arr_2 [i_1] [i_6])));
                        }
                        for (unsigned int i_7 = 0; i_7 < 24; i_7 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-122)) ? (arr_20 [i_1] [i_2] [i_5]) : (arr_20 [i_0] [i_1] [i_2])));
                            var_25 = ((8144015620239142441ULL) >> ((((+(10906006892229226703ULL))) - (10906006892229226670ULL))));
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) var_13))))))));
                        }
                    }
                    for (int i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        var_27 = ((/* implicit */long long int) arr_4 [i_0]);
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((~(arr_4 [i_0]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_0] [i_0] [i_1] [i_1] [i_2] [i_8])))))) ? (((((/* implicit */_Bool) var_5)) ? (arr_21 [i_8] [i_2] [i_1] [i_1] [i_1] [i_0]) : (arr_21 [i_8] [i_8] [i_2] [i_1] [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(4294967281U))))))))));
                        var_29 &= arr_2 [i_0] [i_0];
                        arr_30 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_2] [i_8] [i_0] [i_8])) ? ((+(((/* implicit */int) (signed char)-115)))) : (((((/* implicit */_Bool) 8144015620239142453ULL)) ? (((/* implicit */int) (signed char)97)) : (((/* implicit */int) arr_1 [i_0] [i_0])))))) + (2147483647))) << ((((+(((((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_11))))) - (4294967260U)))));
                        var_30 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_1] [i_2] [i_1] [i_1] [i_0] [i_0])) ? (arr_21 [i_0] [i_0] [i_0] [i_1] [i_2] [i_8]) : (arr_21 [i_8] [i_2] [i_1] [i_1] [i_0] [i_0])))) ? (((arr_21 [i_8] [i_2] [i_1] [i_1] [i_1] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-97))))) : (((/* implicit */long long int) ((int) arr_21 [i_0] [i_1] [i_1] [i_8] [i_2] [i_1])))));
                    }
                    arr_31 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((10U) / (arr_23 [i_0] [i_1] [i_2] [i_1] [i_2] [i_2] [i_1])))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_9 = 0; i_9 < 13; i_9 += 2) 
    {
        for (unsigned short i_10 = 0; i_10 < 13; i_10 += 2) 
        {
            {
                var_31 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((min((arr_20 [i_9] [i_10] [i_9]), (((/* implicit */unsigned int) arr_37 [(unsigned char)7] [(unsigned char)7])))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_9]))))))));
                var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) arr_11 [i_10] [i_10] [i_9] [i_9] [i_9] [i_9]))));
                var_33 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 2)))) ? (((/* implicit */int) (short)-20218)) : (((/* implicit */int) ((_Bool) -870131738)))));
            }
        } 
    } 
}
