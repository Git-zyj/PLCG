/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188893
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 2; i_2 < 14; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        var_10 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) arr_6 [i_1] [i_2 + 2] [i_1])))));
                        var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((unsigned int) max(((-(521713481748389432ULL))), (((/* implicit */unsigned long long int) arr_0 [i_2 - 2]))))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (short i_5 = 1; i_5 < 13; i_5 += 3) 
                        {
                            {
                                var_12 = ((arr_10 [i_5 - 1] [(signed char)9] [i_5] [i_1] [i_5] [i_5]) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_10 [i_5 + 3] [11U] [i_5] [i_1] [i_5] [i_5]))))) : (((arr_10 [i_5 - 1] [i_5] [i_5] [i_1] [i_5] [i_5 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_5 + 1] [i_5] [i_5 + 2] [i_1] [i_5] [i_5 + 1]))) : (1989011213U))));
                                var_13 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_8 [i_1] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)124)))))) : (arr_2 [i_1]))));
                            }
                        } 
                    } 
                    var_14 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) (signed char)-3)) < (((/* implicit */int) (signed char)-3))))), ((~(((/* implicit */int) (_Bool)0))))))) ? (min((((unsigned long long int) var_7)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [(unsigned short)2])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))) : (((/* implicit */unsigned long long int) min((((((-1LL) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned short)65535)) - (65535))))), (((/* implicit */long long int) (signed char)48)))))));
                    /* LoopSeq 2 */
                    for (short i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_7 = 0; i_7 < 16; i_7 += 1) 
                        {
                            arr_20 [i_0] [(short)9] [i_1] [i_2 + 1] [i_6] [(unsigned char)14] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)19)))))))) << (((/* implicit */int) (unsigned char)10))));
                            var_15 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) (unsigned char)250))))));
                            var_16 = ((/* implicit */unsigned short) arr_1 [i_6]);
                        }
                        for (signed char i_8 = 1; i_8 < 14; i_8 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) 2299967412713182810LL))))))));
                            var_18 = ((/* implicit */short) ((long long int) (-(((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_22 [i_8] [i_2] [i_2] [6ULL])))))));
                            var_19 = (-(((/* implicit */int) ((((var_8) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_6] [i_1] [i_1] [i_1]))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4192815205001072357ULL))))))))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 3) 
                        {
                            var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */int) (signed char)65)) ^ (((/* implicit */int) (unsigned short)65529)))) & (((((/* implicit */int) (unsigned short)13)) ^ (((/* implicit */int) arr_21 [(_Bool)1] [(_Bool)1] [(unsigned char)5] [(signed char)2] [i_9] [i_0] [i_9])))))))));
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((4294967295U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)250))))) ? (1431621279) : (min((((/* implicit */int) max(((unsigned short)49934), (((/* implicit */unsigned short) (signed char)95))))), ((+(((/* implicit */int) (unsigned char)1)))))))))));
                        }
                        var_22 = ((/* implicit */_Bool) arr_21 [i_0] [i_0] [(signed char)6] [i_6] [i_6] [(signed char)6] [(signed char)6]);
                        var_23 = ((/* implicit */_Bool) arr_15 [i_1] [i_0] [i_2] [i_0] [i_1]);
                        arr_27 [i_1] [(short)4] [i_2 + 2] [i_6] = ((/* implicit */_Bool) max((-1431621269), (((/* implicit */int) (signed char)-34))));
                        var_24 = ((/* implicit */int) arr_10 [i_0] [(_Bool)0] [(_Bool)0] [i_1] [(_Bool)0] [(signed char)14]);
                    }
                    /* vectorizable */
                    for (unsigned char i_10 = 0; i_10 < 16; i_10 += 1) 
                    {
                        var_25 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [i_2 + 2] [i_2 + 1] [9LL] [i_10] [i_10] [i_2 + 1]))));
                        arr_30 [i_10] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_2 + 2] [i_10] [i_0] [i_1]))));
                        var_26 = ((/* implicit */unsigned long long int) ((unsigned int) (~(arr_8 [i_1] [i_1]))));
                        var_27 = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)-7))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_11 = 0; i_11 < 16; i_11 += 1) 
                    {
                        var_28 = (~(-1431621280));
                        var_29 = ((unsigned char) ((long long int) (_Bool)1));
                        /* LoopSeq 2 */
                        for (unsigned int i_12 = 0; i_12 < 16; i_12 += 3) 
                        {
                            var_30 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((unsigned short) 18446744073709551615ULL))) ? (((/* implicit */long long int) ((884751389U) << (((/* implicit */int) arr_7 [i_0] [(signed char)13]))))) : ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13))) : (arr_33 [i_2])))))));
                            arr_38 [(unsigned char)10] [i_1] [i_1] [i_11] [i_12] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) || (((/* implicit */_Bool) arr_24 [i_1] [i_2 + 1] [i_1]))))) % ((+(((/* implicit */int) (signed char)-126))))));
                        }
                        for (unsigned short i_13 = 1; i_13 < 15; i_13 += 2) 
                        {
                            var_31 = ((/* implicit */_Bool) 10344428447006904046ULL);
                            arr_41 [0] [i_11] [i_1] [i_1] [i_1] [14U] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)28)) ? ((~(((((/* implicit */_Bool) 4385119604172588095LL)) ? (arr_29 [i_13 - 1] [i_0] [i_1] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)230))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)231)))));
                            var_32 = ((/* implicit */long long int) min(((_Bool)1), ((!(((/* implicit */_Bool) ((unsigned int) (signed char)91)))))));
                            var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) arr_22 [i_0] [i_11] [i_2 - 2] [(_Bool)1])), (((0ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) << ((((((((~(((/* implicit */int) var_6)))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */int) arr_7 [i_1] [(signed char)0])) != (((/* implicit */int) (unsigned short)65523))))) - (1))))) - (2147483561))))))));
                        }
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_15 = 1; i_15 < 13; i_15 += 2) 
                        {
                            arr_48 [i_15 - 1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)168))) : (arr_45 [i_2 - 1] [i_15 + 3] [i_15] [i_15 + 3] [i_15 + 3] [i_15 + 3])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) : ((~(arr_45 [i_2 - 1] [i_15 + 2] [(unsigned char)15] [(unsigned char)15] [5LL] [i_15 + 3])))));
                            var_34 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_15 [i_0] [(unsigned char)12] [(unsigned char)12] [(short)4] [i_1])), (arr_1 [i_2 + 2])));
                            arr_49 [i_0] [i_0] [(signed char)13] [13] [i_14] [i_1] = ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)176))))), (((((/* implicit */_Bool) (unsigned char)181)) ? (((/* implicit */int) (unsigned char)65)) : (((/* implicit */int) arr_36 [i_0] [(unsigned char)8] [i_0] [i_1] [i_0] [i_0] [i_0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)91), (((/* implicit */unsigned char) (signed char)-99)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18832))) * (0ULL))));
                        }
                        for (long long int i_16 = 1; i_16 < 13; i_16 += 4) 
                        {
                            var_35 = ((/* implicit */unsigned long long int) (_Bool)1);
                            var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) max((((/* implicit */unsigned int) min(((signed char)63), (((/* implicit */signed char) (_Bool)1))))), (((unsigned int) arr_6 [14ULL] [i_1] [i_2])))))));
                            var_37 *= ((/* implicit */signed char) (unsigned short)7);
                            var_38 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) (unsigned short)65532))) << (((((/* implicit */_Bool) ((unsigned char) 8ULL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (0U)))));
                            var_39 &= ((/* implicit */unsigned int) ((((long long int) (signed char)80)) & (((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)56961)) | (((/* implicit */int) (unsigned short)65529))))) ^ ((~(arr_35 [i_0] [i_1] [i_1] [i_1] [i_16])))))));
                        }
                        arr_52 [i_14] [9LL] [i_1] [i_1] [14U] [14U] = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) (unsigned char)89)))));
                        var_40 *= ((/* implicit */signed char) ((((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) (_Bool)1))))))) < (max((((/* implicit */long long int) min((((/* implicit */short) arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_22 [i_0] [i_1] [i_1] [i_1])))), ((~(arr_44 [i_0] [(_Bool)1] [i_2 - 2] [i_14])))))));
                        arr_53 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */int) (!(((/* implicit */_Bool) -6792088165056143669LL))))) % (((((/* implicit */_Bool) arr_19 [i_1] [1ULL] [i_2] [13ULL] [i_14])) ? (((/* implicit */int) (signed char)-96)) : (((/* implicit */int) (unsigned short)7))))))));
                        var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) (+(((/* implicit */int) (_Bool)1)))))) - (((/* implicit */int) ((arr_47 [i_2 + 1] [9U] [i_14] [i_1]) <= (arr_47 [i_2 - 2] [12U] [9ULL] [i_1]))))));
                    }
                }
                /* LoopNest 2 */
                for (unsigned short i_17 = 0; i_17 < 16; i_17 += 1) 
                {
                    for (unsigned short i_18 = 0; i_18 < 16; i_18 += 3) 
                    {
                        {
                            var_42 = ((/* implicit */unsigned char) (((+(arr_2 [i_1]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1241459807))))))));
                            arr_59 [i_1] [(signed char)9] [(signed char)10] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)55))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (long long int i_19 = 0; i_19 < 16; i_19 += 2) 
                            {
                                var_43 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)201))));
                                var_44 = ((/* implicit */unsigned short) min((var_44), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_43 [i_17] [i_0])))))));
                            }
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
                {
                    var_45 = ((/* implicit */unsigned int) arr_28 [i_1] [i_1] [i_20] [i_0] [i_1] [i_20]);
                    var_46 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)105))) != (arr_25 [i_0] [i_1] [i_1] [i_20 + 1] [i_20]))))));
                    var_47 = max(((+(4385119604172588095LL))), (((((/* implicit */_Bool) (signed char)-94)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8566))) : (((((/* implicit */_Bool) -1881699502443155482LL)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19))))))));
                    arr_65 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (signed char)-1);
                }
            }
        } 
    } 
    var_48 = ((/* implicit */int) var_0);
}
