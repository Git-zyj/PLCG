/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141411
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
    var_19 = ((/* implicit */unsigned char) var_13);
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_7)), (((((/* implicit */int) var_4)) / (((/* implicit */int) var_8))))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_4))))) : (var_18)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [(unsigned short)4] [(unsigned short)4] = ((/* implicit */long long int) var_7);
        var_21 = ((/* implicit */unsigned long long int) ((signed char) min((min((1753046832U), (((/* implicit */unsigned int) 738974144)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)44598)) ? (738974144) : (((/* implicit */int) arr_0 [i_0]))))))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 11; i_1 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_2 = 3; i_2 < 11; i_2 += 4) 
        {
            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (21U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)2)))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))) : (arr_6 [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
            /* LoopSeq 2 */
            for (signed char i_3 = 2; i_3 < 13; i_3 += 1) 
            {
                arr_9 [i_2] [i_3 + 1] = ((/* implicit */unsigned char) arr_7 [(unsigned short)8]);
                /* LoopSeq 3 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    var_23 += ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)57))));
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 1; i_5 < 12; i_5 += 3) 
                    {
                        var_24 = ((/* implicit */short) (_Bool)1);
                        var_25 ^= ((/* implicit */unsigned long long int) ((arr_11 [i_1 - 2] [i_2 - 1] [i_3 - 2]) - (((/* implicit */int) arr_8 [i_1] [i_4 - 1] [i_3] [i_4]))));
                        var_26 = ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_3 - 2] [i_2] [i_5 + 2] [i_1 - 2] [i_4] [i_3 + 1])) == (((/* implicit */int) arr_5 [i_5 - 1] [i_2 + 2]))));
                        arr_15 [i_1 + 2] [i_1] [i_4] [i_1] [i_1 + 2] [(_Bool)1] [i_1 - 3] = ((/* implicit */unsigned short) var_11);
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 1) 
                    {
                        arr_19 [4U] [i_4] [i_4] [i_3] [i_4] [6ULL] [6ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) -9223372036854775788LL)) ? (1579830148875427536ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        var_27 = ((/* implicit */unsigned long long int) -1LL);
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14784899014437783008ULL)) ? (((/* implicit */int) arr_12 [i_1] [i_2 + 2] [9U] [i_2 + 2] [i_4] [i_4])) : (((/* implicit */int) arr_12 [i_1] [i_1 + 3] [i_1] [i_1] [i_4] [i_1]))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_18 [i_1] [i_2] [i_3] [i_4] [i_4]))))) : (((/* implicit */int) arr_5 [i_1] [i_2]))));
                        var_29 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)0))));
                    }
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_23 [i_1] [i_2] [i_3 + 1] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_2 + 2] [i_2 + 1] [i_2 + 2] [i_2] [2ULL])) ? (arr_22 [i_2 - 1] [(_Bool)1] [(signed char)9] [i_2] [i_2 + 1] [i_2 + 1]) : (arr_22 [i_2 - 2] [i_2] [i_2] [i_2] [i_2 - 2] [i_2 - 3])));
                    /* LoopSeq 3 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_27 [i_8] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)120))) / (2277007895643273556ULL)));
                        arr_28 [i_8] [i_8] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) (unsigned char)0);
                    }
                    for (unsigned char i_9 = 4; i_9 < 12; i_9 += 1) 
                    {
                        var_30 = ((/* implicit */int) ((unsigned short) arr_5 [i_1] [i_7]));
                        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_9 - 3] [i_3 + 1] [i_2 + 1])) || (((/* implicit */_Bool) var_17))));
                        var_32 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)57))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_33 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1 + 3])) ? (((/* implicit */long long int) 2460194971U)) : (arr_32 [i_3 + 1] [i_3 + 1] [7U] [i_3 + 1] [i_3 + 1])));
                        var_34 = ((/* implicit */short) arr_32 [i_1] [i_2] [i_3] [i_3] [i_10]);
                        var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) ((arr_20 [i_1] [11U] [i_1 - 1] [i_3 - 1]) < (((/* implicit */unsigned long long int) -3503164800623253591LL)))))));
                        var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (-244033628353909061LL) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */int) arr_24 [i_1] [i_3 + 1] [i_3] [i_7] [i_10])) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)126)) == (arr_30 [7U] [3] [i_3 - 2] [i_7] [3] [i_7] [3])))))))));
                    }
                    arr_34 [i_1] [i_2 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [(_Bool)1] [i_2 - 2] [i_3] [12U])) - (((/* implicit */int) arr_29 [i_2 - 2]))));
                }
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    var_37 = (-(((((/* implicit */_Bool) arr_0 [i_1])) ? (var_15) : (3661845059271768595ULL))));
                    var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) ((arr_11 [i_1] [i_2 + 1] [i_1]) % (((((/* implicit */_Bool) arr_25 [i_11] [(signed char)4] [i_3] [1U] [i_3] [10LL] [i_2 - 1])) ? (((/* implicit */int) (short)-11733)) : (((/* implicit */int) (_Bool)1)))))))));
                    var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1] [0ULL] [i_11 - 1] [i_11] [i_11] [(unsigned char)0] [i_11])) ? (((/* implicit */int) arr_14 [i_11 - 1] [12U] [i_11 - 1] [(unsigned char)10] [(_Bool)1] [i_11 - 1] [i_11 - 1])) : (((/* implicit */int) arr_14 [i_11] [(unsigned short)2] [i_11 - 1] [i_11] [(unsigned char)6] [i_11] [i_11 - 1]))));
                    var_40 ^= ((/* implicit */short) ((((/* implicit */int) (signed char)74)) == (arr_35 [i_1 + 3] [(short)9] [i_2 + 2] [i_1 + 3])));
                    arr_37 [i_1] [i_1] [i_3] [i_1] = ((/* implicit */unsigned long long int) 18005602416459776LL);
                }
                var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_1 + 3] [i_2 + 3] [i_3 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_1 - 1] [i_2 - 1] [i_3 + 1]))) : (3503164800623253574LL)));
            }
            for (unsigned int i_12 = 0; i_12 < 14; i_12 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 3) /* same iter space */
                {
                    arr_44 [i_1] [i_1] [i_1] [i_12] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295LL)) ? (((/* implicit */int) arr_29 [i_1])) : (((/* implicit */int) (unsigned short)8592))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (((unsigned int) arr_36 [i_1] [i_12] [i_1] [i_1]))));
                    var_42 = ((/* implicit */unsigned long long int) (+(-1050269799569915257LL)));
                    arr_45 [(unsigned char)6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -848173073393312912LL)) ? (((/* implicit */int) var_1)) : (arr_25 [i_1] [i_1] [i_1 - 3] [(unsigned short)11] [i_1] [(unsigned short)13] [i_1 - 1])));
                }
                for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 3) /* same iter space */
                {
                    arr_48 [i_1] [i_1] [i_12] [(signed char)12] = ((/* implicit */unsigned short) ((long long int) var_16));
                    var_43 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [(short)8] [i_14] [i_12] [(signed char)8] [(short)8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_1] [i_1] [i_1] [i_12] [i_12]))) : (1529760790U)))) ? (((/* implicit */unsigned long long int) arr_11 [i_12] [i_1 + 3] [i_2 + 1])) : (var_15)));
                    arr_49 [(short)10] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)48190)) ? (-244033628353909073LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-5)))));
                    /* LoopSeq 2 */
                    for (long long int i_15 = 0; i_15 < 14; i_15 += 2) 
                    {
                        var_44 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_12 [i_15] [i_15] [i_12] [i_12] [i_15] [i_1 - 2]))));
                        var_45 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_1] [i_2] [i_12] [i_15] [i_15]))) % ((((_Bool)1) ? (14784899014437782991ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                    }
                    for (int i_16 = 2; i_16 < 13; i_16 += 2) 
                    {
                        var_46 = ((/* implicit */unsigned long long int) arr_35 [i_16 - 2] [(unsigned char)8] [i_2 - 2] [i_1 - 1]);
                        arr_56 [11ULL] [11ULL] [i_2 + 1] [i_12] [i_2 + 1] [i_1] = ((/* implicit */long long int) (unsigned char)0);
                        var_47 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                        var_48 = ((/* implicit */long long int) (unsigned short)43693);
                        var_49 = ((/* implicit */unsigned char) ((short) 1938221962));
                    }
                    var_50 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4561867318083171892ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (8849414760175477033LL)))) ? (((/* implicit */int) ((_Bool) (unsigned char)44))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_18)))))));
                }
                for (unsigned int i_17 = 0; i_17 < 14; i_17 += 3) 
                {
                    var_51 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49836))) : (arr_46 [i_1] [i_2])))) & (var_11)));
                    var_52 ^= ((/* implicit */int) -6897261842214458173LL);
                }
                var_53 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */int) arr_14 [i_1 - 3] [8U] [i_12] [10ULL] [i_2 + 3] [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_12 [i_2 + 1] [0ULL] [i_2 + 1] [(unsigned short)12] [0ULL] [i_1 + 3]))));
                arr_59 [i_12] [(_Bool)1] [(signed char)7] = ((/* implicit */long long int) (_Bool)0);
            }
            /* LoopNest 3 */
            for (unsigned short i_18 = 1; i_18 < 13; i_18 += 3) 
            {
                for (signed char i_19 = 1; i_19 < 10; i_19 += 3) 
                {
                    for (short i_20 = 1; i_20 < 12; i_20 += 1) 
                    {
                        {
                            var_54 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2314893640U)) ? (((/* implicit */unsigned int) arr_40 [i_20] [i_1 + 2] [i_1 + 2] [i_19 + 1])) : (524287U)));
                            var_55 = ((/* implicit */_Bool) min((var_55), (((/* implicit */_Bool) (-(arr_30 [i_20 - 1] [i_1 + 1] [i_18] [i_19] [i_20] [i_2] [i_19]))))));
                        }
                    } 
                } 
            } 
            var_56 = ((/* implicit */unsigned short) ((short) arr_0 [i_2 + 3]));
        }
        /* vectorizable */
        for (unsigned char i_21 = 1; i_21 < 11; i_21 += 1) 
        {
            var_57 = ((/* implicit */int) (unsigned short)58969);
            /* LoopSeq 1 */
            for (signed char i_22 = 0; i_22 < 14; i_22 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_23 = 0; i_23 < 14; i_23 += 4) 
                {
                    for (int i_24 = 1; i_24 < 13; i_24 += 1) 
                    {
                        {
                            arr_76 [i_1] [i_21] [i_21 + 3] [7U] [6LL] [6LL] = ((/* implicit */unsigned short) (_Bool)1);
                            var_58 = ((((/* implicit */_Bool) 244033628353909060LL)) ? (((/* implicit */int) (_Bool)1)) : (-2147483635));
                            var_59 = ((/* implicit */int) (+(((var_14) + (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_24])))))));
                        }
                    } 
                } 
                arr_77 [i_1] [i_21] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6897261842214458161LL)) ? (3342950502618650539LL) : (((/* implicit */long long int) 8191))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_21 + 1] [i_1 - 3] [i_1 - 3] [i_1 - 3]))) : (((((/* implicit */_Bool) arr_68 [i_1] [i_1 - 3] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (524288U)))));
            }
        }
        arr_78 [i_1] = ((/* implicit */unsigned short) max((((max((((/* implicit */unsigned long long int) arr_21 [i_1] [i_1] [8] [(unsigned short)13] [8] [i_1])), (var_15))) % (((((/* implicit */_Bool) arr_14 [(unsigned short)12] [(unsigned char)0] [i_1] [i_1] [i_1] [(unsigned short)0] [i_1])) ? (arr_55 [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1] [1U] [i_1 + 3] [i_1]) : (var_0))))), ((-(min((var_13), (((/* implicit */unsigned long long int) var_14))))))));
    }
    var_60 *= ((/* implicit */signed char) (_Bool)1);
}
