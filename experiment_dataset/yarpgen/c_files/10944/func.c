/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10944
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */signed char) min((var_15), ((signed char)-56)));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) max((arr_3 [i_0]), (max((((((/* implicit */_Bool) arr_4 [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [(unsigned short)7]))) : (-2397227625134580498LL))), ((~(-8323345614189766888LL))))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            var_17 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) ((unsigned int) 0)))) ? (((unsigned int) ((((/* implicit */_Bool) (signed char)117)) ? (arr_13 [i_0] [i_1] [i_2] [i_3 - 1] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-118)))))) : (((/* implicit */unsigned int) arr_4 [i_1]))));
                            arr_14 [i_0] [i_4] [i_0] [i_2] [i_2] [i_1 - 1] [i_0] = ((/* implicit */short) ((arr_0 [2ULL] [2ULL]) / (arr_4 [i_0])));
                        }
                        var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0 - 2] [i_1 + 3] [i_3 - 1] [i_3 - 1])) : (var_11))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 0))))));
                    }
                    /* vectorizable */
                    for (signed char i_5 = 2; i_5 < 10; i_5 += 4) /* same iter space */
                    {
                        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (signed char)-82)) * (((/* implicit */int) var_2))))))));
                        /* LoopSeq 3 */
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-34))))) ? (((/* implicit */long long int) ((int) arr_5 [i_6]))) : (arr_16 [i_1 + 3] [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 - 1])));
                            arr_20 [0LL] [i_0] [i_1 + 3] [i_1 + 2] [i_2] [i_5 - 2] [i_2] = ((/* implicit */int) ((long long int) arr_17 [i_0 + 2] [i_0 + 1]));
                            arr_21 [i_0] [i_5 - 1] [i_2] [i_5 - 1] = ((/* implicit */unsigned long long int) ((unsigned short) arr_3 [i_0 - 1]));
                        }
                        for (long long int i_7 = 0; i_7 < 11; i_7 += 4) /* same iter space */
                        {
                            var_21 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)33))))) ? ((~(((/* implicit */int) arr_19 [(_Bool)1] [i_1] [i_2] [i_5 + 1] [i_7])))) : (((/* implicit */int) ((21ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)32))))))));
                            var_22 = ((/* implicit */signed char) ((_Bool) (signed char)127));
                            arr_25 [i_0 + 2] [i_1 - 1] [i_2] [i_0] [i_7] [i_2] |= ((/* implicit */signed char) ((((/* implicit */int) (signed char)117)) <= (((((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) ? (arr_4 [i_0]) : (((/* implicit */int) arr_15 [i_0 + 1] [(unsigned short)3]))))));
                        }
                        for (long long int i_8 = 0; i_8 < 11; i_8 += 4) /* same iter space */
                        {
                            var_23 -= ((/* implicit */unsigned long long int) arr_27 [i_5] [i_5] [i_5] [(signed char)0]);
                            var_24 = ((/* implicit */unsigned long long int) arr_4 [i_0 + 2]);
                            var_25 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_15 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)33))) : (var_10))) << (((((/* implicit */int) ((unsigned char) arr_10 [i_1 + 3] [6] [i_8]))) - (133)))));
                        }
                        var_26 += ((/* implicit */short) var_12);
                        var_27 = ((/* implicit */signed char) ((long long int) arr_23 [i_0 - 2]));
                        /* LoopSeq 1 */
                        for (signed char i_9 = 1; i_9 < 8; i_9 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_0 - 2] [i_1 - 1] [i_5] [i_9] [i_9 + 1])) ? (1884281127) : (((/* implicit */int) (signed char)-64))));
                            var_29 = ((/* implicit */unsigned char) arr_6 [i_9 + 2] [i_2] [i_1 - 1] [i_0]);
                        }
                    }
                    for (signed char i_10 = 2; i_10 < 10; i_10 += 4) /* same iter space */
                    {
                        var_30 = ((((/* implicit */_Bool) 4106519255U)) ? (3865242391U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-106))));
                        var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1884281127)) ? (((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)18085)) / (((/* implicit */int) (signed char)-53))))) / (((unsigned long long int) (signed char)-113)))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_13)) * (((/* implicit */int) (signed char)120))))))))))));
                        var_32 -= ((/* implicit */long long int) ((var_10) < (((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_10 + 1])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)106)))))));
                    }
                    arr_34 [i_0 + 2] [i_0 + 2] [i_1 + 2] [i_2] = ((/* implicit */unsigned int) max((10954962329954277347ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)33)) || (((/* implicit */_Bool) arr_22 [i_1] [0U] [i_1] [i_1 + 2] [i_1 + 3] [i_1 + 2] [i_1 + 2])))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_11 = 0; i_11 < 11; i_11 += 3) 
                    {
                        arr_38 [i_11] [i_2] [i_1] [(unsigned char)1] = ((/* implicit */int) (signed char)-53);
                        var_33 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)0))));
                        var_34 = ((/* implicit */unsigned int) arr_6 [i_2] [i_2] [i_2] [i_11]);
                    }
                    for (signed char i_12 = 0; i_12 < 11; i_12 += 4) 
                    {
                        var_35 = ((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)119)), (((((/* implicit */_Bool) max((var_0), (arr_13 [i_12] [i_2] [i_1 + 3] [i_0] [5])))) ? (min((var_1), (((/* implicit */long long int) arr_24 [4U] [i_12])))) : (((/* implicit */long long int) ((((((/* implicit */int) arr_15 [i_12] [i_0 + 1])) + (2147483647))) >> (((arr_31 [i_2] [i_0]) - (1996830852U))))))))));
                        var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_24 [i_1 + 1] [i_1])), (var_11))))));
                        /* LoopSeq 2 */
                        for (int i_13 = 2; i_13 < 10; i_13 += 1) /* same iter space */
                        {
                            arr_43 [1U] [1U] [i_13] [(short)6] = ((/* implicit */long long int) 2385021383U);
                            arr_44 [i_0] [i_1] [i_13] [i_2] [i_12] [i_12] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1092932548U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 + 2] [i_0 - 2] [i_1 + 3] [i_13 + 1]))) : (min((((/* implicit */unsigned int) arr_29 [i_0 - 1] [i_0 - 1] [i_13] [i_0] [i_0] [i_0 - 2] [i_0])), (2648678733U)))))) ? (4LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))));
                            var_37 += ((/* implicit */long long int) (unsigned char)142);
                            var_38 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 894090951)) >= (((var_5) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 221159907)) ? (-8763056023471823864LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-117))))))))));
                            var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) min((arr_36 [i_0] [i_0] [i_0] [i_0 - 2] [i_0 - 2] [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) (signed char)-80))) ? (((((/* implicit */int) arr_10 [i_0 + 1] [i_1] [i_2])) % (((/* implicit */int) var_2)))) : (((/* implicit */int) arr_5 [i_13]))))))))));
                        }
                        /* vectorizable */
                        for (int i_14 = 2; i_14 < 10; i_14 += 1) /* same iter space */
                        {
                            var_40 &= ((/* implicit */unsigned char) arr_4 [i_0 - 2]);
                            var_41 *= (signed char)-127;
                            arr_47 [i_1] [i_1] [i_2] [i_14 - 1] [(signed char)0] = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_9 [i_0] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_12] [i_14 - 1])))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_18 [i_0 - 1] [i_1] [i_2] [9ULL] [i_14 - 1]))))) : (((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_41 [i_0 - 1] [i_2] [i_2] [i_12] [i_14] [i_12] [i_14])))));
                            arr_48 [i_0] [i_0] [i_2] [i_12] [i_2] [i_12] [i_0 + 1] = ((/* implicit */int) ((signed char) ((int) var_2)));
                        }
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_42 = arr_7 [i_0] [1];
                        var_43 = ((signed char) ((_Bool) arr_9 [i_0 - 2] [i_1 + 1] [i_1 + 1] [i_1 + 3] [i_1 + 1] [i_2]));
                        /* LoopSeq 2 */
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            var_44 = ((/* implicit */long long int) ((unsigned int) arr_31 [i_16] [i_16]));
                            var_45 = arr_41 [i_16] [i_0] [i_15] [i_2] [i_1] [i_0] [i_0 + 2];
                        }
                        for (unsigned int i_17 = 4; i_17 < 10; i_17 += 3) 
                        {
                            arr_59 [i_17] [(signed char)5] [i_15] [i_2] [2U] [(signed char)5] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_22 [i_17 - 1] [i_17] [i_15] [i_2] [i_2] [i_1 + 1] [i_0]))));
                            var_46 = ((/* implicit */long long int) ((int) max((((/* implicit */int) var_12)), ((+(arr_49 [i_2]))))));
                            var_47 = ((/* implicit */unsigned char) min((var_47), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) && (((((/* implicit */_Bool) arr_7 [i_0] [i_0 - 1])) || (((/* implicit */_Bool) arr_7 [i_0] [i_0 - 1])))))))));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_18 = 0; i_18 < 11; i_18 += 3) 
                        {
                            var_48 = ((/* implicit */long long int) 3352693061U);
                            var_49 = (unsigned char)61;
                        }
                        for (unsigned int i_19 = 0; i_19 < 11; i_19 += 3) 
                        {
                            var_50 |= ((/* implicit */unsigned int) ((unsigned long long int) (~(max((((/* implicit */unsigned long long int) var_4)), (var_5))))));
                            var_51 = ((/* implicit */unsigned long long int) (unsigned char)95);
                        }
                    }
                    arr_67 [i_0 - 2] [3] [i_0 - 1] = ((/* implicit */unsigned char) (+(((((((/* implicit */int) var_7)) + (2147483647))) << (((((((/* implicit */int) arr_39 [i_1] [i_1] [i_1] [i_1 - 1] [i_1 + 3] [i_1])) + (40))) - (23)))))));
                    arr_68 [i_0] [i_1] [2LL] = ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) arr_33 [i_0] [i_1] [i_2] [(signed char)10]))) & ((~(((/* implicit */int) arr_19 [i_0] [i_1 - 1] [i_2] [i_2] [i_2]))))))) ? ((~((~(-221159907))))) : (((/* implicit */int) arr_39 [i_0] [10LL] [i_2] [10LL] [i_2] [i_2])));
                }
            } 
        } 
    }
    for (unsigned int i_20 = 2; i_20 < 9; i_20 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_21 = 0; i_21 < 11; i_21 += 2) 
        {
            for (long long int i_22 = 4; i_22 < 9; i_22 += 1) 
            {
                for (unsigned long long int i_23 = 1; i_23 < 7; i_23 += 2) 
                {
                    {
                        var_52 = ((/* implicit */unsigned int) max((var_52), (((/* implicit */unsigned int) ((unsigned long long int) arr_15 [i_20 + 1] [i_21])))));
                        var_53 *= ((/* implicit */unsigned char) arr_77 [i_20] [i_20] [i_20] [i_20]);
                    }
                } 
            } 
        } 
        var_54 += var_10;
        /* LoopNest 2 */
        for (unsigned long long int i_24 = 0; i_24 < 11; i_24 += 3) 
        {
            for (signed char i_25 = 2; i_25 < 10; i_25 += 3) 
            {
                {
                    var_55 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_85 [i_20] [i_24] [i_25 - 2])) : (((/* implicit */int) (unsigned char)17))))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-119)))))) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (short)-23961))));
                    arr_90 [i_20] [i_20 - 2] [i_20 - 2] [4LL] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_2)), (var_11)));
                }
            } 
        } 
    }
    var_56 += (~(((/* implicit */int) var_8)));
}
