/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153286
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
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (803028980380854228ULL)));
    var_18 = ((/* implicit */short) (+((+(((long long int) var_9))))));
    var_19 -= ((/* implicit */unsigned long long int) var_8);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            var_20 = ((/* implicit */long long int) ((((arr_2 [i_0 + 1] [i_1] [i_0]) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128))) >= (arr_2 [i_0 - 2] [i_0 - 2] [i_0]))))))) ? (((unsigned int) arr_1 [i_0] [i_0 + 1])) : (((/* implicit */unsigned int) (-(((/* implicit */int) ((-663680656159309301LL) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))))));
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    for (short i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */short) ((signed char) (~(((/* implicit */int) arr_4 [i_0] [i_0])))));
                            arr_11 [i_0] [i_1] [i_0] [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_2 [7LL] [i_0 - 4] [i_0])) ? (arr_10 [i_0] [i_0] [i_1] [i_0] [i_4]) : (((/* implicit */int) arr_7 [i_0 - 3] [i_0])))) - (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)41)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (var_10))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [(signed char)12] [i_3] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_12)))))))));
                        }
                    } 
                } 
            } 
            var_22 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0 - 2] [i_0] [8LL])) ? (arr_8 [i_0 - 3] [i_0] [i_0 - 2] [8LL] [i_0]) : (arr_8 [i_0] [i_0] [i_0 - 2] [(short)3] [i_0])))) ? (((arr_8 [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_0]) / (arr_8 [i_0] [i_0] [i_0 - 2] [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0 - 2] [i_0] [i_0 - 4])) ? (arr_8 [i_0] [i_0] [i_0 - 2] [15] [i_0 - 3]) : (arr_8 [i_0] [i_0] [i_0 - 2] [i_0] [i_0]))));
            arr_12 [i_0] [i_0] [i_1] = max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0 - 1] [i_0]))) ^ (var_11))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) var_15)) >= (((/* implicit */int) var_7))))), (((arr_2 [i_0 - 3] [i_0 - 3] [i_0]) + (((/* implicit */unsigned int) arr_10 [i_0] [i_1] [i_0] [i_0] [i_1]))))))));
            arr_13 [i_0] = ((/* implicit */_Bool) ((unsigned int) ((((((/* implicit */int) (unsigned short)48430)) / (((/* implicit */int) (unsigned short)32049)))) * ((-(((/* implicit */int) arr_4 [i_1] [i_0])))))));
        }
        var_23 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (min((var_10), (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)3)), (var_13)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [(unsigned char)8] [i_0 - 4])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [(_Bool)1])) : ((+(((/* implicit */int) arr_3 [2LL] [i_0] [(unsigned short)12])))))))));
    }
    for (long long int i_5 = 1; i_5 < 9; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            for (int i_7 = 0; i_7 < 11; i_7 += 1) 
            {
                {
                    var_24 *= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) arr_16 [i_5 + 1] [i_5 + 2])) : (((/* implicit */int) arr_16 [i_5 + 2] [i_5 + 1])))));
                    arr_24 [i_5 - 1] [i_5] [i_6] [i_7] = ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_9 [i_5 - 1] [i_5] [i_5 + 1] [i_5 + 1]), (arr_9 [i_5 - 1] [i_5] [i_5 + 1] [i_5 + 1]))))) / (((((/* implicit */_Bool) arr_9 [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 + 1])) ? (arr_14 [i_5 + 1] [i_5 + 1]) : (arr_14 [i_5 + 1] [i_5 + 1]))));
                    arr_25 [i_7] [i_6] [i_5 - 1] [i_5 - 1] = ((/* implicit */short) (unsigned short)1);
                }
            } 
        } 
        arr_26 [i_5 + 2] = ((unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_16 [i_5 + 2] [i_5 - 1])) : (((/* implicit */int) arr_16 [i_5 - 1] [i_5 - 1]))));
    }
    for (long long int i_8 = 0; i_8 < 11; i_8 += 4) 
    {
        var_25 *= ((/* implicit */unsigned int) var_16);
        var_26 |= ((/* implicit */int) max((((var_11) + (((/* implicit */unsigned long long int) arr_10 [i_8] [1U] [i_8] [i_8] [i_8])))), (((/* implicit */unsigned long long int) ((unsigned short) var_4)))));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((signed char) ((((/* implicit */_Bool) arr_10 [i_9] [i_9] [i_9] [i_9] [i_9])) || (((/* implicit */_Bool) arr_10 [(_Bool)1] [i_9] [i_9] [i_9] [i_9]))))))));
        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_9] [(short)2])) | (((/* implicit */int) arr_30 [i_9]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) arr_5 [i_9] [i_9] [(unsigned short)9] [i_9])) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_9 [i_9] [i_9] [i_9] [i_9])) : (var_13))) : (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), (arr_30 [i_9]))))))) : (max((arr_0 [i_9] [i_9]), (((/* implicit */long long int) arr_7 [i_9] [(_Bool)1]))))));
        arr_32 [i_9] = (-(((/* implicit */int) arr_9 [i_9] [i_9] [18] [i_9])));
        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned char) arr_1 [(_Bool)1] [i_9]))))) || (((/* implicit */_Bool) ((unsigned short) (signed char)-112)))));
        arr_33 [i_9] = ((/* implicit */short) var_2);
    }
}
