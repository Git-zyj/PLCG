/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109355
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
    var_20 |= ((/* implicit */short) ((unsigned int) min((((var_15) | (((/* implicit */int) var_1)))), (var_14))));
    var_21 = ((((/* implicit */int) var_19)) + (min(((+(((/* implicit */int) var_0)))), (max((var_12), (((/* implicit */int) var_0)))))));
    var_22 += ((/* implicit */unsigned int) var_16);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_23 = var_3;
        arr_2 [i_0] [i_0] = 4294967295U;
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (unsigned short)11891);
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0])) + ((~(((/* implicit */int) arr_0 [i_0]))))));
    }
    for (unsigned int i_1 = 3; i_1 < 15; i_1 += 1) 
    {
        arr_7 [3U] [i_1 + 1] = ((/* implicit */signed char) min((((/* implicit */unsigned int) min((arr_6 [i_1 - 3] [14]), (arr_6 [i_1 - 3] [i_1])))), (((((/* implicit */_Bool) (unsigned short)35208)) ? (3956887584U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))))));
        /* LoopSeq 3 */
        for (short i_2 = 2; i_2 < 16; i_2 += 4) 
        {
            arr_12 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_5 [i_1 - 3] [i_2 + 1]), (arr_5 [i_1 - 2] [i_2 - 1])))) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_5 [i_1 - 1] [i_2 - 1])) : (((/* implicit */int) arr_5 [i_1 - 2] [i_2 + 1])))) : (((((/* implicit */int) var_10)) - (((/* implicit */int) arr_5 [i_1 - 3] [i_2 + 1]))))));
            var_24 = ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)53666), (arr_9 [i_1]))))) : (arr_8 [i_2]))) & (min((min((((/* implicit */unsigned long long int) (unsigned short)49873)), (15571987152389993773ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2251174300183623657LL)) ? (((/* implicit */int) arr_10 [8LL])) : (((/* implicit */int) arr_6 [10] [i_2 - 2]))))))));
            /* LoopSeq 3 */
            for (short i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                var_25 = ((/* implicit */unsigned short) (short)17534);
                var_26 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_3])) ? ((+(((/* implicit */int) arr_6 [i_2 - 2] [i_1 - 3])))) : (((((/* implicit */int) arr_6 [i_2 + 1] [i_1 - 2])) * (((/* implicit */int) arr_6 [i_2 - 2] [i_1 + 1]))))));
                var_27 &= ((/* implicit */signed char) var_18);
            }
            /* vectorizable */
            for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                var_28 = ((/* implicit */unsigned short) (short)-25308);
                var_29 = ((/* implicit */int) (+(7447087130196481990ULL)));
                var_30 = ((/* implicit */signed char) (~(((arr_8 [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(short)17] [i_1 + 2])))))));
            }
            for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 3) 
            {
                arr_21 [i_5] = ((/* implicit */int) (signed char)7);
                arr_22 [i_5] [i_5] [i_2] [i_5] = arr_14 [i_1];
            }
            var_31 *= ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [11U]))) : (7502740264077706293ULL)))) ? (min((((/* implicit */unsigned long long int) var_0)), (arr_18 [(unsigned short)14] [i_2] [4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))))) * (((((/* implicit */unsigned long long int) ((unsigned int) arr_10 [(unsigned short)2]))) * (arr_18 [i_2 + 1] [i_1] [i_1 - 3]))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 17; i_6 += 3) 
        {
            arr_26 [i_6] [i_6] = ((/* implicit */unsigned int) ((signed char) (unsigned short)15671));
            var_32 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) ^ (var_18)))) ? (((arr_15 [i_1] [(signed char)4]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) ((int) var_9)))));
        }
        for (short i_7 = 0; i_7 < 17; i_7 += 2) 
        {
            arr_29 [i_1] [i_7] [(unsigned short)7] = ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) < (((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */int) arr_1 [i_1 + 2] [i_7])) : (((/* implicit */int) arr_1 [i_1 - 3] [i_7]))))));
            arr_30 [(short)15] = ((/* implicit */long long int) ((min((2042375236U), (((/* implicit */unsigned int) (unsigned short)15663)))) * (max((var_18), (((/* implicit */unsigned int) (unsigned short)31519))))));
        }
        var_33 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_19 [i_1] [i_1 + 1] [i_1 - 3] [(unsigned short)14])), (min((((/* implicit */unsigned long long int) var_13)), (7447087130196481990ULL)))));
    }
}
