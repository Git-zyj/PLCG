/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111513
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 2; i_2 < 8; i_2 += 2) 
                {
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 2107785920103498109LL)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)13))) < (arr_0 [(signed char)1])))) : (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_2 + 2] [5ULL])) > (((/* implicit */int) arr_3 [i_2 + 2] [i_1 - 1] [i_0]))))))));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        var_20 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_1] [i_2] [i_3]))))) ? ((~(var_6))) : (((/* implicit */int) arr_3 [(signed char)1] [i_0] [(unsigned short)6]))))) ? (((/* implicit */int) arr_7 [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) ((unsigned char) ((unsigned short) (signed char)118))))));
                        /* LoopSeq 3 */
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            var_21 = ((/* implicit */signed char) min(((~(((/* implicit */int) var_17)))), ((+(((/* implicit */int) arr_8 [i_2 + 3] [i_3] [i_3]))))));
                            arr_15 [8] [i_2] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)246))))) ? (((/* implicit */int) ((((((/* implicit */int) arr_5 [i_1 + 1] [i_1])) < (((/* implicit */int) (short)1060)))) && (((/* implicit */_Bool) ((-1284329805) & (((/* implicit */int) (signed char)-7)))))))) : (((((/* implicit */_Bool) arr_12 [i_0] [i_1 - 1] [i_2] [i_2] [0LL])) ? (((/* implicit */int) arr_1 [i_2 + 1])) : (((/* implicit */int) arr_1 [i_2 - 1]))))));
                            var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_11)) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_3 [2LL] [i_2] [i_4])) : (((/* implicit */int) arr_14 [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)22))) : (min((((/* implicit */unsigned long long int) (short)1065)), (arr_0 [i_2])))))));
                        }
                        for (long long int i_5 = 0; i_5 < 11; i_5 += 1) 
                        {
                            arr_19 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((unsigned char)147), (((/* implicit */unsigned char) var_16))))) ? (((((/* implicit */int) min((arr_7 [0LL] [1] [i_3] [(signed char)6]), (((/* implicit */unsigned short) (unsigned char)254))))) >> (((((/* implicit */int) max(((unsigned char)47), ((unsigned char)4)))) - (45))))) : (((/* implicit */int) (unsigned char)187))));
                            var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_1 - 1])))))));
                            arr_20 [i_0] [10LL] [i_2 - 2] [10LL] [i_1] [i_5] = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned char) ((unsigned char) 288230376151711616LL))))));
                            arr_21 [i_0] [(unsigned char)3] [i_2] [i_3] [i_1] = ((/* implicit */unsigned char) ((((min((-6781782393355729736LL), (1272064096638028329LL))) + (9223372036854775807LL))) >> (((/* implicit */int) ((unsigned char) (~(((/* implicit */int) arr_10 [(unsigned char)8]))))))));
                        }
                        for (long long int i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            var_24 = ((/* implicit */signed char) ((unsigned char) min(((unsigned char)236), (((/* implicit */unsigned char) (signed char)-60)))));
                            var_25 = ((/* implicit */signed char) max((((((/* implicit */int) arr_4 [i_2 - 2] [4] [(unsigned char)5])) >> (((((/* implicit */int) arr_8 [i_1] [i_3] [i_6])) & (((/* implicit */int) (signed char)8)))))), (((/* implicit */int) ((signed char) arr_5 [i_0] [i_2])))));
                            arr_24 [i_0] [i_1] [i_2 + 2] [i_3] [i_1] = ((/* implicit */long long int) ((unsigned long long int) (-(0ULL))));
                        }
                    }
                    for (long long int i_7 = 4; i_7 < 7; i_7 += 4) 
                    {
                        var_26 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) (signed char)-3)))));
                        var_27 = ((/* implicit */unsigned char) arr_2 [i_0] [i_1]);
                        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((max(((unsigned char)4), (arr_12 [i_0] [i_0] [i_0] [i_1] [(unsigned char)7]))), ((unsigned char)99)))) ? (((/* implicit */int) max(((unsigned char)3), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_18))) > (6769902544719463939LL))))))) : (((/* implicit */int) min((((/* implicit */short) ((unsigned char) (unsigned char)253))), (max((arr_1 [i_0]), (((/* implicit */short) (unsigned char)71)))))))));
                    }
                }
                for (signed char i_8 = 3; i_8 < 10; i_8 += 3) 
                {
                    var_29 = ((/* implicit */unsigned short) arr_2 [i_0] [(unsigned char)7]);
                    var_30 = ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)11)))), (var_6))), (((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_5 [i_8] [i_0])) : (((/* implicit */int) (unsigned char)109)))) & (((/* implicit */int) (unsigned char)8))))));
                    arr_29 [i_0] [i_1] [i_8] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned char)99)) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) (signed char)109)))), (((/* implicit */int) ((unsigned char) ((1272064096638028328LL) >> (((((/* implicit */int) arr_2 [i_0] [i_0])) + (96)))))))));
                    var_31 |= ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) arr_27 [i_8] [i_8] [i_1 + 1]))) & (((long long int) arr_14 [i_1 - 1])))) >> (((((((/* implicit */_Bool) min((arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_3 [i_8] [(unsigned char)5] [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)255)) / (((/* implicit */int) var_15))))) : ((~(-1272064096638028330LL))))) + (52LL)))));
                }
                /* vectorizable */
                for (signed char i_9 = 3; i_9 < 8; i_9 += 2) 
                {
                    var_32 = ((/* implicit */unsigned char) arr_8 [i_0] [i_0] [i_9]);
                    arr_34 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 13315201958948034370ULL)) && (((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_0])) & (((/* implicit */int) (signed char)6)))))));
                    var_33 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 - 1]))));
                }
                var_34 = ((/* implicit */signed char) 986140062);
                arr_35 [i_0] [i_1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_12 [i_1] [i_1] [i_1] [i_1] [i_1])), (arr_26 [i_1 + 1] [i_1 - 1] [i_1]))))));
                var_35 = ((/* implicit */unsigned char) arr_17 [i_0] [i_1] [i_0] [(signed char)2] [i_0]);
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_10 = 2; i_10 < 15; i_10 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_11 = 3; i_11 < 14; i_11 += 4) 
        {
            arr_40 [3LL] = (unsigned char)252;
            var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) arr_38 [i_10 - 1]))))) / (max((((/* implicit */long long int) (short)-4003)), (var_5)))))) ? (min((((7405375315571529827LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-58))))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)232)) / (((/* implicit */int) var_12))))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_36 [i_10])) && (((/* implicit */_Bool) (unsigned char)64)))))))));
            var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) max(((unsigned char)9), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_19))))))))));
        }
        arr_41 [i_10] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned char)143)) ? (arr_36 [i_10 + 2]) : (var_5))), (((/* implicit */long long int) min((((((((/* implicit */int) (signed char)-122)) + (2147483647))) >> (((/* implicit */int) (unsigned char)13)))), (((((/* implicit */_Bool) (signed char)-78)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) var_17)))))))));
    }
    /* vectorizable */
    for (unsigned char i_12 = 2; i_12 < 15; i_12 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_13 = 0; i_13 < 17; i_13 += 4) 
        {
            for (short i_14 = 0; i_14 < 17; i_14 += 2) 
            {
                for (unsigned char i_15 = 2; i_15 < 14; i_15 += 2) 
                {
                    {
                        var_38 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_51 [i_12] [i_12] [i_13] [i_14] [i_14] [i_14]))));
                        arr_53 [12LL] [i_13] [i_12] [i_15 + 1] |= ((/* implicit */short) ((((/* implicit */int) arr_38 [i_12 + 2])) / (((/* implicit */int) (unsigned char)232))));
                    }
                } 
            } 
        } 
        arr_54 [i_12] = ((/* implicit */short) var_18);
    }
    /* vectorizable */
    for (unsigned char i_16 = 2; i_16 < 15; i_16 += 4) /* same iter space */
    {
        var_39 -= ((/* implicit */long long int) arr_48 [i_16] [i_16]);
        arr_57 [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)184)) && (((/* implicit */_Bool) 5054683326865270765LL))));
        var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)165)) ? (((/* implicit */int) (signed char)107)) : (((/* implicit */int) arr_45 [i_16 - 1] [(unsigned char)13] [(unsigned char)13]))));
    }
    var_41 = ((/* implicit */unsigned char) min((((/* implicit */int) var_8)), ((+(((/* implicit */int) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) 18446744073709551615ULL)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_17 = 3; i_17 < 11; i_17 += 2) 
    {
        arr_60 [i_17] [i_17] = ((/* implicit */signed char) arr_51 [i_17] [i_17] [i_17] [i_17] [i_17] [(signed char)5]);
        /* LoopNest 2 */
        for (unsigned char i_18 = 2; i_18 < 12; i_18 += 2) 
        {
            for (unsigned char i_19 = 1; i_19 < 13; i_19 += 2) 
            {
                {
                    var_42 = ((/* implicit */unsigned char) ((int) min((((/* implicit */int) arr_46 [i_19 - 1] [i_18 - 2])), ((-(((/* implicit */int) var_19)))))));
                    var_43 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) min((((/* implicit */unsigned char) var_2)), (var_18))))))));
                    var_44 = ((((/* implicit */_Bool) arr_45 [i_19] [2LL] [2LL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_18] [i_18]))) : (max((((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (arr_51 [i_17] [(unsigned char)0] [i_17] [i_18] [i_17] [i_19 + 1]))), (((3307760681581985076LL) & (((/* implicit */long long int) var_11)))))));
                    var_45 = (+(((/* implicit */int) var_18)));
                    /* LoopNest 2 */
                    for (unsigned char i_20 = 0; i_20 < 14; i_20 += 4) 
                    {
                        for (int i_21 = 0; i_21 < 14; i_21 += 2) 
                        {
                            {
                                var_46 *= ((/* implicit */unsigned long long int) (unsigned char)94);
                                var_47 = (+(min((arr_65 [i_17 + 2] [i_17 - 3]), (arr_65 [i_17 - 2] [i_17 + 2]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
