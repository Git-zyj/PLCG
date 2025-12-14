/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177448
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
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_3 [i_0] [i_0] [(unsigned short)9])) : (((/* implicit */int) arr_4 [i_0] [i_0]))))));
                    arr_8 [0ULL] [i_0] [i_0] [i_2] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (unsigned short)65526)), ((~(arr_1 [i_0] [i_0])))));
                    var_19 = ((/* implicit */unsigned char) arr_7 [i_2] [i_1] [i_0]);
                }
            } 
        } 
        arr_9 [i_0] [i_0] = ((/* implicit */unsigned char) max(((+(((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))), ((~(((/* implicit */int) (short)14336))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 15; i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)28))));
        arr_15 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_3] [i_3])) ? (arr_12 [i_3] [i_3]) : (arr_12 [i_3] [i_3])));
    }
    for (int i_4 = 0; i_4 < 15; i_4 += 1) /* same iter space */
    {
        arr_19 [i_4] = ((/* implicit */signed char) max((((((/* implicit */int) arr_17 [i_4])) & (((/* implicit */int) arr_17 [i_4])))), (((/* implicit */int) ((((/* implicit */int) arr_17 [i_4])) >= (((/* implicit */int) arr_17 [i_4])))))));
        arr_20 [i_4] [i_4] = ((/* implicit */signed char) (((+(((/* implicit */int) (signed char)-28)))) / ((-(((/* implicit */int) arr_13 [i_4] [(unsigned short)14]))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_5 = 1; i_5 < 14; i_5 += 1) 
        {
            var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)24187)) & (((/* implicit */int) (short)-14741))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_5 - 1] [i_5 - 1] [i_4])) ? (((/* implicit */int) arr_22 [i_5 + 1] [i_5] [i_4])) : (((/* implicit */int) arr_22 [i_5 - 1] [i_5] [i_4])))))));
            var_21 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_4])))))));
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 461900228)) && ((!((!(((/* implicit */_Bool) arr_13 [i_5] [i_4]))))))));
        }
        for (short i_6 = 0; i_6 < 15; i_6 += 2) 
        {
            /* LoopSeq 1 */
            for (int i_7 = 3; i_7 < 13; i_7 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_8 = 2; i_8 < 12; i_8 += 1) 
                {
                    for (short i_9 = 0; i_9 < 15; i_9 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_31 [i_8 + 3] [i_9] [i_9] [i_9] [(short)5] [i_9]), (arr_31 [i_8 - 2] [i_8] [i_8] [i_9] [i_9] [i_9])))) ? (((((/* implicit */int) arr_22 [i_7 + 2] [i_7 - 3] [i_7 + 2])) + (((/* implicit */int) arr_22 [i_7 + 1] [i_7 - 3] [i_7 + 1])))) : (((((/* implicit */_Bool) arr_27 [i_7 - 1])) ? (((/* implicit */int) arr_18 [i_8 + 1])) : (((/* implicit */int) arr_24 [i_7 - 2]))))));
                            arr_36 [i_7] [(short)13] [i_7] [i_7 + 1] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) (signed char)113);
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_33 [(short)12] [i_9] [i_8 - 1] [i_7] [i_7] [i_4])) | (((((/* implicit */_Bool) arr_33 [i_9] [i_9] [i_8 - 1] [i_8] [i_8] [i_6])) ? (((/* implicit */int) arr_33 [i_9] [(unsigned short)7] [i_8 - 1] [i_8] [i_4] [i_4])) : (((/* implicit */int) arr_33 [i_9] [i_9] [i_8 - 1] [1] [i_7] [i_4]))))));
                            arr_37 [i_6] [i_7] [i_6] [(short)12] &= arr_24 [i_8 + 1];
                        }
                    } 
                } 
                arr_38 [i_4] [i_7] [i_7] = ((/* implicit */unsigned short) ((max((8728270593626062572ULL), (((/* implicit */unsigned long long int) (short)-24195)))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_7 - 1] [i_7] [i_7] [i_7 + 2] [i_7 - 2] [i_7 + 1])) ? (((/* implicit */int) arr_32 [i_7 - 1] [i_7] [i_7])) : (((/* implicit */int) arr_32 [i_7 - 1] [i_7 - 3] [i_7])))))));
                var_25 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_26 [i_4] [i_6] [i_7])))) ? (((/* implicit */int) max((max((arr_11 [i_7 + 1]), (arr_26 [i_7] [i_6] [i_4]))), (((/* implicit */unsigned short) ((5313243401524755241ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2))))))))) : (max((((/* implicit */int) max((((/* implicit */unsigned short) arr_32 [i_4] [(signed char)2] [i_7])), ((unsigned short)42715)))), (((((/* implicit */int) arr_33 [i_7] [i_7] [i_7 + 2] [i_6] [i_6] [i_4])) | (((/* implicit */int) arr_30 [i_4]))))))));
                /* LoopSeq 3 */
                for (int i_10 = 0; i_10 < 15; i_10 += 1) 
                {
                    /* LoopSeq 3 */
                    for (short i_11 = 1; i_11 < 11; i_11 += 1) /* same iter space */
                    {
                        arr_45 [(short)6] [i_10] [i_7] = ((/* implicit */unsigned char) ((((min((((/* implicit */unsigned long long int) (unsigned short)2)), (18446744073709551612ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_7 + 1] [i_7 + 1] [i_11 - 1]))))) << ((((+(((/* implicit */int) arr_11 [i_7 - 3])))) - (36190)))));
                        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_35 [i_11 + 2] [i_11] [i_11 + 2] [i_7 - 1] [4ULL] [i_6])) ? (((/* implicit */int) arr_35 [i_11 + 3] [i_11 - 1] [i_11] [i_7 + 1] [i_7] [i_4])) : (2147483619))) | (((((/* implicit */_Bool) (unsigned short)2)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_35 [i_11 + 3] [i_11] [i_7 - 3] [i_7 - 3] [i_7] [i_7])))))))));
                    }
                    /* vectorizable */
                    for (short i_12 = 1; i_12 < 11; i_12 += 1) /* same iter space */
                    {
                        arr_48 [i_7] [(signed char)6] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))))) <= (((/* implicit */int) arr_29 [i_7] [2] [i_6]))));
                        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) (-(((/* implicit */int) arr_35 [i_7 + 1] [i_7 + 1] [i_12 + 1] [i_12 - 1] [i_12] [i_12])))))));
                        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_35 [i_7 - 1] [i_12] [i_7 - 1] [i_12 + 2] [i_12 + 1] [11])) ? (((/* implicit */int) arr_35 [i_7 + 1] [i_7 - 2] [i_7] [i_10] [i_12 + 3] [i_12])) : (((/* implicit */int) (short)14741))));
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [13ULL] [13ULL] [13ULL] [i_7] [i_10] [i_12] [i_12])) ? (((/* implicit */int) (unsigned short)9172)) : (arr_39 [i_4] [i_6] [i_7] [i_10] [i_12])))) ? (((/* implicit */int) arr_46 [i_7] [i_7 - 1] [i_7 + 1] [i_7] [i_7 + 2] [i_12 + 3])) : (((/* implicit */int) arr_43 [i_4]))));
                    }
                    for (short i_13 = 1; i_13 < 11; i_13 += 1) /* same iter space */
                    {
                        var_30 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_4])) ? (arr_47 [5ULL] [i_10] [5ULL] [i_6] [i_6] [i_6] [i_4]) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)29650)) ? (((/* implicit */int) arr_50 [i_13] [i_10] [i_7] [i_7] [i_4] [i_4])) : (((/* implicit */int) arr_10 [i_10])))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [i_13] [i_10] [i_7 + 1] [i_6] [i_4]))))))))));
                        arr_52 [i_4] [i_4] [i_7] [i_4] [(unsigned char)3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_26 [i_4] [i_4] [(short)12])) || (((/* implicit */_Bool) (((-(((/* implicit */int) arr_26 [i_10] [i_4] [i_4])))) & (((/* implicit */int) arr_35 [i_6] [i_7] [i_7] [i_7] [i_7 - 2] [i_13 + 4])))))));
                        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)48))))) ? (((/* implicit */int) arr_29 [i_6] [i_13 + 4] [i_6])) : (((/* implicit */int) arr_29 [i_6] [i_7 + 1] [i_10]))))))))));
                        var_32 -= ((/* implicit */unsigned short) (-((~(arr_31 [i_10] [i_7 - 2] [i_7] [i_7] [(unsigned char)5] [i_6])))));
                        arr_53 [i_7] [i_6] [i_7 + 2] [i_7] [i_10] [i_13] = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)14)) <= (((/* implicit */int) (signed char)-44)))) ? ((~(arr_41 [i_13] [i_13 - 1] [i_13] [(unsigned short)11] [(short)4] [(unsigned short)11] [i_13 + 2]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) max(((signed char)112), (arr_24 [9])))))))));
                    }
                    var_33 ^= ((/* implicit */unsigned short) arr_29 [i_6] [i_7 + 1] [i_7]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_14 = 0; i_14 < 15; i_14 += 1) 
                    {
                        arr_57 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_50 [i_6] [i_7 + 1] [(unsigned short)6] [i_7 + 2] [(unsigned char)8] [i_7])) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [(short)4] [i_7 - 1])))))));
                        arr_58 [i_4] [i_7] [i_7] [i_10] [i_4] = ((/* implicit */signed char) (~(((/* implicit */int) arr_22 [i_7 - 2] [i_7] [14]))));
                    }
                    var_34 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned short)65534)))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_46 [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7] [i_7] [i_7 - 3])), (max((((/* implicit */unsigned long long int) arr_56 [0] [i_4])), (arr_41 [i_10] [i_4] [i_7] [i_6] [i_6] [i_4] [i_4]))))))));
                }
                for (unsigned short i_15 = 4; i_15 < 14; i_15 += 2) /* same iter space */
                {
                    var_35 *= ((/* implicit */short) arr_61 [i_4] [i_6] [i_6] [i_15]);
                    arr_63 [i_4] [i_7] = ((/* implicit */short) max((((((/* implicit */_Bool) max((arr_55 [i_4] [i_6] [i_7] [i_7] [i_7 - 2] [i_7] [i_7]), (((/* implicit */int) (unsigned short)42728))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_15 - 2]))) : ((+(arr_59 [i_7] [i_7] [i_6] [i_6] [i_4]))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)2)))))));
                }
                for (unsigned short i_16 = 4; i_16 < 14; i_16 += 2) /* same iter space */
                {
                    var_36 = max(((short)0), (((/* implicit */short) max((arr_25 [i_7 + 2] [i_7 + 2]), (arr_25 [i_6] [i_7 - 2])))));
                    arr_66 [i_7] [i_7] [i_6] [i_7] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)175))) | (arr_59 [(short)6] [(unsigned short)6] [i_16 - 4] [i_16 - 3] [i_16]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_44 [i_16] [i_16] [i_16 - 3] [i_16 - 4] [i_16]), (arr_44 [(short)13] [i_16 + 1] [i_16 + 1] [i_16 - 2] [i_16])))))));
                }
            }
            arr_67 [i_6] [i_4] = ((/* implicit */unsigned long long int) arr_40 [i_4] [i_4] [i_4] [i_4] [i_4]);
            arr_68 [i_6] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_24 [i_4])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4] [i_6]))) == (((((/* implicit */_Bool) arr_23 [i_4] [(unsigned short)1])) ? (arr_21 [i_6] [14ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96)))))))) : (((((/* implicit */_Bool) arr_18 [i_4])) ? (((/* implicit */int) (short)14741)) : (((/* implicit */int) arr_18 [i_6]))))));
        }
        /* LoopSeq 1 */
        for (int i_17 = 0; i_17 < 15; i_17 += 1) 
        {
            var_37 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [(short)4]))));
            /* LoopSeq 3 */
            for (unsigned short i_18 = 0; i_18 < 15; i_18 += 2) 
            {
                var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_4] [i_4] [13ULL] [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_33 [i_4] [i_17] [i_17] [i_18] [i_18] [i_18])) : (((/* implicit */int) arr_33 [i_4] [i_4] [i_18] [i_4] [6] [i_17]))))) ? (((/* implicit */int) max((arr_33 [i_18] [i_18] [i_17] [i_17] [i_4] [i_4]), (arr_33 [i_4] [i_17] [i_17] [i_17] [i_18] [i_4])))) : (((((/* implicit */_Bool) arr_33 [i_18] [i_17] [i_17] [i_17] [i_4] [i_4])) ? (((/* implicit */int) arr_33 [i_18] [i_18] [i_17] [i_17] [i_17] [i_4])) : (((/* implicit */int) arr_33 [i_4] [i_17] [i_4] [i_18] [i_18] [i_4]))))));
                var_39 ^= ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_72 [i_17]))))), (((((/* implicit */_Bool) arr_72 [i_17])) ? (((/* implicit */int) (unsigned short)34039)) : (((/* implicit */int) (signed char)-49))))));
                arr_74 [i_4] [(short)1] [6ULL] [i_18] = ((/* implicit */short) arr_39 [i_4] [i_17] [i_17] [i_4] [i_18]);
            }
            for (unsigned short i_19 = 4; i_19 < 14; i_19 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (signed char i_20 = 0; i_20 < 15; i_20 += 2) 
                {
                    var_40 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_28 [i_17] [i_19 + 1]) + (arr_28 [i_17] [i_20])))) ? (arr_75 [i_19 - 3] [i_19 - 2] [i_19 + 1]) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_60 [i_4] [i_19 + 1] [i_19] [i_19] [i_20] [i_17])))))));
                    arr_80 [i_17] [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_19] [i_17])) ? (((((/* implicit */_Bool) arr_13 [i_4] [i_17])) ? (((/* implicit */int) arr_13 [i_4] [i_17])) : (((/* implicit */int) arr_13 [i_19] [i_20])))) : (((((/* implicit */_Bool) arr_13 [i_4] [i_19])) ? (((/* implicit */int) arr_13 [i_19 - 4] [i_20])) : (((/* implicit */int) arr_13 [i_4] [i_20]))))));
                    var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (short)32760)) <= (((/* implicit */int) (unsigned short)31496))))) != (max((2147483647), (((/* implicit */int) arr_56 [i_4] [i_17])))))))));
                    arr_81 [i_4] [(unsigned short)7] [i_19 - 3] [i_20] = ((/* implicit */short) arr_17 [(unsigned short)7]);
                    arr_82 [i_17] [i_19 - 2] [i_20] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned short)10)) ? (((/* implicit */int) (unsigned short)8190)) : (((/* implicit */int) (unsigned short)34034))))));
                }
                for (unsigned long long int i_21 = 0; i_21 < 15; i_21 += 1) 
                {
                    arr_85 [i_4] [i_17] [i_17] [(unsigned short)10] [i_21] [i_21] = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)-32760)) >= (arr_55 [i_21] [i_19 - 3] [0ULL] [i_19] [i_19 - 3] [i_19 + 1] [i_19 - 2]))) ? (((((/* implicit */_Bool) (unsigned short)3564)) ? (((((/* implicit */int) (unsigned char)107)) - (((/* implicit */int) arr_54 [i_21] [i_21] [i_19] [i_17] [i_4])))) : (arr_65 [i_19 + 1] [(short)12] [i_17]))) : (((((/* implicit */int) arr_83 [i_4] [i_17] [i_19] [i_4] [i_21] [i_17])) >> (((((/* implicit */int) arr_83 [i_4] [i_17] [i_19] [i_19] [i_21] [i_21])) - (12534)))))));
                    arr_86 [i_21] [(unsigned short)12] [0ULL] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_19] [i_19 - 2] [i_19 - 1] [(unsigned short)9] [i_19 - 1] [i_17]))))) < (((((/* implicit */int) arr_34 [i_19 - 3] [i_17])) - (((/* implicit */int) arr_70 [i_21] [i_21]))))));
                }
                var_42 = ((/* implicit */unsigned short) (((~(arr_69 [i_19 - 4]))) != (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_16 [i_19 - 2] [i_4])))))));
                arr_87 [(signed char)5] [i_17] [i_19] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_61 [i_4] [(unsigned char)6] [(unsigned char)0] [i_19])))))));
                arr_88 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) (unsigned short)8611);
                arr_89 [i_4] [(unsigned short)9] [i_19] = ((/* implicit */unsigned short) 18446744073709551588ULL);
            }
            /* vectorizable */
            for (unsigned short i_22 = 4; i_22 < 14; i_22 += 3) /* same iter space */
            {
                arr_93 [i_22] [i_22] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)236)) * (((/* implicit */int) (unsigned char)242))));
                var_43 = ((/* implicit */unsigned short) arr_25 [i_17] [i_4]);
                /* LoopSeq 1 */
                for (unsigned char i_23 = 4; i_23 < 14; i_23 += 1) 
                {
                    arr_96 [i_4] [i_22] [i_4] [i_4] = ((/* implicit */short) ((27ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)90)))));
                    var_44 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_84 [i_23] [i_23] [0ULL] [i_23 - 1])) >= (((/* implicit */int) arr_84 [i_22] [i_22] [i_22] [i_23 - 3]))));
                    var_45 = ((/* implicit */unsigned short) max((var_45), (((/* implicit */unsigned short) ((18446744073709551589ULL) | (((((/* implicit */_Bool) 18446744073709551597ULL)) ? (arr_79 [(unsigned short)6] [(unsigned short)7] [(unsigned short)13] [i_23 - 1]) : (((/* implicit */unsigned long long int) arr_91 [i_17])))))))));
                }
                /* LoopNest 2 */
                for (unsigned short i_24 = 0; i_24 < 15; i_24 += 1) 
                {
                    for (signed char i_25 = 0; i_25 < 15; i_25 += 2) 
                    {
                        {
                            var_46 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned char)182)) ? (((/* implicit */int) (unsigned short)65513)) : (((/* implicit */int) (unsigned char)64))))));
                            var_47 = ((/* implicit */short) (+(arr_79 [i_22 - 4] [i_22 - 1] [i_22 + 1] [i_22])));
                        }
                    } 
                } 
            }
            var_48 = ((/* implicit */short) (+(max(((-(((/* implicit */int) arr_95 [4ULL] [i_4] [i_4] [(unsigned short)8])))), (((/* implicit */int) arr_34 [i_4] [i_4]))))));
        }
    }
    for (int i_26 = 0; i_26 < 15; i_26 += 1) /* same iter space */
    {
        arr_104 [i_26] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)102)), (arr_65 [i_26] [i_26] [i_26])));
        arr_105 [i_26] = ((/* implicit */short) ((((((/* implicit */int) arr_24 [i_26])) == (((/* implicit */int) arr_24 [i_26])))) ? (((/* implicit */int) arr_24 [i_26])) : ((+(((/* implicit */int) arr_24 [i_26]))))));
        var_49 *= ((/* implicit */unsigned short) arr_64 [i_26] [i_26] [i_26] [i_26]);
        arr_106 [i_26] = ((/* implicit */short) max((((((/* implicit */_Bool) (unsigned char)95)) ? (((/* implicit */int) (unsigned short)31510)) : (((/* implicit */int) (short)-5776)))), ((+(((/* implicit */int) arr_32 [i_26] [(unsigned short)14] [i_26]))))));
    }
    var_50 = ((/* implicit */short) var_16);
}
