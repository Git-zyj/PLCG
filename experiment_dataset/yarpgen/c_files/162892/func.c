/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162892
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_0] [i_0])), (arr_2 [i_0])))) ? (((((/* implicit */_Bool) (short)-347)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((/* implicit */int) arr_1 [i_0] [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)19286)))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned char) var_5)), (var_0)))) >= (((((/* implicit */int) arr_1 [i_0] [i_1])) / (((/* implicit */int) (unsigned short)65530))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-8)) ? (min((var_10), (((/* implicit */long long int) (_Bool)1)))) : ((~(arr_11 [i_0] [(unsigned short)1] [i_2] [i_3] [i_4])))))), (min((min((((/* implicit */unsigned long long int) var_2)), (var_6))), (((/* implicit */unsigned long long int) ((var_5) ? (((/* implicit */long long int) var_4)) : (arr_11 [i_0] [i_1] [i_0] [i_3] [i_4]))))))));
                                var_12 *= ((/* implicit */unsigned char) ((((((/* implicit */long long int) (+(((/* implicit */int) var_0))))) / ((+(arr_9 [i_0] [i_1] [i_4] [i_3] [i_4]))))) * (((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)1191)) : (((/* implicit */int) arr_13 [1LL] [i_1] [(short)13] [i_0] [i_4] [i_1] [i_2]))))) * (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_4] [i_4]))) : (var_10)))))));
                                arr_15 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) ((unsigned char) var_0)))))) ? ((~(2603965513728316959ULL))) : ((+(36028797018963968ULL)))));
                                var_13 ^= ((/* implicit */short) var_5);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_14 = ((/* implicit */unsigned short) max((((((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0] [i_0])), (arr_6 [i_0])))) - (1015830179))), (((((/* implicit */_Bool) 8829953328624741989LL)) ? (((/* implicit */int) min((var_11), (var_11)))) : ((+(((/* implicit */int) arr_1 [i_0] [i_0]))))))));
    }
    var_15 = ((/* implicit */signed char) (unsigned char)205);
}
