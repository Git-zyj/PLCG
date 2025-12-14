/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169847
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
    var_13 = (+(var_11));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) + ((~(((/* implicit */int) (unsigned short)4095))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        var_15 &= ((/* implicit */short) ((unsigned int) (short)20077));
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            var_16 = ((/* implicit */signed char) ((unsigned int) min((((/* implicit */long long int) arr_8 [(short)13] [i_1 + 1] [i_1] [i_1 - 1] [i_1 + 1])), (var_1))));
                            var_17 |= ((/* implicit */signed char) min((((((/* implicit */_Bool) max((arr_10 [i_4] [i_4]), (7015495635773088052LL)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1 - 2] [i_2] [i_3] [i_4]))) : (-7801263626052771149LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_2])) ? (arr_4 [i_2] [i_4]) : (((/* implicit */int) var_3))))))), (((((/* implicit */_Bool) ((signed char) (signed char)(-127 - 1)))) ? (((7801263626052771148LL) / (((/* implicit */long long int) arr_0 [(short)22])))) : (((long long int) var_8))))));
                            arr_11 [19U] [i_0] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)62240)) && (((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1 + 1] [i_1]))))) >> ((((-(arr_10 [i_1 + 1] [i_1 - 1]))) - (1581668324019599597LL)))));
                        }
                        for (unsigned int i_5 = 2; i_5 < 21; i_5 += 3) 
                        {
                            var_18 = ((/* implicit */short) arr_5 [i_3] [i_2] [i_1] [i_0]);
                            arr_15 [i_2] [i_0] [i_5] = ((/* implicit */short) ((unsigned int) min((((/* implicit */short) (signed char)-120)), ((short)0))));
                        }
                        for (unsigned int i_6 = 3; i_6 < 23; i_6 += 4) 
                        {
                            arr_18 [i_0] [i_1 + 1] [i_1 - 2] [i_1 - 2] [i_1 - 2] = ((/* implicit */short) ((((min((((/* implicit */long long int) -2092873060)), (var_1))) - (((/* implicit */long long int) ((/* implicit */int) var_6))))) >= (((/* implicit */long long int) ((unsigned int) arr_14 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_3] [i_6] [i_6 - 3])))));
                            arr_19 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((unsigned int) ((((/* implicit */int) var_2)) - (arr_4 [i_1 - 1] [i_1 - 2]))));
                        }
                    }
                    /* LoopSeq 4 */
                    for (unsigned int i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned char) min((((5306701017857970336LL) + (((/* implicit */long long int) (-(((/* implicit */int) (signed char)12))))))), (((/* implicit */long long int) var_5))));
                        arr_23 [(signed char)20] [i_1 + 1] [i_0] [i_7] = ((/* implicit */unsigned int) (_Bool)1);
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) 272345575U))));
                    }
                    for (short i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_9 = 0; i_9 < 24; i_9 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((511U) - (2958133860U)))));
                            var_22 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_27 [(unsigned short)13] [18LL] [(signed char)17] [i_8] [i_1 - 2]))) % (var_12)));
                            var_23 = ((/* implicit */short) (~(((/* implicit */int) arr_26 [i_1 - 2]))));
                        }
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (var_0)));
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)182)) : (arr_4 [i_1 + 1] [i_1 + 1]))), ((~(arr_4 [i_1 - 2] [i_1 - 2]))))))));
                    }
                    for (unsigned int i_10 = 3; i_10 < 22; i_10 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_11 = 0; i_11 < 24; i_11 += 2) 
                        {
                            arr_35 [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) arr_9 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1])) ? ((~(var_8))) : (((/* implicit */unsigned long long int) min((9223372036854775807LL), (((/* implicit */long long int) 1649643011))))));
                            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) var_10))));
                            var_27 = ((/* implicit */long long int) ((unsigned long long int) ((arr_21 [i_0] [i_1 - 1] [i_1 + 1] [i_10 - 1] [i_11]) | (-9223372036854775807LL))));
                        }
                        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_7 [i_10 - 3] [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_26 [i_1 + 1])))), (((/* implicit */int) var_3)))) ^ (((/* implicit */int) (short)-9871)))))));
                        var_29 = ((/* implicit */int) min((var_29), (arr_17 [i_0] [i_1 - 1] [1U] [i_10 - 3] [(signed char)19] [i_2] [i_0])));
                        /* LoopSeq 4 */
                        for (short i_12 = 0; i_12 < 24; i_12 += 3) 
                        {
                            arr_38 [i_0] [i_2] [i_10] [i_10] [i_2] [i_1] [i_0] = ((short) ((((/* implicit */_Bool) -9223372036854775807LL)) ? (min((((/* implicit */unsigned int) (short)20077)), (arr_2 [i_0] [i_10 - 2]))) : (((/* implicit */unsigned int) (+(arr_4 [(signed char)7] [15ULL]))))));
                            var_30 = ((/* implicit */short) var_1);
                        }
                        for (short i_13 = 0; i_13 < 24; i_13 += 3) 
                        {
                            var_31 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) min((arr_25 [i_13] [i_10] [(short)8] [(short)8]), (((/* implicit */unsigned char) arr_32 [(short)13] [i_2] [i_1 - 1] [(unsigned char)17]))))) ? (var_4) : (((/* implicit */long long int) 24659030U)))) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_22 [i_1] [i_1 - 1] [i_1] [(signed char)20])) - (80)))));
                            var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) min((((/* implicit */long long int) 3731096137U)), ((((!(((/* implicit */_Bool) (signed char)-72)))) ? (-7801263626052771147LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)110))))))))));
                        }
                        for (signed char i_14 = 0; i_14 < 24; i_14 += 4) 
                        {
                            var_33 = ((/* implicit */short) 12833627965625568924ULL);
                            var_34 &= ((/* implicit */unsigned long long int) var_9);
                            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */int) arr_33 [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_1 - 1] [i_1 - 2])) : (((/* implicit */int) arr_33 [i_1 + 1] [i_1] [i_1 + 1] [i_1 - 2] [i_1 + 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_1 - 1] [i_1 - 2] [i_1 - 2] [i_1 + 1] [i_1 + 1]))) : (max((((/* implicit */long long int) arr_33 [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 1])), (var_12)))));
                            var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) var_1)), (var_8))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-69)))))))) ? (((/* implicit */int) ((_Bool) arr_12 [4LL] [i_1 + 1] [i_2] [i_10 - 3] [i_14]))) : (((/* implicit */int) ((unsigned char) (short)-484))))))));
                        }
                        for (unsigned int i_15 = 0; i_15 < 24; i_15 += 4) 
                        {
                            var_37 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(1935471194U)))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) min(((unsigned short)33627), (((/* implicit */unsigned short) (short)32755)))))))));
                            var_38 = ((/* implicit */signed char) ((short) max(((unsigned short)60558), (((/* implicit */unsigned short) (signed char)-116)))));
                        }
                    }
                    for (unsigned int i_16 = 0; i_16 < 24; i_16 += 2) 
                    {
                        var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_22 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]), (arr_22 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])))) / (((/* implicit */int) ((signed char) arr_22 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])))));
                        /* LoopSeq 1 */
                        for (unsigned int i_17 = 0; i_17 < 24; i_17 += 2) 
                        {
                            var_40 = ((/* implicit */short) min((((signed char) (unsigned char)113)), (((/* implicit */signed char) ((var_9) == (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [i_1] [i_1 + 1] [i_16]))))))));
                            var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) min((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-42))))), (((unsigned int) (+(((/* implicit */int) var_2))))))))));
                            var_42 = (signed char)76;
                        }
                    }
                }
                var_43 = ((/* implicit */short) 1336833436U);
            }
        } 
    } 
    var_44 = ((/* implicit */signed char) max((var_44), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))), (max((502031271U), (((/* implicit */unsigned int) (unsigned char)224))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (signed char)12)))))) ? (min((var_8), (((/* implicit */unsigned long long int) (short)32493)))) : (((/* implicit */unsigned long long int) max((var_7), (((/* implicit */long long int) var_2))))))))))));
    var_45 = ((/* implicit */unsigned long long int) min((var_45), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((var_12) + (9223372036854775807LL))) >> (((((/* implicit */_Bool) (unsigned char)43)) ? (3ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) 3792936024U)) : (var_0))) < (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)28379)) & (((/* implicit */int) (short)32766)))))))) : ((-(((((/* implicit */_Bool) (signed char)92)) ? (((/* implicit */int) (unsigned char)215)) : (((/* implicit */int) (signed char)-1)))))))))));
}
