/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105585
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
    var_16 = ((/* implicit */long long int) (-((-(((/* implicit */int) ((unsigned short) var_14)))))));
    var_17 = var_4;
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 4; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 1; i_3 < 18; i_3 += 4) 
                    {
                        arr_11 [i_2] [i_3] [i_2] [i_2] [i_2] [i_2] = (i_3 % 2 == 0) ? (((/* implicit */unsigned int) (!(((((((/* implicit */int) (_Bool)1)) >> (((arr_9 [i_3] [i_1 + 3]) - (3382122305U))))) < (((/* implicit */int) arr_2 [i_0 - 4]))))))) : (((/* implicit */unsigned int) (!(((((((/* implicit */int) (_Bool)1)) >> (((((arr_9 [i_3] [i_1 + 3]) - (3382122305U))) - (4009288577U))))) < (((/* implicit */int) arr_2 [i_0 - 4])))))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (signed char i_4 = 1; i_4 < 19; i_4 += 1) 
                        {
                            arr_16 [i_0] [i_0] &= ((/* implicit */unsigned long long int) ((unsigned int) arr_9 [i_2] [i_3 - 1]));
                            var_18 = ((/* implicit */int) ((((/* implicit */int) ((signed char) arr_0 [i_0]))) < (((/* implicit */int) ((arr_7 [i_0] [(_Bool)1] [i_4]) < (((/* implicit */int) (_Bool)1)))))));
                            arr_17 [i_0] [i_0] [i_3] [i_4] = ((/* implicit */unsigned int) ((signed char) arr_9 [i_3] [i_1 - 4]));
                        }
                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 17; i_5 += 4) 
                        {
                            var_19 &= ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0 - 3] [i_0 - 3] [9ULL] [i_2] [i_2]))) > (4294967293U));
                            arr_20 [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14691806231136600663ULL)) ? (((/* implicit */int) arr_0 [0])) : (-2115159370)))) ? (((unsigned long long int) arr_19 [i_0 + 1] [i_1] [i_2] [i_2])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)42)))));
                            arr_21 [i_0] [18] [i_2] [(signed char)0] [i_5] [i_2] [18] &= ((/* implicit */int) ((_Bool) arr_13 [i_0] [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_1 + 3]));
                            var_20 = ((/* implicit */long long int) ((unsigned char) arr_9 [i_3] [i_3]));
                        }
                        /* vectorizable */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_24 [i_0] [i_2] [i_3] [i_6] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [12U] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_2]))) : (4294967293U)))) ? (((/* implicit */int) ((signed char) (_Bool)1))) : (((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1]))));
                            arr_25 [i_3] [i_3] [i_3] [i_1] [i_3] = ((/* implicit */unsigned int) ((long long int) arr_9 [i_3] [i_0 - 1]));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_29 [i_0] [i_0] [i_3] [i_0] [i_3] = ((/* implicit */unsigned short) max((2U), (arr_3 [i_0 - 2] [i_1 + 2] [1U])));
                            var_21 &= ((/* implicit */_Bool) ((signed char) min((arr_2 [i_2]), (((/* implicit */unsigned short) (signed char)-108)))));
                        }
                    }
                    for (unsigned short i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        arr_32 [i_0] [i_1] [8U] [i_8] [i_0] = ((/* implicit */int) (+(((((/* implicit */_Bool) ((signed char) 16060223266025996739ULL))) ? (((unsigned long long int) (unsigned short)65532)) : (((/* implicit */unsigned long long int) ((unsigned int) 3U)))))));
                        arr_33 [i_0] [i_0] [i_2] [i_8] = (_Bool)1;
                    }
                    for (long long int i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) -8548808562001794924LL))));
                        var_23 = ((/* implicit */signed char) ((long long int) ((signed char) arr_19 [i_0 - 1] [i_1 + 1] [i_1 + 1] [i_1])));
                    }
                    var_24 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((signed char) max((((/* implicit */unsigned long long int) arr_15 [i_0] [0U] [0U] [i_1] [0U] [2U] [i_0])), (3754937842572950936ULL))))), (12U)));
                }
                /* LoopSeq 2 */
                for (int i_10 = 0; i_10 < 20; i_10 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_11 = 1; i_11 < 19; i_11 += 2) 
                    {
                        for (signed char i_12 = 0; i_12 < 20; i_12 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned long long int) ((arr_42 [i_0] [i_0] [i_0] [i_10] [i_11] [i_11]) > (((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_0 + 1] [i_10] [i_11 - 1])) ? (((/* implicit */int) (unsigned char)253)) : (((/* implicit */int) (_Bool)1)))))));
                                arr_45 [12ULL] [12ULL] [i_10] [i_10] [i_11] [i_10] = ((/* implicit */unsigned short) ((((_Bool) (short)21337)) ? (((unsigned long long int) arr_40 [i_11 + 1] [i_10] [(unsigned char)3] [(unsigned char)3])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (-9223372036854775807LL - 1LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_0 - 1] [i_1] [i_11] [i_12])) ? (-2050958122) : (((/* implicit */int) arr_37 [i_10] [i_1 - 2] [i_10] [i_11]))))) : (arr_42 [i_0] [i_1] [16ULL] [16ULL] [16ULL] [16ULL]))))));
                                var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_1 - 4])))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */signed char) ((short) ((signed char) arr_12 [i_1 + 2] [i_0 - 3])));
                }
                /* vectorizable */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_28 &= ((/* implicit */unsigned int) arr_41 [(_Bool)1] [(short)17] [i_1 + 2] [i_0 - 3]);
                    var_29 = ((/* implicit */unsigned int) ((short) arr_12 [i_0 - 2] [i_0]));
                    /* LoopSeq 1 */
                    for (int i_14 = 2; i_14 < 18; i_14 += 4) 
                    {
                        arr_50 [i_0] [i_1 + 4] [i_13] [i_14 - 2] = ((/* implicit */unsigned short) ((arr_8 [i_0 - 3]) - (arr_8 [i_0 + 1])));
                        arr_51 [i_0] = ((/* implicit */signed char) ((unsigned long long int) arr_28 [(_Bool)1] [i_1 + 1] [i_1 + 1] [i_1] [i_14 - 2] [i_0 - 2]));
                        arr_52 [i_0] [i_1 + 2] [(unsigned short)9] [i_14] &= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_1 - 1] [i_13] [i_14 - 1] [i_14 - 1]))));
                    }
                }
                arr_53 [(signed char)5] [i_0] = ((/* implicit */_Bool) (-(arr_1 [i_0 - 2] [i_0 - 4])));
            }
        } 
    } 
    var_30 &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) max((((/* implicit */int) var_5)), (var_9)))) : (var_13)));
}
