/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1041
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_2] = ((/* implicit */short) (+(arr_1 [i_1])));
                        var_12 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [(signed char)3] [i_3] [6LL])) ? (((/* implicit */int) arr_7 [1ULL] [i_1] [i_2] [1ULL] [i_2])) : (((/* implicit */int) arr_9 [i_3] [7ULL] [7ULL] [i_1] [(unsigned char)10] [7ULL]))));
                        arr_11 [i_3] [i_2] [(unsigned short)14] [(unsigned short)14] = ((/* implicit */unsigned short) arr_2 [i_0]);
                    }
                } 
            } 
            arr_12 [i_1] [i_0] = ((/* implicit */unsigned char) ((1649267441664LL) / (((/* implicit */long long int) ((/* implicit */int) ((short) -1649267441677LL))))));
            arr_13 [i_1] [i_0] = ((/* implicit */unsigned char) (-(((arr_8 [i_0] [i_0] [i_0]) ? (-9223372036854775793LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [2LL] [i_0] [(_Bool)1] [i_0] [2LL])))))));
            arr_14 [i_0] [i_1] [i_1] = ((/* implicit */int) arr_2 [i_1]);
            arr_15 [i_0] = ((/* implicit */short) var_7);
        }
        arr_16 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) var_10))) ? (1649267441664LL) : (((/* implicit */long long int) arr_5 [i_0]))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_19 [i_4] = ((/* implicit */unsigned long long int) (((~(arr_18 [(unsigned short)18]))) | (((((/* implicit */_Bool) -1649267441677LL)) ? (arr_18 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_4])))))));
        arr_20 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1649267441677LL)) ? (((/* implicit */int) arr_17 [i_4])) : (((/* implicit */int) arr_17 [i_4]))))) ? (((/* implicit */int) ((_Bool) -5722291737752967926LL))) : (((/* implicit */int) arr_17 [i_4]))));
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((((((/* implicit */unsigned long long int) -1649267441677LL)) - (18231152348606384924ULL))) - (((/* implicit */unsigned long long int) min((arr_18 [i_4]), (((/* implicit */unsigned int) arr_17 [8ULL])))))))));
        var_14 = ((/* implicit */unsigned int) ((unsigned short) (~(((/* implicit */int) arr_17 [2U])))));
    }
    for (unsigned int i_5 = 2; i_5 < 16; i_5 += 3) 
    {
        arr_25 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)-97)))) ? (-9223372036854775793LL) : ((+((-9223372036854775807LL - 1LL))))))) ? ((-(-1649267441679LL))) : (9223372036854775793LL)));
        arr_26 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_5 + 1])) ? (arr_18 [i_5 - 2]) : (1231693361U)))) ? (arr_24 [i_5]) : ((+(2305838611167182848ULL)))));
        arr_27 [i_5] = ((/* implicit */int) ((unsigned long long int) ((_Bool) (unsigned short)4368)));
        arr_28 [i_5] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) -9223372036854775794LL))));
        arr_29 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */long long int) arr_18 [i_5])), (-3421418685253248291LL))))) ? (((/* implicit */int) ((unsigned char) (unsigned short)38431))) : ((+(((/* implicit */int) arr_17 [i_5 - 2]))))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_7 = 0; i_7 < 13; i_7 += 3) 
        {
            for (unsigned long long int i_8 = 1; i_8 < 12; i_8 += 2) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 3) 
                {
                    {
                        var_15 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)0))));
                        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */int) ((_Bool) 9223372036854775796LL))) > ((+(((/* implicit */int) var_2)))))))));
                        var_17 = ((/* implicit */unsigned long long int) ((var_6) > (((10854276581331213708ULL) - (var_6)))));
                        var_18 -= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((unsigned long long int) -747356093))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_9] [(unsigned char)12] [i_9] [i_8 + 1] [i_8 - 1] [i_8]))) : (max((16140905462542368767ULL), (((/* implicit */unsigned long long int) arr_9 [i_6] [i_9] [i_8 + 1] [i_7] [i_6] [i_6]))))))));
                        arr_38 [i_6] [i_7] [(unsigned char)8] [i_8 + 1] [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((((/* implicit */int) arr_4 [13ULL] [4ULL] [(short)7])) + (2147483647))) >> (((/* implicit */int) arr_2 [i_8]))))) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1]))))) > (((/* implicit */long long int) ((((/* implicit */_Bool) 1649267441679LL)) ? (((/* implicit */int) (unsigned short)19443)) : (((/* implicit */int) (unsigned char)109)))))));
                    }
                } 
            } 
        } 
        arr_39 [i_6] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_32 [i_6])) ? (((/* implicit */int) arr_32 [i_6])) : (((/* implicit */int) arr_32 [i_6])))), ((+(((/* implicit */int) arr_32 [7U]))))));
        /* LoopNest 3 */
        for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 3) 
        {
            for (int i_11 = 0; i_11 < 13; i_11 += 4) 
            {
                for (long long int i_12 = 4; i_12 < 11; i_12 += 1) 
                {
                    {
                        arr_48 [i_12 - 1] [i_10] [i_10] [5ULL] = ((/* implicit */unsigned char) var_8);
                        arr_49 [i_6] [i_10] [i_11] [i_10] = ((/* implicit */unsigned char) (~(var_8)));
                        var_19 = ((/* implicit */unsigned char) (~(((unsigned long long int) (signed char)-35))));
                    }
                } 
            } 
        } 
        arr_50 [i_6] = ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)136)), (min((var_8), (747356099)))));
    }
    var_20 = ((/* implicit */unsigned char) (signed char)15);
}
