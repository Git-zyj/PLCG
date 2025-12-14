/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102422
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
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
            arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1]))) : (arr_2 [i_0 + 2] [i_0] [i_0 - 2])));
        }
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            arr_9 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4973309509229518513ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_2]))) : (var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) var_3)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
            arr_10 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_3 [i_0] [i_0 - 1]))));
            /* LoopNest 2 */
            for (unsigned short i_3 = 1; i_3 < 14; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    {
                        arr_16 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_5)) : (arr_8 [i_0])));
                        arr_17 [1LL] [i_0] [i_3] [i_0] [i_0] = var_9;
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_8) | (var_15)))) ? (((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_0])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((2786214191U) == (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))));
                    }
                } 
            } 
            arr_18 [i_0] [i_2] = 14826237029732084413ULL;
        }
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)146))) - (18218764769803968612ULL))) : (227979303905582997ULL))))));
        var_19 = ((/* implicit */_Bool) ((arr_12 [i_0 - 2] [i_0 - 2] [i_0] [i_0]) / (arr_12 [i_0 - 3] [i_0 - 2] [i_0] [i_0])));
    }
    var_20 = (unsigned char)33;
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 4) 
    {
        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) min((5237613793226481132ULL), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))))));
                /* LoopSeq 3 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_8 = 0; i_8 < 11; i_8 += 1) /* same iter space */
                    {
                        var_22 = (+((+(-5161401556964959806LL))));
                        arr_30 [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))));
                    }
                    /* vectorizable */
                    for (unsigned int i_9 = 0; i_9 < 11; i_9 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_6]))) != (2153310155214217547ULL)));
                        arr_33 [i_5] [i_5] [i_6] [i_5] [i_7] [i_9] = ((/* implicit */unsigned int) var_8);
                    }
                    for (unsigned short i_10 = 3; i_10 < 10; i_10 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned char) max((min((1228714552096135420ULL), (min((((/* implicit */unsigned long long int) var_12)), (5237613793226481146ULL))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3)))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_11 = 0; i_11 < 11; i_11 += 1) 
                        {
                            var_25 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (signed char)-112)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)249))) : (18446744073709551615ULL)));
                            arr_41 [i_5] [i_7] [i_5] [i_10 - 3] [i_11] [i_10 - 3] = ((/* implicit */unsigned int) ((unsigned short) ((21ULL) & (((/* implicit */unsigned long long int) 662460946)))));
                        }
                        for (int i_12 = 0; i_12 < 11; i_12 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned short) max((((7856511707577562175ULL) * (((unsigned long long int) (unsigned char)183)))), (var_2)));
                            arr_45 [i_12] [i_5] [i_7] [i_6] [i_5] [i_5 + 2] = ((/* implicit */unsigned char) ((((/* implicit */int) max((var_6), (var_12)))) | (((/* implicit */int) min((arr_1 [i_10 - 2]), (arr_19 [i_5 + 1]))))));
                        }
                        var_27 = ((/* implicit */unsigned char) arr_29 [i_5] [i_7] [i_5] [i_5]);
                    }
                    var_28 = ((/* implicit */unsigned long long int) min((var_28), (((((/* implicit */_Bool) ((max((6ULL), (((/* implicit */unsigned long long int) (unsigned char)255)))) + ((+(17691037628074662115ULL)))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [0U] [0U] [i_7]))) + (arr_4 [8LL] [(unsigned char)14])))), (((18446744073709551610ULL) + (4944645117392848823ULL))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (511U))), (((/* implicit */unsigned int) var_10)))))))));
                }
                for (unsigned char i_13 = 0; i_13 < 11; i_13 += 1) /* same iter space */
                {
                    arr_48 [i_5] = max((max((((/* implicit */unsigned long long int) (signed char)-22)), (7856511707577562168ULL))), (((/* implicit */unsigned long long int) max((var_10), (var_10)))));
                    var_29 = ((/* implicit */unsigned long long int) (-(((((662460943) >= (((/* implicit */int) (signed char)-50)))) ? (((/* implicit */int) arr_15 [i_5] [i_5] [i_5] [i_5] [i_5 + 2])) : (((/* implicit */int) (unsigned short)47195))))));
                    /* LoopSeq 3 */
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        arr_51 [i_5] = ((/* implicit */unsigned int) 18446744073709551615ULL);
                        var_30 = ((/* implicit */long long int) 18446744073709551615ULL);
                    }
                    for (unsigned short i_15 = 0; i_15 < 11; i_15 += 1) /* same iter space */
                    {
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((-140616630), (((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) 2352699837U)))))))) && (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)247)))))));
                        arr_54 [0U] [0U] [i_5] [(_Bool)1] [i_15] [i_5] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_40 [i_5] [i_5])), (max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_6 [(signed char)9])) : (var_11))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (var_1)))))));
                        arr_55 [i_5 + 2] [i_6] [i_5] [i_15] [i_15] = ((/* implicit */unsigned short) var_7);
                    }
                    for (unsigned short i_16 = 0; i_16 < 11; i_16 += 1) /* same iter space */
                    {
                        var_32 = ((((/* implicit */_Bool) arr_24 [i_5 - 1] [i_5 - 1] [i_16] [i_5])) ? (((((/* implicit */_Bool) arr_24 [i_5 + 2] [i_6] [i_13] [i_5])) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (var_2))) : (max((713515428963160649ULL), (((/* implicit */unsigned long long int) arr_24 [i_5 + 2] [i_6] [i_13] [i_5])))));
                        arr_58 [i_6] [i_5] [i_6] [i_6] = ((/* implicit */long long int) ((signed char) max((max((var_0), (((/* implicit */unsigned int) (signed char)1)))), (((/* implicit */unsigned int) arr_53 [i_16] [7LL] [i_6] [3ULL])))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_17 = 0; i_17 < 11; i_17 += 3) 
                    {
                        for (unsigned char i_18 = 1; i_18 < 9; i_18 += 1) 
                        {
                            {
                                arr_64 [i_5] [i_6] [i_13] [i_17] [i_5] = ((/* implicit */unsigned short) (-(max((((/* implicit */unsigned int) arr_53 [i_5 + 2] [i_5 - 1] [i_5 + 1] [i_5 + 1])), (4104763911U)))));
                                var_33 = max((min((((((/* implicit */_Bool) arr_60 [i_5 + 1] [i_6] [i_13] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_1))), (((/* implicit */unsigned long long int) arr_42 [i_5 + 2] [i_6] [i_13] [i_5] [i_18 + 2] [i_6] [i_5 + 2])))), (max((max((((/* implicit */unsigned long long int) arr_40 [i_5] [i_5])), (var_15))), (((/* implicit */unsigned long long int) var_13)))));
                                var_34 += ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned long long int) arr_12 [i_5] [i_5] [i_13] [8])), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26533))) - (var_1)))))));
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */unsigned long long int) max((var_5), (((/* implicit */long long int) var_6))));
                }
                /* vectorizable */
                for (unsigned char i_19 = 0; i_19 < 11; i_19 += 1) /* same iter space */
                {
                    arr_68 [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((((((/* implicit */int) var_6)) != (((/* implicit */int) (unsigned short)65526)))) ? (((/* implicit */unsigned long long int) -4554890388127282281LL)) : (((((/* implicit */_Bool) (unsigned short)29705)) ? (18444328386092531080ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)222)))))));
                    arr_69 [i_5] [i_6] [i_19] [i_5] = (i_5 % 2 == 0) ? (((/* implicit */unsigned char) ((arr_14 [i_5 + 1] [i_5 + 1] [i_6] [i_19]) * (((/* implicit */long long int) ((((/* implicit */int) var_12)) >> (((arr_8 [i_5]) - (17257880098583969844ULL))))))))) : (((/* implicit */unsigned char) ((arr_14 [i_5 + 1] [i_5 + 1] [i_6] [i_19]) * (((/* implicit */long long int) ((((/* implicit */int) var_12)) >> (((((arr_8 [i_5]) - (17257880098583969844ULL))) - (4273687941683600033ULL)))))))));
                    var_36 = ((/* implicit */unsigned long long int) (((+(18446744073709551614ULL))) >= (((/* implicit */unsigned long long int) (-(-9223372036854775799LL))))));
                    var_37 = ((/* implicit */unsigned int) (signed char)-106);
                    var_38 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_5)))) ? (((((/* implicit */_Bool) arr_22 [(unsigned short)8])) ? (var_13) : (((/* implicit */long long int) 1048575U)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-14)) : (((/* implicit */int) (unsigned char)48)))))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_20 = 1; i_20 < 10; i_20 += 4) 
                {
                    for (long long int i_21 = 1; i_21 < 9; i_21 += 3) 
                    {
                        {
                            arr_75 [i_5] [i_20 - 1] [i_20] [i_20 - 1] = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) -1)), (7856511707577562158ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((-4938762613184248217LL), (((/* implicit */long long int) (unsigned char)127))))) ? (((/* implicit */long long int) ((unsigned int) var_14))) : (((((/* implicit */_Bool) -214856707)) ? (arr_14 [i_20] [i_20] [i_20] [i_20 + 1]) : (-9223372036854775799LL))))))));
                            var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_26 [i_5] [i_6] [i_20 + 1])) ? (18446744073709551598ULL) : (var_1))), (max((var_15), (((/* implicit */unsigned long long int) var_9))))))) ? (((((/* implicit */unsigned long long int) min((var_13), (arr_14 [i_5] [i_5] [i_5] [i_5])))) | (max((10590232366131989421ULL), (((/* implicit */unsigned long long int) (unsigned char)126)))))) : (arr_73 [i_5] [i_5])));
                            var_40 += ((/* implicit */unsigned char) min((((/* implicit */long long int) var_4)), (max((7687921886590561774LL), (((/* implicit */long long int) (unsigned short)53073))))));
                            arr_76 [i_5] [i_6] [i_21 - 1] [i_20 + 1] [i_5] = ((/* implicit */unsigned long long int) max((-9223372036854775800LL), (max((4937616154716273098LL), (((/* implicit */long long int) arr_72 [i_5 - 1] [i_20 - 1] [i_21 + 2] [i_21 + 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_41 = ((/* implicit */_Bool) var_6);
}
