/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166171
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
    var_15 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_14)) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_0)))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (unsigned short)63027);
        var_16 = ((((/* implicit */_Bool) 0U)) ? (((((/* implicit */_Bool) (unsigned char)35)) ? (arr_0 [i_0]) : (max((((/* implicit */unsigned int) (short)-8897)), (4294967294U))))) : (arr_2 [i_0]));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (signed char i_2 = 3; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 1; i_3 < 13; i_3 += 3) /* same iter space */
                    {
                        arr_13 [i_0] = ((/* implicit */unsigned short) ((arr_6 [i_2]) ? (((/* implicit */int) (signed char)-58)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3] [i_2] [i_1] [i_0])))))));
                        arr_14 [i_0] [i_1] [i_0] [i_3] [i_3] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 544181453U)) ? (13071595990666190910ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        var_17 = min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) + (arr_1 [i_0] [i_1])))), (((((/* implicit */_Bool) ((unsigned short) arr_10 [i_0] [(unsigned char)9] [i_0]))) ? (((var_9) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)41))))) : (((/* implicit */long long int) arr_1 [i_0] [i_0])))));
                        arr_15 [i_0] = ((/* implicit */int) (signed char)-56);
                        arr_16 [i_0] [i_0] [(unsigned char)5] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) min((var_9), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) + (-8388608)))))));
                    }
                    for (int i_4 = 1; i_4 < 13; i_4 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 1; i_5 < 10; i_5 += 4) 
                        {
                            var_18 = ((/* implicit */long long int) arr_7 [i_0] [i_2] [i_2]);
                            var_19 = 14680064;
                            arr_23 [i_5 + 2] [i_0] [i_4 - 1] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned short) 768U)))));
                            arr_24 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_2 - 1] [i_4 - 1] [i_5 + 4])) ? (((/* implicit */int) arr_18 [i_0] [i_2 - 1] [i_0] [i_5 - 1])) : (((/* implicit */int) arr_19 [i_0] [i_2 - 1] [i_4 + 1] [i_5 - 1] [i_0] [i_2] [i_1]))))) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_2 - 1] [i_4 + 1] [i_5 + 2])) ? (-2139772572) : (((/* implicit */int) arr_19 [i_0] [i_2 + 2] [i_4 + 1] [i_5 + 1] [i_5] [i_1] [i_1])))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_2 - 1] [i_4 + 1] [i_5 + 4])) ? (((/* implicit */int) arr_18 [i_0] [i_2 - 1] [i_0] [i_5 + 4])) : (((/* implicit */int) arr_19 [i_0] [i_2 + 1] [i_4 - 1] [i_5 + 3] [i_5] [i_0] [i_0]))))));
                        }
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0]))) != (1855051511U)));
                        arr_25 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((var_0) != (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_17 [i_0] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_1])))))))));
                        var_21 -= ((/* implicit */unsigned char) ((int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0])) && (((/* implicit */_Bool) var_11))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            var_22 |= (+(arr_29 [i_0] [i_0] [i_1] [i_2 - 3] [i_4 - 1] [i_6]));
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_22 [i_0] [i_4] [i_1] [i_0])))))));
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_4] [i_1] [i_6] [i_4] [i_6] [i_4] [i_2 + 1]))) != (var_6))))) : (var_0)));
                            var_25 = ((/* implicit */signed char) (+(7640945022299828900LL)));
                        }
                    }
                    arr_30 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) (!(((((((/* implicit */_Bool) 9243601234535789655ULL)) ? (972164499) : (((/* implicit */int) (unsigned char)58)))) != (((/* implicit */int) (short)-9333))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 13; i_7 += 3) 
                    {
                        var_26 = ((/* implicit */_Bool) ((signed char) -1052689072));
                        var_27 *= ((/* implicit */unsigned char) ((arr_6 [i_2 - 3]) ? (arr_2 [i_1]) : (arr_2 [i_1])));
                    }
                    for (unsigned char i_8 = 1; i_8 < 12; i_8 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (int i_9 = 1; i_9 < 13; i_9 += 1) 
                        {
                            arr_38 [i_0] [i_0] [i_2] [i_8] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8004156623382449958LL)) ? (1060651763) : (((/* implicit */int) (unsigned short)30720))))) ? (((((/* implicit */_Bool) 8272932896925583973LL)) ? (((/* implicit */long long int) 2046989370)) : (16777215LL))) : (max((-6LL), (((/* implicit */long long int) 972164499))))));
                            arr_39 [i_0] [i_0] [i_1] [i_0] [i_2] [i_8] [i_9 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)65158)), ((~(((/* implicit */int) var_4))))))) ? (((((/* implicit */_Bool) var_3)) ? (((int) arr_36 [i_0] [i_0] [i_2] [i_8] [i_9 - 1] [i_0])) : (arr_10 [i_9 - 1] [i_8 + 2] [i_0]))) : ((~(((/* implicit */int) (_Bool)0))))));
                            arr_40 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) 1987345523))));
                        }
                        for (unsigned long long int i_10 = 1; i_10 < 13; i_10 += 1) /* same iter space */
                        {
                            arr_45 [i_10] [i_1] [i_0] [i_8] [i_0] = ((/* implicit */unsigned char) ((unsigned short) arr_12 [i_10] [i_0] [i_10]));
                            arr_46 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_9 [i_2] [i_0] [i_2])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) + (((/* implicit */unsigned long long int) arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) arr_5 [i_0])) : (95069723)));
                            arr_47 [i_1] [i_0] [i_2] [i_8] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_29 [i_1] [i_8] [i_1] [i_8 + 2] [i_10 + 1] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 4026531840U)))) : ((+(((((/* implicit */long long int) var_12)) / (-6LL)))))));
                        }
                        for (unsigned long long int i_11 = 1; i_11 < 13; i_11 += 1) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned short) var_9);
                            arr_50 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((((-7640945022299828900LL) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0])) + (102))))), (((/* implicit */long long int) ((unsigned short) ((long long int) var_14))))));
                            arr_51 [i_0] [i_1] [i_2] [i_8] [i_0] = ((/* implicit */short) ((unsigned char) var_3));
                            arr_52 [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)73))));
                        }
                        var_29 = ((/* implicit */unsigned int) min((((((((/* implicit */int) ((signed char) var_10))) + (2147483647))) >> (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (4232758741U))) - (3870383866U))))), (var_7)));
                    }
                    for (signed char i_12 = 0; i_12 < 14; i_12 += 4) 
                    {
                        arr_57 [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) 12653872623533874503ULL);
                        arr_58 [i_0] [i_1] [i_0] [i_12] = ((/* implicit */signed char) min((((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned int) var_1))))) ? (arr_49 [i_2 - 3] [i_12] [i_2 - 2] [i_2 - 3] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))), (var_0)));
                        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) arr_55 [10U] [i_1] [i_1] [i_1] [i_1]))));
                    }
                }
            } 
        } 
        arr_59 [i_0] [i_0] = ((/* implicit */unsigned short) min(((+(((/* implicit */int) arr_54 [i_0] [i_0] [i_0] [i_0] [(short)7] [i_0])))), ((((_Bool)0) ? (-1698553693) : (arr_4 [i_0])))));
        arr_60 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) max((((/* implicit */short) arr_11 [i_0] [i_0] [i_0] [i_0])), (var_8)))) ? (arr_21 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_4))))))) : (((/* implicit */long long int) min((((((/* implicit */_Bool) (signed char)-66)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [11U]))) : (arr_8 [i_0] [i_0] [i_0] [7LL]))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (255U))))))));
    }
    for (unsigned char i_13 = 3; i_13 < 17; i_13 += 4) /* same iter space */
    {
        var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) (-(min((var_7), (((/* implicit */int) (unsigned short)42466)))))))));
        var_32 = ((/* implicit */long long int) arr_61 [i_13]);
        var_33 = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) max((var_9), (((/* implicit */long long int) var_3))))), (arr_61 [i_13]))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned short)2032)) ? (((/* implicit */long long int) 902053123)) : (arr_62 [i_13] [i_13]))), (arr_62 [i_13] [i_13 - 2]))))));
    }
    /* vectorizable */
    for (unsigned char i_14 = 3; i_14 < 17; i_14 += 4) /* same iter space */
    {
        var_34 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3072763603U)) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) arr_64 [i_14]))))) ? (((/* implicit */int) (signed char)-102)) : (((/* implicit */int) (unsigned short)20565)));
        arr_65 [i_14] [i_14] = ((/* implicit */unsigned char) ((_Bool) arr_61 [i_14]));
        /* LoopSeq 2 */
        for (unsigned char i_15 = 0; i_15 < 18; i_15 += 1) 
        {
            var_35 = ((/* implicit */unsigned int) arr_61 [i_14 - 3]);
            arr_68 [i_15] [i_14] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_66 [i_14 - 1]))));
            var_36 = var_10;
        }
        for (long long int i_16 = 0; i_16 < 18; i_16 += 4) 
        {
            var_37 = ((/* implicit */int) ((arr_62 [i_14] [i_16]) * (((long long int) 0U))));
            arr_73 [i_16] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_62 [i_14 - 3] [i_14 - 2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_61 [i_14])) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) : (((((/* implicit */_Bool) -2008444574)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)250))) : (var_9)))));
            var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_66 [i_14 - 2])) ? (((/* implicit */int) arr_66 [i_14 - 1])) : (((/* implicit */int) arr_66 [i_14 + 1]))));
        }
    }
}
