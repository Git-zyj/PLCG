/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159582
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) 3618404492U);
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            var_10 = ((/* implicit */_Bool) ((var_1) ? (((unsigned int) var_1)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_2 - 1] [i_2])))));
                            var_11 = var_7;
                            arr_13 [i_0] [i_1] [i_2 - 2] [i_2 + 1] [i_2 + 1] [i_3] [i_2 + 1] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2U)) ? (4294967293U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44349)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((unsigned long long int) (_Bool)0))));
                            var_12 ^= ((/* implicit */unsigned short) 0U);
                        }
                        arr_14 [i_0] = (_Bool)1;
                    }
                } 
            } 
            var_13 = ((((/* implicit */_Bool) 4294967294U)) ? (((unsigned long long int) 0ULL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))));
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                for (unsigned int i_6 = 3; i_6 < 18; i_6 += 2) 
                {
                    {
                        var_14 = ((/* implicit */short) (~(var_0)));
                        /* LoopSeq 2 */
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            arr_23 [i_5] [i_6 - 2] [i_5] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_9 [i_7] [i_7] [i_5] [i_1] [i_7] [i_0])) : (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])))) | (((/* implicit */int) (unsigned short)20333))));
                            var_15 = ((((/* implicit */_Bool) 7378472442914120343ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_6 + 1]))) : (var_8));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_16 [i_0])) : (((/* implicit */int) (_Bool)0))))) || (((/* implicit */_Bool) arr_6 [i_6 + 1] [i_6 + 2] [i_6 - 2]))));
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) / (((/* implicit */int) arr_9 [i_6 - 2] [i_6 - 2] [i_6 - 2] [i_6 - 3] [i_6 - 2] [i_8]))));
                        }
                    }
                } 
            } 
        }
        for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 3) 
        {
            var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) var_5))));
            var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)25840))));
            /* LoopSeq 3 */
            for (short i_10 = 0; i_10 < 20; i_10 += 4) /* same iter space */
            {
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) var_6))) ? (((0ULL) * (7242795396255544894ULL))) : (18446744073709551615ULL)));
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */int) (unsigned short)6869)) : (((/* implicit */int) (unsigned short)21186))));
            }
            for (short i_11 = 0; i_11 < 20; i_11 += 4) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 373146986U))));
                /* LoopNest 2 */
                for (unsigned int i_12 = 2; i_12 < 18; i_12 += 2) 
                {
                    for (unsigned int i_13 = 0; i_13 < 20; i_13 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 2408060026U)) ? (18167483067985755887ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) - (((/* implicit */unsigned long long int) var_0))));
                            arr_40 [i_0] [i_9] [i_11] [i_0] [i_13] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_13] [i_13] [i_12 - 2] [i_11] [i_9] [i_9])) ? (arr_21 [i_11] [i_11] [i_12 - 2] [i_11] [i_11] [i_11]) : (arr_21 [i_12] [6ULL] [i_12 - 2] [i_11] [i_11] [(_Bool)1])));
                        }
                    } 
                } 
            }
            for (short i_14 = 0; i_14 < 20; i_14 += 4) /* same iter space */
            {
                /* LoopSeq 3 */
                for (unsigned int i_15 = 0; i_15 < 20; i_15 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_16 = 3; i_16 < 19; i_16 += 3) 
                    {
                        var_23 = ((/* implicit */_Bool) max((var_23), (((((((/* implicit */_Bool) 4294967293U)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_16] [i_15]))))) > (var_8)))));
                        var_24 = ((/* implicit */short) 5U);
                        arr_49 [i_14] [i_14] [0ULL] [i_14] [i_16 - 2] [i_16 - 2] [i_0] = ((/* implicit */unsigned short) (((_Bool)1) ? ((-(((/* implicit */int) (short)32757)))) : (((/* implicit */int) var_7))));
                    }
                    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) - ((((_Bool)0) ? (((/* implicit */unsigned long long int) arr_38 [(short)8] [(unsigned short)13] [i_15])) : (22ULL))))))));
                }
                for (short i_17 = 3; i_17 < 19; i_17 += 1) 
                {
                    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) arr_46 [i_0]))))) ? (((((/* implicit */_Bool) var_8)) ? (arr_29 [i_0] [i_14]) : (((/* implicit */unsigned long long int) 3516426268U)))) : (((/* implicit */unsigned long long int) ((unsigned int) 14198741517692611561ULL)))));
                    /* LoopSeq 1 */
                    for (unsigned int i_18 = 2; i_18 < 18; i_18 += 1) 
                    {
                        arr_54 [i_18 + 2] [i_17] [i_14] [i_17] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_0] [i_14] [i_17 - 1] [i_18 - 2]))) | (((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (11ULL)))));
                        var_27 = ((unsigned long long int) (+(14414121234231725081ULL)));
                        var_28 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))));
                        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_14] [i_14] [i_17] [i_17 - 1])) ? (((/* implicit */int) arr_8 [i_0] [i_17] [i_17] [i_17 - 2])) : (((/* implicit */int) (short)26563))));
                    }
                    arr_55 [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!((_Bool)1)))) / (((/* implicit */int) ((_Bool) 11034088537906517800ULL)))));
                }
                for (unsigned int i_19 = 0; i_19 < 20; i_19 += 4) 
                {
                    var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) 3180997859U))));
                    var_31 -= ((/* implicit */unsigned int) ((unsigned long long int) (-(1625200773U))));
                }
                var_32 = ((/* implicit */unsigned int) var_7);
            }
        }
        var_33 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (unsigned short)0)))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_4)))))));
    }
    /* vectorizable */
    for (short i_20 = 0; i_20 < 12; i_20 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_21 = 0; i_21 < 12; i_21 += 3) 
        {
            var_34 = ((/* implicit */short) (unsigned short)34472);
            var_35 = ((/* implicit */unsigned int) 14414121234231725081ULL);
        }
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
        {
            var_36 = ((/* implicit */short) 0U);
            var_37 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_60 [i_20] [i_20] [i_20])) > (((((/* implicit */_Bool) arr_29 [i_20] [i_20])) ? (((/* implicit */int) (short)-32762)) : (((/* implicit */int) arr_1 [i_20] [i_22]))))));
            var_38 = ((((/* implicit */_Bool) (short)7865)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_20] [i_20] [i_20] [i_20]))) : (arr_52 [i_20] [i_20] [i_20] [i_20] [i_22]));
            arr_65 [i_20] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) / (arr_53 [i_20] [i_20] [i_20] [i_20] [i_22] [(_Bool)1])));
        }
        /* LoopNest 3 */
        for (unsigned long long int i_23 = 1; i_23 < 10; i_23 += 4) 
        {
            for (unsigned short i_24 = 0; i_24 < 12; i_24 += 3) 
            {
                for (unsigned int i_25 = 2; i_25 < 11; i_25 += 3) 
                {
                    {
                        var_39 = ((/* implicit */_Bool) ((unsigned int) arr_10 [i_23 + 1] [i_23 - 1] [i_23 + 1] [i_25 + 1] [i_25 + 1] [i_25 + 1]));
                        arr_73 [i_20] [i_23] [i_20] [i_23] [i_25] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18446744073709551602ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-13339))) : (((((/* implicit */_Bool) (short)0)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
                        var_40 = ((/* implicit */unsigned int) max((var_40), (((((/* implicit */unsigned int) ((/* implicit */int) (short)7410))) * (((9U) * (2880010642U)))))));
                    }
                } 
            } 
        } 
        var_41 = ((/* implicit */unsigned short) (short)-25);
    }
    var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) var_4))) + (max((((/* implicit */int) var_9)), (((((/* implicit */int) var_7)) - (((/* implicit */int) var_1)))))))))));
}
