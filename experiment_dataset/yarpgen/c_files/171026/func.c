/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171026
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
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) max((((/* implicit */unsigned long long int) 3824282813U)), (5080573506739853667ULL))))));
    var_15 ^= ((/* implicit */long long int) var_7);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 2; i_2 < 24; i_2 += 1) 
                {
                    var_16 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) ^ (-1726476884579596483LL)))) ? (((arr_5 [i_0] [i_1] [i_0] [i_2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4828))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) & (((/* implicit */int) var_8)))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) min((var_17), ((-((+(min((arr_1 [i_0]), (((/* implicit */unsigned long long int) var_9))))))))));
                        arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((min((arr_5 [i_0] [i_0] [i_0] [i_2 + 1]), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_0 [i_1] [i_0])) : (arr_5 [i_0] [0U] [i_0] [i_0]))))) >> (((((/* implicit */int) min((((/* implicit */short) var_8)), ((short)-4828)))) + (4891)))));
                        var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_7 [(short)8] [(short)8] [(short)18] [(short)18]))))), (min((arr_4 [(unsigned short)6] [(unsigned short)6] [i_2]), (((/* implicit */unsigned int) (short)-4849))))))) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)35)) | (((/* implicit */int) (unsigned char)139))))) : ((((!(((/* implicit */_Bool) arr_7 [(_Bool)1] [(_Bool)1] [8] [i_3])))) ? (arr_0 [(short)20] [i_2 + 1]) : (((((/* implicit */_Bool) arr_0 [i_3] [i_1])) ? (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_3] [i_0])) : (4672468571650222170LL)))))));
                    }
                    for (unsigned short i_4 = 3; i_4 < 24; i_4 += 3) 
                    {
                        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) arr_10 [i_2] [12LL] [i_2 - 2] [i_2 - 1] [i_2 + 1]))));
                        arr_14 [i_0] [2LL] [i_2 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446744073709551594ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)4825))) : (9223372036854775798LL)));
                        arr_15 [i_0] = max((((/* implicit */unsigned long long int) (short)4825)), (((arr_13 [i_2 - 1] [(unsigned short)12] [i_2 - 1] [i_2] [i_2]) + (((/* implicit */unsigned long long int) (-(var_9)))))));
                    }
                    arr_16 [i_0] [i_0] [i_2] [i_1] = (~(((/* implicit */int) ((signed char) arr_8 [i_0] [i_0] [i_0] [i_2 - 1]))));
                    arr_17 [i_0] = arr_3 [i_0];
                    var_20 ^= ((/* implicit */unsigned long long int) (-(-188549082037010471LL)));
                }
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    /* LoopSeq 1 */
                    for (short i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 2) 
                        {
                            var_21 -= ((/* implicit */unsigned short) (-(arr_6 [i_1] [(unsigned char)4] [i_6] [i_1])));
                            arr_27 [i_0] [i_7] = ((/* implicit */_Bool) arr_13 [9U] [i_1] [i_7] [i_1] [i_7]);
                        }
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((((/* implicit */_Bool) var_4)) ? (arr_11 [i_5] [i_1] [i_5] [(signed char)22] [i_5] [2]) : (arr_11 [i_5] [i_5] [i_0] [i_1] [i_5] [i_6])))));
                    }
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_5] [i_5] [i_5])) || (((/* implicit */_Bool) arr_4 [i_5] [i_1] [i_5])))))));
                    arr_28 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) var_6))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_35 [i_0] [i_0] [i_5] [(_Bool)1] [i_9] = ((/* implicit */short) arr_21 [i_5] [i_1] [i_0] [i_1] [i_1] [i_9]);
                            arr_36 [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned short)59135)) ? (((/* implicit */int) (short)4836)) : (((/* implicit */int) (signed char)15))))));
                            arr_37 [i_0] = ((/* implicit */unsigned int) arr_7 [i_9] [i_0] [i_0] [i_0]);
                        }
                        for (unsigned long long int i_10 = 3; i_10 < 22; i_10 += 4) 
                        {
                            var_24 = ((/* implicit */int) arr_29 [i_0] [i_0] [15] [i_10]);
                            arr_42 [i_0] [6LL] [i_5] |= ((((/* implicit */long long int) arr_2 [i_10 - 3] [i_10 + 1])) <= ((-(-188549082037010468LL))));
                            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_10 + 1] [i_10 + 1] [i_10] [i_8] [i_8])))))));
                            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (-(-133689466))))));
                        }
                        for (unsigned int i_11 = 0; i_11 < 25; i_11 += 4) 
                        {
                            arr_46 [i_0] [i_1] [i_1] [i_0] [i_0] [i_11] = ((/* implicit */unsigned char) arr_34 [i_11] [15LL] [i_1]);
                            arr_47 [i_0] [i_8] [i_8] [16ULL] [i_5] [i_1] [i_0] = ((/* implicit */unsigned char) (((!((_Bool)0))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-4672468571650222149LL)));
                        }
                        var_27 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_31 [i_8] [i_0] [i_5] [i_1] [i_0]))))) / (arr_33 [i_8] [i_5] [i_5] [i_5] [i_1] [i_5] [i_0])));
                        /* LoopSeq 1 */
                        for (unsigned int i_12 = 0; i_12 < 25; i_12 += 3) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 470684474U)) / (-9223372036854775799LL))))));
                            arr_51 [i_0] [i_0] [i_12] = ((/* implicit */int) arr_44 [i_12] [(signed char)24] [i_8] [(signed char)24] [i_1] [i_0]);
                            var_29 *= ((/* implicit */unsigned long long int) var_9);
                        }
                    }
                    for (unsigned int i_13 = 0; i_13 < 25; i_13 += 4) 
                    {
                        arr_55 [i_0] [(short)11] [i_1] [i_5] [i_5] = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned short)49676)) <= (arr_6 [i_5] [i_5] [(_Bool)0] [(signed char)4]))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) 3624212368U)) >= (var_13))))) : (arr_19 [i_5])));
                        var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (signed char)-117))) ? (((arr_13 [i_13] [i_13] [i_13] [2] [i_13]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)124))))) : ((-(var_1))))))));
                        arr_56 [i_0] [i_0] [(signed char)23] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) (short)-17798)) ? (arr_38 [i_5]) : (((/* implicit */long long int) arr_22 [i_0] [i_1] [i_1] [i_5] [23LL] [i_0])))) : (((/* implicit */long long int) var_7))));
                    }
                }
                var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) arr_29 [2] [2] [2] [i_1]))));
                /* LoopSeq 1 */
                for (short i_14 = 1; i_14 < 23; i_14 += 2) 
                {
                    var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) (short)4837))));
                    var_33 += ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)3334)), (((((/* implicit */long long int) (+(2147483647)))) - (min((arr_18 [(signed char)14] [i_14] [i_1] [(signed char)14]), (((/* implicit */long long int) (short)-4843))))))));
                    var_34 = ((/* implicit */unsigned char) (-(((/* implicit */int) max((((_Bool) var_5)), ((!(((/* implicit */_Bool) arr_18 [i_0] [i_0] [8] [i_0])))))))));
                    /* LoopSeq 3 */
                    for (long long int i_15 = 0; i_15 < 25; i_15 += 4) 
                    {
                        arr_61 [i_0] [i_0] [i_14] [i_15] [i_15] = ((/* implicit */signed char) max((((arr_44 [i_14 - 1] [i_14 + 2] [i_14] [i_14 + 2] [i_14] [i_14 + 2]) ? (((/* implicit */int) (short)17797)) : (((/* implicit */int) var_6)))), (((/* implicit */int) max((var_8), (var_5))))));
                        var_35 = ((/* implicit */long long int) min((var_35), (((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (2861268625U)))) & (min((((/* implicit */long long int) arr_24 [i_14 - 1] [i_14 + 2] [i_14 + 2] [i_14 + 1])), (((((/* implicit */_Bool) arr_1 [i_14])) ? (var_9) : (((/* implicit */long long int) arr_6 [i_0] [i_1] [i_0] [i_15]))))))))));
                    }
                    for (signed char i_16 = 0; i_16 < 25; i_16 += 1) 
                    {
                        arr_65 [i_0] [i_1] [i_14] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)-124)) ? (2ULL) : (18446744073709551600ULL))), (((/* implicit */unsigned long long int) arr_24 [i_0] [i_1] [i_14 - 1] [i_14 - 1])))))));
                        var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) max(((unsigned short)0), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 0ULL))))))))));
                        var_37 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [15LL] [i_0] [i_14 + 2] [i_16])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (_Bool)1)))) : (var_13)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))) : ((-(18446744073709551615ULL)))));
                        var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) (~(((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (signed char)-88)) : (1340846542))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_17 = 0; i_17 < 25; i_17 += 3) 
                    {
                        arr_68 [14] [14] [i_0] [i_0] [i_14] [i_17] = ((/* implicit */int) arr_29 [i_0] [(signed char)7] [i_14 + 1] [1ULL]);
                        var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) (short)17798)) ? (12489812U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_14 + 2] [(signed char)17]))))))))));
                        /* LoopSeq 1 */
                        for (short i_18 = 0; i_18 < 25; i_18 += 4) 
                        {
                            var_40 = (~(arr_39 [i_0] [i_0] [i_0] [i_0]));
                            var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) arr_57 [i_18] [i_14 + 1] [i_14 - 1] [i_14 - 1]))));
                        }
                    }
                }
            }
        } 
    } 
    var_42 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10)))));
    var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_9)))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) ((var_9) / (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (var_7) : (((/* implicit */int) (signed char)-67))))));
}
