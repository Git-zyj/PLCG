/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101908
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    arr_10 [i_0] = ((/* implicit */unsigned short) arr_3 [i_0]);
                    var_14 = ((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_0 + 1] [i_0] [i_2 - 1])))))));
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 3; i_4 < 7; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_15 [i_0])) ? (-2770161541063346164LL) : (var_1))) + (9223372036854775807LL))) >> (((/* implicit */int) (!(((/* implicit */_Bool) -2770161541063346164LL)))))));
                                arr_20 [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((arr_2 [i_0]) >> (((var_2) + (3229429976535682462LL)))));
                                arr_21 [i_5] [i_0] [i_3] [i_0] [i_0 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)82)) ? (((/* implicit */int) (unsigned char)161)) : (((/* implicit */int) ((5812092755659303331ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                                var_16 = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0 - 2])) ^ (((/* implicit */int) arr_14 [i_0] [i_0 - 2] [i_3] [i_4]))));
                            }
                        } 
                    } 
                    arr_22 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (~(arr_12 [i_0 - 1] [i_0 - 2] [i_0])));
                    /* LoopNest 2 */
                    for (long long int i_6 = 1; i_6 < 8; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 1; i_7 < 10; i_7 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) ((_Bool) arr_14 [i_0] [i_6] [i_6] [i_6]));
                                arr_27 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (~(-632568988495793657LL)));
                                arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(3703557733U)))) ? (((arr_13 [i_0]) ? (arr_24 [i_6] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_0]))))) : (((/* implicit */unsigned long long int) ((7634794940869671621LL) + (-632568988495793657LL))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_9 = 1; i_9 < 10; i_9 += 4) /* same iter space */
                        {
                            arr_36 [i_0] [i_8] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -632568988495793657LL)) ? ((~(var_10))) : (((/* implicit */long long int) (~(arr_7 [i_3] [i_0]))))));
                            var_18 = ((/* implicit */unsigned char) ((arr_34 [i_3] [i_9 + 1] [i_9] [i_0] [i_9]) == (((long long int) arr_31 [i_8] [i_3] [i_1] [i_0]))));
                            var_19 = 12634651318050248285ULL;
                        }
                        for (unsigned int i_10 = 1; i_10 < 10; i_10 += 4) /* same iter space */
                        {
                            arr_39 [i_0] [i_3] [i_3] [i_0] [i_0 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0]))) : (var_8)))) ? ((-(arr_15 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 12634651318050248285ULL))))));
                            var_20 = var_7;
                        }
                        arr_40 [i_0] [i_0] [i_3] [i_0] [i_8] = (-(((((/* implicit */_Bool) -8235183705927276442LL)) ? (arr_24 [i_8] [i_0] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3]))))));
                        /* LoopSeq 4 */
                        for (unsigned char i_11 = 0; i_11 < 11; i_11 += 1) 
                        {
                            arr_43 [i_0] [i_8] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (unsigned short)19639))));
                            var_21 = ((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 2]))));
                            arr_44 [i_0] [i_0] [i_8] [i_0] = ((/* implicit */unsigned long long int) var_13);
                        }
                        for (unsigned char i_12 = 0; i_12 < 11; i_12 += 2) /* same iter space */
                        {
                            arr_48 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) -632568988495793657LL);
                            var_22 = ((/* implicit */_Bool) 2151978U);
                            var_23 = ((/* implicit */unsigned int) (-((~(var_7)))));
                        }
                        for (unsigned char i_13 = 0; i_13 < 11; i_13 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_35 [i_0 - 2] [i_0] [i_0] [i_0] [i_0])) ? (arr_35 [i_13] [i_8] [i_3] [i_1] [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
                            var_25 = ((/* implicit */unsigned int) ((unsigned char) (~(var_4))));
                        }
                        for (unsigned char i_14 = 0; i_14 < 11; i_14 += 2) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0])) % (((/* implicit */int) ((unsigned short) 3678605300U)))));
                            var_27 = ((/* implicit */_Bool) (((((~(((/* implicit */int) arr_31 [i_14] [i_1] [i_3] [i_1])))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) 4083619793U)))))));
                        }
                    }
                    arr_53 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~((~(((/* implicit */int) arr_9 [i_0] [i_0] [i_0]))))));
                }
                /* vectorizable */
                for (unsigned short i_15 = 0; i_15 < 11; i_15 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned short) ((arr_29 [i_0 - 2] [i_1] [i_0] [i_1] [i_16]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)231)))));
                        /* LoopSeq 1 */
                        for (unsigned short i_17 = 4; i_17 < 10; i_17 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13))))));
                            arr_62 [i_0] = ((/* implicit */_Bool) (unsigned short)59365);
                        }
                        var_30 = ((/* implicit */unsigned short) 765138639U);
                        var_31 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_16] [i_0] [i_0]))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_16] [i_1] [i_0] [i_1] [i_0])))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_18 = 4; i_18 < 8; i_18 += 1) 
                    {
                        for (unsigned int i_19 = 0; i_19 < 11; i_19 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */_Bool) (+(arr_35 [i_18 + 3] [i_18 + 3] [i_0 - 1] [i_0 - 1] [i_0])));
                                var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_42 [i_18 - 1] [i_18 - 1] [i_0] [i_0] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_42 [i_18 + 3] [i_18 + 3] [i_0] [i_0] [i_0 - 1] [i_0 + 1]))));
                            }
                        } 
                    } 
                    var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 4292815317U)) / (arr_47 [i_0] [i_1])))) ? ((-(-2336552196151295155LL))) : (arr_15 [i_0])));
                    /* LoopNest 2 */
                    for (unsigned short i_20 = 3; i_20 < 10; i_20 += 1) 
                    {
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            {
                                arr_74 [i_0] [i_1] [i_21] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned char)226)) ? (((/* implicit */long long int) arr_69 [i_0] [i_21])) : (var_10)))));
                                arr_75 [i_1] [i_1] [i_1] [i_20] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((var_5) ? (((/* implicit */int) (unsigned char)173)) : (((/* implicit */int) arr_45 [i_0] [i_1] [i_0] [i_20] [i_1]))))) + (((unsigned int) var_10))));
                            }
                        } 
                    } 
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    var_35 = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_11)) + (var_8)));
                    var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_57 [i_0] [i_0] [i_0] [i_0 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_0] [i_0]))) : (-632568988495793682LL)));
                    arr_80 [i_0] [i_22] = ((/* implicit */unsigned long long int) arr_15 [i_0]);
                    arr_81 [i_0] [i_0] [i_22] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_54 [i_0] [i_0] [i_0 + 1]))))));
                }
                for (unsigned long long int i_23 = 3; i_23 < 8; i_23 += 4) 
                {
                    arr_85 [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_23])) ? (508218938533801370ULL) : (var_6)))))) ? (var_11) : (((((((/* implicit */_Bool) arr_17 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_0] [i_0] [i_0] [i_0] [i_1] [i_23]))) : (arr_29 [i_0] [i_0] [i_0] [i_0] [i_0]))) >> (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) - (var_6))) - (6231438483786429254ULL)))))));
                    var_37 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) ((var_8) == (var_8))))))));
                }
            }
        } 
    } 
    var_38 = ((/* implicit */unsigned short) var_12);
    var_39 = ((/* implicit */unsigned short) var_5);
}
