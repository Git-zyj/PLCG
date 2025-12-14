/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110509
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned char i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        for (short i_4 = 4; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_2] [i_1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (unsigned short)12824)) ? (((/* implicit */int) var_10)) : (arr_8 [i_1])))));
                                var_11 += ((/* implicit */signed char) (-(((((/* implicit */_Bool) 0ULL)) ? (26ULL) : (((/* implicit */unsigned long long int) 929393630U))))));
                            }
                        } 
                    } 
                } 
                var_12 ^= ((/* implicit */int) ((((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) arr_10 [i_1] [i_1 - 1] [i_0])))) < (((/* implicit */int) (signed char)3))));
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 2; i_5 < 18; i_5 += 2) 
                {
                    arr_16 [i_5] [i_5] &= ((unsigned long long int) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_5 [i_5 + 1] [i_1]))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        for (int i_7 = 0; i_7 < 19; i_7 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (~(min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))), (max((var_2), (11ULL))))))))));
                                var_14 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (arr_8 [i_5]) : (arr_8 [i_5])))) ? (min((arr_8 [i_5]), (arr_8 [i_5]))) : (min((arr_8 [i_5]), (((/* implicit */int) (signed char)37))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 19; i_9 += 2) 
                        {
                            {
                                arr_30 [i_0] [i_0] [i_5 - 2] [i_1] [i_1] = ((/* implicit */int) (-(max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-32755))))), (((18446744073709551600ULL) * (18446744073709551600ULL)))))));
                                arr_31 [i_0] [i_1] [i_5] [i_1] [i_1] [i_9] = ((/* implicit */short) arr_15 [i_0] [i_1] [i_1]);
                                var_15 *= ((/* implicit */unsigned char) max((min((3ULL), (((/* implicit */unsigned long long int) -2147483636)))), (((((/* implicit */_Bool) arr_3 [i_8] [i_8] [i_5 - 2])) ? ((-(15ULL))) : (((/* implicit */unsigned long long int) ((int) arr_19 [i_9])))))));
                            }
                        } 
                    } 
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_10 = 1; i_10 < 18; i_10 += 2) 
                {
                    arr_35 [i_1] = ((long long int) (!(((/* implicit */_Bool) (short)29797))));
                    var_16 *= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_18 [i_1 + 1] [i_10] [i_10 + 1] [i_1 + 1]))));
                    var_17 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_0] [i_0] [i_1] [i_10] [(signed char)16]))) : (7U)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) >= (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) (unsigned short)33447)) ? (((/* implicit */int) arr_4 [i_0])) : (-1109118674)))));
                    /* LoopNest 2 */
                    for (short i_11 = 0; i_11 < 19; i_11 += 4) 
                    {
                        for (unsigned short i_12 = 3; i_12 < 18; i_12 += 3) 
                        {
                            {
                                arr_40 [5U] [i_1] [5U] [i_1] [i_0] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) arr_38 [i_1] [i_1] [i_10] [i_1] [i_12])) : (((/* implicit */int) arr_24 [15LL] [15LL] [i_10 + 1] [i_12])))));
                                var_18 += ((/* implicit */int) 18446744073709551607ULL);
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (short i_13 = 1; i_13 < 16; i_13 += 1) 
                {
                    for (unsigned int i_14 = 1; i_14 < 18; i_14 += 2) 
                    {
                        {
                            arr_47 [i_0] [i_1] = ((((/* implicit */_Bool) min((arr_8 [i_1]), (((/* implicit */int) (signed char)122))))) ? (((/* implicit */unsigned long long int) min((arr_8 [i_1]), (arr_8 [i_1])))) : (max((((/* implicit */unsigned long long int) (short)29797)), (18446744073709551598ULL))));
                            arr_48 [i_0] [(_Bool)1] [i_13] [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 1792383216573490047LL)) ? (((/* implicit */unsigned long long int) 13U)) : (1161167442140635478ULL))), (((/* implicit */unsigned long long int) arr_23 [i_14] [i_14] [i_13] [i_1 - 2] [i_14 + 1] [i_13 + 3]))));
                            arr_49 [i_1] [i_13 + 3] [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_7 [i_1] [i_1] [i_1])), (((((/* implicit */_Bool) arr_15 [i_1] [i_1 - 3] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_13 + 3]))) : (min((9163166789139897224ULL), (18446744073709551581ULL)))))));
                            var_19 += ((/* implicit */int) ((((((/* implicit */_Bool) arr_45 [i_0] [i_14 + 1] [12U] [i_13 + 1])) ? (((/* implicit */int) (signed char)105)) : (arr_45 [i_0] [i_14 + 1] [i_14 + 1] [i_13 + 1]))) >= (((arr_45 [i_0] [i_14 + 1] [i_13] [i_13 + 1]) & (arr_45 [i_13] [i_14 + 1] [i_13] [i_13 + 1])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) var_10)), (var_4)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
}
