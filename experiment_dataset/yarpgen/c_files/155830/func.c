/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155830
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
    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) var_11))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            for (int i_2 = 4; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_9 [i_0] = 18446744073709551610ULL;
                    /* LoopSeq 4 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        var_14 -= ((/* implicit */int) ((((((((/* implicit */_Bool) 1073741824)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (17322789722884531208ULL))) > (18446744073709551596ULL))) ? (max((((/* implicit */unsigned long long int) arr_0 [i_3])), (((5807603803074813663ULL) << ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775750LL))) + (110LL))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) -1862183032)), (459695495178588612LL)))) ? (((/* implicit */long long int) max((((/* implicit */int) (unsigned char)7)), (-1)))) : (9223372036854775807LL))))));
                        var_15 = ((/* implicit */int) ((((arr_7 [i_0] [i_0] [i_0 + 2] [i_1 + 1]) - (arr_7 [i_0] [i_1] [i_0 + 2] [i_1 + 1]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0])))));
                    }
                    for (long long int i_4 = 3; i_4 < 15; i_4 += 3) 
                    {
                        var_16 = ((max((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (8079380842946408266ULL))), (((/* implicit */unsigned long long int) 459695495178588626LL)))) ^ (((/* implicit */unsigned long long int) (~(0)))));
                        var_17 = max((arr_2 [i_1 - 2]), (((/* implicit */unsigned long long int) -2147483622)));
                        arr_16 [i_0] [i_0] [i_0] [i_0 + 1] = ((18446744073709551599ULL) / (var_0));
                        arr_17 [i_2 + 1] [i_0] [i_0] = ((/* implicit */signed char) var_7);
                        var_18 = ((/* implicit */long long int) (unsigned char)175);
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        arr_20 [i_0] [i_2] = ((/* implicit */short) max((max((((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_5]))) & (var_8))), (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0] [i_0]))))))), ((((-(var_8))) >> (((((((/* implicit */_Bool) arr_0 [i_0])) ? (10367363230763143368ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6961))))) - (10367363230763143333ULL)))))));
                        var_19 = ((/* implicit */signed char) min((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_0])), (var_9)))) ? (max((10367363230763143350ULL), (var_0))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 459695495178588646LL)) : (9681012211162649656ULL))))), (((((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [14LL])) ? (18446744073709551612ULL) : (arr_13 [3ULL] [i_0] [i_2 - 3] [3ULL]))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1620512669427548862ULL)) ? (arr_0 [i_0]) : (-1192026320))))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        arr_23 [i_0] [i_0] [i_0] [i_2] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) 1298430601)) ? (((int) 9223372036854775798LL)) : (((/* implicit */int) arr_22 [i_0 + 2] [i_0 + 2] [i_0] [i_0]))));
                        var_20 ^= ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10))) + (18446744073709551604ULL)))) ? (((((/* implicit */_Bool) 9223372036854775797LL)) ? (15344827825072418531ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [(unsigned char)8]))))));
                    }
                    arr_24 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) (signed char)21)) : (((/* implicit */int) (signed char)(-127 - 1))))), (((/* implicit */int) max((((/* implicit */short) var_11)), (var_3)))))))));
                }
            } 
        } 
    } 
    var_21 = min((((unsigned long long int) (~(2036137550)))), (((/* implicit */unsigned long long int) var_7)));
}
