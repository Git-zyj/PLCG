/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180012
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned char)72)) ? (arr_0 [i_0 - 2] [i_0 + 1]) : (arr_0 [i_0 + 1] [i_0 + 1]))), (((/* implicit */int) arr_1 [i_0])))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0 - 1]))))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_0 [(_Bool)1] [i_1 - 1]))))))) : ((~(((/* implicit */int) var_1))))));
            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (((((+(((/* implicit */int) var_7)))) >= (((/* implicit */int) (signed char)-61)))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_5)) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */int) (short)0)) != (((/* implicit */int) arr_1 [i_1])))))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((var_12) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))))) : (((/* implicit */unsigned long long int) arr_0 [i_0 - 3] [i_0 - 3])))))))));
            var_21 = ((/* implicit */unsigned int) min((var_21), (((((((arr_2 [14U]) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)1576))))) ? (arr_2 [12ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_17))))))) - (((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) var_16)) || ((_Bool)1)))), ((+(((/* implicit */int) var_1)))))))))));
        }
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            var_22 = ((/* implicit */int) var_4);
            var_23 = ((/* implicit */_Bool) (((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((((/* implicit */int) ((unsigned short) var_11))) - (85)))));
            /* LoopSeq 4 */
            for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                var_24 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 3])) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                arr_9 [19LL] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) - (((/* implicit */int) (_Bool)1))));
            }
            for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 22; i_5 += 2) 
                {
                    var_25 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 2] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_0])) >= (((/* implicit */int) var_9)))))) : (140737488224256ULL)));
                    arr_15 [i_0 + 1] [i_4] [(unsigned char)11] = ((/* implicit */unsigned short) arr_2 [i_4]);
                }
                /* LoopSeq 3 */
                for (unsigned int i_6 = 2; i_6 < 19; i_6 += 2) /* same iter space */
                {
                    var_26 += ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        arr_22 [i_7] [i_7] [i_4] [i_4] [i_4] [i_0] [i_0] = (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_6] [i_6] [i_6]))) != (var_16))))) : (13313617442971147554ULL));
                        arr_23 [i_7] [i_4] [i_0 + 1] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) >= (var_12))))));
                        var_27 = ((/* implicit */signed char) (_Bool)1);
                        var_28 = ((/* implicit */short) var_1);
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_0 - 3] [i_0 + 1] [i_6 - 1])) ? (((/* implicit */unsigned long long int) 674811288U)) : (arr_19 [i_8] [i_4] [i_2] [i_0])));
                        arr_26 [(unsigned short)0] [i_6] [i_6] [i_6] [i_2] [i_0 + 1] &= ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) (unsigned char)32)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_12)));
                    }
                }
                for (unsigned int i_9 = 2; i_9 < 19; i_9 += 2) /* same iter space */
                {
                    arr_31 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_9 - 2] [i_0 - 2] [i_0 - 1])) % (((/* implicit */int) var_11))));
                    var_30 = ((/* implicit */long long int) max((var_30), (-4711676840282524566LL)));
                    var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3149968049U)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) -4711676840282524566LL))))) : (1227423191)));
                    arr_32 [(signed char)4] [(signed char)4] [i_0] [(unsigned char)11] = ((/* implicit */unsigned char) arr_10 [i_2] [(unsigned short)21] [i_2]);
                }
                for (unsigned int i_10 = 2; i_10 < 19; i_10 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (short i_11 = 0; i_11 < 22; i_11 += 2) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-32767))));
                        arr_37 [5] [5] [i_0 - 2] [5] [i_11] = ((/* implicit */_Bool) var_10);
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_11] [i_10 + 2] [i_0 - 3] [18U] [i_11])) && (arr_12 [i_10] [i_0 + 1] [i_4])));
                        var_34 += ((/* implicit */unsigned int) arr_10 [i_0] [i_2] [(short)2]);
                        arr_38 [i_4] [(_Bool)1] [(_Bool)1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((0U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-16420)))))) ? (((((/* implicit */int) (unsigned short)2829)) * (((/* implicit */int) (unsigned short)7)))) : (((/* implicit */int) arr_7 [i_0 + 1]))));
                    }
                    for (short i_12 = 0; i_12 < 22; i_12 += 2) /* same iter space */
                    {
                        var_35 ^= ((/* implicit */unsigned char) var_17);
                        var_36 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_0 - 3] [i_10 + 2])) ? (((/* implicit */int) arr_27 [i_0 - 3] [i_10 - 1])) : (((/* implicit */int) arr_27 [i_0 - 3] [i_10 - 2]))));
                        var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_10 + 1])) : (((/* implicit */int) var_1))));
                    }
                    var_38 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)233))));
                    arr_41 [i_10] [i_2] [i_4] [i_4] = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                }
            }
            for (unsigned int i_13 = 0; i_13 < 22; i_13 += 2) /* same iter space */
            {
                var_39 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) >> (((/* implicit */int) var_3))))) && (arr_12 [i_0 - 2] [i_0 + 1] [i_0 - 2])));
                var_40 = ((/* implicit */unsigned short) arr_19 [i_13] [i_0] [i_0] [(unsigned short)3]);
            }
            for (unsigned int i_14 = 0; i_14 < 22; i_14 += 2) /* same iter space */
            {
                var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_40 [i_0] [i_0 - 1] [i_0 - 3] [i_0 - 3])) ? (((/* implicit */int) arr_40 [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_40 [(signed char)7] [i_0 - 2] [i_0 - 2] [i_2]))));
                var_42 = ((/* implicit */short) (-(13872877079631882671ULL)));
                arr_49 [11ULL] = ((/* implicit */short) arr_5 [i_0] [i_0 - 2] [i_0 - 3]);
                arr_50 [i_14] [i_2] [i_0] = ((/* implicit */signed char) ((arr_48 [i_0 + 1] [i_0 - 3] [i_0 - 2] [i_0 + 1]) - (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
            }
        }
        var_43 = ((/* implicit */signed char) arr_0 [7LL] [i_0 - 3]);
    }
    var_44 = ((/* implicit */unsigned int) var_3);
    var_45 &= ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) | (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (signed char)10)) : (((((/* implicit */_Bool) (unsigned short)41334)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (_Bool)1))))))));
    var_46 = ((/* implicit */signed char) var_15);
    /* LoopSeq 1 */
    for (unsigned int i_15 = 1; i_15 < 11; i_15 += 2) 
    {
        var_47 = ((/* implicit */short) var_17);
        arr_55 [(unsigned char)5] [i_15] = ((/* implicit */short) arr_19 [i_15] [i_15] [i_15] [i_15]);
        arr_56 [i_15] = ((/* implicit */_Bool) max((arr_43 [i_15] [(signed char)0] [i_15]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_15] [i_15 + 1] [i_15 + 1])) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32767))) : (arr_2 [2LL]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_34 [i_15] [7] [7] [7]))))))))));
        arr_57 [i_15] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((var_16) >= (var_13))) ? (((/* implicit */unsigned int) max((1227423191), (((/* implicit */int) (short)-32767))))) : (4077936896U)))), (((((/* implicit */_Bool) 1787542818U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)17))) : (4333022194816391420ULL)))));
    }
}
