/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108038
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
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((int) var_9)))));
    var_16 = ((/* implicit */unsigned int) max((min((((/* implicit */int) var_1)), (-661276596))), ((+(((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) var_6)))))))));
    var_17 = ((/* implicit */unsigned short) ((var_3) << (((((var_13) + (1532379873))) - (5)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */int) arr_2 [i_0] [i_0])) != (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_8)))) < (65534U)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535))));
        var_19 &= (((((+(arr_0 [i_0]))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0] [i_0])) << (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((/* implicit */int) ((unsigned short) 9329991207225597572ULL))) : (max((arr_1 [i_0] [i_0]), (((/* implicit */int) arr_2 [i_0] [i_0]))))))) : (min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])), (arr_0 [i_0]))));
        arr_4 [12U] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) max((-3316072618939517704LL), (((/* implicit */long long int) (short)22824))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (9223372036854775807LL)))) : (min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (arr_0 [i_0]))))), (((/* implicit */unsigned long long int) max(((unsigned short)27058), (((/* implicit */unsigned short) (unsigned char)225)))))));
        var_20 *= ((/* implicit */unsigned char) (short)22824);
    }
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            var_21 &= ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1] [i_2])) ? (arr_8 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_13)) ? (9116752866483954045ULL) : (((/* implicit */unsigned long long int) arr_6 [(short)2])))) < (min((((/* implicit */unsigned long long int) var_4)), (9116752866483954043ULL)))))))));
            arr_11 [i_1] [(_Bool)1] [i_1] = ((/* implicit */int) (!(((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38989))) != (9116752866483954045ULL)))) <= (((((/* implicit */_Bool) 1547782516)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)30392))))))));
            arr_12 [12ULL] |= ((/* implicit */unsigned short) arr_2 [i_1] [12U]);
        }
        var_22 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [10U])) ? (((/* implicit */int) arr_10 [i_1] [i_1] [i_1])) : (((/* implicit */int) (unsigned short)30392))))), (max((((/* implicit */unsigned long long int) -5503466074886655915LL)), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30365))) : (9116752866483954043ULL)))))));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (int i_4 = 1; i_4 < 11; i_4 += 3) 
            {
                {
                    var_23 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_10 [i_4 - 1] [(short)10] [i_4 + 1]))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_10 [i_4 + 1] [10LL] [i_4 + 2])), (arr_16 [i_4 + 2] [i_4 - 1] [i_4 - 1]))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 3) 
                        {
                            {
                                arr_22 [i_5] [i_1] = ((/* implicit */unsigned long long int) -1096100128);
                                var_24 = ((short) arr_2 [i_4] [i_6]);
                                arr_23 [i_1] [i_3] [i_1] [i_1] [i_3] [i_3] = ((/* implicit */int) min((((((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65529))) : (arr_13 [i_1]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 14270828271821881741ULL)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2759642833U)) ? (min((3649406310U), (((/* implicit */unsigned int) arr_1 [i_1] [i_6])))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)196))))))));
                                var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) max(((unsigned char)23), (var_11))))))))))));
                            }
                        } 
                    } 
                    arr_24 [i_4] [i_1] [i_1] [i_1] = (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_6 [(short)2])) ? (((/* implicit */unsigned long long int) arr_1 [i_1] [(unsigned char)1])) : (arr_13 [i_1]))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        var_26 = var_5;
                        var_27 *= ((/* implicit */_Bool) ((unsigned long long int) (unsigned short)29552));
                        arr_27 [i_3] [i_1] [i_7] = ((/* implicit */int) ((signed char) ((7631613216850408488ULL) | (((/* implicit */unsigned long long int) 9223372036854775807LL)))));
                        arr_28 [i_7] |= ((/* implicit */int) arr_13 [i_7]);
                    }
                    for (unsigned short i_8 = 0; i_8 < 13; i_8 += 3) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 4) 
                        {
                            var_28 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1]))) | (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_1] [i_3] [i_3] [i_1] [i_9]))) : (arr_16 [i_1] [i_3] [i_9])))));
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_33 [i_9] [i_3] [9U] [i_1] [i_9])) << (((((/* implicit */int) (unsigned char)196)) - (170)))))) ? (((var_13) % (((/* implicit */int) (short)22824)))) : (((/* implicit */int) var_14))));
                            var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)1326)) % (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_1] [i_1] [i_1] [i_1]))) : (arr_13 [i_1])));
                            var_31 = ((/* implicit */int) arr_32 [i_1] [i_3] [i_3] [i_4] [i_8] [i_9]);
                            arr_34 [i_1] [i_9] &= ((/* implicit */short) arr_6 [i_8]);
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)88)))))));
                            var_33 = (!((!(((/* implicit */_Bool) arr_31 [i_4 + 2] [i_8] [i_4 + 2] [i_8] [i_8] [i_8])))));
                        }
                        arr_37 [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -3515758318492681733LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)224))) : (arr_31 [7] [i_4 + 2] [(signed char)7] [i_4] [i_4] [i_4 + 1]))) > (((((/* implicit */_Bool) arr_31 [i_4] [i_4 + 1] [i_4 + 1] [i_4] [i_4] [i_4 + 2])) ? (arr_31 [i_3] [i_4 - 1] [i_3] [i_4] [i_4 + 1] [i_4 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))))));
                        arr_38 [(short)5] [i_1] [(unsigned short)5] [(unsigned short)5] = var_8;
                    }
                    for (unsigned long long int i_11 = 2; i_11 < 11; i_11 += 4) 
                    {
                        var_34 = ((/* implicit */long long int) arr_0 [i_1]);
                        var_35 = ((/* implicit */short) arr_10 [(unsigned char)0] [i_1] [i_1]);
                        var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * ((+(0ULL)))))) ? (((((/* implicit */_Bool) arr_18 [(unsigned short)0] [i_11] [(unsigned short)0] [i_11 - 2] [i_11 + 2])) ? (((/* implicit */int) arr_21 [i_1] [i_4 - 1] [(unsigned short)6] [i_4 + 2] [i_11 + 1])) : (((((/* implicit */_Bool) (unsigned short)47795)) ? (((/* implicit */int) var_2)) : (arr_18 [i_1] [i_11] [i_1] [i_1] [i_1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_14 [i_11]), ((signed char)(-127 - 1)))))))))))));
                    }
                }
            } 
        } 
    }
}
