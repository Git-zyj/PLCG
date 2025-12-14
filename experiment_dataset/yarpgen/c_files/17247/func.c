/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17247
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
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            {
                arr_5 [i_0 - 1] [i_1 - 1] [i_0] = ((/* implicit */unsigned short) var_11);
                arr_6 [i_0] [(unsigned short)2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)49)) ? (((/* implicit */int) (unsigned char)21)) : (((/* implicit */int) (unsigned char)21))));
                var_17 = ((/* implicit */_Bool) ((((((/* implicit */int) min(((unsigned short)65531), ((unsigned short)65522)))) & (((((/* implicit */_Bool) 22U)) ? (((/* implicit */int) (unsigned short)53605)) : (((/* implicit */int) arr_0 [i_0])))))) * (((/* implicit */int) (unsigned short)11916))));
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((short) ((25U) * (((/* implicit */unsigned int) -1390463642))))))));
                            var_19 = ((/* implicit */unsigned int) arr_8 [i_0 - 1] [i_4] [i_2] [i_3]);
                        }
                        /* vectorizable */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_19 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_16 [i_5] [i_1] [7] [i_1] [7])) + (2147483647))) << (((((/* implicit */int) arr_1 [i_0 - 1])) - (1)))));
                            var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)11952))));
                        }
                        /* vectorizable */
                        for (unsigned int i_6 = 3; i_6 < 8; i_6 += 4) 
                        {
                            arr_24 [i_0 + 1] [i_0] [i_0] [(unsigned short)4] [i_0] = ((/* implicit */unsigned int) (+((-(((/* implicit */int) var_6))))));
                            arr_25 [i_1] [i_1] [i_1] [i_3] [i_3] [i_1] &= ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) var_11)))));
                        }
                        arr_26 [i_3] [i_0] [i_0] = ((/* implicit */unsigned long long int) 435770361U);
                    }
                    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        var_21 = ((unsigned long long int) ((((((/* implicit */_Bool) arr_20 [i_0] [i_1 - 1] [i_0])) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))))) + (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
                        var_22 -= ((/* implicit */_Bool) 3319532298U);
                    }
                    for (unsigned int i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        arr_34 [i_0] [i_1] [10U] [i_1] [i_2] [i_2] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) -6935721417567240997LL)) ? (((/* implicit */int) ((unsigned short) -3608232205782146795LL))) : (((/* implicit */int) (unsigned short)4))));
                        var_23 &= ((((/* implicit */_Bool) (unsigned short)65529)) ? (21U) : (4294967287U));
                        var_24 = ((/* implicit */unsigned char) var_0);
                        arr_35 [i_8] [i_8] [i_0] [i_0] [i_0] = ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 1]))) < (3859196937U)))) % (((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) arr_30 [i_0 + 1] [i_0] [i_1] [i_0]))))));
                        arr_36 [i_0] [i_1] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) arr_18 [i_0] [i_1] [i_1] [i_2] [i_8] [i_8])), ((~(((/* implicit */int) (unsigned short)48591))))));
                    }
                    /* LoopSeq 3 */
                    for (short i_9 = 2; i_9 < 9; i_9 += 4) 
                    {
                        var_25 = ((/* implicit */int) ((unsigned int) var_5));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_10 = 0; i_10 < 11; i_10 += 4) 
                        {
                            var_26 &= ((/* implicit */unsigned long long int) ((arr_14 [i_0 + 1]) == (arr_14 [i_0 + 1])));
                            arr_41 [i_0] [i_0] [i_0] [i_9 + 1] [i_9 + 1] = ((/* implicit */unsigned short) ((((unsigned int) var_11)) & (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                        }
                        for (short i_11 = 2; i_11 < 10; i_11 += 4) 
                        {
                            var_27 = ((/* implicit */int) ((-3608232205782146782LL) ^ (((/* implicit */long long int) arr_22 [i_0] [i_0] [i_2] [1U] [i_9] [i_9] [i_0]))));
                            arr_46 [i_0] [i_0] [i_2] [i_0] [i_11] [i_11] [i_1] = ((/* implicit */unsigned int) arr_16 [i_11] [i_9] [i_0] [i_1 + 3] [i_0]);
                            var_28 = ((/* implicit */short) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)448))));
                            arr_47 [i_0] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) (unsigned short)53625)) ? (3114780945U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65533))))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1 - 2] [(_Bool)1] [i_2] [i_9 + 2] [i_1 - 2]))))) != (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))));
                        }
                    }
                    /* vectorizable */
                    for (long long int i_12 = 0; i_12 < 11; i_12 += 4) 
                    {
                        var_29 += ((/* implicit */unsigned int) ((unsigned short) 1338190432U));
                        var_30 += ((/* implicit */short) ((((/* implicit */int) arr_20 [i_0 + 1] [i_1] [i_1 + 1])) + (((/* implicit */int) arr_16 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0 - 1]))));
                        /* LoopSeq 1 */
                        for (unsigned short i_13 = 0; i_13 < 11; i_13 += 4) 
                        {
                            arr_53 [i_0 + 1] [i_1] [i_0] [i_1] [(short)2] [(unsigned char)4] [i_13] = ((/* implicit */unsigned int) 6292298314707464440ULL);
                            arr_54 [i_0 + 1] [i_0] [i_2] [i_12] [(unsigned short)4] = ((/* implicit */unsigned long long int) ((arr_1 [i_0 - 1]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_31 [i_0]))));
                        }
                        arr_55 [i_2] [i_0] [i_2] [9LL] [i_12] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)166)) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) var_5)))));
                    }
                    for (long long int i_14 = 1; i_14 < 7; i_14 += 4) 
                    {
                        var_31 = ((/* implicit */long long int) var_9);
                        var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) arr_21 [(_Bool)1] [i_14 + 1] [i_14] [i_14 + 1] [i_14 + 4] [i_2] [i_1 + 2]))));
                    }
                }
                /* vectorizable */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            {
                                var_33 = ((/* implicit */int) ((var_3) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) : (18446744073709551593ULL))) : (((/* implicit */unsigned long long int) var_2))));
                                arr_65 [i_0] [i_1] [i_1] [i_16] [i_15] [(short)9] = ((((/* implicit */_Bool) arr_49 [i_0 - 1] [i_1 - 2] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4095))) : (((((/* implicit */_Bool) arr_32 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31395))) : (var_16))));
                                var_34 = ((/* implicit */unsigned int) ((var_3) ? ((-2147483647 - 1)) : (((/* implicit */int) ((signed char) (unsigned short)65524)))));
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) 14308410537129244605ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_1] [i_0 - 1] [i_0] [i_1]))) : (var_16))));
                }
                for (unsigned short i_18 = 3; i_18 < 10; i_18 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_19 = 0; i_19 < 11; i_19 += 4) /* same iter space */
                    {
                        arr_72 [i_0] [i_18] [i_18] [i_1 + 3] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-102)) ? (((/* implicit */int) (!(((((/* implicit */_Bool) arr_16 [7ULL] [i_0] [i_1 - 1] [i_0] [i_0 - 1])) || (((/* implicit */_Bool) arr_52 [i_18] [i_18] [i_18] [i_18] [i_0 + 1] [i_0 + 1]))))))) : (((((/* implicit */int) (signed char)70)) << (((((/* implicit */int) (unsigned short)65531)) - (65510)))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_20 = 2; i_20 < 9; i_20 += 4) 
                        {
                            var_36 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_6))) % (((((/* implicit */_Bool) arr_61 [i_19] [i_20] [i_20 + 1])) ? (arr_61 [i_20] [i_20] [i_20 + 1]) : (arr_61 [i_1] [i_1] [i_20 + 1])))));
                            var_37 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) arr_18 [i_0] [i_20 - 1] [i_18 - 3] [i_19] [i_0] [i_0 - 1])) || (((/* implicit */_Bool) arr_18 [i_0] [i_20 - 1] [i_19] [i_19] [i_19] [i_0 + 1]))))));
                            arr_75 [i_0] [i_0] [6ULL] [i_0 + 1] [i_0] [i_0] [9ULL] = ((/* implicit */signed char) (unsigned char)21);
                        }
                    }
                    for (unsigned int i_21 = 0; i_21 < 11; i_21 += 4) /* same iter space */
                    {
                        arr_78 [i_0] [i_0] [(unsigned char)7] [i_0] = ((/* implicit */unsigned char) min(((-(arr_64 [i_0] [i_0] [i_18 - 2] [i_18 - 2] [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((1180186365U), (4294967287U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned short)25809)) : (((/* implicit */int) (signed char)70))))) : (arr_77 [i_0] [i_0] [i_0 + 1] [i_0 + 1]))))));
                        var_38 = ((/* implicit */unsigned char) arr_32 [i_18 - 1]);
                        arr_79 [i_0] [i_1] [i_21] = ((/* implicit */unsigned int) var_15);
                        arr_80 [i_0] [i_0] [9ULL] [i_0] = ((/* implicit */unsigned short) ((min(((-(var_14))), (((/* implicit */long long int) arr_16 [i_0] [i_0] [(unsigned char)6] [i_0] [0LL])))) & (((/* implicit */long long int) ((((/* implicit */_Bool) 358131426)) ? (((/* implicit */int) (signed char)-52)) : (((/* implicit */int) (unsigned short)11814)))))));
                    }
                    arr_81 [(unsigned short)10] [i_0] [(unsigned short)10] [i_0 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 435770349U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)13))));
                    arr_82 [i_0] [i_1] [i_18] [i_1] = ((/* implicit */short) min((max((arr_69 [i_1] [i_1 + 3] [i_1 - 1] [i_1]), (arr_69 [i_1] [i_1 + 3] [i_1] [i_1]))), (min((arr_69 [(_Bool)1] [i_1 + 3] [i_1] [i_1]), (arr_69 [i_18] [i_1 + 1] [i_1 - 2] [i_1 - 2])))));
                    /* LoopNest 2 */
                    for (long long int i_22 = 2; i_22 < 9; i_22 += 4) 
                    {
                        for (int i_23 = 1; i_23 < 8; i_23 += 4) 
                        {
                            {
                                arr_88 [(_Bool)1] [(_Bool)1] [i_18] [i_18] [(short)6] [i_0] [i_18 - 1] = ((/* implicit */_Bool) (-(((/* implicit */int) var_9))));
                                arr_89 [i_0] [i_22] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))));
                                var_39 = ((/* implicit */int) var_16);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_40 = var_0;
    var_41 -= ((/* implicit */_Bool) (unsigned char)241);
}
