/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132629
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 13; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1 - 2] [i_2] = ((/* implicit */unsigned short) (short)32753);
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((long long int) ((arr_2 [i_0 - 1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 1]))) : (6725821046350294534LL))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 1; i_3 < 12; i_3 += 2) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_6 = 3; i_6 < 14; i_6 += 2) 
                    {
                        arr_22 [(_Bool)1] [(_Bool)1] [i_5] = ((/* implicit */short) min((min((((/* implicit */int) min((((/* implicit */short) arr_18 [i_6 - 3] [i_4] [i_4] [(unsigned char)3])), (arr_19 [i_3] [i_5] [i_6])))), ((-(((/* implicit */int) (unsigned short)7611)))))), (((/* implicit */int) arr_4 [i_6 - 2] [i_3 + 1]))));
                        var_19 = ((/* implicit */short) max(((-(-6725821046350294542LL))), (((/* implicit */long long int) ((((/* implicit */int) min((var_16), ((_Bool)1)))) * (((/* implicit */int) min((((/* implicit */unsigned char) var_1)), ((unsigned char)64)))))))));
                    }
                    var_20 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (short)26556)))) | (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_13)))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-32754)) : (((/* implicit */int) arr_6 [i_3 + 1] [i_4] [i_5]))))) ? (((((/* implicit */int) arr_16 [i_3] [i_4])) * (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)66)))))) : (((/* implicit */int) (short)10003))));
                }
                for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 4) /* same iter space */
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned char i_8 = 0; i_8 < 15; i_8 += 3) 
                    {
                        arr_29 [i_3] [(_Bool)1] [i_7] [i_8] = ((/* implicit */short) (((!((_Bool)1))) ? (((/* implicit */int) (unsigned short)19824)) : (((/* implicit */int) (unsigned char)197))));
                        arr_30 [i_3] [i_4] [i_4] [i_4] [i_8] = ((/* implicit */unsigned short) ((arr_11 [i_3] [i_3]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))));
                        var_21 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_3])) ? (((/* implicit */int) (short)-29006)) : (((/* implicit */int) (unsigned char)47))));
                    }
                    for (short i_9 = 0; i_9 < 15; i_9 += 1) 
                    {
                        var_22 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)25380)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-26380)))) - (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))));
                        var_23 = ((/* implicit */unsigned long long int) min(((((_Bool)1) ? (((/* implicit */int) arr_19 [i_3 + 3] [i_3 + 2] [i_3 - 1])) : (((/* implicit */int) arr_19 [i_3 + 1] [i_3 + 1] [i_3 + 3])))), (((/* implicit */int) min((arr_19 [i_3 - 1] [i_3 - 1] [i_3 + 3]), (arr_19 [i_3 + 1] [i_3 + 2] [i_3 + 2]))))));
                        arr_33 [i_7] [i_4] = ((/* implicit */short) min(((-(-142010908676461034LL))), ((+(((2725012476444233891LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15100)))))))));
                    }
                    for (short i_10 = 1; i_10 < 12; i_10 += 3) 
                    {
                        var_24 = (!(((/* implicit */_Bool) ((arr_13 [i_3 - 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        arr_37 [i_3] [i_4] [i_3] [i_3] [i_4] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) (_Bool)1)), (15181446498956443685ULL))), (((/* implicit */unsigned long long int) ((_Bool) var_0)))))) ? (min((((var_1) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_1 [i_10]))), (((/* implicit */long long int) (unsigned short)45711)))) : (((/* implicit */long long int) (-((+(((/* implicit */int) var_14)))))))));
                    }
                    /* vectorizable */
                    for (long long int i_11 = 0; i_11 < 15; i_11 += 2) 
                    {
                        var_25 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 2 */
                        for (short i_12 = 2; i_12 < 11; i_12 += 1) /* same iter space */
                        {
                            arr_43 [8ULL] [i_12] [(_Bool)1] [i_11] = (_Bool)1;
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned short)9220)) - (9201)))));
                            var_27 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_35 [i_12] [i_12 + 1] [i_12] [i_12 + 4] [i_12 + 1] [i_12])) : (((/* implicit */int) arr_12 [i_3 + 1]))));
                        }
                        for (short i_13 = 2; i_13 < 11; i_13 += 1) /* same iter space */
                        {
                            arr_46 [i_4] [i_4] [(_Bool)1] [i_4] [i_4] [i_4] [(unsigned char)1] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (short)13908)) == (((/* implicit */int) (_Bool)1))))) / (((/* implicit */int) (unsigned char)212))));
                            arr_47 [i_3] [i_3] [i_3] [i_3] = ((_Bool) (unsigned char)38);
                        }
                        var_28 *= ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_3 + 1])) + (((/* implicit */int) (_Bool)1))));
                        var_29 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -3631121590817133386LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)0))))) : (14807661187142494689ULL)));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_14 = 2; i_14 < 11; i_14 += 2) 
                    {
                        var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) min((((((/* implicit */int) (_Bool)0)) ^ (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) var_12)))))));
                        arr_50 [i_3] [i_3] [i_7] [i_7] [i_14] [i_3] = ((/* implicit */unsigned char) ((unsigned long long int) var_7));
                        arr_51 [i_3 + 1] [i_4] [i_4] [i_4] [i_14 + 2] = ((/* implicit */short) ((_Bool) max(((unsigned short)25497), (((/* implicit */unsigned short) (_Bool)1)))));
                        arr_52 [i_3] [(short)9] [i_3] [i_14 + 1] [(short)9] = ((/* implicit */unsigned short) var_2);
                    }
                    arr_53 [i_3] = ((_Bool) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28101))) / (623997830238690385ULL))));
                }
                for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 4) /* same iter space */
                {
                    var_31 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) (short)-13649)) ? (arr_32 [i_3 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                    /* LoopNest 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            {
                                var_32 = ((((((/* implicit */_Bool) 3023241882399910711LL)) ? (((/* implicit */int) var_17)) : (((((/* implicit */int) var_5)) - (((/* implicit */int) (unsigned short)15850)))))) < (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (short)32446)) ? (((/* implicit */int) (unsigned char)29)) : (((/* implicit */int) var_9)))))));
                                arr_63 [5LL] [i_4] [i_4] [i_4] [i_17] = ((/* implicit */_Bool) arr_49 [i_3] [i_3] [i_3] [i_3 + 2]);
                            }
                        } 
                    } 
                    arr_64 [i_15] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) (unsigned char)163)))))), (var_18)));
                }
                for (unsigned long long int i_18 = 0; i_18 < 15; i_18 += 1) 
                {
                    arr_68 [i_3] [i_18] [i_3 + 1] = ((/* implicit */short) (unsigned short)8184);
                    arr_69 [10LL] |= ((/* implicit */short) ((((/* implicit */int) (unsigned short)45713)) + (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)64)))))));
                    var_33 += ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((_Bool) arr_36 [i_3 + 2] [i_3 + 3] [i_3 + 2] [i_3 + 1]))), (min((((var_1) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) 3023241882399910692LL))))));
                }
                arr_70 [i_3] [i_3 + 2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)35385)), (((((/* implicit */_Bool) (unsigned short)33649)) ? (((/* implicit */int) (unsigned short)48234)) : (((/* implicit */int) arr_41 [i_3] [i_4] [i_4] [i_4] [i_3]))))))) ? ((((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(10928800714011873702ULL)))))))));
            }
        } 
    } 
    var_34 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_3)) ? (var_4) : (((unsigned long long int) (short)22270)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
}
