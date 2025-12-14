/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10488
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
    var_12 = ((/* implicit */unsigned short) 2553956362U);
    var_13 = ((/* implicit */int) var_10);
    var_14 = ((/* implicit */signed char) var_4);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */signed char) ((((/* implicit */int) var_9)) != (((/* implicit */int) arr_0 [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)254)) << (((/* implicit */int) var_4)))) != (((/* implicit */int) var_10))));
    }
    for (unsigned char i_1 = 1; i_1 < 12; i_1 += 2) 
    {
        arr_7 [(_Bool)1] = ((/* implicit */unsigned int) arr_4 [i_1 + 1] [(unsigned char)0]);
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (short i_3 = 3; i_3 < 12; i_3 += 4) 
            {
                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) arr_13 [8] [(signed char)10] [(unsigned short)12]))));
                arr_14 [10] [(unsigned short)3] [i_2] = ((/* implicit */unsigned long long int) var_7);
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((arr_5 [8ULL]) + (arr_8 [(_Bool)1] [i_2])))) ? (arr_10 [(unsigned short)1] [11] [i_1 - 1]) : (((/* implicit */long long int) ((arr_12 [i_2] [4ULL]) & (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))) - (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1 + 1])) ? (arr_11 [(unsigned char)10] [12ULL] [(unsigned short)7] [(signed char)0]) : (((/* implicit */int) var_10))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_5 = 1; i_5 < 11; i_5 += 4) 
                {
                    arr_21 [(signed char)8] [i_2] [i_2] [9] = ((/* implicit */signed char) var_4);
                    arr_22 [(signed char)3] [(_Bool)1] [i_2] [i_2] [2] [(unsigned short)12] = ((/* implicit */short) var_7);
                }
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((var_4) ? (arr_8 [i_2] [i_2]) : (((/* implicit */long long int) arr_12 [i_2] [(unsigned short)12])))) + (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [8U] [(unsigned char)7])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_8)))))));
                arr_23 [i_2] [(_Bool)1] [2LL] = (i_2 % 2 == zero) ? (((/* implicit */unsigned short) ((((((/* implicit */long long int) var_11)) / (arr_18 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_2]))) << (((((/* implicit */_Bool) arr_19 [i_2] [(_Bool)1] [(unsigned char)12] [5ULL] [12ULL])) ? (((/* implicit */int) arr_19 [i_2] [(unsigned char)10] [(signed char)8] [6U] [(_Bool)1])) : (((/* implicit */int) arr_19 [i_2] [(signed char)2] [1U] [6LL] [(_Bool)1]))))))) : (((/* implicit */unsigned short) ((((((/* implicit */long long int) var_11)) / (arr_18 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_2]))) << (((((((/* implicit */_Bool) arr_19 [i_2] [(_Bool)1] [(unsigned char)12] [5ULL] [12ULL])) ? (((/* implicit */int) arr_19 [i_2] [(unsigned char)10] [(signed char)8] [6U] [(_Bool)1])) : (((/* implicit */int) arr_19 [i_2] [(signed char)2] [1U] [6LL] [(_Bool)1])))) - (82))))));
            }
            /* LoopSeq 4 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
            {
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_5 [i_1 + 1]) <= (arr_5 [i_1 + 1]))))) != (arr_5 [i_1 + 1])));
                var_21 = ((/* implicit */int) var_4);
                arr_27 [i_2] [(unsigned short)4] [(_Bool)1] [(unsigned char)7] = ((/* implicit */unsigned int) arr_13 [i_2] [9] [2]);
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
            {
                arr_32 [i_2] = (i_2 % 2 == zero) ? (((/* implicit */unsigned short) ((((((/* implicit */int) arr_9 [i_2])) / (((/* implicit */int) arr_24 [(_Bool)1] [i_2] [i_1 - 1])))) != (((((/* implicit */int) arr_24 [(unsigned char)3] [i_2] [i_1 - 1])) << (((((/* implicit */int) arr_9 [i_2])) - (11026)))))))) : (((/* implicit */unsigned short) ((((((/* implicit */int) arr_9 [i_2])) / (((/* implicit */int) arr_24 [(_Bool)1] [i_2] [i_1 - 1])))) != (((((/* implicit */int) arr_24 [(unsigned char)3] [i_2] [i_1 - 1])) << (((((((/* implicit */int) arr_9 [i_2])) - (11026))) - (45355))))))));
                arr_33 [i_2] [6LL] [(unsigned char)10] [1ULL] = ((/* implicit */int) (_Bool)0);
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_8 = 0; i_8 < 13; i_8 += 2) 
                {
                    var_22 = (_Bool)1;
                    arr_37 [(unsigned char)6] [i_2] [i_2] [10] = arr_28 [i_2] [i_1 + 1];
                }
                for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 3) 
                {
                    /* LoopSeq 4 */
                    for (long long int i_10 = 0; i_10 < 13; i_10 += 3) 
                    {
                        var_23 = ((/* implicit */int) 18446744073709551610ULL);
                        arr_45 [(unsigned char)10] [i_2] [6ULL] [3LL] [9U] [(unsigned short)6] [0ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (arr_10 [3ULL] [9ULL] [8LL]) : (((/* implicit */long long int) ((/* implicit */int) arr_40 [5LL] [10] [i_2] [0ULL])))));
                    }
                    /* vectorizable */
                    for (unsigned char i_11 = 1; i_11 < 10; i_11 += 3) 
                    {
                        arr_48 [7LL] [1] [i_2] = ((/* implicit */long long int) (unsigned char)244);
                        var_24 = ((/* implicit */unsigned char) arr_18 [(_Bool)1] [(unsigned short)3] [7ULL] [i_2]);
                        var_25 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_6)) : (17592186043392LL))) - (-3770178430635957296LL)));
                        arr_49 [4ULL] [9ULL] [2U] [(short)8] [i_2] [(unsigned char)5] = ((/* implicit */unsigned short) ((arr_28 [i_2] [i_1 - 1]) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)19)))));
                    }
                    for (long long int i_12 = 1; i_12 < 12; i_12 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned char) (unsigned short)6062);
                        arr_52 [1ULL] [i_2] [(unsigned char)10] [(unsigned short)7] [4] [2U] = ((/* implicit */_Bool) arr_40 [1U] [4U] [i_2] [(unsigned short)12]);
                    }
                    for (unsigned short i_13 = 0; i_13 < 13; i_13 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned short) ((((var_5) <= (var_0))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_39 [10] [(short)9] [6U] [(short)5] [i_2]))));
                        arr_55 [(unsigned short)8] [i_2] [(unsigned char)9] [(short)10] = ((/* implicit */unsigned short) arr_24 [10ULL] [i_2] [2U]);
                    }
                    var_28 = ((/* implicit */unsigned char) var_3);
                    var_29 = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1 - 1])) ? (arr_15 [(unsigned char)0] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((var_11) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)136))))))));
                }
                for (unsigned int i_14 = 0; i_14 < 13; i_14 += 3) 
                {
                    arr_60 [12LL] [(unsigned short)2] [(unsigned char)9] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_39 [0] [10LL] [9U] [i_1 + 1] [i_2])) : (((((/* implicit */int) arr_58 [(_Bool)1] [i_1 + 1] [5ULL])) ^ (((/* implicit */int) arr_58 [(unsigned short)1] [i_1 - 1] [(short)6]))))));
                    arr_61 [i_2] [1ULL] [5LL] [(signed char)5] = ((/* implicit */unsigned char) var_5);
                    var_30 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_34 [i_2] [1U] [i_1 - 1] [i_2])) >> (((var_6) - (4106861615U)))));
                    arr_62 [i_2] [1ULL] [(unsigned char)8] [(short)8] = ((/* implicit */short) var_0);
                }
                var_31 = ((/* implicit */short) arr_50 [i_2]);
            }
            for (unsigned int i_15 = 2; i_15 < 9; i_15 += 3) /* same iter space */
            {
                var_32 = var_11;
                var_33 = ((/* implicit */unsigned int) arr_16 [i_2] [(signed char)0] [i_15 + 4]);
            }
            for (unsigned int i_16 = 2; i_16 < 9; i_16 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_17 = 3; i_17 < 12; i_17 += 3) 
                {
                    for (long long int i_18 = 4; i_18 < 12; i_18 += 3) 
                    {
                        {
                            var_34 = -1751102622;
                            var_35 = ((/* implicit */long long int) var_8);
                        }
                    } 
                } 
                var_36 = ((/* implicit */unsigned int) (unsigned char)42);
            }
        }
        for (short i_19 = 0; i_19 < 13; i_19 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_20 = 0; i_20 < 13; i_20 += 3) 
            {
                for (unsigned int i_21 = 0; i_21 < 13; i_21 += 3) 
                {
                    for (signed char i_22 = 0; i_22 < 13; i_22 += 1) 
                    {
                        {
                            arr_84 [1U] [i_19] [(_Bool)1] [(unsigned short)3] [(unsigned short)6] [(_Bool)1] [(unsigned char)3] = ((/* implicit */int) var_7);
                            var_37 ^= ((/* implicit */unsigned int) -1751102622);
                            arr_85 [i_19] [(unsigned char)9] [(unsigned char)4] [(signed char)11] [i_19] = ((/* implicit */_Bool) (unsigned char)236);
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (long long int i_23 = 0; i_23 < 13; i_23 += 3) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_24 = 2; i_24 < 12; i_24 += 4) 
                {
                    arr_91 [i_19] = ((/* implicit */unsigned short) ((arr_11 [12ULL] [5U] [11] [i_24 + 1]) * (((((/* implicit */int) arr_72 [(short)12])) / (((/* implicit */int) var_10))))));
                    var_38 &= -1751102622;
                }
                for (unsigned int i_25 = 0; i_25 < 13; i_25 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (signed char i_26 = 0; i_26 < 13; i_26 += 1) 
                    {
                        arr_98 [10LL] [8LL] &= ((/* implicit */int) var_4);
                        arr_99 [(_Bool)1] [i_19] [11U] [7] = ((/* implicit */_Bool) ((((/* implicit */int) var_4)) | (((/* implicit */int) var_1))));
                    }
                    var_39 = ((/* implicit */short) var_9);
                    var_40 = ((/* implicit */unsigned long long int) arr_12 [i_19] [4U]);
                    var_41 = ((/* implicit */int) (unsigned char)27);
                    var_42 &= ((/* implicit */unsigned long long int) var_2);
                }
                /* vectorizable */
                for (unsigned int i_27 = 0; i_27 < 13; i_27 += 3) /* same iter space */
                {
                    arr_102 [(unsigned short)10] [(signed char)6] [3ULL] [2U] [(unsigned short)0] [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_19])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)216))));
                    var_43 = ((/* implicit */unsigned int) (_Bool)1);
                }
                var_44 = (i_19 % 2 == 0) ? (((/* implicit */_Bool) ((((/* implicit */int) var_8)) << (((((((/* implicit */int) arr_35 [9U] [i_19] [(unsigned char)9] [5])) | (((/* implicit */int) arr_35 [4] [i_19] [4U] [8U])))) - (109)))))) : (((/* implicit */_Bool) ((((/* implicit */int) var_8)) << (((((((((/* implicit */int) arr_35 [9U] [i_19] [(unsigned char)9] [5])) | (((/* implicit */int) arr_35 [4] [i_19] [4U] [8U])))) - (109))) + (67))))));
            }
            for (unsigned short i_28 = 3; i_28 < 9; i_28 += 4) 
            {
                /* LoopSeq 2 */
                for (int i_29 = 4; i_29 < 11; i_29 += 1) 
                {
                    var_45 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-77)) > (((/* implicit */int) var_3)))))) <= (arr_18 [11U] [4U] [(short)7] [i_19])));
                    var_46 = ((/* implicit */signed char) var_6);
                    /* LoopSeq 1 */
                    for (unsigned char i_30 = 0; i_30 < 13; i_30 += 2) 
                    {
                        var_47 = var_7;
                        var_48 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_11) != (var_11))))) > (((((/* implicit */_Bool) var_7)) ? (arr_66 [4] [i_1 + 1] [i_19]) : (arr_12 [i_19] [i_29 - 2])))));
                        var_49 = ((/* implicit */_Bool) arr_13 [i_19] [10ULL] [5U]);
                    }
                    var_50 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) >> (((arr_73 [i_28 - 2]) - (3492334850U)))))) ? (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_74 [(unsigned short)5] [(unsigned short)6])) || (((/* implicit */_Bool) 17592186043390LL)))))) / (var_0))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_75 [i_19] [(unsigned short)3]))) != (9223372036854775807LL)))))));
                }
                for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                {
                    var_51 = ((/* implicit */unsigned char) var_3);
                    arr_115 [8ULL] [(signed char)8] [1U] [i_19] [(signed char)8] = ((/* implicit */long long int) var_1);
                    var_52 *= ((/* implicit */unsigned short) (unsigned char)192);
                    arr_116 [(signed char)6] [i_19] = ((/* implicit */unsigned int) arr_78 [12ULL] [11ULL] [i_28 - 1]);
                }
                var_53 = ((/* implicit */unsigned short) -17592186043392LL);
            }
        }
        var_54 = ((/* implicit */signed char) var_2);
        arr_117 [2U] = ((/* implicit */unsigned short) arr_30 [4U] [(unsigned short)8]);
    }
    var_55 = ((/* implicit */unsigned short) (unsigned char)23);
}
