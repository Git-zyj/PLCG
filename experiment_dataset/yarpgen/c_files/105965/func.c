/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105965
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
    var_20 -= ((short) max((((int) var_1)), (((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) (short)-25952)))))));
    var_21 = ((/* implicit */unsigned short) (((!(((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_11)))))) ? (((unsigned long long int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)511)))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 7; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)25951)) < (((/* implicit */int) ((unsigned short) arr_5 [i_1 + 4] [i_1 + 3] [i_1 + 1]))))))));
                    var_23 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) (signed char)112)) ? (((((/* implicit */int) (short)15125)) | (((/* implicit */int) (short)-11921)))) : (((/* implicit */int) (short)25951)))));
                    var_24 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_6) >> ((((+(((/* implicit */int) (short)25951)))) - (25922)))))) ? (((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (short)-25953)))) : (((((/* implicit */int) max((((/* implicit */unsigned short) (short)25951)), (arr_0 [i_2])))) << (((((/* implicit */int) ((unsigned short) var_12))) - (103)))))));
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (short)25948)) : (((/* implicit */int) arr_0 [i_1 + 1]))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_6 [i_1 + 3] [i_1 - 2] [i_1 - 2])) : (((/* implicit */int) arr_0 [i_1 - 2])))) : (max((((/* implicit */int) (unsigned char)178)), (-1125878748)))));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
    {
        arr_11 [i_3] [i_3] = ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (+(arr_9 [i_3])))) ? ((~(arr_8 [(short)7]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)12725)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-25950)))))))) : (8522825728LL));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            for (unsigned short i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                {
                    arr_17 [i_5] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (short)-25956)) : (((/* implicit */int) (short)-1)))) != (((/* implicit */int) ((arr_8 [i_5]) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49225))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 4) 
                    {
                        var_26 += ((/* implicit */int) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_16))) | (var_7))));
                        arr_20 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-25952))) == (var_7)))) / (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) arr_15 [(unsigned short)4] [(signed char)16] [(unsigned char)4])) : (arr_9 [i_5])))) : (((((/* implicit */_Bool) arr_14 [i_5])) ? (-6411354412041151700LL) : (((/* implicit */long long int) ((/* implicit */int) (short)20763))))))) : (((/* implicit */long long int) (~(((/* implicit */int) min((((/* implicit */unsigned short) (short)-20764)), (var_14)))))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 1) 
                    {
                        arr_24 [i_7] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_0) ^ (var_7)))) ? (((((/* implicit */_Bool) arr_21 [i_7])) ? (-253616534) : (((/* implicit */int) (signed char)120)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)25951)) : (1125878761)))))) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (signed char)-30)) : (((/* implicit */int) (signed char)-32)))) : (24576)));
                        arr_25 [i_3] [i_7] = ((/* implicit */signed char) min(((unsigned char)254), (((/* implicit */unsigned char) (signed char)-120))));
                    }
                    /* vectorizable */
                    for (short i_8 = 0; i_8 < 19; i_8 += 4) 
                    {
                        arr_30 [i_3] [i_4] [(unsigned short)12] [(signed char)7] [i_3] [(unsigned short)12] &= ((unsigned short) (signed char)-32);
                        arr_31 [i_3] [i_3] [i_4] [7] [i_8] [i_4] = ((/* implicit */unsigned short) ((signed char) 0));
                        arr_32 [i_3] [i_5] [i_8] = ((/* implicit */long long int) arr_23 [i_3] [i_8]);
                    }
                    arr_33 [i_5] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 8425771098998832991ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)32768))))) : (((/* implicit */int) arr_22 [i_3] [(_Bool)1] [i_4] [i_5]))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_9 = 0; i_9 < 14; i_9 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_10 = 0; i_10 < 14; i_10 += 4) 
        {
            arr_40 [(unsigned char)3] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) (unsigned char)98))) | (((/* implicit */int) ((short) arr_12 [i_10] [i_10] [i_9])))));
            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)14336)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_6))))) ? ((+(((/* implicit */int) (signed char)48)))) : (((/* implicit */int) arr_36 [i_9] [i_10] [i_10]))));
        }
        for (short i_11 = 0; i_11 < 14; i_11 += 2) 
        {
            var_28 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [i_9] [i_11] [i_9] [i_9])) < (((/* implicit */int) arr_22 [16] [i_11] [i_11] [8ULL]))));
            arr_44 [i_9] [i_9] [i_9] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)7)) + (((/* implicit */int) (signed char)46))));
        }
        var_29 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)32))));
        var_30 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)14305))))) ? ((+(((/* implicit */int) (unsigned short)32768)))) : (((/* implicit */int) var_9))));
        /* LoopNest 2 */
        for (unsigned int i_12 = 0; i_12 < 14; i_12 += 2) 
        {
            for (signed char i_13 = 0; i_13 < 14; i_13 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_14 = 0; i_14 < 14; i_14 += 2) 
                    {
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            {
                                var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((unsigned long long int) ((unsigned long long int) arr_9 [17U]))))));
                                var_32 = ((/* implicit */unsigned char) (~((~(24576)))));
                                var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((short) (+(arr_18 [i_15] [i_12] [i_13] [i_14])))))));
                                var_34 &= ((/* implicit */unsigned int) ((((((/* implicit */int) arr_51 [i_9] [i_9] [i_14])) + (2147483647))) >> (((((/* implicit */int) arr_22 [i_9] [i_14] [8] [i_9])) - (1646)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_16 = 0; i_16 < 14; i_16 += 2) 
                    {
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            {
                                arr_62 [i_9] [i_9] [5] [i_9] [5] = ((/* implicit */unsigned short) 685848858);
                                arr_63 [i_9] [i_12] [i_13] [i_16] = var_11;
                                var_35 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_11))));
                                var_36 &= (unsigned short)43402;
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_18 = 0; i_18 < 14; i_18 += 2) 
    {
        var_37 = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_18])) ? (arr_14 [i_18]) : (((/* implicit */long long int) var_8))));
        var_38 = ((/* implicit */short) ((((/* implicit */_Bool) 8191LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((int) (short)-24751))));
        var_39 = ((/* implicit */signed char) ((short) 0ULL));
    }
    for (unsigned char i_19 = 0; i_19 < 15; i_19 += 4) 
    {
        /* LoopNest 3 */
        for (int i_20 = 0; i_20 < 15; i_20 += 3) 
        {
            for (short i_21 = 0; i_21 < 15; i_21 += 2) 
            {
                for (signed char i_22 = 0; i_22 < 15; i_22 += 3) 
                {
                    {
                        arr_76 [i_21] [i_21] [i_20] [i_21] = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_22] [i_20])) ? (((/* implicit */int) (short)4664)) : (((/* implicit */int) arr_16 [i_19] [(unsigned short)16] [i_21] [i_21]))))) ? (((/* implicit */int) arr_72 [i_20] [i_20] [i_20] [i_20])) : (arr_9 [i_20]))), (((((/* implicit */_Bool) ((unsigned long long int) (signed char)-68))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 111451408))))) : (((/* implicit */int) ((var_3) == (((/* implicit */unsigned int) var_13)))))))));
                        var_40 = ((/* implicit */int) arr_29 [i_19] [i_19]);
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned int i_23 = 0; i_23 < 15; i_23 += 4) /* same iter space */
        {
            var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) (unsigned char)16))))))));
            var_42 = ((/* implicit */unsigned char) ((unsigned long long int) min((arr_21 [i_23]), (arr_21 [i_23]))));
            arr_79 [14LL] [i_23] = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_8 [i_19]) >= (((/* implicit */long long int) max((((/* implicit */int) arr_67 [7LL] [7LL])), (var_15))))))) * ((-(((/* implicit */int) (unsigned short)0))))));
        }
        for (unsigned int i_24 = 0; i_24 < 15; i_24 += 4) /* same iter space */
        {
            var_43 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)152)), ((unsigned short)65535))))));
            /* LoopNest 2 */
            for (int i_25 = 0; i_25 < 15; i_25 += 4) 
            {
                for (unsigned short i_26 = 1; i_26 < 13; i_26 += 1) 
                {
                    {
                        var_44 = ((/* implicit */signed char) ((unsigned char) var_19));
                        arr_89 [i_26] [i_26] [i_26] [i_19] = ((((/* implicit */int) (short)-14323)) + (((/* implicit */int) (unsigned short)30303)));
                        var_45 = ((/* implicit */long long int) ((signed char) var_7));
                        var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)229)) ? (-7554957666317445817LL) : (((/* implicit */long long int) ((/* implicit */int) (short)14324)))));
                    }
                } 
            } 
        }
        for (unsigned int i_27 = 0; i_27 < 15; i_27 += 4) /* same iter space */
        {
            var_47 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_88 [i_19] [i_19] [i_27] [i_19]), (arr_88 [i_19] [i_27] [i_19] [i_19]))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_28 = 0; i_28 < 15; i_28 += 2) 
            {
                var_48 = ((/* implicit */unsigned char) min((var_48), (var_12)));
                var_49 = ((/* implicit */unsigned short) ((int) (+(((/* implicit */int) var_5)))));
                arr_96 [i_19] [(_Bool)0] [i_27] [i_19] = ((/* implicit */short) (!(((/* implicit */_Bool) 1125878747))));
            }
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_29 = 2; i_29 < 11; i_29 += 3) 
        {
            var_50 = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)67))));
            var_51 = ((/* implicit */signed char) max((var_51), (((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)89)))))));
        }
    }
}
