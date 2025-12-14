/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106304
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
    for (signed char i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((4503599627370496ULL) << (((18446744073709551615ULL) - (18446744073709551606ULL)))))));
        var_20 ^= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [(short)14]))) ? (arr_1 [i_0 + 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 6411452010351370824ULL)))))));
    }
    for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            for (unsigned int i_3 = 3; i_3 < 12; i_3 += 3) 
            {
                {
                    arr_10 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) max((min((((((/* implicit */long long int) 4294967281U)) / (484515621966561267LL))), (((/* implicit */long long int) arr_3 [i_1] [i_2])))), (((/* implicit */long long int) ((signed char) ((_Bool) 9438281947629545169ULL))))));
                    arr_11 [2] [i_1] [i_1] = ((/* implicit */short) ((arr_7 [(_Bool)1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) arr_6 [i_1] [i_3 - 1] [i_3 - 3])), (((signed char) (unsigned char)254))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (!((!(((/* implicit */_Bool) 5994370828900693688LL)))))))));
            arr_14 [i_1] [i_1] [i_4] = ((/* implicit */unsigned long long int) ((_Bool) ((short) arr_12 [i_1] [i_4])));
        }
    }
    for (signed char i_5 = 1; i_5 < 16; i_5 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_6 = 0; i_6 < 17; i_6 += 4) 
        {
            arr_20 [i_5] [i_6] [i_5] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */unsigned long long int) 469762048U)) == (arr_16 [i_5]))));
            /* LoopNest 2 */
            for (short i_7 = 3; i_7 < 16; i_7 += 4) 
            {
                for (signed char i_8 = 3; i_8 < 14; i_8 += 3) 
                {
                    {
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) 2541187745U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((+(7000335053007245834LL)))));
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned int) 918284436);
                            var_24 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-4))) * (0ULL)));
                            arr_29 [i_9] = ((/* implicit */long long int) ((((/* implicit */int) (short)-1)) != (((/* implicit */int) (!(((/* implicit */_Bool) -918284431)))))));
                        }
                        var_25 = ((/* implicit */short) (+(arr_22 [8] [i_6] [i_5])));
                        var_26 = ((long long int) arr_18 [i_5] [i_7 - 1] [i_7]);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_1 [i_5] [i_10])) ? (3836048520U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32737)))))));
            var_28 = ((/* implicit */unsigned long long int) ((arr_22 [i_5 + 1] [i_5 - 1] [i_5 + 1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))));
        }
        /* vectorizable */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_12 = 0; i_12 < 17; i_12 += 4) 
            {
                var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) 19ULL)) ? (-3126860905962264536LL) : (2520231836341490622LL))))));
                /* LoopNest 2 */
                for (unsigned char i_13 = 0; i_13 < 17; i_13 += 4) 
                {
                    for (unsigned char i_14 = 4; i_14 < 15; i_14 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_5 + 1] [i_12] [i_14 + 2] [i_14 - 3] [i_14])) ? (7131021111517204952ULL) : (((/* implicit */unsigned long long int) arr_42 [i_5 + 1] [i_5 + 1] [i_14 + 2] [i_14 - 3] [i_14] [i_14 - 2]))));
                            var_31 = ((((/* implicit */unsigned long long int) 2775128757U)) / (18446744073709551600ULL));
                            var_32 = (!(((/* implicit */_Bool) var_2)));
                            var_33 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_43 [i_14 - 3] [i_13] [i_12] [i_5] [i_5]))));
                        }
                    } 
                } 
                var_34 ^= ((/* implicit */long long int) (~(arr_30 [i_11] [i_5 - 1])));
                var_35 += ((/* implicit */unsigned int) ((((unsigned long long int) arr_1 [i_11] [i_5])) % (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)58))) : (arr_27 [i_5] [i_5] [i_11] [i_12] [i_12] [i_12])))));
            }
            var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) ((((_Bool) 524287LL)) ? (1064122087030645832ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((18446744073709551615ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_11] [i_11] [i_11] [i_5] [i_5]))))))))))));
        }
        var_37 = ((/* implicit */int) arr_1 [i_5] [i_5]);
        var_38 = ((/* implicit */unsigned int) ((unsigned char) max((min((((/* implicit */long long int) (unsigned short)42116)), (arr_42 [i_5] [i_5] [i_5] [5ULL] [i_5] [i_5]))), (((/* implicit */long long int) 909786222U)))));
        var_39 = ((/* implicit */unsigned int) min((min((max((((/* implicit */long long int) arr_24 [i_5] [i_5 + 1] [i_5] [i_5 - 1] [i_5 - 1] [i_5 + 1])), (arr_40 [i_5] [i_5] [(short)0] [i_5]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)16))))))), (((/* implicit */long long int) ((_Bool) (_Bool)0)))));
    }
    /* LoopNest 2 */
    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
    {
        for (short i_16 = 0; i_16 < 14; i_16 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (int i_17 = 4; i_17 < 13; i_17 += 2) 
                {
                    var_40 = ((/* implicit */signed char) ((int) (~(min((((/* implicit */unsigned int) var_11)), (arr_31 [i_15] [i_16] [i_17]))))));
                    arr_52 [10U] [i_16] [i_16] [i_16] = ((/* implicit */unsigned long long int) (short)-32762);
                    var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) ((((/* implicit */_Bool) max((arr_24 [i_15] [i_15] [i_15] [i_15 - 1] [i_17 - 4] [i_17 - 3]), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)29)))))))) ? (((/* implicit */unsigned long long int) (-(((9223372036854775807LL) + (((/* implicit */long long int) -918284437))))))) : (((((/* implicit */_Bool) (+(arr_30 [i_17] [i_16])))) ? (max((((/* implicit */unsigned long long int) (_Bool)0)), (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_15 - 1] [i_17 - 3] [i_17 - 2] [i_15 - 1] [i_17 - 3] [i_17 - 4]))))))))));
                    arr_53 [i_15] [8] [i_17 - 1] |= ((/* implicit */unsigned long long int) arr_4 [i_15 - 1]);
                }
                for (unsigned long long int i_18 = 0; i_18 < 14; i_18 += 4) 
                {
                    var_42 = ((max((((/* implicit */unsigned long long int) -524287LL)), (21ULL))) > (18446744073709551615ULL));
                    /* LoopSeq 2 */
                    for (unsigned char i_19 = 1; i_19 < 12; i_19 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_20 = 0; i_20 < 14; i_20 += 2) 
                        {
                            var_43 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_57 [i_20] [i_19 + 1] [4LL] [i_16] [i_15])) == (((/* implicit */int) arr_57 [(short)12] [i_19 + 1] [i_15] [i_16] [i_15]))));
                            var_44 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
                            arr_61 [(unsigned short)2] [i_16] [7ULL] [(short)6] [i_18] [i_19] [i_20] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_43 [i_15] [i_15 - 1] [i_15] [i_19 - 1] [(short)1]))));
                        }
                        var_45 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_35 [i_15 - 1] [i_15 - 1] [i_19 + 1])))) ? (min((((/* implicit */unsigned int) (signed char)-123)), (arr_35 [i_15] [i_15 - 1] [i_19 - 1]))) : (arr_35 [i_15] [i_15 - 1] [i_19 - 1])));
                    }
                    for (unsigned long long int i_21 = 0; i_21 < 14; i_21 += 4) 
                    {
                        var_46 = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) arr_18 [i_15 - 1] [i_15 - 1] [i_15 - 1])))), (((/* implicit */int) max((((/* implicit */short) (unsigned char)20)), (arr_18 [i_15 - 1] [i_15 - 1] [i_15 - 1]))))));
                        arr_66 [i_21] [i_16] [i_15] = ((/* implicit */unsigned char) (short)16074);
                        arr_67 [i_21] [i_16] [i_16] = ((/* implicit */long long int) (+(arr_35 [i_15] [i_15] [i_15])));
                        arr_68 [7U] [i_16] [i_18] [i_21] = ((/* implicit */long long int) max((min((1278432591732154974ULL), (((/* implicit */unsigned long long int) (signed char)127)))), (((/* implicit */unsigned long long int) (-(arr_48 [i_15 - 1]))))));
                        var_47 = ((/* implicit */unsigned long long int) ((unsigned char) max((((/* implicit */unsigned long long int) max((var_16), (((/* implicit */long long int) arr_21 [i_15] [i_18] [i_21]))))), (((((/* implicit */_Bool) (short)3)) ? (arr_7 [12LL]) : (((/* implicit */unsigned long long int) 8192U)))))));
                    }
                }
                for (unsigned long long int i_22 = 0; i_22 < 14; i_22 += 4) 
                {
                    var_48 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned short) (_Bool)1)), (arr_44 [i_15] [(short)4] [i_16] [i_16] [i_22]))), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-120))) != (arr_40 [i_22] [i_16] [i_16] [7ULL]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) >= (((((/* implicit */_Bool) 0ULL)) ? (2097152U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)172))))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) * (min((((/* implicit */unsigned int) (signed char)1)), (4294959110U)))))));
                    var_49 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) 10810981326708760161ULL))))))));
                }
                var_50 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)255)), (4ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)16382), (((/* implicit */short) (signed char)103)))))) : (13557212701334819311ULL)));
            }
        } 
    } 
}
