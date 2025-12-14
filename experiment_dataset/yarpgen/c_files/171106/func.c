/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171106
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
    var_14 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((var_7) + (((/* implicit */long long int) ((/* implicit */int) var_12))))))));
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? ((+((~(var_3))))) : (min((min((1496388745U), (((/* implicit */unsigned int) var_11)))), (var_13)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (_Bool)1);
                var_16 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_2)) != (373486119))))) | ((~(1496388754U)))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) var_3);
                var_17 = ((/* implicit */long long int) (unsigned char)237);
                arr_6 [i_0 - 2] = ((/* implicit */_Bool) (-2147483647 - 1));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1513867893U)) && (((/* implicit */_Bool) var_13))));
                /* LoopSeq 3 */
                for (int i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    arr_15 [i_2] [i_3] [i_2] = ((/* implicit */long long int) var_10);
                    arr_16 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(((/* implicit */int) var_2))))) == (((long long int) ((((/* implicit */_Bool) 2781099380U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_12)))))));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned int) var_5))))) ? ((((~(((/* implicit */int) var_10)))) ^ ((~(((/* implicit */int) arr_14 [i_3])))))) : (max((((((/* implicit */int) arr_11 [i_2] [(_Bool)1] [i_4])) >> (((((/* implicit */int) (short)-32756)) + (32785))))), (((/* implicit */int) arr_13 [i_4] [i_4] [i_3] [i_2]))))));
                }
                for (unsigned char i_5 = 1; i_5 < 16; i_5 += 4) 
                {
                    arr_19 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((long long int) max((1522199408), (((/* implicit */int) arr_13 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 + 1])))));
                    /* LoopSeq 3 */
                    for (unsigned short i_6 = 2; i_6 < 16; i_6 += 2) /* same iter space */
                    {
                        arr_23 [i_2] [i_3] [i_5] [i_3] = ((/* implicit */unsigned short) (-9223372036854775807LL - 1LL));
                        var_20 += ((/* implicit */short) ((int) ((arr_22 [4U] [i_5 - 1] [i_5] [i_5 + 1] [(unsigned short)0] [i_6 - 2]) << (((((/* implicit */int) var_6)) + (4848))))));
                        var_21 = (-((-(((902698921810824999LL) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
                    }
                    for (unsigned short i_7 = 2; i_7 < 16; i_7 += 2) /* same iter space */
                    {
                        var_22 = ((/* implicit */signed char) (-((-(((/* implicit */int) var_5))))));
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)11298)) ? (((/* implicit */int) (unsigned short)39127)) : (((/* implicit */int) (signed char)32)))))))));
                        /* LoopSeq 1 */
                        for (long long int i_8 = 0; i_8 < 17; i_8 += 2) 
                        {
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) var_10))));
                            var_25 = ((/* implicit */unsigned char) (signed char)-33);
                        }
                    }
                    /* vectorizable */
                    for (unsigned char i_9 = 1; i_9 < 14; i_9 += 4) 
                    {
                        var_26 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_24 [i_2] [i_2] [i_3] [i_5] [i_5] [i_9]) ? (var_4) : (((/* implicit */int) var_5)))))));
                        var_27 = ((/* implicit */unsigned int) (-(7691308775532733071ULL)));
                    }
                }
                for (int i_10 = 2; i_10 < 16; i_10 += 4) 
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_11 = 3; i_11 < 16; i_11 += 3) 
                    {
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32755))) : (var_3)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) / (((/* implicit */int) (unsigned char)190))))) : ((-(var_13)))))) ? ((~(((/* implicit */int) arr_18 [i_10 + 1] [(signed char)8] [i_11 - 1])))) : (((/* implicit */int) arr_11 [i_11] [(signed char)1] [(signed char)1])))))));
                        arr_38 [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) ((short) arr_26 [i_10 + 1] [i_11 - 2] [i_11 - 1] [i_10 + 1] [i_11 - 3])))));
                        var_29 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)39106))) | (((var_7) + (((long long int) var_6))))));
                    }
                    for (unsigned int i_12 = 0; i_12 < 17; i_12 += 4) 
                    {
                        var_30 = ((/* implicit */signed char) 2798578570U);
                        var_31 = ((/* implicit */long long int) max((var_31), (arr_37 [i_10 - 1] [i_10] [i_10 - 1] [i_10 - 1])));
                        var_32 = (~(((/* implicit */int) ((unsigned short) (_Bool)0))));
                        arr_42 [i_12] [i_10] |= ((/* implicit */short) ((((/* implicit */int) var_6)) + (((((/* implicit */int) ((-3236835232856562318LL) != (((/* implicit */long long int) ((/* implicit */int) var_6)))))) % (((/* implicit */int) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) var_12)))))))));
                    }
                    for (int i_13 = 2; i_13 < 16; i_13 += 4) 
                    {
                        var_33 |= ((/* implicit */int) var_8);
                        var_34 = ((/* implicit */signed char) 1231102149);
                    }
                    for (long long int i_14 = 0; i_14 < 17; i_14 += 3) 
                    {
                        arr_49 [i_3] [(signed char)4] [(signed char)8] [5] [i_3] = ((/* implicit */int) ((var_7) & (((/* implicit */long long int) ((/* implicit */int) min((var_0), (arr_31 [i_10 + 1] [i_10] [i_10 + 1] [i_10 - 2])))))));
                        arr_50 [i_3] = ((/* implicit */short) arr_36 [1U] [i_3] [i_3] [i_10 + 1] [(unsigned short)12]);
                    }
                    arr_51 [i_2] [i_2] &= var_4;
                }
                /* LoopSeq 1 */
                for (int i_15 = 1; i_15 < 16; i_15 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_16 = 4; i_16 < 16; i_16 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_17 = 0; i_17 < 17; i_17 += 4) 
                        {
                            var_35 ^= ((/* implicit */unsigned char) var_10);
                            arr_60 [(short)0] [i_3] [i_15] [i_3] [i_2] = ((/* implicit */long long int) arr_20 [i_16 - 2] [i_16 - 2] [i_16 - 1] [i_16 - 2] [i_16] [i_16 + 1]);
                        }
                        /* vectorizable */
                        for (short i_18 = 0; i_18 < 17; i_18 += 2) 
                        {
                            var_36 = ((/* implicit */unsigned short) 1799455948U);
                            arr_64 [i_18] [i_3] [i_15 + 1] [i_3] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_10))));
                            arr_65 [i_3] [i_3] [i_3] [i_16] [i_3] [i_16] [i_16] = ((/* implicit */signed char) var_3);
                            var_37 += ((/* implicit */short) (-(var_4)));
                            var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_48 [i_16 - 1] [i_15 + 1] [i_16 - 1] [i_16])))))));
                        }
                        for (unsigned char i_19 = 2; i_19 < 15; i_19 += 4) 
                        {
                            var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) var_5))));
                            arr_68 [i_2] [i_2] [i_2] [i_19] [i_2] [i_2] &= ((/* implicit */unsigned int) arr_24 [i_19] [i_19] [16ULL] [i_19] [i_19] [(signed char)1]);
                            var_40 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) ((((((/* implicit */int) (signed char)-19)) + (2147483647))) >> (((-1714303266) + (1714303285))))))) % (((/* implicit */int) var_5))));
                            arr_69 [i_19 + 1] [2U] [i_3] [i_3] [i_2] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_66 [i_19 + 2] [i_19 + 2] [i_15] [i_19] [i_3] [i_2])) ? (((/* implicit */long long int) 2798578572U)) : (var_7)))));
                        }
                        arr_70 [i_3] [i_3] [i_15 - 1] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_3)) ? (arr_45 [i_15 - 1] [i_15] [i_15] [i_15] [i_15 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                    }
                    /* vectorizable */
                    for (short i_20 = 0; i_20 < 17; i_20 += 4) 
                    {
                        var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) ((((/* implicit */_Bool) ((int) 1714303266))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) arr_11 [i_15 + 1] [i_3] [i_15 + 1])))))));
                        var_42 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))));
                    }
                    var_43 *= ((/* implicit */short) (+(((/* implicit */int) var_5))));
                }
            }
        } 
    } 
}
