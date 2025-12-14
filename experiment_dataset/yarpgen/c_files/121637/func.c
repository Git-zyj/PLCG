/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121637
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
    var_11 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) (unsigned char)40)) - (((/* implicit */int) max((((/* implicit */unsigned char) var_0)), (var_1)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_12 -= ((/* implicit */signed char) (~(((/* implicit */int) ((short) var_9)))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        var_13 ^= ((/* implicit */short) ((unsigned long long int) min((arr_8 [(signed char)12] [i_2 + 3] [(signed char)12]), (arr_8 [(short)2] [i_3] [(short)2]))));
                        var_14 = ((short) ((unsigned int) ((((/* implicit */_Bool) arr_3 [i_3] [i_0] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4)))));
                        var_15 *= ((/* implicit */signed char) (((((~(((/* implicit */int) var_1)))) + (2147483647))) << (((((((((/* implicit */_Bool) arr_11 [i_3] [i_2 + 1] [i_2 + 2] [i_1] [i_0] [i_0])) ? (((/* implicit */int) arr_11 [i_3] [i_2 + 3] [i_2 + 3] [i_2] [i_2] [i_0])) : (((/* implicit */int) arr_11 [(short)7] [i_2 + 4] [i_2 + 3] [i_2] [i_2] [i_1])))) + (26174))) - (20)))));
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_8 [i_1] [i_2] [i_1]))) ? (((long long int) arr_6 [i_2 - 2])) : (((((/* implicit */_Bool) arr_4 [i_2 + 1])) ? (((long long int) var_0)) : (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) ^ (var_6)))))));
                    }
                    var_17 += ((/* implicit */unsigned int) max(((~(7711199923665887175ULL))), (((/* implicit */unsigned long long int) (~(arr_5 [i_2 + 2] [i_2 + 2]))))));
                    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned char) arr_5 [i_0] [i_1]))), (max((((/* implicit */long long int) arr_4 [i_0])), (var_10)))))), (max((((/* implicit */unsigned long long int) max((var_3), (var_3)))), (((((/* implicit */_Bool) 12043463220132394017ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_9))))))))));
                }
                for (long long int i_4 = 2; i_4 < 11; i_4 += 1) /* same iter space */
                {
                    var_19 = ((/* implicit */signed char) min((((/* implicit */int) ((unsigned short) 3115689907U))), ((+(((/* implicit */int) (!(((/* implicit */_Bool) -7685147383699695608LL)))))))));
                    /* LoopSeq 3 */
                    for (int i_5 = 1; i_5 < 11; i_5 += 1) 
                    {
                        var_20 = ((/* implicit */short) max((((((/* implicit */_Bool) ((signed char) var_9))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1125899906842620LL)) ? (((/* implicit */int) arr_9 [i_0])) : (((/* implicit */int) arr_9 [i_1]))))) : (var_6))), (((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) var_7))))))));
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) max(((unsigned short)16339), (((/* implicit */unsigned short) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_4 - 1] [i_4 + 1] [i_5 + 2]))) : (((((/* implicit */_Bool) arr_0 [(unsigned short)2])) ? (arr_6 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))) / (max((((var_6) % (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) (~(((/* implicit */int) var_1)))))))));
                        var_22 &= ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) min((arr_9 [i_0]), (((/* implicit */unsigned short) arr_11 [i_5 + 1] [i_1] [i_0] [i_0] [12LL] [i_4]))))), (((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26912))) : (arr_15 [i_0]))))), ((((~(15574366789028058702ULL))) << (((((/* implicit */_Bool) 2268766388401418177ULL)) ? (((/* implicit */int) (signed char)27)) : (((/* implicit */int) arr_7 [i_4] [12U] [i_0]))))))));
                    }
                    for (signed char i_6 = 2; i_6 < 10; i_6 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) min((((/* implicit */int) max((var_2), (((/* implicit */short) arr_10 [i_4 + 2] [i_1] [i_4] [i_6]))))), ((+(((/* implicit */int) var_8)))))))));
                        var_24 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (~(-8881086377549217544LL))))))));
                        var_25 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_4 + 2] [11U] [i_4] [i_4])) || (((/* implicit */_Bool) 0U))))) > (((int) arr_12 [i_0] [i_1] [i_4]))));
                    }
                    for (signed char i_7 = 2; i_7 < 10; i_7 += 1) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (short i_8 = 2; i_8 < 12; i_8 += 1) 
                        {
                            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_24 [i_8] [i_7 - 1] [i_0]), (arr_24 [i_0] [i_1] [i_4 - 2])))) ? (((/* implicit */int) min((((/* implicit */short) ((signed char) (unsigned short)53595))), ((short)3026)))) : (((/* implicit */int) (unsigned char)249))));
                            var_27 = ((((unsigned int) min((((/* implicit */unsigned char) arr_10 [i_8] [i_8] [i_8] [(short)7])), (arr_19 [i_1] [i_4 + 1] [i_1] [i_8])))) << (((((/* implicit */int) min((((short) arr_15 [i_0])), (((/* implicit */short) max((var_3), ((signed char)0))))))) + (6576))));
                        }
                        for (short i_9 = 0; i_9 < 13; i_9 += 1) 
                        {
                            var_28 = ((/* implicit */short) (((~(((((/* implicit */_Bool) arr_18 [i_1])) ? (((/* implicit */unsigned long long int) arr_18 [i_1])) : (11530726818413948849ULL))))) | ((((~(16239330665116501698ULL))) ^ (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [12U] [i_1])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_7 - 2] [i_1] [i_4 - 2] [i_1] [i_4 - 2])) || (((/* implicit */_Bool) (short)1920)))))) % (((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_26 [i_0] [i_1] [i_4 - 1] [i_7 + 2] [(unsigned char)8]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_7 + 3] [i_1])))))));
                            var_30 = ((/* implicit */unsigned char) var_4);
                            var_31 = ((/* implicit */unsigned int) arr_22 [i_0] [i_1] [i_4] [i_1] [i_9]);
                        }
                        for (unsigned char i_10 = 4; i_10 < 12; i_10 += 1) /* same iter space */
                        {
                            var_32 = ((/* implicit */signed char) (~((~(var_7)))));
                            var_33 = ((/* implicit */unsigned char) ((((unsigned long long int) ((var_6) << (((8836436885760622070LL) - (8836436885760622070LL)))))) >> (((((((/* implicit */_Bool) (+(((/* implicit */int) arr_21 [i_0] [i_1] [i_4] [i_1] [i_7] [i_10]))))) ? (((/* implicit */int) min(((short)-1), (((/* implicit */short) (signed char)-127))))) : (((/* implicit */int) ((signed char) var_8))))) + (138)))));
                        }
                        for (unsigned char i_11 = 4; i_11 < 12; i_11 += 1) /* same iter space */
                        {
                            var_34 = ((/* implicit */int) arr_28 [i_0] [i_0] [i_0]);
                            var_35 = ((/* implicit */int) arr_0 [i_0]);
                            var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) var_4))));
                        }
                        var_37 = ((/* implicit */short) ((max((((/* implicit */long long int) ((signed char) var_8))), (arr_30 [i_7] [i_7] [i_7] [(short)5] [i_7]))) <= (((/* implicit */long long int) max((arr_27 [i_7] [i_1] [i_7 + 2] [i_7] [i_7] [5LL]), (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_7 [i_7] [i_1] [i_1]))))))))));
                        var_38 ^= ((/* implicit */unsigned char) (-((~(((/* implicit */int) max(((short)14242), (arr_1 [i_0]))))))));
                    }
                }
                for (long long int i_12 = 2; i_12 < 11; i_12 += 1) /* same iter space */
                {
                    var_39 -= ((/* implicit */signed char) ((((arr_28 [i_12 + 1] [i_0] [i_0]) >> (((/* implicit */int) var_4)))) < (((/* implicit */unsigned int) ((((/* implicit */int) max(((short)16498), (((/* implicit */short) var_1))))) << (((max((((/* implicit */unsigned int) var_2)), (arr_33 [i_0] [(unsigned short)6] [i_12]))) - (167492239U))))))));
                    var_40 = ((/* implicit */unsigned long long int) (~(max((((/* implicit */long long int) ((signed char) arr_12 [i_1] [i_1] [i_1]))), (((var_6) | (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_13 = 4; i_13 < 16; i_13 += 1) 
    {
        var_41 *= ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_13]))) | (((arr_36 [i_13]) >> (((((/* implicit */int) (unsigned char)72)) - (37))))))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-20)) + (2147483647))) >> (((var_10) + (3297253355869949413LL))))))));
        var_42 = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-72))));
    }
}
