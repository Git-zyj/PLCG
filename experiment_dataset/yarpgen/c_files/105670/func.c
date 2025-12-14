/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105670
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)6375)), (arr_0 [i_1 + 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 2]))) : (2670007535U)));
                var_17 = ((/* implicit */unsigned char) (~(max((394785227U), (((/* implicit */unsigned int) 524287))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (signed char i_4 = 0; i_4 < 22; i_4 += 2) 
                            {
                                arr_15 [i_0] [i_1 - 1] [i_1] [i_2] [i_3] [i_4] [i_4] = ((/* implicit */short) (!(((arr_10 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 - 1]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [i_2 + 1] [i_2 + 1] [i_2] [i_2])))))));
                                var_18 |= ((/* implicit */unsigned char) ((((int) arr_4 [i_0 - 3])) & (-1450519689)));
                            }
                            for (int i_5 = 0; i_5 < 22; i_5 += 4) 
                            {
                                arr_18 [i_0] [21U] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -556148445)) ? (arr_6 [i_1 + 3] [i_1] [i_1 + 3] [15]) : (((/* implicit */unsigned long long int) 556148462))))) ? (((/* implicit */unsigned long long int) ((556148472) >> (((67145463U) - (67145433U)))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_6 [i_1 + 3] [i_1] [i_1 + 2] [i_1])))));
                                arr_19 [i_0] [i_0] [(unsigned char)3] [(unsigned char)3] [i_2 + 1] [i_3] [i_5] &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) 1519270994)), (-2944823625118830947LL)))) ? (((/* implicit */int) (unsigned char)141)) : (-825098811)))) ? (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) 16376U)) : (18446744073709551615ULL))) % (((/* implicit */unsigned long long int) -556148440)))) : (15095487588237291661ULL)));
                            }
                            for (unsigned char i_6 = 0; i_6 < 22; i_6 += 4) 
                            {
                                arr_22 [i_0] [i_1 + 3] [i_2] [i_3] [i_3] [i_3] [1ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((int) var_13)), (max((((/* implicit */int) (_Bool)1)), (2147483630)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (280896771549085381LL) : (((/* implicit */long long int) var_11))))) ? ((+(((/* implicit */int) (unsigned char)229)))) : (min((((/* implicit */int) var_2)), (var_11)))))) : (min((((/* implicit */long long int) arr_1 [i_0 - 3])), (((2944823625118830922LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                                arr_23 [i_0] [i_1] [i_2 + 1] [i_3] [i_3] [i_0] &= ((/* implicit */_Bool) (((~(2048100930U))) | (((/* implicit */unsigned int) ((/* implicit */int) max((arr_16 [i_2] [(unsigned char)15] [i_2 - 1] [i_2] [i_6]), (((/* implicit */short) (_Bool)1))))))));
                                var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)104)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2 - 1]))) : (17383174544265769361ULL)))) ? (min((((((/* implicit */_Bool) -26)) ? (((/* implicit */int) (signed char)107)) : (-135436234))), (((int) (unsigned char)8)))) : (((((((/* implicit */int) arr_16 [i_1 + 3] [i_1 + 3] [i_1 + 1] [i_1 - 1] [i_1])) + (2147483647))) >> (((67145454U) - (67145430U))))));
                                var_20 = (_Bool)1;
                            }
                            /* vectorizable */
                            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                            {
                                arr_26 [i_7] [i_7] [i_3] [i_7] [(_Bool)1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 135436234)) ? (((/* implicit */int) arr_25 [i_1 + 2] [i_7] [i_0 - 1] [(signed char)14] [i_7] [i_1])) : (((/* implicit */int) (unsigned char)42))));
                                var_21 = ((arr_6 [i_0 - 1] [0] [i_1] [i_3]) >= (arr_6 [i_0 + 1] [i_2] [i_0 + 1] [(short)19]));
                                arr_27 [i_7] [i_7] [i_3] [(unsigned short)14] [i_0] [i_7] [i_0] = ((((((/* implicit */_Bool) var_9)) ? (465583847U) : (1000339250U))) >= (67145470U));
                            }
                            arr_28 [i_0 - 3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -2147483633)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4227821838U))) ^ (1926008431U)));
                        }
                    } 
                } 
                arr_29 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_17 [i_0 + 1] [i_0 + 1]), (arr_17 [i_0 - 2] [i_0 - 3])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7949480122236907024ULL)) ? (((/* implicit */int) arr_1 [i_1 + 2])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_0 - 3] [i_1 + 3]))))) : (arr_20 [i_0 - 1] [i_1 + 3] [i_0] [i_0] [i_1 + 3] [5LL] [i_1 + 1])));
                arr_30 [i_0 - 1] [(_Bool)1] [13U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_13 [i_0 - 2] [i_1 + 3] [(unsigned char)11] [(unsigned char)11] [i_1] [i_0 - 3] [i_1 + 3]), (556148461)))) || (((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) 2048443023U))))));
            }
        } 
    } 
    var_22 = var_12;
    var_23 *= ((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)7)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)161)) ? (1047789055U) : (2048443026U)))) ? (((((/* implicit */_Bool) (unsigned char)148)) ? (((/* implicit */int) (short)14391)) : (1035499725))) : (((/* implicit */int) var_5))))));
}
