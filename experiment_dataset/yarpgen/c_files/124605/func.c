/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124605
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
    var_14 = ((/* implicit */short) var_10);
    var_15 = ((/* implicit */_Bool) var_13);
    var_16 = ((/* implicit */int) max((((long long int) max((1125899906842623ULL), (13802912360917670971ULL)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(-5099715450288458393LL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)-50)) : (((/* implicit */int) (unsigned char)35))))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_17 = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) var_10))) & (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-50))) ^ (var_12)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)14))))));
        var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13358))) : (var_12)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_9))))) : ((~(11049564701860265192ULL))));
    }
    for (long long int i_1 = 2; i_1 < 21; i_1 += 4) 
    {
        var_19 = ((/* implicit */_Bool) var_13);
        var_20 = ((/* implicit */short) 9352179524649115909ULL);
        /* LoopSeq 2 */
        for (signed char i_2 = 1; i_2 < 22; i_2 += 1) 
        {
            arr_7 [i_1] [i_1 - 2] [i_2 - 1] = ((/* implicit */_Bool) var_2);
            var_21 = ((/* implicit */unsigned short) ((_Bool) ((((arr_5 [i_1 - 2] [5] [i_2 - 1]) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)1)) + (((/* implicit */int) (unsigned char)4))))))));
            arr_8 [i_1 + 2] [i_1 - 1] [14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) -5495135674988973562LL)) ? (1125899906842631ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))), (((((/* implicit */_Bool) var_10)) ? (15578639206396731762ULL) : (((/* implicit */unsigned long long int) var_12))))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((-144115188075855872LL) <= (9223372036854775807LL))))));
            var_22 = max((((/* implicit */unsigned long long int) max((((/* implicit */short) ((signed char) var_3))), (min((((/* implicit */short) (signed char)112)), (arr_2 [i_1] [i_2 - 1])))))), (var_1));
        }
        /* vectorizable */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            var_23 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) 4118830142U)) || (((/* implicit */_Bool) -144115188075855869LL)))));
            /* LoopSeq 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_24 += ((/* implicit */short) var_6);
                /* LoopSeq 2 */
                for (signed char i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_6 = 1; i_6 < 21; i_6 += 4) 
                    {
                        var_25 = ((/* implicit */long long int) ((short) arr_19 [19LL] [i_3] [i_4] [i_5] [i_3 - 1]));
                        var_26 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)246))));
                        var_27 = ((/* implicit */short) var_5);
                        arr_20 [i_6] [i_3] [i_6] [i_3] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1023048091)) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) (signed char)30))));
                        arr_21 [i_1] [i_1] [i_3] [i_3] [i_5] [8ULL] [(signed char)18] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)232))));
                    }
                    arr_22 [i_3] [13ULL] [i_3] = ((/* implicit */_Bool) ((((var_3) >> (((/* implicit */int) var_6)))) * (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) * (((/* implicit */int) (short)-1701)))))));
                    /* LoopSeq 4 */
                    for (signed char i_7 = 0; i_7 < 23; i_7 += 2) 
                    {
                        var_28 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)-72)))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) - (var_2))));
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)21995)) ? (((/* implicit */int) arr_12 [i_1 + 1] [i_3] [i_1 + 1])) : (((/* implicit */int) arr_12 [(signed char)18] [i_3] [i_4]))));
                    }
                    for (unsigned int i_8 = 1; i_8 < 22; i_8 += 3) 
                    {
                        arr_28 [i_3] [(signed char)5] [i_4] [i_3 - 1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)52194)) ? (7397179371849286422ULL) : (((/* implicit */unsigned long long int) 8388607LL))));
                        arr_29 [i_8] [i_5] [i_3] [i_3] [i_3] [i_1 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_12) : (((/* implicit */long long int) 1023048091))))) ? (((((/* implicit */_Bool) (signed char)70)) ? (-576460752303423488LL) : (((/* implicit */long long int) -1908129421)))) : (((/* implicit */long long int) arr_25 [i_1] [i_3 - 1] [i_4] [i_1] [i_8 - 1] [i_1]))));
                        arr_30 [i_1 - 1] [i_1 - 1] [i_4] [i_3] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)241))) : (var_3)));
                    }
                    for (unsigned int i_9 = 3; i_9 < 22; i_9 += 2) 
                    {
                        arr_34 [i_3] [i_5] [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) var_6))));
                        var_30 *= ((/* implicit */unsigned long long int) (unsigned char)225);
                    }
                    for (unsigned int i_10 = 0; i_10 < 23; i_10 += 3) 
                    {
                        var_31 = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)20))) | (176137143U));
                        arr_38 [i_1 - 2] [i_3 - 1] [i_1 - 2] [(_Bool)1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 846474722U)) ? (((/* implicit */int) arr_15 [i_3] [i_3] [i_3 - 1])) : (((/* implicit */int) var_6))))) - (((unsigned int) 5390684186804691107ULL))));
                    }
                    var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1725240841U)) ? (arr_18 [i_1 + 1]) : (arr_18 [i_1 + 1]))))));
                    arr_39 [i_1] [(_Bool)1] [i_1] [i_3] = ((/* implicit */long long int) var_7);
                }
                for (unsigned int i_11 = 1; i_11 < 20; i_11 += 3) 
                {
                    arr_42 [i_1] [i_3] [(signed char)5] [i_3] = ((/* implicit */signed char) ((var_8) != (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                    arr_43 [i_3] [i_4] [i_3] [i_3] [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) var_9))));
                }
                arr_44 [i_3] [i_3] [9LL] = ((/* implicit */signed char) (-(arr_17 [i_1 - 2] [i_3] [i_1] [(short)10])));
                arr_45 [i_3] [i_4] [(signed char)21] [i_3] = ((/* implicit */short) ((((/* implicit */int) arr_10 [i_3] [i_3 - 1])) != (((/* implicit */int) var_0))));
            }
            for (int i_12 = 0; i_12 < 23; i_12 += 2) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_13 = 0; i_13 < 23; i_13 += 2) 
                {
                    var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) 5242305019716632703LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12611))) : (5162158220807358497ULL)));
                    var_34 = ((/* implicit */unsigned long long int) (unsigned char)122);
                    var_35 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)30)) <= (((/* implicit */int) (unsigned char)215))));
                }
                for (long long int i_14 = 4; i_14 < 22; i_14 += 3) 
                {
                    var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_8)) : (var_5))))));
                    arr_56 [i_3] [i_3 - 1] [(signed char)2] [i_14 - 4] = ((/* implicit */unsigned long long int) ((0LL) * (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                    var_37 = ((/* implicit */short) (~((~(var_10)))));
                    /* LoopSeq 1 */
                    for (int i_15 = 0; i_15 < 23; i_15 += 2) 
                    {
                        var_38 = ((/* implicit */signed char) var_3);
                        var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (7582513627579765355ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)61))))))));
                        var_40 = ((/* implicit */signed char) ((8388607LL) == (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) / (8388607LL)))));
                    }
                }
                for (signed char i_16 = 2; i_16 < 22; i_16 += 3) 
                {
                    var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-85)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) (short)21604))));
                    var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_17 [11LL] [i_3] [i_16 + 1] [i_3 - 1]))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)24389)) ^ (((/* implicit */int) (short)-32491))))) : (((((/* implicit */_Bool) var_5)) ? (4294967276U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)106)))))));
                    var_43 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 4261412864U)) || (((/* implicit */_Bool) (short)-1))))) >> (((((/* implicit */int) (short)21574)) - (21569)))));
                    var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)203)) ? (var_13) : (((/* implicit */int) (short)-24384))))) ? (var_2) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-32745)) : (((/* implicit */int) (signed char)-80)))))));
                }
                var_45 = ((/* implicit */_Bool) ((long long int) arr_18 [i_1 + 2]));
            }
        }
    }
}
