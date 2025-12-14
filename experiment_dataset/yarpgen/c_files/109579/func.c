/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109579
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned int) (unsigned short)24576);
                var_10 = ((/* implicit */unsigned short) arr_1 [i_0]);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        var_11 &= ((long long int) ((-4610264286352120970LL) + (((-9223372036854775804LL) & (((/* implicit */long long int) 4064303078U))))));
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (230664218U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -9223372036854775804LL))))))));
    }
    for (unsigned int i_3 = 1; i_3 < 23; i_3 += 4) 
    {
        arr_11 [i_3 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4064303070U)) ? (-2794385111972947760LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3] [i_3])))))) ? (((arr_10 [i_3]) + (((/* implicit */long long int) 3758056450U)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)245)))))) || (((((/* implicit */long long int) arr_8 [i_3 + 2])) <= (((9223372036854775792LL) - (2794385111972947760LL)))))));
        arr_12 [i_3 + 1] [i_3 + 1] |= ((/* implicit */unsigned short) ((unsigned char) -6772232793041237651LL));
        arr_13 [i_3] = ((/* implicit */unsigned char) (((!((_Bool)1))) ? (((long long int) ((unsigned int) arr_10 [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        /* LoopSeq 3 */
        for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            /* LoopSeq 4 */
            for (unsigned int i_5 = 0; i_5 < 25; i_5 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 25; i_6 += 2) 
                {
                    for (long long int i_7 = 3; i_7 < 22; i_7 += 1) 
                    {
                        {
                            arr_26 [i_3] [i_4] [i_5] [i_6] [i_7] = ((/* implicit */unsigned long long int) var_7);
                            var_13 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (+((((_Bool)1) ? (2268972799U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)41)))))))) ? (((((/* implicit */_Bool) ((((-6772232793041237624LL) + (9223372036854775807LL))) >> (((1096622235U) - (1096622172U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_24 [i_5] [i_5] [i_5] [i_6] [i_5] [i_5]) > (2193342529U))))) : (min((var_5), (var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_3 - 1] [i_3 - 1])) ? (2794385111972947745LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_7] [i_7 - 2] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59324))) : (arr_25 [i_3 - 1] [i_5] [i_5] [i_6] [i_5] [i_5] [i_5]))))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_8 = 3; i_8 < 23; i_8 += 2) 
                {
                    var_14 = ((/* implicit */long long int) (~(((arr_20 [i_3] [i_4] [i_5] [i_4]) ? (1834337361U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15)))))));
                    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) (unsigned short)4094))));
                }
            }
            /* vectorizable */
            for (unsigned int i_9 = 3; i_9 < 24; i_9 += 2) 
            {
                var_16 |= ((/* implicit */int) arr_10 [i_3]);
                /* LoopNest 2 */
                for (unsigned short i_10 = 1; i_10 < 21; i_10 += 1) 
                {
                    for (unsigned int i_11 = 2; i_11 < 24; i_11 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -5935700288658996729LL)) ? (((((/* implicit */_Bool) arr_33 [i_11 + 1] [i_4] [i_11 + 1] [i_3] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)116))) : (3404086075059499923ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7)))))));
                            arr_38 [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_9] [i_3 + 2] [i_10] [i_11 - 1] = ((/* implicit */unsigned short) ((unsigned int) arr_27 [i_3] [i_4] [i_9] [i_10] [i_11 + 1]));
                        }
                    } 
                } 
            }
            for (unsigned char i_12 = 0; i_12 < 25; i_12 += 1) 
            {
                var_18 = ((/* implicit */signed char) 9223372036854775804LL);
                /* LoopNest 2 */
                for (long long int i_13 = 0; i_13 < 25; i_13 += 1) 
                {
                    for (unsigned long long int i_14 = 4; i_14 < 24; i_14 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) 8199002955599651567LL)) && (((/* implicit */_Bool) (signed char)-45)))))));
                            var_20 = ((/* implicit */unsigned char) ((-6815530394854451243LL) != (arr_41 [i_3] [i_4] [i_12] [i_13])));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (int i_15 = 0; i_15 < 25; i_15 += 4) 
                {
                    var_21 = ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36783))) % (3744168021U))) != (((/* implicit */unsigned int) arr_8 [i_4])));
                    var_22 |= 3744168030U;
                }
                /* vectorizable */
                for (long long int i_16 = 0; i_16 < 25; i_16 += 2) 
                {
                    var_23 = ((/* implicit */unsigned int) ((arr_20 [i_3 - 1] [i_3 - 1] [i_12] [i_16]) ? (((/* implicit */int) arr_20 [i_3 - 1] [i_3 - 1] [i_12] [i_3 - 1])) : (((/* implicit */int) arr_20 [i_3 - 1] [i_4] [i_3 - 1] [i_16]))));
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_20 [i_3 + 2] [i_3 + 2] [i_3 + 1] [i_3 - 1])) * (-1098433068)));
                    var_25 = ((/* implicit */unsigned short) 6815530394854451261LL);
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_3 + 2] [i_4] [i_12] [i_4])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1)))))) ? (((/* implicit */int) arr_35 [i_3] [i_3] [i_4] [i_12] [i_16] [i_16])) : (((/* implicit */int) arr_9 [i_3 + 1] [i_3 - 1]))));
                    var_27 = ((/* implicit */_Bool) ((unsigned long long int) 6815530394854451243LL));
                }
                arr_49 [i_12] = ((/* implicit */unsigned int) (~(((((/* implicit */long long int) 601556217U)) & (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))) & (8901482171358874053LL)))))));
            }
            for (long long int i_17 = 2; i_17 < 22; i_17 += 2) 
            {
                var_28 = ((/* implicit */signed char) min((var_28), ((signed char)3)));
                var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((6502462156585478437LL) / (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_3]))))) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) & (((624593069U) >> (((-7940172335954238632LL) + (7940172335954238636LL))))))) : (var_8)));
            }
            var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((unsigned char) ((signed char) ((((/* implicit */_Bool) (unsigned short)7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (4318429695063030386ULL))))))));
        }
        for (unsigned int i_18 = 0; i_18 < 25; i_18 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_19 = 4; i_19 < 24; i_19 += 2) 
            {
                for (int i_20 = 1; i_20 < 23; i_20 += 2) 
                {
                    {
                        var_31 = ((((/* implicit */_Bool) arr_30 [i_20 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((335787813406779090ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (((arr_16 [i_3 + 1] [i_3 + 2]) << (((arr_30 [i_20 - 1]) - (1320515039))))));
                        var_32 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)7)) ? (4318429695063030389ULL) : (((/* implicit */unsigned long long int) arr_53 [i_19 - 3] [i_20 + 2]))))) ? ((~(((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) 0U)) : (6815530394854451274LL))))) : (((/* implicit */long long int) ((unsigned int) ((unsigned short) 2143289344LL))))));
                    }
                } 
            } 
            var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) 6815530394854451242LL)) ? (((unsigned int) ((unsigned int) 1385059325401837701LL))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_31 [i_3] [i_3 + 2] [i_18] [i_18])) : (((/* implicit */int) (unsigned short)13120))))) ? (((arr_19 [i_18] [i_18] [i_3 + 2]) ? (((/* implicit */int) (unsigned char)81)) : (((/* implicit */int) (unsigned char)7)))) : (arr_30 [i_3 + 1]))))));
            arr_61 [i_3] [i_3] [i_3 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_15 [i_18] [i_18])) + (9205357638345293824ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)229))) : (((((/* implicit */_Bool) -6815530394854451261LL)) ? (195633012U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)186)))))))) ? (((/* implicit */unsigned long long int) ((arr_41 [i_3] [i_18] [i_18] [i_18]) - (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)2)) ? (arr_25 [i_3] [i_3] [i_3 + 1] [i_3] [i_3] [i_18] [i_18]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31186))))))))) : (((((/* implicit */_Bool) ((var_0) + (((/* implicit */unsigned long long int) 195633012U))))) ? (((/* implicit */unsigned long long int) ((6107540078755598026LL) + (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_18] [i_3])))))) : (18415045806588385401ULL)))));
        }
        /* vectorizable */
        for (long long int i_21 = 0; i_21 < 25; i_21 += 1) 
        {
            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 42589060747517322LL)) ? (((((/* implicit */_Bool) var_4)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)249))))) : (((long long int) (unsigned char)255))));
            var_35 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)41956))));
            var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)10435)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4605))) : (6U)));
        }
        /* LoopNest 2 */
        for (int i_22 = 0; i_22 < 25; i_22 += 2) 
        {
            for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) 
            {
                {
                    var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) ((((((((/* implicit */_Bool) (unsigned short)10390)) ? (14128314378646521222ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_67 [i_22] [i_22] [i_23]))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)226)) ? (3913572752U) : (4294966784U)))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)48780)) & (((((/* implicit */int) (unsigned short)65535)) | (((/* implicit */int) arr_57 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]))))))))))));
                    arr_69 [i_23] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned short) 4168332917016910513LL)))));
                    var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) ((((-478128976189332151LL) + (9223372036854775807LL))) >> (((((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)3))))) & (((((/* implicit */_Bool) (unsigned char)7)) ? (var_1) : (((/* implicit */long long int) var_9)))))) + (5191354025455289664LL))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_24 = 0; i_24 < 25; i_24 += 2) 
                    {
                        for (unsigned char i_25 = 2; i_25 < 23; i_25 += 2) 
                        {
                            {
                                arr_74 [i_3] [i_22] [i_3] [i_24] [i_23] [i_3 + 2] [i_23] = ((/* implicit */signed char) ((unsigned short) ((arr_37 [i_3 + 1] [i_3 - 1]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_37 [i_3 + 1] [i_3 - 1])))));
                                arr_75 [i_3] [i_3] [i_23] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((-42589060747517322LL) + (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (unsigned char)253)) & (((/* implicit */int) var_7))))))) ? (((/* implicit */int) min(((unsigned short)30), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) -1778758471)) != (var_3))))))) : (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (arr_40 [i_3] [i_24] [i_23]) : (((/* implicit */int) (signed char)0))))) < (((var_2) ? (6963919751176761164LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_39 = var_5;
}
