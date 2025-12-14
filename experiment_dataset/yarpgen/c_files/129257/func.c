/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129257
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
    for (int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */int) (signed char)95)) / (((/* implicit */int) (unsigned short)38289)))))));
        /* LoopSeq 4 */
        for (short i_1 = 2; i_1 < 18; i_1 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_2 = 2; i_2 < 20; i_2 += 4) 
            {
                for (signed char i_3 = 2; i_3 < 18; i_3 += 1) 
                {
                    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_2] [i_2 - 2])) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_2] [i_2 - 1])) : (((/* implicit */int) arr_2 [i_0 - 1] [i_2] [i_2 - 1])))))));
                            var_16 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)95))));
                            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) var_6))));
                            var_18 = ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 - 1] [i_0] [i_2 + 1] [i_3 + 2]))) / (var_6));
                        }
                    } 
                } 
            } 
            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)23)) || (((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1]))));
            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_1] [(short)0] [i_1] [i_0 - 1] [i_0] [i_0 - 1])) && (((/* implicit */_Bool) arr_1 [i_0] [i_0])))))));
            var_21 = ((/* implicit */unsigned char) arr_2 [i_0] [i_0] [i_0 + 1]);
            /* LoopSeq 1 */
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_5] [i_5 - 1] [(short)19] [i_1 + 1] [i_0 - 1])) >> (((((/* implicit */int) arr_8 [i_5] [i_5 - 1] [i_5] [i_1 + 2] [i_0 - 1])) - (7993))))))));
                var_23 = ((/* implicit */short) (-(((/* implicit */int) ((arr_4 [i_0] [i_0] [i_5]) == (((/* implicit */int) (_Bool)1)))))));
                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_0])) % (((/* implicit */int) arr_2 [i_5] [i_0] [i_0]))))) ? (((/* implicit */int) arr_13 [i_1 + 1] [i_1] [i_0 + 1])) : (((/* implicit */int) arr_8 [i_5] [i_5] [i_5 - 1] [i_5] [i_5 - 1]))));
                var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 - 1] [i_5]))));
            }
        }
        for (short i_6 = 2; i_6 < 18; i_6 += 1) /* same iter space */
        {
            var_26 |= ((/* implicit */unsigned int) ((arr_4 [i_6 + 2] [i_6 - 2] [i_6]) >> (((arr_4 [i_6 - 1] [i_6 - 2] [i_6]) - (281900799)))));
            var_27 = ((/* implicit */int) var_7);
            var_28 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_17 [i_0 + 1] [i_6]))));
            var_29 *= ((/* implicit */unsigned char) (((_Bool)1) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 1])))));
            /* LoopNest 2 */
            for (short i_7 = 2; i_7 < 19; i_7 += 4) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 1; i_9 < 17; i_9 += 4) 
                        {
                            var_30 *= ((/* implicit */short) ((((/* implicit */_Bool) -3719518386191763761LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-197479835820344271LL)));
                            var_31 = ((/* implicit */signed char) ((((/* implicit */int) arr_26 [i_0] [i_6] [i_6 - 2] [i_7 + 1] [i_6])) < (((/* implicit */int) arr_26 [i_0] [i_6 - 2] [i_6 + 2] [i_7] [i_7]))));
                        }
                        var_32 *= ((/* implicit */signed char) arr_27 [i_7 - 2] [i_6 + 1] [i_6 - 1] [i_0 - 1]);
                        var_33 |= 3099126452U;
                    }
                } 
            } 
        }
        for (short i_10 = 2; i_10 < 18; i_10 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (short i_11 = 0; i_11 < 21; i_11 += 2) 
            {
                var_34 = ((/* implicit */short) ((((((/* implicit */int) (_Bool)1)) >= (arr_4 [i_0] [i_0] [i_0]))) || (((((/* implicit */long long int) ((/* implicit */int) (signed char)119))) > (197479835820344274LL)))));
                arr_35 [i_0] [i_10] [i_11] = ((/* implicit */short) (unsigned short)18250);
            }
            for (unsigned int i_12 = 0; i_12 < 21; i_12 += 1) 
            {
                var_35 = ((/* implicit */short) arr_18 [i_12] [(short)12] [i_0]);
                /* LoopNest 2 */
                for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                {
                    for (short i_14 = 2; i_14 < 19; i_14 += 4) 
                    {
                        {
                            arr_45 [i_0] [(short)4] [i_0 + 1] [i_0] [i_0] = ((/* implicit */unsigned int) arr_5 [i_0] [i_10 - 2] [i_10 - 2]);
                            var_36 -= ((/* implicit */unsigned long long int) ((unsigned short) arr_17 [i_14 - 1] [i_10 - 2]));
                        }
                    } 
                } 
            }
            var_37 |= (((_Bool)1) ? (((/* implicit */int) ((843768206U) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-107)))))) : (((/* implicit */int) var_2)));
            var_38 = ((/* implicit */signed char) arr_14 [i_0] [i_0]);
            arr_46 [i_0] [i_10] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_30 [i_0 + 1])))) ? (((/* implicit */int) (_Bool)1)) : (((arr_11 [i_0] [i_10] [i_0] [i_0] [i_0]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_33 [i_0] [i_0] [i_0] [i_0]))))));
        }
        for (short i_15 = 2; i_15 < 18; i_15 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                for (unsigned long long int i_17 = 0; i_17 < 21; i_17 += 1) 
                {
                    {
                        var_39 = ((/* implicit */_Bool) arr_18 [i_0 + 1] [i_0 - 1] [i_15 + 2]);
                        var_40 -= ((/* implicit */short) ((unsigned short) (unsigned char)215));
                    }
                } 
            } 
            var_41 |= ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) arr_8 [i_0 + 1] [i_0 + 1] [i_15] [i_15 - 2] [i_15 + 2])) : (((/* implicit */int) arr_12 [i_0 - 1]))));
            /* LoopSeq 3 */
            for (signed char i_18 = 0; i_18 < 21; i_18 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_19 = 0; i_19 < 21; i_19 += 3) 
                {
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        {
                            var_42 = ((((/* implicit */int) var_3)) <= (((/* implicit */int) arr_7 [i_0 + 1] [i_0] [i_18] [i_19])));
                            var_43 = ((/* implicit */short) (-(((/* implicit */int) (short)23735))));
                        }
                    } 
                } 
                var_44 = ((/* implicit */int) min((var_44), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (signed char)2)))))));
                var_45 |= ((/* implicit */unsigned char) ((arr_11 [i_18] [i_15] [i_0 - 1] [i_0 + 1] [i_15]) ? (((((/* implicit */long long int) var_13)) & (arr_15 [i_15] [i_15] [i_15]))) : (((/* implicit */long long int) -432407761))));
            }
            for (short i_21 = 0; i_21 < 21; i_21 += 1) /* same iter space */
            {
                arr_63 [(short)0] [(short)0] [i_21] [i_21] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_15 - 1] [i_15 - 2] [i_15 - 2])) ? (((/* implicit */int) var_12)) : (arr_30 [i_21])));
                var_46 *= ((/* implicit */unsigned int) arr_8 [i_15] [i_15 - 1] [i_15] [i_15 + 1] [i_15]);
                var_47 = ((/* implicit */signed char) min((var_47), (((/* implicit */signed char) ((arr_53 [i_0] [i_0 + 1]) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
            }
            for (short i_22 = 0; i_22 < 21; i_22 += 1) /* same iter space */
            {
                var_48 = ((/* implicit */unsigned short) ((_Bool) arr_20 [i_15] [i_15] [i_0] [i_15 + 1]));
                arr_68 [20U] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_42 [0LL])) && (((/* implicit */_Bool) arr_42 [(short)12]))));
                var_49 = ((/* implicit */signed char) ((_Bool) arr_55 [i_0 + 1] [i_0 + 1] [i_15 + 3] [i_22]));
            }
            var_50 |= ((/* implicit */short) (~(var_7)));
        }
        /* LoopSeq 2 */
        for (short i_23 = 0; i_23 < 21; i_23 += 1) 
        {
            var_51 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)95)) * (((/* implicit */int) arr_3 [i_23] [i_0 + 1]))));
            /* LoopNest 2 */
            for (short i_24 = 0; i_24 < 21; i_24 += 1) 
            {
                for (signed char i_25 = 3; i_25 < 17; i_25 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_26 = 4; i_26 < 20; i_26 += 1) 
                        {
                            arr_80 [i_0] [i_24] [i_24] [i_25] [i_26 - 1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_72 [i_25] [i_0 + 1] [i_23] [i_24])) >> ((((~(((/* implicit */int) (short)31457)))) + (31477)))));
                            var_52 *= ((/* implicit */unsigned long long int) ((var_13) | (((((/* implicit */_Bool) 17356229602724209880ULL)) ? (-1082078301) : (((/* implicit */int) arr_49 [i_23] [i_23] [i_23]))))));
                        }
                        /* LoopSeq 2 */
                        for (long long int i_27 = 2; i_27 < 18; i_27 += 2) /* same iter space */
                        {
                            var_53 = ((/* implicit */long long int) ((unsigned short) arr_26 [i_0] [i_25 + 3] [i_25] [i_27 - 2] [i_27]));
                            arr_84 [i_24] [i_24] [i_0] [i_25] [i_24] [i_0] [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_74 [i_0 + 1] [i_23] [i_24])) * (((/* implicit */int) (short)-10678))));
                            var_54 &= ((/* implicit */signed char) (~(((/* implicit */int) arr_31 [i_27] [i_23]))));
                            var_55 *= ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_33 [5U] [i_23] [i_23] [i_23])))) < (((/* implicit */int) (unsigned char)225))));
                            var_56 = ((/* implicit */signed char) max((var_56), (((/* implicit */signed char) ((((/* implicit */_Bool) ((var_7) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-27)))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_51 [i_0 + 1] [i_25 + 4] [i_27 - 2] [i_27 + 1])))))));
                        }
                        for (long long int i_28 = 2; i_28 < 18; i_28 += 2) /* same iter space */
                        {
                            var_57 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6519494816526348398ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)66))))) ? (((arr_53 [i_0] [i_0]) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) arr_78 [i_28 + 3] [i_28 + 3] [i_28 - 2] [i_0] [i_28 - 2])))));
                            var_58 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_33 [i_0 - 1] [i_23] [i_25 - 1] [i_28 + 1])) == (((/* implicit */int) arr_85 [i_25 + 3] [i_25 + 3] [i_25 + 3] [i_25] [i_25] [i_25 + 3] [i_0]))));
                            arr_87 [i_0] [i_0] [i_0] [i_25 + 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)224)) ? (arr_75 [i_24] [i_23] [(_Bool)1] [i_25]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_25 + 2] [i_23])))));
                            var_59 = ((/* implicit */int) arr_15 [(short)16] [i_25] [i_0]);
                            var_60 = ((/* implicit */int) 9223372036854775787LL);
                        }
                        var_61 = ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_36 [i_0] [i_0])))) / ((-(((/* implicit */int) arr_12 [i_25]))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_29 = 0; i_29 < 21; i_29 += 1) 
                        {
                            var_62 &= ((/* implicit */short) ((((/* implicit */int) arr_89 [i_0] [i_23] [(unsigned short)10] [i_25] [i_0 - 1])) & ((-(((/* implicit */int) (unsigned short)18250))))));
                            var_63 = ((/* implicit */unsigned int) max((var_63), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)86)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)87))) : (-9223372036854775788LL))))));
                            var_64 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_43 [i_0 - 1] [i_25 - 2] [i_29])) ? (((/* implicit */int) arr_2 [i_0] [(signed char)6] [14])) : (((/* implicit */int) arr_2 [i_29] [(_Bool)1] [i_29]))));
                            arr_90 [i_0] [i_23] [(signed char)13] [i_23] [(short)4] [(short)11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-372)) ? (((/* implicit */int) arr_41 [i_24] [i_24] [i_0 - 1] [i_25])) : (((/* implicit */int) arr_41 [i_0 - 1] [(short)4] [i_0] [18U]))));
                        }
                        var_65 |= ((/* implicit */signed char) ((var_8) >> (((((/* implicit */int) arr_85 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [(_Bool)1])) - (235)))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (signed char i_30 = 2; i_30 < 20; i_30 += 2) /* same iter space */
            {
                var_66 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) var_2))));
                var_67 = ((/* implicit */short) (-(((/* implicit */int) arr_85 [i_0] [i_0] [i_0 + 1] [i_0] [i_30] [i_30 + 1] [i_0]))));
            }
            for (signed char i_31 = 2; i_31 < 20; i_31 += 2) /* same iter space */
            {
                var_68 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)91)) & (((/* implicit */int) (short)-31782))));
                var_69 = ((/* implicit */unsigned long long int) arr_41 [i_31] [(signed char)1] [i_31 - 2] [i_0 - 1]);
                /* LoopNest 2 */
                for (unsigned char i_32 = 3; i_32 < 19; i_32 += 1) 
                {
                    for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
                    {
                        {
                            arr_100 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (short)-20558)) + (((/* implicit */int) (unsigned short)17953))));
                            var_70 |= ((/* implicit */unsigned long long int) 3065646213U);
                        }
                    } 
                } 
                var_71 = ((/* implicit */signed char) ((((/* implicit */int) (short)31791)) <= (((/* implicit */int) (short)(-32767 - 1)))));
            }
        }
        for (short i_34 = 0; i_34 < 21; i_34 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_35 = 0; i_35 < 21; i_35 += 1) 
            {
                for (unsigned int i_36 = 0; i_36 < 21; i_36 += 3) 
                {
                    {
                        var_72 *= ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) arr_95 [i_0] [(unsigned char)0] [i_0] [(unsigned char)0] [i_0] [i_0])))));
                        arr_107 [i_0] [i_34] [i_35] [i_34] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [(signed char)16])) ? (((/* implicit */int) arr_56 [i_36])) : (((/* implicit */int) arr_56 [9U]))));
                    }
                } 
            } 
            arr_108 [i_0] [i_34] = ((/* implicit */long long int) ((unsigned int) arr_103 [i_0 + 1] [i_0] [i_0]));
        }
    }
    var_73 = ((/* implicit */unsigned long long int) var_4);
    var_74 = ((/* implicit */long long int) var_8);
}
