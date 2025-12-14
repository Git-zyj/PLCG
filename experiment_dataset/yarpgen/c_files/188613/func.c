/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188613
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */int) var_12))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            var_18 = ((/* implicit */_Bool) max((var_18), ((_Bool)1)));
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned int i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                var_19 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_2 + 3])) * (((/* implicit */int) arr_4 [i_2 + 2] [i_2 - 1]))));
                var_20 *= ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_1])) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_0])))));
                arr_8 [i_1] [i_1] [i_1] &= ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (((int) var_9)));
                /* LoopNest 2 */
                for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    for (int i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_0] [2LL] = ((/* implicit */int) arr_6 [i_4] [i_0] [i_0] [i_1]);
                            arr_14 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_2 + 2] [i_2 + 2] [(signed char)3] [i_2] [6ULL])) ? (arr_11 [i_0] [i_1] [i_2 + 4] [i_3] [i_4] [i_3] [(signed char)5]) : (arr_11 [i_0] [i_1] [i_2 + 3] [i_3] [i_2] [i_3] [i_2])));
                        }
                    } 
                } 
                arr_15 [i_2] [i_0] [i_0] [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) * (arr_11 [i_2 - 1] [i_1] [21LL] [i_1] [i_1] [i_2 - 1] [(signed char)13]));
            }
            for (signed char i_5 = 0; i_5 < 22; i_5 += 3) 
            {
                arr_20 [i_0] [i_5] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) > (var_15)));
                var_21 = ((/* implicit */unsigned char) min((var_21), (var_11)));
                var_22 = ((/* implicit */int) var_5);
            }
            for (signed char i_6 = 2; i_6 < 21; i_6 += 1) 
            {
                arr_23 [i_0] = ((/* implicit */unsigned int) -693851706);
                var_23 += ((/* implicit */unsigned short) var_10);
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    for (unsigned int i_8 = 3; i_8 < 21; i_8 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) arr_26 [i_0] [6U] [i_6] [i_7] [i_8 - 1]))));
                            arr_28 [i_0] [10U] [10U] [10U] [i_0] = ((/* implicit */short) ((((unsigned int) arr_3 [i_0] [i_8 - 2])) << (((var_3) - (5168532883711120667ULL)))));
                            arr_29 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((long long int) arr_27 [i_8 - 3] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 - 2] [i_6 + 1]))) ^ (max((arr_27 [i_8 - 1] [i_6 + 1] [i_6] [i_6 - 1] [i_6 - 1] [i_6]), (((/* implicit */unsigned long long int) var_9))))));
                            var_25 = ((/* implicit */short) max((arr_9 [i_0] [i_6 - 1] [i_8 - 1] [i_8 + 1]), (((/* implicit */int) ((arr_9 [i_0] [i_6 - 1] [i_8 - 1] [i_8 + 1]) <= (arr_9 [i_1] [i_6 + 1] [i_8 + 1] [i_8 - 1]))))));
                            arr_30 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned short) ((((long long int) 693851697)) <= (((/* implicit */long long int) 693851706)))));
                        }
                    } 
                } 
            }
            for (unsigned short i_9 = 1; i_9 < 20; i_9 += 4) 
            {
                var_26 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_1 [(short)6])) : (12569446546795694255ULL)));
                var_27 = ((/* implicit */unsigned char) arr_3 [i_0] [i_0]);
                arr_34 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) arr_5 [i_0]);
            }
            var_28 = ((/* implicit */short) arr_3 [i_0] [9]);
            /* LoopNest 3 */
            for (unsigned int i_10 = 0; i_10 < 22; i_10 += 1) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (signed char i_12 = 0; i_12 < 22; i_12 += 1) 
                    {
                        {
                            arr_42 [i_0] [i_0] = ((/* implicit */unsigned int) (short)0);
                            arr_43 [i_0] [i_1] [i_10] [i_0] [i_12] = ((/* implicit */unsigned int) ((((var_10) || (((_Bool) (short)-12435)))) || (((/* implicit */_Bool) arr_17 [(short)9] [(short)9]))));
                            arr_44 [i_0] [i_11] [i_10] [(_Bool)1] [i_0] [i_0] [(signed char)11] = max((arr_38 [i_0] [i_0] [i_0] [i_1] [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_3 [i_0] [(unsigned short)2])) : (((((/* implicit */_Bool) arr_9 [13ULL] [i_11] [i_10] [i_11])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_4 [i_11] [i_11]))))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_13 = 1; i_13 < 20; i_13 += 3) 
        {
            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_13 + 2])) ? (max((((((/* implicit */_Bool) arr_31 [i_13 - 1] [i_13 - 1] [i_0] [i_0])) ? (((/* implicit */int) arr_35 [i_0])) : (((/* implicit */int) var_6)))), (((/* implicit */int) arr_6 [i_13 - 1] [i_13 + 2] [i_0] [i_13])))) : (((/* implicit */int) var_8))));
            /* LoopSeq 1 */
            for (unsigned char i_14 = 0; i_14 < 22; i_14 += 3) 
            {
                var_30 = ((/* implicit */unsigned short) ((var_8) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_0] [i_13] [i_0])) ? (var_4) : (((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_14] [i_14] [i_13]))))), (((((/* implicit */_Bool) arr_48 [19U] [19U] [19U] [(signed char)2])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_0] [i_0] [i_14]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_24 [i_13] [i_0] [i_0] [i_13] [i_14] [i_13 + 1])) : (((/* implicit */int) (short)32767)))))));
                /* LoopNest 2 */
                for (int i_15 = 1; i_15 < 20; i_15 += 4) 
                {
                    for (signed char i_16 = 1; i_16 < 21; i_16 += 4) 
                    {
                        {
                            arr_55 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((short) -693851706))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_12)))) << (((((var_15) + (959053945))) - (4)))));
                            arr_56 [i_0] [i_15] [i_13] [i_13] [i_0] = ((/* implicit */short) ((int) arr_49 [4ULL] [i_14] [i_0]));
                        }
                    } 
                } 
            }
        }
        /* vectorizable */
        for (unsigned int i_17 = 0; i_17 < 22; i_17 += 4) 
        {
            arr_59 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_46 [i_0]);
            arr_60 [i_0] [i_17] = ((/* implicit */unsigned long long int) ((arr_51 [i_0] [i_0] [i_0] [i_0] [i_0]) + (((/* implicit */int) arr_52 [i_0] [i_0] [i_0]))));
            /* LoopNest 2 */
            for (unsigned short i_18 = 0; i_18 < 22; i_18 += 2) 
            {
                for (short i_19 = 2; i_19 < 21; i_19 += 4) 
                {
                    {
                        arr_65 [9] [i_17] [i_18] [i_0] = ((/* implicit */signed char) arr_24 [i_0] [i_0] [i_0] [i_18] [i_19 - 2] [i_0]);
                        /* LoopSeq 4 */
                        for (unsigned int i_20 = 0; i_20 < 22; i_20 += 1) 
                        {
                            var_31 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_53 [i_19 - 2] [i_19 - 2] [i_19 - 1] [i_19 + 1])) ? (((/* implicit */int) ((var_13) == (arr_67 [i_18] [i_18] [i_18] [i_18] [i_18])))) : (((/* implicit */int) arr_46 [i_19]))));
                            arr_70 [i_0] [i_17] [i_18] [i_0] [i_20] [i_17] [i_0] = ((/* implicit */unsigned int) ((arr_67 [i_19 - 1] [i_19 - 1] [i_18] [i_18] [i_18]) * (arr_67 [i_19 + 1] [i_19 - 2] [i_19 - 2] [i_17] [i_17])));
                        }
                        for (int i_21 = 1; i_21 < 20; i_21 += 1) 
                        {
                            arr_73 [i_17] [i_0] = ((/* implicit */short) (signed char)26);
                            var_32 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) * (((/* implicit */int) arr_71 [i_0] [i_17] [i_0] [i_19 - 1] [i_0] [i_17] [20U]))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_2 [i_18] [i_17])) ? (((/* implicit */int) (unsigned short)54732)) : (((/* implicit */int) var_6))))));
                            var_33 -= ((/* implicit */_Bool) var_9);
                            var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_18])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_52 [i_0] [i_19] [i_21 + 1])) ? (((/* implicit */int) arr_10 [4LL])) : (((/* implicit */int) (unsigned short)29384))))) : (1806855719U))))));
                        }
                        for (short i_22 = 0; i_22 < 22; i_22 += 1) 
                        {
                            arr_76 [i_0] [i_0] [i_18] = ((/* implicit */_Bool) var_2);
                            var_35 ^= var_14;
                            var_36 = ((/* implicit */signed char) arr_64 [i_19 - 2] [17] [i_19] [i_18] [i_18] [i_18]);
                        }
                        for (long long int i_23 = 0; i_23 < 22; i_23 += 3) 
                        {
                            arr_80 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17] [i_17] |= ((/* implicit */unsigned char) ((((((/* implicit */int) var_8)) < (((/* implicit */int) arr_39 [i_0] [i_0] [i_17] [i_18] [i_0] [i_0])))) ? (arr_31 [i_18] [i_18] [(short)14] [i_19 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_5))))));
                            arr_81 [i_0] = ((/* implicit */unsigned int) arr_61 [i_19 - 2]);
                        }
                        var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_17] [i_17])) ? (var_4) : (((/* implicit */int) arr_40 [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) arr_71 [i_19 - 1] [i_17] [i_19 - 1] [i_17] [i_0] [i_19] [5U])) : (((/* implicit */int) var_16))));
                        var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)29384)) == (((/* implicit */int) var_14))))) : (((((/* implicit */int) var_9)) >> (((((/* implicit */int) var_11)) - (167))))))))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (short i_24 = 1; i_24 < 20; i_24 += 1) 
        {
            for (unsigned short i_25 = 1; i_25 < 20; i_25 += 2) 
            {
                {
                    var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) ((long long int) ((((((/* implicit */_Bool) arr_50 [i_0] [i_0] [i_24] [i_24] [i_25] [i_25 + 1])) ? (arr_67 [i_0] [(unsigned short)2] [(_Bool)1] [i_25] [i_25]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) % (((/* implicit */unsigned long long int) arr_41 [i_0] [i_24] [6U]))))))));
                    arr_87 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((max((arr_17 [i_24] [i_25 + 1]), (((/* implicit */int) var_9)))), (((/* implicit */int) var_5))))) ? (((/* implicit */int) arr_10 [i_0])) : (((/* implicit */int) arr_74 [i_0] [i_0] [i_0]))));
                    var_40 = ((/* implicit */short) var_8);
                    var_41 = ((/* implicit */long long int) 2990182418U);
                }
            } 
        } 
        arr_88 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_51 [i_0] [i_0] [i_0] [i_0] [11]) : (arr_51 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((arr_51 [i_0] [(signed char)8] [(signed char)8] [i_0] [i_0]) / (arr_51 [i_0] [i_0] [i_0] [i_0] [18ULL]))) : (((var_10) ? (arr_51 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_51 [i_0] [i_0] [i_0] [i_0] [i_0])))));
        arr_89 [i_0] = ((/* implicit */unsigned int) var_4);
        arr_90 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_72 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_72 [i_0] [i_0] [i_0] [i_0] [i_0])))) <= (((/* implicit */int) arr_36 [i_0] [i_0] [i_0]))));
    }
    var_42 = ((/* implicit */unsigned int) max((var_15), (((((/* implicit */int) var_2)) & (((/* implicit */int) max((var_8), (var_8))))))));
    var_43 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_15) : (((/* implicit */int) var_16))))) ? (1806855735U) : (((/* implicit */unsigned int) 693851706)));
}
