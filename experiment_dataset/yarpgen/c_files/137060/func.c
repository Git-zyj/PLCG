/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137060
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            var_17 = ((/* implicit */int) max((var_17), (arr_1 [i_0] [i_0])));
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (unsigned int i_3 = 1; i_3 < 10; i_3 += 2) 
                {
                    {
                        var_18 += ((/* implicit */unsigned short) arr_2 [i_3]);
                        arr_11 [i_0] [6ULL] |= ((/* implicit */signed char) min((2462667943U), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 12U)) ? (((/* implicit */int) arr_7 [(unsigned short)6] [8LL])) : (-1986670476)))) ? (1374666620U) : (((/* implicit */unsigned int) 1248757503))))));
                        arr_12 [i_0] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) (-((((~(3207364420U))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-28)))))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned char i_4 = 4; i_4 < 9; i_4 += 1) 
            {
                var_19 |= ((/* implicit */int) (signed char)37);
                var_20 = ((/* implicit */signed char) 3903044331U);
                arr_16 [i_1] [i_1] [i_4] = ((/* implicit */signed char) (((!(((((/* implicit */_Bool) 589046366U)) || (((/* implicit */_Bool) arr_10 [i_1])))))) ? (((arr_9 [i_1]) ^ (arr_9 [i_1]))) : (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-24889)))), (arr_5 [i_0] [i_1] [i_4 - 2]))))));
                arr_17 [i_1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned char)255)) ? ((~(((/* implicit */int) (signed char)-93)))) : (511)))));
                arr_18 [i_1] [i_1] [i_4] [i_1] = ((((((/* implicit */_Bool) -2007966872)) && (((/* implicit */_Bool) arr_7 [i_1] [i_4 + 1])))) ? ((-(((((/* implicit */_Bool) (signed char)-84)) ? (arr_14 [i_0] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)108))))))) : (((/* implicit */unsigned int) (-(402653184)))));
            }
            var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 7375155562400420723LL)) ? (-655896747) : ((-(((/* implicit */int) (!((_Bool)1))))))));
        }
        for (signed char i_5 = 0; i_5 < 11; i_5 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */signed char) arr_22 [10U] [10U] [i_0]);
            arr_23 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2107799207)) ? (1641041973) : (((/* implicit */int) (unsigned short)0))));
            /* LoopNest 3 */
            for (int i_6 = 3; i_6 < 8; i_6 += 1) 
            {
                for (short i_7 = 3; i_7 < 9; i_7 += 2) 
                {
                    for (unsigned int i_8 = 0; i_8 < 11; i_8 += 2) 
                    {
                        {
                            arr_33 [i_0] [i_0] [i_7] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_7 - 3] [i_6 + 3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_6 - 1] [i_6 - 1] [i_7 + 1] [i_7]))))) : (((/* implicit */int) ((((/* implicit */_Bool) -501)) && (((/* implicit */_Bool) 2147483642)))))));
                            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) 1073741823U)))))))) ? (max((arr_2 [i_7 + 2]), (((/* implicit */unsigned int) arr_28 [i_8] [i_8] [i_8] [i_8])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_5])))));
                            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_1 [i_7 - 2] [i_6 - 1]), (-1721515431)))))))));
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-69))))), (((((/* implicit */_Bool) -507)) ? (((/* implicit */int) (unsigned short)10)) : (-1))))))));
        }
        for (signed char i_9 = 0; i_9 < 11; i_9 += 1) /* same iter space */
        {
            var_26 = ((((/* implicit */_Bool) 2152641766U)) ? (((/* implicit */int) ((((/* implicit */int) arr_19 [i_0])) >= (((/* implicit */int) arr_19 [i_9]))))) : ((-((+(((/* implicit */int) (_Bool)1)))))));
            var_27 &= (unsigned short)14;
            /* LoopSeq 3 */
            /* vectorizable */
            for (int i_10 = 0; i_10 < 11; i_10 += 1) 
            {
                /* LoopSeq 2 */
                for (int i_11 = 1; i_11 < 8; i_11 += 1) 
                {
                    var_28 = -509;
                    arr_42 [(short)8] &= -2022101552;
                    /* LoopSeq 4 */
                    for (short i_12 = 0; i_12 < 11; i_12 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) 1788466362))));
                        var_30 ^= ((/* implicit */unsigned char) arr_15 [i_11] [i_11 - 1] [(_Bool)1] [i_11]);
                        arr_45 [i_12] [i_0] [i_9] [7] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_9] [i_9])) ? (519117425U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_0] [i_0] [i_9] [i_10] [1ULL] [1])))))) ? (((/* implicit */int) (short)16556)) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_9] [i_9]))));
                    }
                    for (unsigned int i_13 = 1; i_13 < 9; i_13 += 4) /* same iter space */
                    {
                        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)58)) ? (14754522729206175244ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)24)))))) ? ((-(876758847U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)79)))));
                        arr_48 [i_0] [i_0] [i_9] [i_11] [i_13] = ((/* implicit */unsigned int) -2007966858);
                    }
                    for (unsigned int i_14 = 1; i_14 < 9; i_14 += 4) /* same iter space */
                    {
                        arr_51 [i_0] [i_0] [i_0] [i_0] [i_0] [i_9] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_41 [i_11 + 2]))));
                        var_32 = ((/* implicit */unsigned char) arr_15 [i_9] [i_10] [i_9] [i_14 + 2]);
                    }
                    for (unsigned int i_15 = 1; i_15 < 9; i_15 += 4) /* same iter space */
                    {
                        var_33 -= ((/* implicit */unsigned short) arr_46 [i_15] [i_15] [i_15 - 1] [i_15 + 1] [i_11 + 2]);
                        var_34 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)34445)) ? (1528370069) : (arr_5 [2LL] [(short)4] [(short)4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_15 - 1] [i_15 - 1] [i_11 + 3] [i_10] [7U] [i_9] [i_9]))) : (1977098327U)));
                        var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)63595)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_0] [i_11 + 3] [i_11] [i_11] [i_11]))) : (6893064410809644174ULL))))));
                        var_36 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)187)) ? (((/* implicit */int) (signed char)-106)) : (((/* implicit */int) (unsigned short)63602))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1948))) : (8009495148971126192LL)));
                    }
                }
                for (unsigned int i_16 = 1; i_16 < 10; i_16 += 1) 
                {
                    arr_56 [i_0] [i_0] [i_0] [i_0] [i_0] [i_9] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 3903044346U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_10] [i_9]))) : (864012330U))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) -101481352)) ? (((/* implicit */int) (unsigned short)65530)) : (((/* implicit */int) (signed char)-88)))))));
                    arr_57 [i_0] [i_9] [i_0] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned int) -231477926)) : (3903044343U)));
                    var_37 = (~(3159355582U));
                    var_38 = (+(((/* implicit */int) arr_53 [i_16 + 1] [i_16 + 1] [i_16] [i_16] [i_16] [i_16] [i_16])));
                }
                var_39 = ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_10] [i_9] [i_0])) ? (2403730434777929577ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-63)))));
            }
            /* vectorizable */
            for (unsigned int i_17 = 0; i_17 < 11; i_17 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_18 = 0; i_18 < 11; i_18 += 1) 
                {
                    for (unsigned short i_19 = 0; i_19 < 11; i_19 += 2) 
                    {
                        {
                            var_40 = ((/* implicit */unsigned int) max((var_40), (((((/* implicit */_Bool) arr_26 [i_0])) ? (arr_26 [i_18]) : (arr_26 [i_0])))));
                            arr_66 [i_0] [i_0] [i_19] [i_18] [i_19] &= ((/* implicit */unsigned int) arr_6 [i_9] [i_19] [i_19]);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_20 = 0; i_20 < 11; i_20 += 1) 
                {
                    arr_71 [i_0] [i_0] [i_0] [i_9] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) arr_9 [i_9]))));
                    var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) (-(-809400480))))));
                }
            }
            /* vectorizable */
            for (signed char i_21 = 0; i_21 < 11; i_21 += 1) 
            {
                arr_74 [i_9] [i_21] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_27 [i_21] [i_9] [i_0] [i_0]))));
                /* LoopNest 2 */
                for (short i_22 = 2; i_22 < 10; i_22 += 4) 
                {
                    for (unsigned long long int i_23 = 2; i_23 < 7; i_23 += 3) 
                    {
                        {
                            arr_79 [(short)6] [i_9] [i_21] [i_22] [i_0] |= ((/* implicit */int) ((((/* implicit */_Bool) arr_53 [i_21] [i_22 - 2] [i_23] [i_23 + 1] [i_23] [i_23 - 2] [(_Bool)1])) || (((/* implicit */_Bool) -209733124))));
                            var_42 = ((/* implicit */int) (unsigned short)48);
                            var_43 -= (!(((/* implicit */_Bool) 209733129)));
                            arr_80 [i_0] [i_9] [i_9] [i_9] [i_23] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1870007642U))));
                        }
                    } 
                } 
            }
            arr_81 [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) (unsigned char)218);
            var_44 = ((/* implicit */short) max((-2147483621), (arr_1 [i_0] [i_0])));
        }
        var_45 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_49 [i_0] [i_0] [i_0] [i_0] [8LL])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-47))))) : (((((/* implicit */_Bool) (signed char)99)) ? (arr_31 [i_0] [i_0] [i_0] [6LL]) : (((/* implicit */unsigned int) 231477953))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((3893780367U) <= (((/* implicit */unsigned int) 2)))))) : ((-(((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-94))) : (3272816781U)))))));
        arr_82 [i_0] = ((/* implicit */unsigned short) arr_14 [i_0] [i_0] [2LL] [i_0]);
        var_46 = (-(3792168878U));
    }
    var_47 = ((/* implicit */unsigned char) (~((+(max((-1283555068), (((/* implicit */int) (unsigned char)105))))))));
}
