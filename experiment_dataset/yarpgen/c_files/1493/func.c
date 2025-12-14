/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1493
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        var_13 -= ((/* implicit */unsigned short) ((max((arr_2 [i_1 + 1] [i_0]), (arr_2 [i_1 - 1] [i_0]))) + (((((/* implicit */_Bool) arr_7 [i_1] [i_1 + 1] [i_1 - 1])) ? (((arr_1 [i_3] [i_1 + 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1 + 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_3] [i_2])))))));
                        arr_10 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((int) 18U))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967278U)) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) arr_6 [i_2]))))) : (((((/* implicit */_Bool) 18U)) ? (var_0) : (((/* implicit */unsigned long long int) 4294967278U))))))));
                    }
                    for (short i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_1 [i_2] [i_1 - 1]))) ? (arr_1 [i_1 + 1] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0])) ? (((/* implicit */int) arr_12 [i_0] [i_1 - 1])) : (((/* implicit */int) arr_12 [i_0] [i_0]))))))))));
                        var_15 = ((/* implicit */int) (((+(((arr_8 [i_0] [i_0] [i_0]) / (12386302629372933322ULL))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_4] [i_4] [i_4])) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) arr_11 [i_2] [i_1] [i_2] [i_4])) ? (((/* implicit */int) (unsigned short)19)) : (((/* implicit */int) arr_5 [i_2] [i_1] [i_0])))) : (((/* implicit */int) (_Bool)1)))))));
                        arr_14 [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (~(arr_2 [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) var_2)), (arr_6 [i_1 + 1]))))) : ((~(arr_1 [i_0] [i_2]))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1 - 1] [i_2])) ? (((/* implicit */int) (signed char)-78)) : (((/* implicit */int) arr_7 [i_0] [i_1 + 1] [i_2])))))));
                        var_16 = ((((arr_1 [i_1 + 1] [i_1 - 1]) ^ (arr_1 [i_1 - 1] [i_1 + 1]))) & (((15980035064414459250ULL) | (arr_1 [i_1 + 1] [i_1 - 1]))));
                        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) max((var_9), (((/* implicit */unsigned short) (unsigned char)96)))))) || (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)88))))))))));
                    }
                    for (unsigned long long int i_5 = 1; i_5 < 10; i_5 += 4) 
                    {
                        arr_18 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6060441444336618294ULL)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23696))) : (2466709009295092365ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))))) ? ((+(arr_8 [i_2] [i_2] [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-23074)) ? (((/* implicit */int) (signed char)-63)) : (((/* implicit */int) (signed char)127)))))));
                        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_1 [i_0] [i_1 - 1])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((3U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0]))))))))) : (((unsigned long long int) arr_3 [i_0] [i_1]))));
                        var_19 &= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)19982))) >= (15980035064414459257ULL))))));
                        var_20 &= ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19)))))) >= (15980035064414459250ULL))) ? (min((((/* implicit */unsigned long long int) arr_16 [i_5] [i_1] [i_5] [i_5] [i_5])), (((unsigned long long int) arr_8 [i_0] [i_1] [i_5])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_4 [i_2] [i_1 + 1]) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_5 - 1] [i_5 - 1] [i_0])) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_17 [i_2])) : (((/* implicit */int) (signed char)-63)))) : ((-(((/* implicit */int) var_9)))))))));
                    }
                    var_21 = ((/* implicit */long long int) ((unsigned long long int) (-(((/* implicit */int) arr_11 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1])))));
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) min((max((arr_8 [i_2] [i_1] [i_0]), (2784993424602847499ULL))), (((/* implicit */unsigned long long int) (~(((var_8) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_1] [i_0] [i_2])) : (((/* implicit */int) var_4))))))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) (-((-(((var_2) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (4468095849054509921ULL)))))));
    var_24 |= var_8;
    var_25 = ((/* implicit */short) max((((/* implicit */int) var_11)), ((~(((/* implicit */int) var_11))))));
}
