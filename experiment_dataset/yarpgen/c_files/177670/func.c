/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177670
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
    for (short i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)17)) ? (((-6206297042738273856LL) ^ (((/* implicit */long long int) (((_Bool)1) ? (2518790796U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1])))))))) : (((/* implicit */long long int) ((2518790796U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) 2518790796U);
                                var_20 = ((/* implicit */long long int) 1776176477U);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 23; i_5 += 1) 
                {
                    for (short i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (signed char i_7 = 0; i_7 < 23; i_7 += 4) 
                            {
                                var_21 = ((/* implicit */unsigned long long int) ((var_9) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) arr_12 [i_0] [i_0 - 2] [i_0] [19LL] [i_0] [i_0] [i_0]))));
                                var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_7] [i_0] [i_5] [1U] [i_0]))) + ((((_Bool)0) ? (var_1) : (arr_9 [i_0] [i_1] [i_1] [i_1] [i_7])))));
                                var_23 = ((/* implicit */unsigned long long int) arr_19 [(_Bool)1] [i_6] [i_5] [i_0] [i_0]);
                            }
                            var_24 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_0] [i_5] [i_6])) && (((/* implicit */_Bool) ((var_10) / (1776176497U))))));
                            /* LoopSeq 1 */
                            for (unsigned char i_8 = 0; i_8 < 23; i_8 += 1) 
                            {
                                arr_25 [i_0] [i_0] [i_6] [(unsigned char)14] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)216)) ? (((((/* implicit */int) var_3)) / (((/* implicit */int) ((signed char) arr_9 [i_6] [i_6] [i_5] [i_1] [i_6]))))) : (((/* implicit */int) var_5))));
                                var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_6] [i_0 - 3] [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_6] [i_5] [i_0 - 2] [i_0] [i_6])) && (((/* implicit */_Bool) arr_5 [i_6] [i_0 - 1] [i_6])))))) : (max((var_10), (((/* implicit */unsigned int) var_14)))))))));
                                var_26 = ((/* implicit */long long int) ((((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_16)))) & (((((/* implicit */_Bool) 2869976047011840919LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-3912)))))) | (((((/* implicit */_Bool) 3924567525440983945ULL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (signed char)-69))))));
                            }
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned long long int i_9 = 3; i_9 < 22; i_9 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 0; i_10 < 23; i_10 += 1) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 23; i_11 += 4) 
                        {
                            {
                                arr_34 [i_0] [i_11] [i_10] [i_11] &= ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned int) ((unsigned short) arr_21 [i_9 - 3] [(short)1] [i_0 + 1] [i_10] [i_11])))));
                                arr_35 [i_11] [i_1] [i_10] [i_1] [i_11] [i_0] &= ((/* implicit */long long int) ((min((((/* implicit */long long int) var_8)), (4964398280773377558LL))) <= (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_0] [i_0 - 1] [i_0 - 1] [i_0])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_12 = 4; i_12 < 20; i_12 += 4) 
                    {
                        for (signed char i_13 = 1; i_13 < 22; i_13 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */signed char) var_13);
                                var_28 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_13 [(_Bool)1] [i_12] [i_0 + 1] [i_0 + 1] [i_0 + 1]))))), (arr_0 [i_1] [i_0]))) <= (((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_0])) - (((/* implicit */int) ((unsigned short) (signed char)-69))))))));
                                var_29 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-5621)) ? (((/* implicit */int) ((short) -4964398280773377562LL))) : (((/* implicit */int) arr_4 [i_1] [i_1] [i_9 - 2]))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */long long int) ((unsigned char) (+(((/* implicit */int) var_2)))));
                    arr_41 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_18 [i_0] [i_0] [i_1] [i_9])) * (((/* implicit */int) var_11)))) * (((/* implicit */int) ((unsigned char) var_10)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 1776176497U)))) : (arr_0 [i_0] [i_0])));
                    arr_42 [i_0] [i_0] [i_9] [10U] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)1))))) ? ((~(arr_22 [i_9] [i_9] [i_9 - 2]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) 4734427881993312526ULL))) ? (((/* implicit */int) (unsigned short)32476)) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (signed char)12))))))))));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_14 = 2; i_14 < 13; i_14 += 2) 
    {
        for (signed char i_15 = 0; i_15 < 14; i_15 += 1) 
        {
            for (unsigned char i_16 = 0; i_16 < 14; i_16 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_17 = 0; i_17 < 14; i_17 += 4) 
                    {
                        for (unsigned int i_18 = 0; i_18 < 14; i_18 += 2) 
                        {
                            {
                                var_31 = var_7;
                                arr_56 [i_14] [i_14] [i_14] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */int) (unsigned char)157)) : (((/* implicit */int) (short)-23459)))) ^ (((/* implicit */int) ((2179474228U) == (((/* implicit */unsigned int) 874327462)))))));
                            }
                        } 
                    } 
                    arr_57 [i_14 - 2] [i_14 - 2] [i_14 - 2] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) + (((-1LL) & (((/* implicit */long long int) ((/* implicit */int) ((signed char) (_Bool)1))))))));
                    var_32 = ((/* implicit */int) ((signed char) max((((/* implicit */short) (signed char)-13)), (((short) (unsigned short)14890)))));
                }
            } 
        } 
    } 
}
