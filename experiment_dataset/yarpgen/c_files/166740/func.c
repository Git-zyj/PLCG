/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166740
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((var_1) == (((/* implicit */long long int) 4294967295U))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            var_10 = ((/* implicit */short) ((((/* implicit */_Bool) 9223372036854775805LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-103))) : (4294967295U)));
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_4 = 1; i_4 < 18; i_4 += 3) 
                        {
                            var_11 = (unsigned short)61926;
                            var_12 = ((/* implicit */signed char) (+(0)));
                            var_13 = (unsigned short)3610;
                            var_14 *= ((/* implicit */int) ((long long int) (_Bool)1));
                        }
                        for (long long int i_5 = 0; i_5 < 19; i_5 += 3) 
                        {
                            var_15 = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-44)) + (2147483647))) >> (((/* implicit */int) (_Bool)1))));
                            var_16 = ((/* implicit */unsigned char) ((short) (short)-6904));
                        }
                        /* LoopSeq 1 */
                        for (short i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */int) (unsigned short)3622)) : (((/* implicit */int) ((((/* implicit */int) (signed char)79)) < (((/* implicit */int) (short)4077)))))));
                            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_1] [i_3] [i_6])) & (((/* implicit */int) var_0))))) && ((!(((/* implicit */_Bool) (signed char)-103))))));
                        }
                    }
                } 
            } 
        }
        for (int i_7 = 0; i_7 < 19; i_7 += 3) 
        {
            var_19 = ((/* implicit */unsigned int) (+(arr_13 [(unsigned short)18] [i_0] [i_0] [i_0] [18LL] [i_7])));
            /* LoopSeq 2 */
            for (unsigned char i_8 = 0; i_8 < 19; i_8 += 3) 
            {
                var_20 = ((/* implicit */long long int) var_7);
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)23401)) ? (((/* implicit */int) arr_15 [i_8] [i_8] [i_0])) : (((/* implicit */int) arr_15 [i_8] [i_8] [i_0]))));
                arr_25 [i_0] [(unsigned char)13] [i_8] = ((/* implicit */int) arr_13 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]);
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32760)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                var_23 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_17 [0U] [i_7] [0U] [i_8] [i_8])) < (arr_2 [i_0])));
            }
            for (unsigned int i_9 = 0; i_9 < 19; i_9 += 3) 
            {
                var_24 ^= ((((/* implicit */_Bool) arr_22 [i_9])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_22 [i_0])) : (arr_5 [i_9] [i_0] [i_0])))) : (((8936772011796364381LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                /* LoopNest 2 */
                for (int i_10 = 3; i_10 < 16; i_10 += 3) 
                {
                    for (signed char i_11 = 3; i_11 < 17; i_11 += 1) 
                    {
                        {
                            var_25 ^= ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)40960))));
                            arr_33 [i_9] [i_7] [(short)1] [i_9] [i_9] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_28 [i_0] [i_9] [i_11 - 2])) ? (var_1) : (((/* implicit */long long int) (+(((/* implicit */int) (short)(-32767 - 1))))))));
                            var_26 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_14 [i_11] [i_11 - 3] [(short)8] [i_11 + 1] [18LL] [i_11 - 3] [i_11]))));
                            arr_34 [(signed char)14] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) 1956235907U)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1035677142U)) ? (arr_30 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-4066)))))) : (arr_27 [i_0] [i_7] [i_7] [i_10 - 3])));
                        }
                    } 
                } 
                arr_35 [i_9] [i_7] = ((/* implicit */int) ((2495439526889297366LL) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                /* LoopSeq 3 */
                for (short i_12 = 1; i_12 < 15; i_12 += 1) /* same iter space */
                {
                    var_27 = ((/* implicit */_Bool) max((var_27), (((((/* implicit */int) (unsigned short)3583)) > (((/* implicit */int) (unsigned short)61953))))));
                    arr_38 [i_9] = ((/* implicit */signed char) arr_30 [3LL] [i_7] [17LL]);
                    var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (!((_Bool)1))))));
                }
                for (short i_13 = 1; i_13 < 15; i_13 += 1) /* same iter space */
                {
                    arr_43 [i_13 + 2] [i_9] [i_9] [i_9] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) var_6))));
                    var_29 *= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_9] [i_9] [i_7] [i_7] [i_0])))))) | (((((/* implicit */_Bool) (short)32561)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)227))) : (arr_12 [i_0] [i_7] [2] [i_13] [i_7] [i_9] [i_0])))));
                }
                for (unsigned int i_14 = 1; i_14 < 17; i_14 += 3) 
                {
                    arr_47 [i_0] [i_9] [i_9] [i_14 + 2] [i_7] [i_7] = ((433181601125623605LL) / (((/* implicit */long long int) ((/* implicit */int) (short)4077))));
                    /* LoopSeq 2 */
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) /* same iter space */
                    {
                        arr_51 [i_9] [i_0] [i_7] [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) - (-2147483625)));
                        arr_52 [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 7273575167022091178LL))));
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) / (((/* implicit */int) arr_40 [i_15 - 1] [i_7] [i_7] [i_14 + 1]))));
                    }
                    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) /* same iter space */
                    {
                        arr_56 [i_0] [i_9] [i_0] [i_14] [i_16] [i_0] [i_9] = ((/* implicit */unsigned int) ((-1990017524) / (480953707)));
                        arr_57 [i_9] [i_9] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((arr_48 [(signed char)1] [i_7] [i_7] [i_14] [i_7] [i_9] [i_16]) > (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0]))))))));
                        var_31 = ((((/* implicit */_Bool) arr_45 [i_9])) ? (((((/* implicit */_Bool) arr_14 [i_0] [i_7] [i_9] [i_9] [i_9] [i_14 - 1] [i_16])) ? (((/* implicit */int) (unsigned short)35381)) : (var_9))) : (((((/* implicit */int) var_2)) - (((/* implicit */int) (unsigned short)11629)))));
                    }
                    arr_58 [18LL] [i_7] [i_9] [i_14] [(_Bool)1] &= (short)32579;
                }
            }
            var_32 -= ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)49152))));
            arr_59 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */int) var_8))))));
        }
    }
    /* LoopNest 2 */
    for (long long int i_17 = 1; i_17 < 10; i_17 += 3) 
    {
        for (unsigned short i_18 = 0; i_18 < 11; i_18 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_19 = 0; i_19 < 11; i_19 += 1) 
                {
                    var_33 += max((((/* implicit */unsigned short) (!((_Bool)1)))), (min((((/* implicit */unsigned short) ((short) 5847032696095686631LL))), (var_6))));
                    arr_69 [i_17] [i_17] [(unsigned char)4] [i_19] &= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_40 [i_17 - 1] [i_17 + 1] [i_17 + 1] [i_17 + 1]))) - (min((arr_17 [i_17 + 1] [10LL] [i_17 + 1] [17] [i_17 - 1]), (((/* implicit */long long int) arr_40 [(short)7] [i_17 + 1] [i_17 + 1] [i_17 + 1]))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_20 = 0; i_20 < 11; i_20 += 3) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (short i_22 = 3; i_22 < 10; i_22 += 3) 
                        {
                            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_62 [i_22 - 3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_18] [i_18] [i_18])) ? (var_4) : (((/* implicit */int) var_7))))) : (((arr_2 [i_17]) / (((/* implicit */unsigned long long int) arr_29 [i_17] [i_18] [i_20]))))));
                            var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_70 [(signed char)6] [i_21 - 1])) ? (((/* implicit */int) var_6)) : (arr_70 [4LL] [i_21 - 1]))))));
                        }
                        arr_77 [i_17 + 1] [i_17 + 1] [i_17 - 1] [(short)8] [i_17 - 1] |= ((/* implicit */int) ((((-1) < (((/* implicit */int) arr_15 [i_17] [(_Bool)1] [(_Bool)1])))) && (((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) arr_16 [i_21 - 1] [10U] [i_18] [i_17 - 1] [10U]))))));
                    }
                    for (signed char i_23 = 2; i_23 < 10; i_23 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned short i_24 = 1; i_24 < 9; i_24 += 3) 
                        {
                            var_36 *= var_7;
                            arr_83 [i_17] [i_18] [i_17] [i_20] [i_23 + 1] [i_23 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_23 - 2] [i_24] [i_24] [i_24] [i_24])) ? (((/* implicit */long long int) arr_10 [i_24 - 1] [i_18] [i_23 + 1] [i_18] [i_17])) : (2251250057871360LL)));
                            arr_84 [i_18] [i_18] = ((/* implicit */signed char) ((((unsigned long long int) arr_20 [6LL] [i_18] [i_18])) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (1835008))))));
                        }
                        for (short i_25 = 1; i_25 < 9; i_25 += 1) 
                        {
                            var_37 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(491520U))))));
                            var_38 = ((/* implicit */long long int) 15);
                            arr_88 [i_17 - 1] [i_18] [i_17 - 1] [i_17] [i_17 - 1] = ((/* implicit */_Bool) var_6);
                            arr_89 [i_17] [i_17] [i_17] [(unsigned short)2] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_68 [i_23 - 1] [i_17 - 1] [i_17 - 1] [i_25 + 2])) ? (((/* implicit */int) arr_68 [i_23 - 1] [i_17 - 1] [i_20] [i_25 + 1])) : (((/* implicit */int) arr_68 [i_23 - 1] [i_17 + 1] [i_20] [i_25 - 1]))));
                            arr_90 [i_18] [i_23 + 1] [i_18] [i_18] [i_18] [(_Bool)1] [i_18] = ((/* implicit */short) (_Bool)1);
                        }
                        for (unsigned char i_26 = 1; i_26 < 9; i_26 += 3) /* same iter space */
                        {
                            arr_93 [(unsigned char)8] [i_18] [i_18] [i_18] [i_18] = (((-(((/* implicit */int) arr_62 [i_17])))) >> (((((((/* implicit */int) var_8)) % (((/* implicit */int) (signed char)-121)))) - (72))));
                            arr_94 [i_18] = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)28))));
                            var_39 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_26 [12LL])) << (((var_1) + (2833679197358167722LL)))))) ? (arr_17 [i_20] [i_23 + 1] [i_26 + 1] [i_23 + 1] [i_23 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                        }
                        for (unsigned char i_27 = 1; i_27 < 9; i_27 += 3) /* same iter space */
                        {
                            arr_97 [i_18] [i_23 - 1] = arr_28 [i_23 - 2] [i_18] [i_27 + 1];
                            arr_98 [i_17] [i_18] [i_20] [(short)5] [i_18] [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_17 + 1] [(unsigned short)5] [i_20] [i_23] [i_27 + 2])) ? (((/* implicit */int) arr_4 [i_17] [7ULL])) : (507793380)));
                            var_40 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_79 [i_18] [i_20] [i_18] [i_18])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_82 [i_27 + 2] [i_27 - 1] [i_18] [i_23] [i_18] [i_18] [i_17])))) > (arr_18 [i_17] [i_17 - 1] [i_17])));
                        }
                        arr_99 [i_17 - 1] [i_18] [i_20] [i_18] = ((/* implicit */unsigned int) arr_22 [i_23]);
                    }
                    arr_100 [i_18] [i_18] [i_18] [i_18] = ((((/* implicit */_Bool) var_4)) ? (arr_87 [i_17 + 1] [i_18]) : (arr_82 [i_17] [6U] [i_18] [i_17] [i_17 - 1] [i_17] [i_17 + 1]));
                }
                /* LoopNest 2 */
                for (long long int i_28 = 0; i_28 < 11; i_28 += 3) 
                {
                    for (short i_29 = 1; i_29 < 9; i_29 += 3) 
                    {
                        {
                            var_41 = var_9;
                            var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_103 [i_18] [i_18] [i_28] [i_29 - 1])) ? (2116729961) : (((/* implicit */int) arr_26 [(unsigned short)18]))))))), (((((/* implicit */_Bool) arr_71 [(short)6] [i_29 + 2] [i_17 - 1] [(short)6])) ? (arr_71 [0LL] [i_29 + 2] [i_17 + 1] [0LL]) : (arr_71 [8LL] [i_29 - 1] [i_17 - 1] [8LL]))))))));
                        }
                    } 
                } 
                arr_106 [i_18] = ((/* implicit */int) ((((/* implicit */_Bool) arr_61 [i_17] [i_17])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_72 [i_18]))) ? (((/* implicit */int) min((var_2), (((/* implicit */short) (_Bool)0))))) : (((/* implicit */int) (!((_Bool)1))))))) : (((arr_74 [i_17 - 1] [i_17 - 1] [i_17 - 1] [i_18] [i_18]) >> (((((-2116729962) | (((/* implicit */int) (signed char)-41)))) + (71)))))));
            }
        } 
    } 
    var_43 = ((/* implicit */unsigned int) min((var_43), (((((/* implicit */_Bool) -2116729955)) ? (2674872083U) : (((/* implicit */unsigned int) 15))))));
}
