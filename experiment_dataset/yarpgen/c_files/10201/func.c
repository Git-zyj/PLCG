/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10201
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
    var_18 = ((/* implicit */unsigned long long int) var_17);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            var_19 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_13)) ^ (var_0)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [11LL] [i_1]))) & (18446744073709551609ULL))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((long long int) 18446744073709551615ULL)))))));
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 6ULL)) ? (7ULL) : (2177394664873779082ULL))))));
        }
        for (int i_2 = 1; i_2 < 17; i_2 += 4) /* same iter space */
        {
            var_21 = ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_0 [i_2] [i_2 - 1])))))) != (min((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)110)), (arr_3 [(unsigned char)8] [i_0] [i_0])))), (((((/* implicit */_Bool) 11473527466187224169ULL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_15)))))));
            var_22 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 9ULL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32156))))) : (((((((/* implicit */_Bool) var_6)) ? (6ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)25))))) - (((/* implicit */unsigned long long int) min((var_0), (((/* implicit */long long int) var_7)))))))));
            var_23 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) != (((/* implicit */int) arr_7 [i_0])))))));
            /* LoopSeq 4 */
            for (signed char i_3 = 1; i_3 < 16; i_3 += 2) 
            {
                var_24 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_2 + 2]))))), (((long long int) var_16))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    for (signed char i_5 = 2; i_5 < 18; i_5 += 2) 
                    {
                        {
                            var_25 += ((/* implicit */unsigned long long int) ((((long long int) var_1)) - (-9223372036854775800LL)));
                            var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) < (arr_13 [i_2 + 2] [i_3 - 1]))))) == (((unsigned int) arr_13 [i_2 + 2] [i_3 - 1]))));
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551607ULL)))))))) % (((unsigned int) ((var_8) * (((/* implicit */unsigned long long int) arr_6 [i_0] [i_2] [i_0])))))));
                            var_28 = (-((~(arr_13 [i_0] [i_0]))));
                        }
                    } 
                } 
            }
            for (unsigned char i_6 = 0; i_6 < 20; i_6 += 1) 
            {
                var_29 = ((/* implicit */_Bool) max(((+(arr_17 [i_6]))), ((~(((long long int) 9223372036854775799LL))))));
                var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_15))) ^ (((int) var_16))))) && (((/* implicit */_Bool) var_6))));
                var_31 = ((/* implicit */short) var_10);
                var_32 = ((/* implicit */_Bool) var_2);
            }
            for (long long int i_7 = 1; i_7 < 19; i_7 += 4) /* same iter space */
            {
                var_33 = ((int) (!(((/* implicit */_Bool) arr_22 [i_2 - 1] [i_2] [i_2]))));
                var_34 = ((/* implicit */short) ((_Bool) min((((6088567010349685322LL) & (-9223372036854775790LL))), (9223372036854775794LL))));
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 20; i_8 += 1) 
                {
                    for (signed char i_9 = 1; i_9 < 18; i_9 += 2) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned int) min((11473527466187224149ULL), (((/* implicit */unsigned long long int) 9223372036854775799LL))));
                            var_36 = ((/* implicit */long long int) (~(((((_Bool) 7757683889363047300ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 3996325564976592148LL)))) : (((((/* implicit */_Bool) arr_2 [i_7])) ? (((/* implicit */unsigned long long int) arr_9 [i_9 - 1] [i_8] [i_8] [(signed char)5])) : (var_4)))))));
                            var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) (unsigned short)53174))));
                            var_38 += ((((/* implicit */int) ((4294967295U) > (((/* implicit */unsigned int) 1023))))) != (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) (short)1)))))));
                            var_39 = ((/* implicit */long long int) (~(((max((arr_23 [i_2]), (((/* implicit */unsigned long long int) var_6)))) | (((/* implicit */unsigned long long int) arr_15 [i_2] [i_7] [i_8] [i_2]))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_10 = 2; i_10 < 18; i_10 += 4) 
                {
                    var_40 = ((/* implicit */unsigned char) (unsigned short)53150);
                    var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) ((((/* implicit */int) (short)1)) > (1912917390))))));
                }
                var_42 = max((((/* implicit */unsigned long long int) ((signed char) (-(18446744073709551615ULL))))), (var_16));
            }
            for (long long int i_11 = 1; i_11 < 19; i_11 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned int i_12 = 1; i_12 < 19; i_12 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (int i_13 = 0; i_13 < 20; i_13 += 1) 
                    {
                        var_43 += (~(((unsigned int) max((var_3), (((/* implicit */long long int) var_7))))));
                        var_44 = ((/* implicit */unsigned char) min(((+(1122900658))), ((-(((/* implicit */int) (signed char)-24))))));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_45 *= ((/* implicit */unsigned int) var_5);
                        var_46 = ((/* implicit */unsigned short) max((min((arr_16 [i_11 + 1] [i_11 + 1] [i_11 + 1] [10ULL]), (arr_13 [i_2 + 1] [i_11 - 1]))), (((arr_16 [i_11 + 1] [i_11 - 1] [i_11 + 1] [i_11]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_15 = 4; i_15 < 17; i_15 += 1) 
                    {
                        var_47 = ((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_12 - 1]))));
                        var_48 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1065323104)) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) (_Bool)1))));
                        var_49 = ((/* implicit */_Bool) var_17);
                    }
                    for (signed char i_16 = 1; i_16 < 17; i_16 += 4) 
                    {
                        var_50 = ((/* implicit */int) (((((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */unsigned long long int) (-(4294967289U)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_3)) : (11400278401222836195ULL))))) * (((((/* implicit */_Bool) arr_23 [i_11 + 1])) ? (arr_23 [i_11 - 1]) : (((/* implicit */unsigned long long int) 16777215U))))));
                        var_51 = ((/* implicit */unsigned long long int) max((arr_27 [i_0] [i_11 + 1] [i_16 - 1]), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)12353)) && (((/* implicit */_Bool) 7046465672486715416ULL)))))));
                        var_52 = ((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) (unsigned char)67)))));
                        var_53 = ((/* implicit */short) (-(((((((/* implicit */_Bool) var_13)) ? (arr_28 [i_16] [18ULL] [(signed char)13] [13] [18ULL] [i_16]) : (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_11]))))) & (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)53182), (((/* implicit */unsigned short) (unsigned char)124))))))))));
                        var_54 = ((/* implicit */unsigned long long int) arr_14 [i_0] [i_2 + 1] [i_11]);
                    }
                    var_55 = ((/* implicit */_Bool) ((unsigned long long int) min((arr_15 [i_11 - 1] [7ULL] [i_11 + 1] [i_11]), (arr_15 [i_0] [i_0] [i_0] [i_0]))));
                    var_56 = ((/* implicit */unsigned char) max((var_56), (((/* implicit */unsigned char) max((((long long int) (_Bool)1)), (((/* implicit */long long int) (-(((/* implicit */int) var_1))))))))));
                    var_57 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) arr_46 [i_2] [i_2 + 3] [i_2] [10ULL] [i_2 + 2]))) ? (((/* implicit */unsigned long long int) min((-9223372036854775800LL), (var_0)))) : (max((arr_13 [i_2 - 1] [i_2 + 1]), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_2 + 3]))))));
                }
                /* vectorizable */
                for (unsigned int i_17 = 1; i_17 < 19; i_17 += 2) /* same iter space */
                {
                    var_58 ^= ((/* implicit */unsigned long long int) (_Bool)1);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_18 = 1; i_18 < 17; i_18 += 2) 
                    {
                        var_59 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 6ULL)) ? (-4746584816280560003LL) : (-281474976710656LL))) ^ ((-(281474976710650LL)))));
                        var_60 *= ((/* implicit */unsigned long long int) ((arr_38 [i_0] [i_0] [i_0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0])))));
                    }
                    var_61 &= ((/* implicit */unsigned char) ((arr_48 [i_17 - 1] [i_11 + 1] [9] [i_2 + 3] [9]) && (((/* implicit */_Bool) arr_38 [i_11 + 1] [i_11 - 1] [i_11 + 1]))));
                }
                /* LoopSeq 3 */
                for (unsigned long long int i_19 = 3; i_19 < 19; i_19 += 1) 
                {
                    var_62 &= ((/* implicit */int) arr_41 [i_0] [i_11] [(signed char)10] [i_19] [i_2] [15]);
                    var_63 = ((/* implicit */long long int) (~(((/* implicit */int) min((((/* implicit */unsigned char) arr_14 [i_19 - 3] [i_2 + 2] [(_Bool)1])), ((unsigned char)67))))));
                }
                /* vectorizable */
                for (long long int i_20 = 1; i_20 < 17; i_20 += 2) /* same iter space */
                {
                    var_64 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) > (9223372036854775799LL))))) * ((-(var_5)))));
                    var_65 = ((long long int) ((_Bool) var_15));
                    var_66 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) && (((-64631712) != (((/* implicit */int) (_Bool)1))))));
                    var_67 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) 9223372036854775792LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_45 [i_11])))) : (arr_44 [i_20] [i_20] [i_20] [i_11 + 1] [i_11])));
                }
                for (long long int i_21 = 1; i_21 < 17; i_21 += 2) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_22 = 0; i_22 < 20; i_22 += 4) 
                    {
                        var_68 = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) max(((unsigned char)58), (var_14))))))), ((signed char)106)));
                        var_69 = (~(((((/* implicit */long long int) ((/* implicit */int) var_11))) ^ (arr_56 [i_21 + 2] [i_11 - 1]))));
                    }
                    for (long long int i_23 = 3; i_23 < 16; i_23 += 1) 
                    {
                        var_70 = ((/* implicit */unsigned char) -9223372036854775800LL);
                        var_71 = ((/* implicit */unsigned char) ((unsigned long long int) ((9999956514656899455ULL) * (((((/* implicit */unsigned long long int) -9223372036854775777LL)) / (22ULL))))));
                    }
                    for (unsigned char i_24 = 0; i_24 < 20; i_24 += 4) 
                    {
                        var_72 = ((/* implicit */_Bool) -1817474813);
                        var_73 &= ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) (signed char)-113)))))));
                    }
                    for (long long int i_25 = 3; i_25 < 17; i_25 += 1) 
                    {
                        var_74 = ((/* implicit */signed char) max((var_74), (((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((((/* implicit */int) arr_14 [i_0] [i_0] [i_0])) - (((/* implicit */int) (signed char)-10))))))))))));
                        var_75 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) (unsigned char)237)) << (((((/* implicit */int) (signed char)-123)) + (141))))))), (18446744073709551596ULL)));
                        var_76 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)237))) + (arr_16 [i_21] [i_2 + 3] [18LL] [(_Bool)1]))) : (((/* implicit */unsigned long long int) (+(var_2))))));
                        var_77 = ((/* implicit */long long int) max((var_77), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_17 [2U]))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))))))));
                    }
                    var_78 = ((/* implicit */unsigned char) max((var_78), (((/* implicit */unsigned char) ((signed char) (unsigned char)98)))));
                    var_79 = ((/* implicit */unsigned int) max((min(((~(6265576842490670831LL))), (((/* implicit */long long int) ((9223372036854775782LL) >= (arr_59 [i_21] [i_11] [i_2] [12U] [i_0])))))), (((/* implicit */long long int) (~(((int) var_5)))))));
                    var_80 = ((/* implicit */unsigned long long int) (unsigned char)248);
                }
            }
        }
        /* vectorizable */
        for (int i_26 = 1; i_26 < 17; i_26 += 4) /* same iter space */
        {
            var_81 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)15)) >= (((/* implicit */int) arr_51 [i_0] [i_0] [i_0] [i_26 - 1] [i_26 + 3] [(_Bool)1]))));
            /* LoopSeq 1 */
            for (unsigned long long int i_27 = 2; i_27 < 19; i_27 += 2) 
            {
                var_82 = ((/* implicit */int) arr_69 [i_27 - 2] [i_26 + 2] [i_27] [i_27 - 2] [i_26 + 2]);
                var_83 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_49 [i_26 + 3] [i_26 + 3] [(unsigned short)19] [i_26] [i_26])) ? (((/* implicit */int) arr_67 [i_0] [i_0] [15] [(signed char)9] [i_0] [i_0] [i_0])) : ((-(((/* implicit */int) var_10))))));
                /* LoopNest 2 */
                for (long long int i_28 = 1; i_28 < 17; i_28 += 1) 
                {
                    for (long long int i_29 = 0; i_29 < 20; i_29 += 1) 
                    {
                        {
                            var_84 = ((/* implicit */int) ((signed char) arr_73 [i_27 - 2] [i_26 - 1] [i_26 - 1]));
                            var_85 &= ((/* implicit */long long int) 11017840767172019662ULL);
                        }
                    } 
                } 
            }
            var_86 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)48))))) ? (9223372036854775777LL) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1)))))));
        }
        var_87 = ((/* implicit */short) ((int) (+(((/* implicit */int) (short)-3)))));
    }
    var_88 = ((/* implicit */unsigned char) min((var_88), (((/* implicit */unsigned char) min((((var_0) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_17))))), (min((-9223372036854775793LL), (var_2))))))))));
}
