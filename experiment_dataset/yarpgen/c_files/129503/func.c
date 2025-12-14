/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129503
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) -942396569)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : ((-(max((((/* implicit */long long int) var_4)), (var_3)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(9223372036854775807LL)))) ? (((/* implicit */int) (signed char)-42)) : (((/* implicit */int) (signed char)-55))));
        var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (((_Bool)1) ? ((-9223372036854775807LL - 1LL)) : (-931347671379573748LL))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) /* same iter space */
    {
        var_14 &= ((/* implicit */unsigned long long int) (signed char)-42);
        /* LoopSeq 4 */
        for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            var_15 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_2]))) : (4503599627370432LL))));
            arr_8 [i_1] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-28))) % (18446744073709551614ULL)));
            var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_1] [i_2])) >= ((-(((/* implicit */int) (signed char)46))))));
        }
        for (unsigned char i_3 = 4; i_3 < 14; i_3 += 2) 
        {
            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) (signed char)-124))));
            var_18 = ((/* implicit */long long int) max((var_18), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4503599627370415LL)) ? (((/* implicit */int) (signed char)11)) : (2147483647)))) ? (((/* implicit */long long int) ((var_5) ? (2147483647) : (((/* implicit */int) (signed char)-116))))) : (arr_12 [i_1] [i_1] [i_1])))));
        }
        for (long long int i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            var_19 = ((/* implicit */unsigned long long int) arr_2 [i_1]);
            /* LoopSeq 2 */
            for (unsigned int i_5 = 3; i_5 < 14; i_5 += 4) 
            {
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (+(((/* implicit */int) (short)24839)))))));
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)242)) ? (((/* implicit */int) (signed char)11)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) arr_7 [i_4] [i_5 - 2])) : (((/* implicit */int) arr_7 [i_1] [i_5]))));
                var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))));
            }
            for (short i_6 = 2; i_6 < 14; i_6 += 1) 
            {
                /* LoopSeq 4 */
                for (unsigned int i_7 = 4; i_7 < 11; i_7 += 3) 
                {
                    var_23 &= ((/* implicit */signed char) (+(((/* implicit */int) (signed char)46))));
                    var_24 *= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned short)44801)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_24 [(unsigned short)12]))))));
                }
                for (signed char i_8 = 0; i_8 < 15; i_8 += 3) 
                {
                    var_25 -= ((/* implicit */_Bool) (signed char)15);
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_26 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_6 + 1] [i_6 + 1] [i_6 - 2] [i_4]))) : (9ULL)));
                    arr_28 [i_1] [i_4] [i_4] [i_8] = ((/* implicit */unsigned char) ((-3LL) ^ (arr_12 [i_6] [i_6 - 2] [i_6])));
                    /* LoopSeq 2 */
                    for (long long int i_9 = 0; i_9 < 15; i_9 += 3) 
                    {
                        var_27 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-38))));
                        arr_33 [i_1] [i_4] [i_8] [i_4] [i_9] [i_4] [i_6 + 1] = ((/* implicit */_Bool) ((9223372036854775807LL) ^ (((/* implicit */long long int) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_4)))))));
                    }
                    for (int i_10 = 3; i_10 < 14; i_10 += 2) 
                    {
                        arr_37 [i_1] [i_4] [i_6] [i_6 + 1] [i_8] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_10 [i_1]))))));
                        var_28 = ((/* implicit */short) -7820330919389397955LL);
                    }
                }
                for (unsigned long long int i_11 = 4; i_11 < 13; i_11 += 3) 
                {
                    arr_40 [i_1] [i_4] [i_6] [i_11] = ((/* implicit */signed char) (~(9223372036854775807LL)));
                    arr_41 [i_4] = 4380033722002895159ULL;
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_4] [i_6 - 2] [i_6 - 1] [i_6])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_4])) && (((/* implicit */_Bool) arr_31 [i_1] [i_4] [i_4] [i_11 - 4])))))));
                    arr_42 [i_11] [i_4] [(short)12] [(short)12] [i_4] [i_1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (arr_20 [(short)6]) : (((/* implicit */unsigned long long int) -7820330919389397955LL))));
                    /* LoopSeq 1 */
                    for (signed char i_12 = 0; i_12 < 15; i_12 += 3) 
                    {
                        var_30 &= ((/* implicit */_Bool) (short)-14386);
                        var_31 = ((/* implicit */short) (+(((/* implicit */int) arr_35 [i_4] [i_6 - 1] [i_6]))));
                        var_32 = ((/* implicit */unsigned char) (-(18446744073709551615ULL)));
                        var_33 = ((/* implicit */unsigned long long int) ((int) arr_24 [i_4]));
                    }
                }
                for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                {
                    var_34 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45478))) : (var_8)))) ? ((-(arr_15 [i_1] [i_6 + 1] [i_6]))) : (13636870201321521484ULL)));
                    var_35 = ((/* implicit */unsigned long long int) arr_11 [i_4] [i_4]);
                    var_36 = ((/* implicit */_Bool) max((var_36), (var_5)));
                    var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_1] [i_1] [i_1] [i_4] [i_6] [i_13 - 1])) ? (((/* implicit */int) arr_23 [i_1] [i_1] [i_6] [i_4] [i_6] [i_13 - 1])) : (((/* implicit */int) arr_23 [i_1] [i_4] [i_6] [i_4] [i_13 - 1] [i_13]))));
                }
                var_38 &= ((/* implicit */short) ((14706263814173941927ULL) != (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)24839)))))));
            }
            arr_49 [i_4] [i_4] [i_4] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) 2147483647)) | (15ULL))) & (((/* implicit */unsigned long long int) arr_19 [i_1] [i_4]))));
        }
        for (short i_14 = 1; i_14 < 11; i_14 += 2) 
        {
            var_39 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_1)) ? (31525197391593472ULL) : (((/* implicit */unsigned long long int) 0LL)))) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2)))))));
            var_40 = ((/* implicit */signed char) (~((-9223372036854775807LL - 1LL))));
            /* LoopNest 3 */
            for (signed char i_15 = 1; i_15 < 14; i_15 += 3) 
            {
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (signed char i_17 = 0; i_17 < 15; i_17 += 1) 
                    {
                        {
                            var_41 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_9 [i_15 - 1] [i_15] [i_15 - 1]))));
                            var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_15] [i_16] [i_17])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-13))) : (-7820330919389397955LL)));
                        }
                    } 
                } 
            } 
        }
        var_43 = ((/* implicit */short) (~(((/* implicit */int) arr_39 [(unsigned short)8]))));
    }
    for (long long int i_18 = 0; i_18 < 11; i_18 += 4) 
    {
        var_44 = ((/* implicit */unsigned long long int) min((var_44), ((((!(((/* implicit */_Bool) arr_13 [i_18] [i_18])))) ? (max((((((/* implicit */_Bool) 20)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_15 [i_18] [i_18] [i_18]))), (max((((/* implicit */unsigned long long int) arr_57 [i_18] [i_18] [i_18] [i_18] [i_18])), (arr_10 [i_18]))))) : (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) (signed char)46)) ? (((/* implicit */int) arr_5 [i_18] [i_18])) : (((/* implicit */int) var_9))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_19 = 0; i_19 < 11; i_19 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_20 = 0; i_20 < 11; i_20 += 1) 
            {
                var_45 = ((/* implicit */long long int) min((var_45), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-9)))))));
                var_46 = ((/* implicit */unsigned long long int) min((var_46), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)1536)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) (unsigned char)255)))))));
            }
            for (unsigned long long int i_21 = 3; i_21 < 10; i_21 += 3) 
            {
                /* LoopSeq 2 */
                for (signed char i_22 = 3; i_22 < 8; i_22 += 3) 
                {
                    arr_70 [i_18] [i_18] [i_19] [i_21 + 1] [i_22 + 1] = arr_23 [i_18] [i_18] [i_19] [i_18] [i_21] [i_22];
                    arr_71 [i_18] [i_19] [i_19] [i_19] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_22])) && (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-16)))))));
                    arr_72 [(unsigned short)3] [i_21] [i_18] [i_18] = ((/* implicit */unsigned short) (((-(((/* implicit */int) var_1)))) != (arr_19 [i_18] [i_18])));
                }
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    arr_75 [i_23] [i_23] = ((/* implicit */_Bool) var_11);
                    var_47 = ((/* implicit */unsigned long long int) (~(((var_4) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) (signed char)12))))));
                    var_48 = ((/* implicit */int) (short)-5856);
                }
                var_49 = ((/* implicit */short) (-((-(((/* implicit */int) (_Bool)1))))));
            }
            for (unsigned int i_24 = 1; i_24 < 10; i_24 += 2) 
            {
                arr_78 [i_18] [i_18] [i_18] [i_24] = ((/* implicit */short) (_Bool)1);
                var_50 = (+(((/* implicit */int) arr_21 [i_24] [i_19] [i_24])));
            }
            var_51 = ((/* implicit */long long int) (~(arr_6 [i_18] [i_18] [i_19])));
            arr_79 [i_18] [i_19] [i_19] = ((/* implicit */short) ((((/* implicit */int) arr_54 [i_19] [i_19])) << (((9223372036854775807LL) - (9223372036854775794LL)))));
            arr_80 [i_18] [i_18] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 0)) ? (1063756053559269618ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) & (((arr_56 [i_19] [i_18] [i_19] [i_19] [i_19]) << (((/* implicit */int) var_2))))));
        }
        var_52 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_18])) ? (((/* implicit */int) arr_39 [i_18])) : (((/* implicit */int) arr_39 [i_18]))))) ? (min((((/* implicit */int) arr_39 [i_18])), (arr_18 [i_18]))) : (((/* implicit */int) (_Bool)1))));
    }
    var_53 = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) & (((/* implicit */int) var_10))));
    var_54 ^= ((/* implicit */_Bool) var_0);
}
