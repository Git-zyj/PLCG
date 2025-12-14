/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169537
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((((/* implicit */_Bool) min((((/* implicit */int) arr_0 [i_0 + 2] [i_0 - 1])), (((((/* implicit */_Bool) 2128716227U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))))) ? ((-(((((/* implicit */unsigned int) ((/* implicit */int) var_8))) - (var_13))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 2])) & (((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 2]))))));
        var_15 |= ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) max((var_3), (((/* implicit */long long int) arr_3 [(unsigned short)10]))))) ? (((/* implicit */int) var_4)) : (((int) 18446238475772818317ULL)))) + (2147483647))) << (((((((/* implicit */_Bool) arr_3 [16U])) ? (4294967287U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [20U]))))) - (4294967287U)))));
        var_16 *= ((/* implicit */signed char) (-((~(((((/* implicit */_Bool) (short)3072)) ? (2166251058U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)3082)))))))));
        var_17 *= ((/* implicit */short) arr_0 [i_0] [(unsigned short)16]);
    }
    for (unsigned int i_1 = 2; i_1 < 19; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 22; i_4 += 1) 
                    {
                        for (int i_5 = 1; i_5 < 20; i_5 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((((/* implicit */int) (signed char)12)) - (((/* implicit */int) arr_8 [i_1] [i_1 + 3])))) << (((((((/* implicit */int) var_4)) + (21115))) - (21))))))));
                                arr_20 [i_1] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */unsigned short) ((int) (((!(((/* implicit */_Bool) (signed char)-23)))) ? (((unsigned int) arr_19 [i_1] [i_1 + 1] [(unsigned char)3] [i_1 + 1] [i_1 + 1] [i_1 + 2])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_3] [i_3] [i_3 + 1]))))));
                                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (3864784830U)))))) ? (18446744073709551590ULL) : (((/* implicit */unsigned long long int) 2166251053U))));
                                var_20 = ((/* implicit */signed char) ((min((1100390675U), (((/* implicit */unsigned int) (unsigned char)189)))) < ((-(((unsigned int) arr_18 [i_1 + 2] [i_1] [20LL]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 2; i_6 < 18; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            {
                                arr_26 [i_3] [i_6] [i_6] [i_6] [i_6 - 2] = ((/* implicit */int) min((((arr_11 [i_3 + 1] [i_2] [i_3]) + (arr_11 [i_3 + 1] [i_2] [i_3]))), (((1100390650U) * (((/* implicit */unsigned int) arr_22 [i_3 + 1] [i_3] [i_3] [i_3]))))));
                                var_21 = ((/* implicit */_Bool) min((3194576597U), (((/* implicit */unsigned int) ((((long long int) arr_18 [i_1] [6LL] [i_1])) < (((/* implicit */long long int) (+(((/* implicit */int) var_9))))))))));
                                var_22 = ((/* implicit */unsigned long long int) var_2);
                                arr_27 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (2166806484U)));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_23 &= ((/* implicit */unsigned int) arr_25 [i_1] [i_1] [i_1 + 3] [i_1 - 2] [i_1 + 1] [7U]);
        arr_28 [i_1] [i_1] = ((/* implicit */int) (_Bool)1);
        var_24 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1 + 1])) ? (((/* implicit */int) ((_Bool) (short)3063))) : (((/* implicit */int) max((arr_7 [i_1 + 2] [i_1 + 3]), (arr_7 [i_1 + 3] [i_1 + 1]))))));
    }
    for (unsigned int i_8 = 2; i_8 < 19; i_8 += 1) /* same iter space */
    {
        var_25 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
        /* LoopNest 2 */
        for (signed char i_9 = 0; i_9 < 22; i_9 += 2) 
        {
            for (long long int i_10 = 0; i_10 < 22; i_10 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_11 = 0; i_11 < 22; i_11 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (short i_12 = 0; i_12 < 22; i_12 += 4) /* same iter space */
                        {
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) min((min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_18 [i_8] [i_8 - 2] [i_8 - 1]))))), (((unsigned int) (short)-32647)))), (((1100390637U) & (2128160789U))))))));
                            var_27 = ((/* implicit */long long int) var_0);
                            var_28 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_8 - 2] [10ULL]))));
                            var_29 |= ((/* implicit */short) ((((/* implicit */_Bool) 2166806503U)) ? (((/* implicit */long long int) (~(4294967293U)))) : (var_1)));
                            arr_42 [i_10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((3634449515U), (2166806525U)))) ? ((-(2166806512U))) : (((((/* implicit */_Bool) arr_38 [i_8 + 2] [i_10] [i_10])) ? (arr_38 [i_8 + 1] [i_10] [i_10]) : (arr_38 [i_8 + 3] [i_8] [i_10])))));
                        }
                        for (short i_13 = 0; i_13 < 22; i_13 += 4) /* same iter space */
                        {
                            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) (_Bool)1))) ^ (((/* implicit */int) ((unsigned char) -1LL))))))));
                            arr_45 [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_8 - 2] [i_8 + 1]))))) || (((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_8 + 3] [11])))));
                        }
                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 22; i_14 += 1) 
                        {
                            arr_48 [i_10] [i_10] [i_10] [i_10] [i_9] [i_10] [i_8] = ((/* implicit */short) ((41ULL) >> (((((/* implicit */int) (short)2846)) - (2806)))));
                            var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((((/* implicit */int) arr_16 [12U] [i_8 + 3] [i_8] [i_8 - 2] [14ULL] [i_8 - 2])) % (((/* implicit */int) arr_16 [i_8] [i_8 + 3] [i_8] [i_8 - 2] [i_8] [i_8 - 2])))))));
                            var_32 = ((/* implicit */long long int) (+(2147467264U)));
                            var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) 18446744073709551593ULL))) ? ((+(206553791))) : (((((/* implicit */int) (unsigned short)38995)) + (((/* implicit */int) (signed char)6))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned char i_15 = 2; i_15 < 21; i_15 += 1) 
                        {
                            arr_51 [i_8] [i_9] [i_10] [i_8 + 1] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1953299420)) ? (((/* implicit */int) arr_29 [i_15])) : ((+(((/* implicit */int) var_0))))));
                            var_34 = ((_Bool) (!(((/* implicit */_Bool) arr_5 [i_8] [i_8 + 3]))));
                        }
                        /* vectorizable */
                        for (short i_16 = 0; i_16 < 22; i_16 += 2) 
                        {
                            var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((arr_52 [i_8] [i_9] [i_8] [i_9] [i_16]) / (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_8])))))) != (((((/* implicit */unsigned long long int) 1251005470U)) & (18446744073709551615ULL))))))));
                            var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_13))))))));
                            arr_55 [i_8] [i_9] [i_10] [i_10] [i_16] = ((/* implicit */unsigned int) ((unsigned char) 24U));
                            var_37 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-11)) || (((/* implicit */_Bool) arr_52 [i_8 + 3] [i_8 + 3] [i_8 + 3] [i_8 - 1] [i_8]))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned char i_17 = 0; i_17 < 22; i_17 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            arr_61 [i_8] [(unsigned char)6] [i_9] [(unsigned char)6] [(unsigned char)6] &= ((/* implicit */int) ((arr_46 [i_8] [i_8 + 3] [i_8 + 3] [i_8 - 1]) == (arr_46 [2U] [i_8 - 1] [i_8 + 2] [i_8 - 1])));
                            var_38 = arr_53 [i_8] [11LL] [i_10] [i_10] [(unsigned char)16] [i_17] [i_18];
                        }
                        var_39 = ((/* implicit */_Bool) ((unsigned short) (-(var_14))));
                        var_40 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (unsigned short)16320))) ? (-1048514191) : (((/* implicit */int) (short)18))));
                        arr_62 [i_8] [8LL] [i_8 + 2] [i_10] [i_8 - 2] = ((((/* implicit */unsigned long long int) 743293382U)) == (((((/* implicit */_Bool) var_5)) ? (15ULL) : (((/* implicit */unsigned long long int) arr_21 [i_8] [(_Bool)1] [(_Bool)1])))));
                    }
                    var_41 -= ((/* implicit */int) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-32758))) <= (4294967276U))));
                    var_42 |= ((/* implicit */signed char) min((((unsigned int) arr_11 [8] [16] [i_9])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_8 - 2] [i_8 - 1] [i_8 + 3] [i_8 + 1])) ? (((/* implicit */int) arr_57 [i_8 - 1] [i_8 + 2] [i_8] [i_8 - 2])) : (((/* implicit */int) arr_10 [i_8 + 2] [i_8 + 2])))))));
                    var_43 = ((/* implicit */unsigned long long int) max((((signed char) (unsigned char)100)), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((30U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [9] [i_9])))))) == (min((arr_34 [i_9]), (((/* implicit */unsigned long long int) arr_18 [i_8] [i_8] [i_10])))))))));
                }
            } 
        } 
        var_44 = ((/* implicit */unsigned int) arr_5 [i_8] [i_8]);
        /* LoopNest 2 */
        for (signed char i_19 = 0; i_19 < 22; i_19 += 4) 
        {
            for (unsigned int i_20 = 0; i_20 < 22; i_20 += 2) 
            {
                {
                    arr_69 [i_8 + 2] [i_19] [i_20] [i_19] = ((/* implicit */int) (unsigned char)132);
                    arr_70 [i_8] [i_8] [(short)7] [i_8] = min((((/* implicit */unsigned int) ((arr_11 [i_8] [i_8 - 1] [i_19]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_8] [i_8 - 1] [i_20] [4ULL] [i_20] [i_8 - 1])))))), (arr_11 [i_8] [i_8 - 1] [i_19]));
                    arr_71 [i_20] [i_20] [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 387689888U)) <= (8614117818359167011ULL)));
                    arr_72 [i_8] [i_8] = ((((/* implicit */unsigned int) ((int) (+(arr_50 [i_20] [i_19] [i_19] [i_19] [i_19] [i_8]))))) - (((((/* implicit */unsigned int) arr_13 [i_8] [5] [i_20])) - (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) + (387689878U))))));
                }
            } 
        } 
        var_45 = ((/* implicit */unsigned short) ((unsigned int) arr_36 [(short)4]));
    }
    var_46 = ((/* implicit */_Bool) max((var_46), (((/* implicit */_Bool) max((min((min((((/* implicit */unsigned int) (_Bool)1)), (var_13))), (var_14))), (((/* implicit */unsigned int) ((short) var_7))))))));
    var_47 |= ((/* implicit */unsigned int) ((((/* implicit */long long int) var_13)) * (((long long int) ((((/* implicit */int) var_11)) / (((/* implicit */int) var_6)))))));
    var_48 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-23))) * (3551673909U)))) && (((/* implicit */_Bool) var_10)))) ? (((((/* implicit */_Bool) var_1)) ? (min((var_13), (var_14))) : (((4294967278U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-11))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
}
