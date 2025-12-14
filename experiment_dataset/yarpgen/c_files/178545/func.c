/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178545
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
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                arr_7 [i_1 - 2] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((var_3) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-52))))) : (max((arr_4 [i_0] [(signed char)16] [(signed char)16]), (((/* implicit */long long int) arr_0 [i_0] [i_1]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)73)) : (((/* implicit */int) arr_6 [i_0] [i_0]))))) ? ((-(((/* implicit */int) (signed char)-64)))) : ((~(((/* implicit */int) (unsigned short)43867)))))) : (((((/* implicit */_Bool) arr_4 [i_1] [i_1 + 1] [i_1 - 1])) ? (((/* implicit */int) (signed char)-108)) : (((/* implicit */int) (unsigned short)21668))))));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    var_16 *= (~(((/* implicit */int) var_8)));
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)60))))))) : (((((/* implicit */int) (unsigned char)68)) * (((/* implicit */int) (signed char)73))))));
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (signed char)-68))) | (((/* implicit */int) (unsigned short)21668))))) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned char)195)))) : (((((-34336628462929585LL) + (9223372036854775807LL))) << (((((((/* implicit */int) (signed char)-62)) + (110))) - (48))))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_0] [i_1 + 1])))))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) arr_17 [i_0] [i_0] [i_3] [1U] [i_0] [i_5] [i_5]);
                                arr_19 [11] [11] [i_3] [i_4] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)51)), (455795871U)))) ? (arr_17 [i_0] [i_0] [i_3] [i_0] [i_0] [1U] [i_0]) : ((+(arr_11 [(unsigned char)0] [i_1] [i_3]))))))));
                                var_20 *= ((/* implicit */short) (((-((-(455795871U))))) / (((/* implicit */unsigned int) (+((+(((/* implicit */int) (signed char)61)))))))));
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_3] [i_1] [i_3] = ((unsigned int) ((((/* implicit */_Bool) arr_3 [i_1 + 1])) ? (arr_3 [i_1 - 1]) : (arr_3 [i_1 + 2])));
                    /* LoopSeq 1 */
                    for (long long int i_6 = 1; i_6 < 15; i_6 += 3) 
                    {
                        arr_23 [i_0] [i_3] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_22 [i_3] [i_6 + 1] [i_3])) ? (((/* implicit */unsigned long long int) arr_22 [i_3] [i_6 + 1] [i_3])) : (arr_10 [i_1] [(short)9] [i_1 + 1]))), (((/* implicit */unsigned long long int) ((arr_21 [i_3] [i_3]) / (((/* implicit */long long int) ((/* implicit */int) (signed char)73))))))));
                        var_21 = ((/* implicit */long long int) min((arr_1 [i_0]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)89)))))));
                    }
                }
                for (signed char i_7 = 0; i_7 < 17; i_7 += 2) 
                {
                    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((-7108825607586328253LL), (((/* implicit */long long int) (_Bool)1))))) ? (((arr_13 [i_1 + 2] [i_1 + 2] [i_7]) / ((+(((/* implicit */int) (short)16899)))))) : (((/* implicit */int) arr_2 [i_7])))))));
                    var_23 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */long long int) ((var_7) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) + ((-(2305843009213693951LL))))));
                }
                arr_27 [i_1] |= ((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) var_12)), (var_7)))));
                var_24 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) var_8);
}
