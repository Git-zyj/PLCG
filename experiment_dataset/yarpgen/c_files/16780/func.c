/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16780
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
    var_11 = ((/* implicit */unsigned int) min((((((var_10) < (((/* implicit */int) var_0)))) ? (((-969843898) / (((/* implicit */int) (short)10239)))) : (((/* implicit */int) var_5)))), (((/* implicit */int) ((((((/* implicit */int) (short)-10239)) ^ (var_3))) >= (((/* implicit */int) ((2147450880) <= (var_1)))))))));
    var_12 *= ((/* implicit */short) max((((((((/* implicit */_Bool) var_0)) ? (var_6) : (2125734070))) * (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (-2023176318))))), (var_10)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_13 = ((/* implicit */short) (unsigned short)1);
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) arr_1 [i_0] [(_Bool)1]))));
        /* LoopSeq 3 */
        for (long long int i_1 = 3; i_1 < 21; i_1 += 2) /* same iter space */
        {
            var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) arr_1 [i_0] [i_0]))));
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    {
                        var_16 *= ((/* implicit */int) ((max((arr_3 [i_2 - 2] [i_1 + 3] [i_1 + 2]), (arr_3 [i_2 - 2] [i_1 + 2] [i_1 + 1]))) != (arr_3 [i_2 - 2] [i_1 + 4] [i_1 + 2])));
                        arr_11 [i_0] = ((/* implicit */unsigned char) min(((((!(((/* implicit */_Bool) 241590963082692571LL)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-25580))))) : (arr_0 [i_0]))), (((/* implicit */unsigned long long int) 9223372036854775807LL))));
                    }
                } 
            } 
        }
        for (long long int i_4 = 3; i_4 < 21; i_4 += 2) /* same iter space */
        {
            arr_16 [i_0] [(short)8] [23ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */int) (short)24009)) * (((/* implicit */int) var_8)))), (((/* implicit */int) arr_1 [i_0] [i_4]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) ((long long int) 241590963082692571LL))))))) : (arr_6 [(_Bool)1] [i_0] [i_0] [(short)8])));
            arr_17 [i_0] [i_0] = 2003699211;
        }
        for (long long int i_5 = 3; i_5 < 21; i_5 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (short i_6 = 2; i_6 < 22; i_6 += 3) /* same iter space */
            {
                /* LoopSeq 4 */
                for (unsigned int i_7 = 0; i_7 < 25; i_7 += 1) 
                {
                    var_17 = ((/* implicit */int) (((((~(arr_18 [i_0] [i_0] [(short)14]))) >> (((/* implicit */int) arr_13 [i_0] [i_5] [(_Bool)1])))) ^ (((((/* implicit */long long int) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) arr_23 [i_0] [i_5 - 1] [i_7] [i_0]))))) | (7521206687004723719LL)))));
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((max((((((/* implicit */int) (unsigned short)58851)) != (((/* implicit */int) (_Bool)1)))), (arr_2 [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_7]))) : (arr_6 [i_0] [20] [(short)24] [i_7]))))));
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0])) ? (((/* implicit */int) arr_24 [i_5 + 1] [i_5 + 4] [i_6 - 2] [i_6 - 1])) : (arr_3 [i_7] [i_5 + 1] [i_6 + 3])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_24 [i_7] [i_6 + 2] [i_5 + 4] [i_0])) >= (((/* implicit */int) var_5))))) << (((arr_12 [i_7] [(unsigned char)23]) - (223392843)))))) : (max((18446744073709551607ULL), (5472516912559718276ULL)))))));
                    var_20 += ((/* implicit */short) var_7);
                    var_21 = arr_7 [i_7] [i_5 + 4] [(unsigned char)14];
                }
                for (short i_8 = 0; i_8 < 25; i_8 += 3) /* same iter space */
                {
                    arr_29 [i_0] [i_0] = ((/* implicit */long long int) var_5);
                    var_22 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_22 [(short)20] [i_6 - 1] [i_8])) ? (((((/* implicit */_Bool) arr_19 [i_0] [i_0] [15ULL])) ? (((/* implicit */int) arr_25 [i_0] [i_5] [i_6])) : (((/* implicit */int) arr_10 [i_0] [i_6])))) : (var_6)))));
                    var_23 = min((((((/* implicit */_Bool) arr_3 [i_0] [i_5] [i_6 - 1])) ? (((/* implicit */int) arr_4 [i_0] [i_5 - 3] [i_0])) : (((/* implicit */int) arr_25 [i_0] [i_5 - 2] [(short)0])))), (((/* implicit */int) arr_14 [i_0] [i_0])));
                    arr_30 [4ULL] [i_0] [1U] [(_Bool)1] [i_8] = ((/* implicit */unsigned long long int) (+(arr_15 [i_6] [i_5])));
                }
                for (short i_9 = 0; i_9 < 25; i_9 += 3) /* same iter space */
                {
                    arr_34 [i_9] [i_5 - 2] [(unsigned char)20] [(unsigned char)24] &= ((/* implicit */unsigned char) ((arr_21 [i_0] [6LL]) * (((/* implicit */unsigned long long int) ((((arr_32 [i_0] [4ULL]) == (var_4))) ? (((/* implicit */int) arr_2 [i_0])) : (min((-2023176306), (((/* implicit */int) arr_14 [(_Bool)1] [i_5])))))))));
                    arr_35 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((((/* implicit */_Bool) arr_14 [i_0] [i_5 - 2])) ? (arr_32 [i_0] [i_0]) : (((/* implicit */unsigned long long int) -2023176302)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0]))))))));
                }
                for (short i_10 = 0; i_10 < 25; i_10 += 3) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned long long int) arr_24 [i_0] [(unsigned char)21] [i_6] [(unsigned char)21]);
                    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)18551)))))));
                    var_26 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) min(((unsigned char)6), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */int) ((6984120116113697068ULL) == (var_7)))) : (((/* implicit */int) var_2))))));
                    var_27 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_22 [i_0] [i_5] [i_5]))))))))) >= (134209536U)));
                }
                var_28 -= ((/* implicit */unsigned int) (_Bool)1);
                var_29 = 2023176302;
            }
            for (short i_11 = 2; i_11 < 22; i_11 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (short i_12 = 0; i_12 < 25; i_12 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_13 = 1; i_13 < 23; i_13 += 4) /* same iter space */
                    {
                        var_30 = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                        var_31 += ((/* implicit */_Bool) arr_44 [11LL] [i_11] [i_12]);
                    }
                    for (unsigned short i_14 = 1; i_14 < 23; i_14 += 4) /* same iter space */
                    {
                        arr_53 [i_0] [i_5 + 4] [6LL] [i_12] [20] [i_0] [i_11] &= ((/* implicit */long long int) arr_21 [i_5 - 2] [i_12]);
                        arr_54 [i_0] [i_14 - 1] = ((((min((((/* implicit */int) arr_50 [i_0])), (arr_46 [15ULL] [i_12] [15ULL] [i_5]))) >> (((/* implicit */int) min(((unsigned char)255), (((/* implicit */unsigned char) var_2))))))) < (((/* implicit */int) (short)1383)));
                        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) - (((((/* implicit */long long int) ((/* implicit */int) arr_36 [i_11 - 2] [i_11 - 2] [i_11 - 1]))) - (arr_33 [i_11 + 3] [i_11] [i_11 + 2] [i_11 - 2])))));
                        var_33 ^= ((/* implicit */unsigned int) (unsigned char)81);
                    }
                    var_34 ^= ((/* implicit */long long int) (((!(((/* implicit */_Bool) (+(arr_33 [2ULL] [i_11 - 2] [i_5 + 4] [i_0])))))) ? (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_24 [17LL] [i_0] [13] [i_0]))))), ((-(arr_47 [(short)2] [i_5] [i_11] [(short)2] [18LL] [i_12]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22404)))));
                }
                arr_55 [i_0] [i_5 + 2] [i_11] [i_0] = ((/* implicit */long long int) arr_48 [i_0] [i_0] [i_0]);
                /* LoopSeq 2 */
                for (unsigned long long int i_15 = 0; i_15 < 25; i_15 += 3) 
                {
                    var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) arr_51 [i_0] [i_5] [i_5 - 2] [i_5 - 2] [i_0] [4]))));
                    arr_58 [i_0] [i_15] [i_11] [i_5 + 4] [i_5] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_41 [(unsigned short)0] [i_5] [(unsigned short)0] [(unsigned short)0]))));
                    var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) max((883804814), (((/* implicit */int) (_Bool)1)))))));
                    arr_59 [20] [i_5 - 2] [i_5] [i_0] [i_5] = ((/* implicit */unsigned char) max((((/* implicit */short) ((281474976645120LL) > (((/* implicit */long long int) (+(((/* implicit */int) arr_56 [i_0])))))))), ((short)32127)));
                }
                for (unsigned short i_16 = 0; i_16 < 25; i_16 += 2) 
                {
                    var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) 7521206687004723719LL)) != (((arr_48 [i_0] [i_0] [i_16]) ? (((/* implicit */unsigned long long int) arr_37 [i_0] [i_5 + 1] [13ULL] [(short)16])) : (arr_21 [i_0] [i_0])))))) / (((/* implicit */int) var_8)))))));
                    arr_62 [i_0] [i_5 + 1] [(short)21] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_61 [i_0] [i_0] [i_0] [i_0])) >= (((/* implicit */int) arr_36 [i_0] [i_5 - 3] [i_11 + 1])))))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1605602794)) ? (((/* implicit */long long int) 262136)) : (-9223372036854775807LL)))) ? (var_4) : (max((((/* implicit */unsigned long long int) arr_27 [i_16] [11] [i_5 + 1] [11])), (arr_5 [i_11] [i_0] [i_0])))))));
                }
            }
            var_38 = ((/* implicit */unsigned short) arr_44 [i_5 - 3] [i_5 - 3] [i_0]);
            /* LoopNest 2 */
            for (int i_17 = 3; i_17 < 23; i_17 += 1) 
            {
                for (int i_18 = 0; i_18 < 25; i_18 += 3) 
                {
                    {
                        arr_67 [i_0] [i_0] [(short)21] [i_18] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_12 [i_18] [i_5])) + (((arr_38 [i_0] [i_5] [i_17 - 2] [i_18]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [20ULL] [i_0] [i_18]))) : (arr_52 [7LL] [i_5 - 2] [(_Bool)1])))))) || (((((/* implicit */_Bool) arr_31 [i_5 + 3] [i_5 - 3] [i_5 + 4])) && (((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_5 - 2] [i_17 - 2]))))));
                        var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) var_8))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_19 = 0; i_19 < 25; i_19 += 4) 
                        {
                            var_40 -= ((/* implicit */unsigned short) ((min((var_7), (((/* implicit */unsigned long long int) arr_50 [i_0])))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_17] [i_17] [i_19])))));
                            var_41 = ((/* implicit */unsigned long long int) max((var_41), (min((((/* implicit */unsigned long long int) (_Bool)1)), (1624818871953315936ULL)))));
                            var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_17] [i_0] [(unsigned char)8])) ? (((((/* implicit */int) min((((/* implicit */short) arr_2 [i_19])), (arr_1 [i_0] [i_17])))) - (((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) arr_45 [i_19] [i_18] [i_17] [i_0] [i_0]))))))) : (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 2986591899717044938LL)))))));
                            var_43 = ((/* implicit */short) ((((((/* implicit */_Bool) 8ULL)) && (((((/* implicit */_Bool) 6755399441055744LL)) && (((/* implicit */_Bool) arr_65 [i_18] [i_18] [i_18])))))) || (((/* implicit */_Bool) ((min((var_7), (((/* implicit */unsigned long long int) var_8)))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [i_17 + 2] [i_18] [i_19])) / (((/* implicit */int) arr_42 [i_0] [i_0] [i_0] [i_0]))))))))));
                        }
                        var_44 = ((/* implicit */long long int) max((var_44), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) 9223372036854775807LL)), (((((/* implicit */_Bool) (short)3062)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) : (((arr_32 [i_0] [22LL]) | (arr_6 [i_18] [(unsigned short)4] [(unsigned short)4] [i_0]))))))))));
                    }
                } 
            } 
            arr_72 [i_0] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */long long int) var_3)) + (-7131998065570349189LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */int) (short)-15780)) : (((/* implicit */int) (short)27696))))) : (min((var_4), (((/* implicit */unsigned long long int) 1477040678U)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) 187622798)) : (arr_70 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (-210336996) : (((/* implicit */int) (unsigned char)5)))))));
            var_45 = ((/* implicit */short) arr_56 [i_0]);
        }
        var_46 += ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_60 [i_0] [18ULL] [18ULL]), (arr_60 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [(_Bool)1] [(_Bool)1] [i_0])) ? (arr_49 [i_0] [23ULL] [i_0] [i_0] [i_0]) : (arr_49 [i_0] [i_0] [i_0] [i_0] [i_0]))))))) : (((/* implicit */int) ((((/* implicit */unsigned int) 2147483647)) <= (134209536U))))));
        arr_73 [i_0] = ((/* implicit */long long int) arr_47 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    var_47 = ((/* implicit */unsigned char) ((var_10) & (var_1)));
}
