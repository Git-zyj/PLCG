/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161338
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
    var_18 = var_4;
    var_19 = ((/* implicit */short) (+(var_4)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0 - 2] = ((/* implicit */int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((504403158265495552LL) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))) : (12853402444698489688ULL)));
        arr_4 [i_0] = ((/* implicit */unsigned short) (((~(var_5))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (504403158265495552LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-123))))))));
    }
    for (unsigned short i_1 = 2; i_1 < 12; i_1 += 2) 
    {
        arr_7 [i_1 - 1] [i_1] = ((/* implicit */short) arr_1 [i_1]);
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            for (short i_3 = 2; i_3 < 12; i_3 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) var_3);
                    var_21 |= ((/* implicit */unsigned long long int) (((+(((((/* implicit */int) arr_6 [i_1] [i_3])) / (((/* implicit */int) arr_5 [i_1])))))) != (((/* implicit */int) (((-(8221999908647859779ULL))) == (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)1)) >> (((((/* implicit */int) (unsigned char)85)) - (60)))))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 2) 
                    {
                        arr_17 [i_2] [9LL] [i_2] [i_2] = ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_16 [i_1] [i_2] [i_1])))), (((/* implicit */int) arr_5 [i_1 + 1])))) * ((((_Bool)1) ? (((/* implicit */int) arr_11 [i_1 + 1] [i_1] [i_4 + 1])) : (((/* implicit */int) (_Bool)0))))));
                        var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9007130535264256ULL)) ? (1090715534753792LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)138)) || (((/* implicit */_Bool) (unsigned short)9838))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)37501)) || (((/* implicit */_Bool) var_15)))))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)7478)) && (((/* implicit */_Bool) (unsigned char)171))))), ((unsigned short)3)))));
                        var_23 = (i_2 % 2 == zero) ? (((/* implicit */unsigned int) max((((/* implicit */long long int) arr_10 [i_1] [i_1] [i_1] [i_2])), ((~(((((var_3) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_15 [i_2])) - (116)))))))))) : (((/* implicit */unsigned int) max((((/* implicit */long long int) arr_10 [i_1] [i_1] [i_1] [i_2])), ((~(((((var_3) + (9223372036854775807LL))) >> (((((((/* implicit */int) arr_15 [i_2])) - (116))) + (71))))))))));
                    }
                    for (unsigned char i_5 = 1; i_5 < 10; i_5 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) arr_0 [i_1 + 1]);
                        arr_20 [i_2] = ((_Bool) (_Bool)1);
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (unsigned short)34575))));
                        arr_21 [i_1 - 1] [i_1 + 1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)54864)) && (((/* implicit */_Bool) (unsigned char)4))));
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) min((arr_23 [i_1 - 1] [i_2] [i_3] [i_5 - 1] [i_6]), (((/* implicit */unsigned short) arr_15 [i_2])))))));
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((((((/* implicit */int) (unsigned short)37484)) != (((/* implicit */int) (_Bool)1)))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_4) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-30)))));
                            arr_24 [i_2] [i_1] [i_2] [i_3] [i_3] [i_5] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)85)) ? (min((((/* implicit */int) (_Bool)1)), ((((_Bool)1) ? (((/* implicit */int) (short)-20276)) : (((/* implicit */int) (unsigned short)30960)))))) : (((/* implicit */int) (_Bool)1))));
                            arr_25 [i_1] [(unsigned short)1] [i_2] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) (signed char)29)) && (arr_6 [i_5 + 1] [i_5 + 2]))));
                        }
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        arr_28 [i_7] [i_2] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_1] [i_2] [i_2] [i_2] [i_7])) && (((/* implicit */_Bool) arr_10 [i_1 + 1] [i_7 - 1] [i_7 - 1] [i_2]))))) << (((/* implicit */int) (!(((/* implicit */_Bool) 12853402444698489688ULL)))))));
                        arr_29 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */_Bool) min((((((/* implicit */int) (_Bool)1)) * (((((/* implicit */int) var_13)) - (((/* implicit */int) arr_23 [i_1] [i_1] [i_3] [4] [i_7])))))), ((+(((((/* implicit */int) (_Bool)1)) * (-1)))))));
                        var_28 = min((min((((/* implicit */unsigned long long int) (~(274877906944LL)))), (((var_1) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((4611686018427387904ULL) - (4611686018427387895ULL)))))), (max((2240459515U), (((/* implicit */unsigned int) (unsigned char)238))))))));
                    }
                    /* vectorizable */
                    for (short i_8 = 1; i_8 < 12; i_8 += 3) 
                    {
                        arr_33 [i_3] [i_2] [i_2] = ((/* implicit */int) 18446744073709551615ULL);
                        arr_34 [i_8] [i_2] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) -215771566065877656LL);
                        arr_35 [i_1 - 1] [i_2] [i_2] [i_8] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 4503599626321920LL)))))));
                        arr_36 [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)18638)))) > (((((/* implicit */int) arr_15 [i_2])) % (((/* implicit */int) var_10))))));
                        arr_37 [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)21112)) > (((/* implicit */int) (signed char)-74))));
                    }
                }
            } 
        } 
    }
    for (unsigned short i_9 = 0; i_9 < 19; i_9 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_10 = 0; i_10 < 19; i_10 += 2) 
        {
            var_29 -= ((/* implicit */unsigned long long int) var_7);
            var_30 = ((((/* implicit */int) (signed char)-5)) != (((/* implicit */int) (_Bool)1)));
            /* LoopNest 2 */
            for (long long int i_11 = 1; i_11 < 16; i_11 += 3) 
            {
                for (unsigned int i_12 = 2; i_12 < 15; i_12 += 1) 
                {
                    {
                        arr_50 [i_10] &= ((/* implicit */unsigned long long int) (unsigned char)211);
                        arr_51 [i_9] [i_12 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_46 [i_9] [i_12] [i_12] [i_12 - 1])) * (((/* implicit */int) arr_46 [i_9] [i_12] [i_12] [i_12 - 1]))))) ? ((-(((/* implicit */int) arr_38 [i_12 + 2])))) : ((~(((/* implicit */int) var_13))))));
                        var_31 ^= ((/* implicit */_Bool) ((var_15) & (((/* implicit */unsigned long long int) var_11))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (int i_13 = 2; i_13 < 18; i_13 += 2) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 19; i_14 += 3) 
                {
                    for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-8896)) ? (((/* implicit */long long int) (((~(((/* implicit */int) var_13)))) & (((((/* implicit */int) var_10)) ^ (((/* implicit */int) (unsigned short)31147))))))) : (((((/* implicit */long long int) ((881145973U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)77)))))) ^ (((((/* implicit */_Bool) 15933020292884729769ULL)) ? (((/* implicit */long long int) arr_44 [i_9] [i_9] [i_13])) : (arr_53 [i_14])))))));
                            arr_59 [i_9] [i_10] [i_10] [i_14] [i_9] [i_15 + 1] = ((/* implicit */short) max((min((var_1), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_55 [i_9] [i_13 + 1])) == (5712603135974427863ULL)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)14336)) % (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (short)-10882))))))))));
                        }
                    } 
                } 
            } 
            var_33 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_10] [i_10] [i_9] [i_10] [i_10] [i_9]))) * (max((arr_41 [i_9] [i_9]), (var_17))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (((-(0U))) > (((/* implicit */unsigned int) ((/* implicit */int) max((arr_42 [i_9]), (((/* implicit */unsigned short) var_8)))))))))));
        }
        arr_60 [i_9] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (14980332736601670168ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_47 [(unsigned char)11] [i_9] [i_9] [i_9])) ? (3562986958U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : ((~(var_15))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)131)))));
    }
}
