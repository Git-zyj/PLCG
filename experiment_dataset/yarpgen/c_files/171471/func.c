/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171471
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
    var_11 = ((/* implicit */int) min((var_11), ((-(((/* implicit */int) var_2))))));
    var_12 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)220), ((unsigned char)35))))) >= (max((var_1), (((/* implicit */long long int) var_3))))));
    var_13 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)209)), ((unsigned short)47108)))))) ? (((/* implicit */int) (unsigned char)27)) : ((+(((/* implicit */int) ((var_3) == (((/* implicit */unsigned int) -1461100886)))))))));
    var_14 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) (unsigned short)47102)) ? (var_7) : (((/* implicit */int) var_0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))), ((+(max((((/* implicit */long long int) var_9)), (var_1)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_15 = (((+(((((/* implicit */int) (signed char)29)) * (((/* implicit */int) (unsigned char)220)))))) % (min(((+(((/* implicit */int) arr_0 [i_1])))), (min((var_7), (((/* implicit */int) arr_4 [i_0] [i_0])))))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)18430))));
                                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(min((((/* implicit */int) (unsigned short)18434)), (var_7)))))) ? ((~(var_6))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1] [i_4])) ? (((/* implicit */int) arr_4 [i_3] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_2])))))));
                                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (short)11358)))))) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0))))))))) ? (((/* implicit */int) (unsigned short)37743)) : (((/* implicit */int) (signed char)103))));
                                var_19 = ((/* implicit */unsigned short) arr_3 [i_4] [i_1] [i_1]);
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3])) >= (((((/* implicit */int) min((var_2), (((/* implicit */short) var_4))))) * (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)220)), ((unsigned short)61970))))))));
                            }
                        } 
                    } 
                    var_21 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 4294967295U)) ? (2669791959U) : (var_3))) * (((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_0] [i_1])))))))) ? (((((/* implicit */_Bool) 2517848375U)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)-11359))) & (1777118921U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 71916856549572608LL)) && (((/* implicit */_Bool) 41016469U)))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((-5564471528946592343LL), (((/* implicit */long long int) var_3))))) ? ((-(((/* implicit */int) (unsigned char)36)))) : (((/* implicit */int) min((arr_6 [i_0]), (((/* implicit */unsigned char) arr_8 [i_0]))))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        var_22 = ((/* implicit */long long int) var_4);
                        var_23 = (+(((/* implicit */int) (_Bool)0)));
                        var_24 = ((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_0]);
                        arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_5)), (arr_11 [i_0] [i_1] [i_1] [i_2] [22U] [i_5])))) * (min((arr_2 [i_0]), (((/* implicit */unsigned long long int) 2564128198U))))))) ? (((/* implicit */unsigned int) (-((~(((/* implicit */int) arr_10 [i_5] [i_2] [22] [i_0]))))))) : (((((/* implicit */_Bool) arr_15 [i_0])) ? (min((((/* implicit */unsigned int) var_2)), (arr_14 [i_5] [i_2] [i_1] [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-8890)) ? (((/* implicit */int) (unsigned short)27219)) : (((/* implicit */int) (_Bool)1)))))))));
                        var_25 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1] [(unsigned short)3])) ? (((((/* implicit */_Bool) 2517848355U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_11 [i_5] [i_2] [i_0] [i_1] [(_Bool)1] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_5), (((/* implicit */short) arr_12 [i_0] [i_1] [i_2] [(signed char)12] [i_5])))))))), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) var_4)))))) != (var_1))))));
                    }
                    for (signed char i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        arr_20 [i_0] [i_0] = ((/* implicit */int) 4294967295U);
                        var_26 = ((/* implicit */int) arr_4 [i_1] [i_1]);
                        var_27 -= ((/* implicit */_Bool) min(((+(((var_7) << (((((var_1) + (7639770994949405171LL))) - (5LL))))))), ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_6] [i_6])))))))));
                        arr_21 [i_1] [4LL] [i_1] = ((/* implicit */int) min((min((arr_7 [i_0]), (arr_7 [i_1]))), (min((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (arr_9 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_6]))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_0])) | (((/* implicit */int) var_8)))))))));
                    }
                }
                var_28 = ((/* implicit */unsigned char) var_1);
                /* LoopSeq 1 */
                for (long long int i_7 = 0; i_7 < 23; i_7 += 3) 
                {
                    arr_25 [i_0] [i_1] [i_7] = ((/* implicit */signed char) (-(0U)));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 3) 
                    {
                        var_29 = ((/* implicit */_Bool) ((arr_15 [(unsigned short)22]) | (((/* implicit */unsigned long long int) var_1))));
                        var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_10) : (var_9)))) ? ((~(((/* implicit */int) var_5)))) : ((-(((/* implicit */int) var_8))))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (long long int i_10 = 0; i_10 < 23; i_10 += 1) /* same iter space */
                        {
                            var_31 = ((/* implicit */short) (unsigned short)3566);
                            var_32 ^= ((/* implicit */unsigned int) ((((((/* implicit */int) var_2)) + (2147483647))) << ((((((+(((/* implicit */int) arr_28 [i_0] [i_1] [i_7] [i_9] [i_10])))) + (98))) - (6)))));
                            var_33 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */long long int) arr_22 [i_0] [i_0])))))));
                            var_34 = ((/* implicit */short) (~(((/* implicit */int) arr_0 [i_0]))));
                            var_35 = ((/* implicit */long long int) var_7);
                        }
                        for (long long int i_11 = 0; i_11 < 23; i_11 += 1) /* same iter space */
                        {
                            arr_40 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (((+(min((var_3), (4294967295U))))) << (((/* implicit */int) ((((/* implicit */_Bool) min((4167748026674471503ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) && (((/* implicit */_Bool) var_7)))))));
                            var_36 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))))), (arr_11 [i_0] [i_1] [i_0] [i_9] [i_9] [i_9])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [7LL]))) : (((((/* implicit */_Bool) (-(arr_9 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : ((+(arr_37 [i_1]))))));
                        }
                        for (int i_12 = 0; i_12 < 23; i_12 += 3) /* same iter space */
                        {
                            arr_44 [i_0] [i_12] [i_0] [i_0] [(signed char)4] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (~((~(var_6))))))));
                            var_37 -= ((/* implicit */unsigned char) arr_0 [i_1]);
                            var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((arr_2 [i_0]), (((/* implicit */unsigned long long int) arr_11 [i_12] [i_12] [i_9] [i_7] [i_1] [(unsigned char)15])))), (((/* implicit */unsigned long long int) ((unsigned int) arr_7 [i_9])))))) ? ((~(((/* implicit */int) (short)7680)))) : (((((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_9] [i_0])) ^ (((/* implicit */int) arr_42 [i_12]))))));
                            var_39 = ((/* implicit */int) var_3);
                        }
                        for (int i_13 = 0; i_13 < 23; i_13 += 3) /* same iter space */
                        {
                            var_40 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)47))));
                            var_41 ^= min((((((/* implicit */_Bool) arr_22 [i_13] [i_13])) ? (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) var_2)))), ((~(((/* implicit */int) arr_23 [i_9] [i_9] [i_9] [i_9])))));
                            var_42 = ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) ((var_6) - (((/* implicit */unsigned int) var_9))))) ? (((((/* implicit */unsigned int) var_10)) - (var_3))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_13] [i_0] [i_0]))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_22 [i_0] [i_0]) + (var_3)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_28 [i_13] [i_1] [i_7] [i_13] [i_13]))))));
                            var_43 = ((((/* implicit */long long int) min((min((arr_14 [14U] [i_1] [i_7] [(short)14]), (((/* implicit */unsigned int) var_5)))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_43 [22] [(signed char)6] [22] [i_9] [i_9] [i_13])))))))) ^ (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)3566))) ^ (5091881565906657128LL))));
                        }
                        var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) min((((/* implicit */long long int) (~(((/* implicit */int) min((((/* implicit */unsigned short) (short)11358)), ((unsigned short)18436))))))), ((-(((((/* implicit */long long int) ((/* implicit */int) var_5))) | (var_1))))))))));
                        var_45 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((var_7) / (((/* implicit */int) arr_42 [18]))))))))));
                    }
                    for (unsigned int i_14 = 0; i_14 < 23; i_14 += 1) 
                    {
                        var_46 = ((/* implicit */_Bool) var_8);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_15 = 0; i_15 < 23; i_15 += 3) 
                        {
                            arr_52 [i_0] [i_1] [i_7] [4] [i_15] = ((/* implicit */_Bool) (~(((/* implicit */int) var_4))));
                            var_47 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (((~(((/* implicit */int) var_2)))) * (((/* implicit */int) min((((/* implicit */short) arr_4 [4U] [4U])), (arr_42 [20]))))))) >= (max((((/* implicit */unsigned int) (+(var_9)))), (((((/* implicit */_Bool) var_0)) ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [3]) : (((/* implicit */unsigned int) var_9))))))));
                            var_48 = ((/* implicit */signed char) max((var_48), (((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)11012)))))));
                            var_49 = ((/* implicit */short) max((var_49), (((/* implicit */short) var_3))));
                            var_50 -= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_18 [i_7]))));
                        }
                        for (unsigned int i_16 = 0; i_16 < 23; i_16 += 3) 
                        {
                            var_51 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) min(((-(((/* implicit */int) var_2)))), (((((/* implicit */_Bool) arr_5 [i_14] [i_1] [i_14])) ? (((/* implicit */int) (signed char)-6)) : (((/* implicit */int) (unsigned char)100))))))) : ((+(((var_1) + (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_0] [i_1] [i_7])))))))));
                            var_52 = ((/* implicit */signed char) ((((/* implicit */long long int) (+(min((((/* implicit */unsigned int) var_2)), (var_6)))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_7) : (var_7)))) ? (max((((/* implicit */long long int) var_9)), (var_1))) : (((/* implicit */long long int) (-(var_6))))))));
                            arr_56 [8U] [8U] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_15 [i_16]), (((/* implicit */unsigned long long int) var_5))))) ? (((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-108))))) + (min((((/* implicit */unsigned long long int) (signed char)99)), (7448116419642501870ULL))))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_5)) ? (var_6) : (var_3))))))));
                            arr_57 [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */long long int) min((min((min((var_3), (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */int) var_5))))))), (((/* implicit */unsigned int) var_8))));
                        }
                        var_53 = ((/* implicit */signed char) min((var_53), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_54 [i_14] [i_14] [i_14] [i_7] [i_7] [(unsigned char)19] [i_0])) : (((/* implicit */int) var_2)))), (((/* implicit */int) arr_13 [i_14] [i_7] [i_14] [i_7] [i_1] [i_0]))))) ? ((-(((/* implicit */int) arr_54 [i_0] [i_0] [(unsigned char)2] [i_14] [(unsigned char)2] [i_14] [i_0])))) : (min((((/* implicit */int) (!(((/* implicit */_Bool) (short)-15856))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (var_9))))))))));
                    }
                }
            }
        } 
    } 
}
