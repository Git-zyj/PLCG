/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130512
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
    var_17 &= ((/* implicit */_Bool) ((((/* implicit */int) var_16)) % (max((((/* implicit */int) var_14)), (((var_6) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned char)0))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 1; i_2 < 8; i_2 += 3) 
                {
                    var_18 = ((/* implicit */short) (-(((/* implicit */int) arr_2 [0U] [i_1]))));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1 + 2] [i_2 - 1])) || (((/* implicit */_Bool) -7891246223373005201LL))))) > (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
                        arr_12 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((_Bool) ((short) arr_7 [(unsigned char)8] [i_1] [i_3])));
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */short) ((_Bool) arr_3 [i_0]));
                        var_20 = ((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_2 + 2] [i_2 - 1] [i_2 + 1])) <= (((/* implicit */int) (unsigned short)21717))));
                        var_21 = ((/* implicit */signed char) var_1);
                    }
                    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (~(((((/* implicit */long long int) ((/* implicit */int) min((arr_13 [(_Bool)1] [(_Bool)1] [i_2 - 1]), (((/* implicit */unsigned short) (signed char)-1)))))) + (min((5485318848475562746LL), (((/* implicit */long long int) (short)32767)))))))))));
                        /* LoopSeq 1 */
                        for (short i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            var_23 &= ((/* implicit */long long int) (-(((/* implicit */int) ((min((9174055326325772420LL), (((/* implicit */long long int) arr_13 [(_Bool)1] [(signed char)6] [i_5])))) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [(unsigned char)4] [(unsigned char)4] [0ULL] [i_5])))))))))));
                            var_24 = ((/* implicit */_Bool) min((((/* implicit */int) min((min((((/* implicit */short) (signed char)0)), (var_7))), (((/* implicit */short) min((arr_17 [i_0]), (((/* implicit */unsigned char) (signed char)-1)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)1)) ? (arr_16 [i_6] [i_5] [i_5] [i_2] [i_1] [(signed char)5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((var_6) ? (((/* implicit */int) arr_4 [i_5])) : (((/* implicit */int) var_7)))) : (((/* implicit */int) (_Bool)0))))));
                        }
                    }
                }
                /* LoopSeq 2 */
                for (unsigned short i_7 = 2; i_7 < 7; i_7 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 0; i_8 < 10; i_8 += 1) 
                    {
                        var_25 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_7 + 2] [i_7 - 1]))) : (arr_7 [i_7 + 1] [i_1] [i_7 + 3]))));
                        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_26 [i_8] [(unsigned char)8] [(unsigned char)8] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5)))) & ((~(((/* implicit */int) arr_0 [i_1] [i_1]))))))) ? (min((min(((-2147483647 - 1)), (((/* implicit */int) var_14)))), ((-(((/* implicit */int) arr_21 [i_0] [(unsigned char)9] [i_7] [(signed char)2])))))) : (((/* implicit */int) var_1)))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_9 = 1; i_9 < 8; i_9 += 4) 
                    {
                        arr_31 [i_9] [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) (((!(((/* implicit */_Bool) -2503570370678219911LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_9 + 2] [i_7 - 1] [i_1 + 1]))) : (((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */long long int) 2072514464U)) : (0LL)))))));
                        var_27 = ((((((/* implicit */_Bool) arr_4 [i_1 - 3])) && (((/* implicit */_Bool) arr_4 [i_7 - 1])))) ? ((((_Bool)1) ? (((/* implicit */int) arr_4 [i_7 - 1])) : (((/* implicit */int) arr_4 [i_0])))) : (((/* implicit */int) arr_4 [i_0])));
                        var_28 &= ((/* implicit */_Bool) min((((((/* implicit */int) arr_19 [i_9 + 2] [i_7 - 2] [i_1 - 3] [i_1 - 2] [i_1 + 2])) >> (((var_4) - (4060350161U))))), ((+(((var_6) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_23 [6U] [6U] [6U]))))))));
                        var_29 &= ((/* implicit */int) var_16);
                    }
                    for (unsigned char i_10 = 0; i_10 < 10; i_10 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (short i_11 = 0; i_11 < 10; i_11 += 4) /* same iter space */
                        {
                            var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1 - 1] [i_7] [i_1 - 1])) ? (((/* implicit */int) arr_23 [i_11] [(signed char)6] [i_11])) : (((/* implicit */int) (signed char)-1))))) ? (min((arr_1 [i_7]), (arr_18 [0U] [i_11] [i_11] [i_10] [i_10]))) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_1 + 1] [i_1 - 3] [i_7 + 2] [i_7 - 2] [i_10])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 3684215518800750295ULL)) ? (arr_3 [i_7 - 2]) : (((/* implicit */unsigned long long int) 281474976710655LL))))))))))))));
                            arr_37 [i_11] [i_11] [i_1] [(short)7] [i_1] [i_1] [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_8 [i_1 - 3] [i_7 - 1] [i_7 - 1] [i_10])) ? (arr_1 [i_7 + 2]) : (((arr_26 [i_0] [i_0] [i_1] [i_10]) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))))));
                            var_31 = ((/* implicit */unsigned int) arr_13 [i_1] [i_1] [i_1]);
                            arr_38 [i_0] [9U] [i_7 + 2] [i_10] [i_1] [i_7] = ((/* implicit */unsigned char) min(((short)-24079), (min((arr_20 [i_1 + 2] [i_1] [(short)4] [i_1] [i_1] [i_1 - 3]), (((/* implicit */short) (unsigned char)255))))));
                            arr_39 [i_11] [i_1] [8U] [(signed char)0] [i_7] [i_1] [i_0] = ((/* implicit */long long int) arr_30 [(_Bool)1] [(signed char)2] [i_1]);
                        }
                        for (short i_12 = 0; i_12 < 10; i_12 += 4) /* same iter space */
                        {
                            var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((max((((/* implicit */long long int) var_3)), (6797929280363628928LL))) & (((/* implicit */long long int) ((/* implicit */int) min((arr_19 [i_12] [i_10] [i_7] [i_1 - 1] [i_0]), (arr_10 [i_10] [i_7 + 2] [i_1 + 1] [i_1 + 1] [i_1 - 2]))))))))));
                            arr_44 [i_1] = ((/* implicit */short) arr_11 [(short)4] [5U] [i_1] [i_1]);
                            var_33 *= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((unsigned char) var_1))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)11))) ^ (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_12] [4ULL] [i_7] [i_10] [8] [i_1 - 1]))))), (((/* implicit */unsigned long long int) (unsigned char)198))));
                        }
                        /* vectorizable */
                        for (short i_13 = 0; i_13 < 10; i_13 += 4) /* same iter space */
                        {
                            arr_48 [i_0] [i_1] [i_10] [(unsigned short)8] [i_13] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_42 [i_0])) : (((/* implicit */int) arr_4 [i_7]))))) ? (((((/* implicit */_Bool) arr_33 [i_0] [i_0] [i_1] [2])) ? (((/* implicit */long long int) arr_33 [i_13] [i_1] [i_1] [2U])) : (var_9))) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1] [i_1] [i_1]))));
                            var_34 = ((/* implicit */unsigned int) arr_36 [i_7 + 2] [i_7 + 2] [i_1] [i_1 - 3] [i_1 - 2]);
                        }
                        arr_49 [i_0] [i_0] [i_1] [i_10] = ((/* implicit */signed char) max((max((arr_32 [i_1] [i_1 + 2] [0LL] [i_10]), (((long long int) arr_24 [i_10] [i_1] [i_1] [i_0])))), (((/* implicit */long long int) min((((unsigned char) var_14)), (((/* implicit */unsigned char) arr_22 [i_7] [i_7 + 3] [i_1 + 1])))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 1; i_14 < 9; i_14 += 4) 
                    {
                        for (unsigned int i_15 = 0; i_15 < 10; i_15 += 3) 
                        {
                            {
                                arr_56 [(unsigned short)8] [i_14 - 1] [i_1] [i_1] [(unsigned char)4] [i_14] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_0])) : (((/* implicit */int) (short)14251)))) | (((/* implicit */int) max((((/* implicit */short) arr_45 [(signed char)7] [i_1])), ((short)32767))))))), (288230375077969920LL)));
                                var_35 = min((((/* implicit */short) (signed char)-2)), ((short)27629));
                                arr_57 [4LL] [0LL] [4LL] &= ((/* implicit */unsigned int) max(((short)(-32767 - 1)), (((/* implicit */short) arr_53 [i_0] [(unsigned char)2] [8LL]))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned short i_16 = 2; i_16 < 7; i_16 += 3) /* same iter space */
                {
                    var_36 = ((((/* implicit */_Bool) (+(arr_51 [i_1])))) ? (((/* implicit */int) arr_21 [i_16 + 1] [i_16 + 2] [7LL] [7LL])) : (((/* implicit */int) ((var_10) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)38)))))));
                    arr_61 [i_1] [i_1] [i_0] [i_1] = ((/* implicit */signed char) 18446744073709551615ULL);
                    arr_62 [i_1] = ((/* implicit */short) -281474976710655LL);
                    var_37 = ((/* implicit */unsigned char) arr_30 [i_0] [i_1] [(short)8]);
                }
                var_38 = ((/* implicit */long long int) (((~(max((((/* implicit */unsigned long long int) (unsigned char)250)), (arr_3 [i_1]))))) & (13768204395701651548ULL)));
            }
        } 
    } 
    var_39 = ((/* implicit */long long int) var_3);
}
