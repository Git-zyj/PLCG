/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154641
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
    var_15 |= ((/* implicit */signed char) (-(((/* implicit */int) ((var_6) >= (((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)-13)), (var_14)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) >> (((max((((/* implicit */long long int) arr_0 [i_0])), (var_6))) - (156893088538947139LL)))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)6))))), ((-(((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (43472310U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 1]))) : ((+(4251494999U)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        var_17 = var_8;
                        arr_11 [0ULL] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)14))) & (var_3)));
                        var_18 = ((/* implicit */signed char) ((((((/* implicit */int) var_5)) >> (((((/* implicit */int) var_9)) - (20471))))) != (arr_8 [i_2])));
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_1))));
                    }
                }
                var_20 = ((/* implicit */unsigned int) arr_4 [i_0] [i_0 - 2]);
                var_21 += ((/* implicit */long long int) var_4);
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_22 = ((/* implicit */short) (-9223372036854775807LL - 1LL));
                    arr_15 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (unsigned short)32760);
                }
                /* LoopSeq 3 */
                for (unsigned short i_5 = 0; i_5 < 11; i_5 += 3) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_7 = 2; i_7 < 9; i_7 += 3) 
                        {
                            arr_27 [i_1] [i_5] [i_5] [i_1] [i_5] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((signed char) (unsigned char)14))), (arr_7 [i_1] [i_5])))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_0 - 2] [i_0 - 1])) >> (((/* implicit */int) arr_22 [i_0 - 2] [i_1 - 2])))))));
                            var_23 = var_12;
                        }
                        for (unsigned int i_8 = 0; i_8 < 11; i_8 += 3) /* same iter space */
                        {
                            var_24 = max((((/* implicit */unsigned int) (+(((/* implicit */int) var_13))))), (((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_3 [i_0 + 1] [i_0 - 1]))));
                            var_25 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_8 [i_5])) ? (((/* implicit */int) arr_10 [i_1] [i_5] [i_5] [i_1])) : (((/* implicit */int) var_5)))) / (((/* implicit */int) (signed char)3)))) <= (((/* implicit */int) (unsigned short)13923))));
                            var_26 = min(((-(1425458706U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 5662010601105448321ULL)) ? ((-(((/* implicit */int) (unsigned short)65525)))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_10 [i_6] [i_5] [i_5] [i_0])) : (((/* implicit */int) (unsigned char)19))))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_9 = 0; i_9 < 11; i_9 += 3) /* same iter space */
                        {
                            arr_33 [i_5] [i_5] [i_5] [i_6] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) -196398464)) ? (((arr_12 [i_0] [(signed char)1] [i_5]) - (((/* implicit */unsigned int) 196398439)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)18874))))))));
                            arr_34 [i_0] [i_0] [i_5] [i_5] [i_6] [i_9] [i_9] = ((/* implicit */int) (signed char)23);
                            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (signed char)86))));
                            var_28 = ((/* implicit */unsigned long long int) (unsigned short)51619);
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_28 [i_1 - 1] [i_5])) >> (((((/* implicit */int) arr_13 [i_0 - 2] [i_1] [i_0 - 2] [i_1 - 1])) - (384)))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned long long int i_10 = 4; i_10 < 10; i_10 += 3) /* same iter space */
                        {
                            arr_37 [i_0 - 1] [i_5] [i_6] [i_10 - 4] = ((/* implicit */_Bool) max((((/* implicit */long long int) (short)32536)), ((-9223372036854775807LL - 1LL))));
                            arr_38 [i_5] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned char)236)))) ? (((/* implicit */int) (short)30720)) : (((((/* implicit */int) (unsigned char)167)) ^ (((/* implicit */int) (unsigned short)57331))))));
                            var_30 ^= ((/* implicit */long long int) max((((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_25 [(short)8] [i_6] [i_5] [i_0] [(short)8])) : (((/* implicit */int) (signed char)-115)))) >> (((((/* implicit */_Bool) (unsigned char)86)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (var_7))))), (((/* implicit */int) (unsigned char)89))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_11 = 4; i_11 < 10; i_11 += 3) /* same iter space */
                        {
                            var_31 = ((/* implicit */unsigned int) ((((long long int) -6138400499817607444LL)) - (((/* implicit */long long int) (-(arr_12 [i_0 - 2] [i_0 - 2] [0LL]))))));
                            var_32 = ((/* implicit */unsigned short) 576320014815068160LL);
                        }
                    }
                    /* vectorizable */
                    for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 3) /* same iter space */
                    {
                        var_33 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0 - 1] [(unsigned short)3]))) & (arr_19 [i_12] [i_5] [i_1] [10U])));
                        var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_14 [i_12])) & (arr_19 [i_0 - 1] [i_1 + 1] [i_5] [i_12])))) ? (((((/* implicit */_Bool) arr_8 [(_Bool)1])) ? (2830536540U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_5] [1LL])) || (((/* implicit */_Bool) (unsigned short)9201)))))))))));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 3) /* same iter space */
                    {
                        arr_47 [i_1 + 1] [i_13] [i_5] [i_5] [i_1 + 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)99)) : (((((var_13) && (((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0 + 1])))) ? (((/* implicit */int) min(((unsigned char)248), ((unsigned char)161)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 1090711428U)))))))));
                        var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_2 [(short)2])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)1)) : (arr_40 [i_1 + 1] [i_0 + 1])))) : (min((((((/* implicit */_Bool) (signed char)112)) ? (arr_43 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)141))))), (((/* implicit */unsigned int) arr_21 [(unsigned short)10] [(unsigned short)10] [i_5]))))));
                        var_36 = ((/* implicit */unsigned short) (-(arr_19 [i_13] [4ULL] [i_0 - 2] [i_0 - 2])));
                    }
                    var_37 = ((/* implicit */short) ((((/* implicit */_Bool) (-(70300024700928ULL)))) && (((/* implicit */_Bool) max((arr_3 [i_0 + 1] [i_0 - 2]), (((/* implicit */unsigned int) (signed char)(-127 - 1))))))));
                }
                for (unsigned short i_14 = 0; i_14 < 11; i_14 += 3) /* same iter space */
                {
                    arr_50 [i_0 - 2] [i_14] [i_1 + 1] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_44 [i_0] [i_0 - 2] [5LL] [i_0 - 1])) & (-6138400499817607455LL)))) ? (((/* implicit */unsigned long long int) max((arr_2 [i_0]), (((/* implicit */unsigned int) var_5))))) : (var_7)));
                    var_38 |= ((/* implicit */short) ((arr_32 [(short)0]) / (((/* implicit */unsigned int) arr_49 [i_0] [i_1 - 2]))));
                }
                /* vectorizable */
                for (long long int i_15 = 0; i_15 < 11; i_15 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_16 = 2; i_16 < 9; i_16 += 3) 
                    {
                        for (signed char i_17 = 0; i_17 < 11; i_17 += 3) 
                        {
                            {
                                var_39 ^= ((/* implicit */int) arr_2 [i_0 + 1]);
                                var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (-6138400499817607444LL) : (((/* implicit */long long int) ((arr_39 [2ULL]) / (var_4))))));
                            }
                        } 
                    } 
                    arr_61 [i_0 - 2] [1U] [i_0 - 2] [0U] = arr_39 [(_Bool)1];
                }
            }
        } 
    } 
    var_41 -= ((/* implicit */short) var_7);
}
