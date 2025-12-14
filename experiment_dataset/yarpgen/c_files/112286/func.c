/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112286
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((int) var_9)) % (((((/* implicit */int) (signed char)-103)) % (((/* implicit */int) (short)-27879))))))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_19)))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 3; i_2 < 20; i_2 += 2) 
            {
                var_21 ^= ((/* implicit */unsigned char) arr_0 [18U]);
                /* LoopSeq 2 */
                for (short i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    arr_12 [i_0] [i_0] = arr_9 [i_0] [i_0] [i_0];
                    arr_13 [i_0] = ((/* implicit */unsigned long long int) min(((short)27889), (((/* implicit */short) (signed char)14))));
                    arr_14 [i_0] [i_0] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_9 [i_2 - 1] [i_2 - 2] [i_2 - 3])), (var_17)))) ? ((+((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [(signed char)5] [i_2 - 1] [9] [i_1] [i_0])))));
                    /* LoopSeq 1 */
                    for (int i_4 = 1; i_4 < 19; i_4 += 1) 
                    {
                        arr_17 [i_0] [i_0] [i_1] [i_3] [i_4] = ((/* implicit */unsigned long long int) (~(3206699799340751967LL)));
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) max((min((201326592U), (((/* implicit */unsigned int) max(((short)27879), (((/* implicit */short) (signed char)4))))))), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) -4096))))))))))));
                        arr_18 [i_0] [i_1] [i_0] [(_Bool)1] [i_4 + 1] [i_3] = ((/* implicit */signed char) min((((((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_4])) * (((/* implicit */int) arr_4 [2])))), (((((/* implicit */int) ((((/* implicit */int) (short)27884)) >= (((/* implicit */int) (signed char)0))))) - (((/* implicit */int) ((arr_2 [i_1] [i_2 - 3] [i_3]) < (((/* implicit */unsigned int) ((/* implicit */int) (short)27872))))))))));
                    }
                }
                for (short i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    arr_23 [i_5] [i_5] [i_0] [i_1] [i_0] = ((/* implicit */long long int) (+(((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) - (1044959133U))) - (((/* implicit */unsigned int) min((var_5), (((/* implicit */int) (signed char)-113)))))))));
                    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) min((max((((int) (-9223372036854775807LL - 1LL))), (((/* implicit */int) (short)27884)))), ((-(((/* implicit */int) (unsigned char)105)))))))));
                    arr_24 [i_0] [i_1] = ((/* implicit */short) max((((/* implicit */long long int) (signed char)-1)), (min((3206699799340751941LL), (((/* implicit */long long int) (signed char)109))))));
                }
                /* LoopSeq 4 */
                for (signed char i_6 = 1; i_6 < 17; i_6 += 2) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) max((arr_2 [i_0] [i_1] [i_2 + 1]), (((/* implicit */unsigned int) (signed char)-103))))) ? (((/* implicit */int) ((_Bool) (signed char)-122))) : ((~(((/* implicit */int) (signed char)91)))))) != (max((((/* implicit */int) max((((/* implicit */short) arr_10 [i_0] [i_0] [i_0] [i_0])), ((short)30281)))), (((((/* implicit */int) arr_26 [i_0] [i_0] [i_1] [i_0] [i_6 + 2] [i_7])) - (((/* implicit */int) arr_8 [i_0] [(signed char)12] [i_2 - 3] [i_6] [i_7]))))))));
                        var_25 -= ((/* implicit */int) var_1);
                        var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((min((15531740305685530228ULL), (((/* implicit */unsigned long long int) arr_16 [15U] [i_0] [15U] [(short)6] [i_7] [i_7])))), (var_12))))));
                        var_27 = ((/* implicit */_Bool) min((var_27), (arr_4 [i_0])));
                    }
                    arr_29 [i_0] [i_0] [i_2] [i_1] [2] |= ((/* implicit */signed char) max((max((((/* implicit */int) arr_4 [i_6 + 3])), (arr_27 [i_1] [i_1] [i_2 + 1] [i_1] [i_1]))), (((/* implicit */int) arr_10 [i_0] [i_0] [i_2 + 1] [i_6 + 4]))));
                }
                for (int i_8 = 0; i_8 < 21; i_8 += 1) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        var_28 = ((/* implicit */signed char) (+(((((arr_22 [i_0] [(_Bool)1] [i_8] [i_9]) ? (((/* implicit */unsigned long long int) arr_27 [i_9] [i_1] [(short)0] [i_1] [i_8])) : (18446744073709551614ULL))) >> (((/* implicit */int) arr_8 [i_2 - 2] [i_2] [i_2] [i_2] [i_2 - 2]))))));
                        var_29 = ((/* implicit */unsigned int) min((min((15531740305685530228ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-32767))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_2 - 2] [i_2] [i_2] [i_9])) && (((/* implicit */_Bool) var_1)))))));
                    }
                    for (int i_10 = 1; i_10 < 20; i_10 += 4) 
                    {
                        arr_40 [i_0] [i_1] [i_2] [i_0] [(unsigned char)17] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) 18446744073709551614ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (var_18))), (4294967276U))))));
                        arr_41 [i_0] [i_0] [i_1] [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (-(((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_1]))))), (var_9)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-3041))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-122))) : (11947605345086125547ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) / (18446744073709551614ULL)))) || (((/* implicit */_Bool) arr_34 [i_8] [i_8] [i_2 - 3] [i_8] [i_8]))))))));
                        var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) 12ULL))));
                        arr_42 [i_0] [i_0] [i_1] [i_10] [i_10] [i_1] = ((/* implicit */unsigned long long int) var_0);
                    }
                    var_31 = ((/* implicit */int) (unsigned char)174);
                    var_32 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)3031)) | (((/* implicit */int) (short)-27889))))) ? (min((((/* implicit */unsigned int) (short)23960)), (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_19)))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 1) /* same iter space */
                    {
                        arr_45 [i_0] [i_0] = ((/* implicit */int) ((_Bool) arr_2 [i_11] [(_Bool)1] [i_1]));
                        var_33 = ((/* implicit */short) (_Bool)1);
                        var_34 = ((/* implicit */unsigned int) (+(min((((-1819553065) - (((/* implicit */int) arr_38 [i_0] [i_1] [i_2] [i_8] [i_1] [i_11] [i_11])))), (((/* implicit */int) (signed char)-79))))));
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 1) /* same iter space */
                    {
                        var_35 = max((((var_19) ? (((/* implicit */int) arr_32 [i_2 - 1] [i_1])) : (((/* implicit */int) arr_32 [i_2 - 1] [2U])))), (((((/* implicit */int) arr_32 [i_2 + 1] [i_1])) + (((/* implicit */int) arr_32 [i_2 - 1] [i_2 - 2])))));
                        arr_48 [i_0] [i_1] [i_1] [i_1] [i_12] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (short)-4834)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)-79))))));
                    }
                    for (signed char i_13 = 0; i_13 < 21; i_13 += 1) 
                    {
                        arr_53 [i_0] [i_2] [(short)8] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) var_3)))))) && (((((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0])) || (((((/* implicit */_Bool) arr_50 [i_0] [i_1] [i_2] [i_8] [i_13])) || (((/* implicit */_Bool) (unsigned short)65535))))))));
                        arr_54 [i_0] [i_8] [i_2 - 3] [i_1] [i_0] = ((((/* implicit */int) (short)27872)) | (((/* implicit */int) (short)27908)));
                    }
                    var_36 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_0] [i_1] [20LL] [i_2 + 1])) % (((/* implicit */int) arr_19 [i_2 + 1] [i_2 + 1] [(signed char)16] [i_2 - 1]))))) ? (max((var_17), (((/* implicit */unsigned int) var_6)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 1160567097906008981LL)) || (((/* implicit */_Bool) arr_19 [i_2] [i_1] [18] [i_2 + 1]))))))));
                }
                for (unsigned int i_14 = 0; i_14 < 21; i_14 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_15 = 0; i_15 < 21; i_15 += 1) 
                    {
                        var_37 ^= ((/* implicit */long long int) (+(((((/* implicit */int) (signed char)-110)) % (((/* implicit */int) var_1))))));
                        arr_61 [i_0] [i_1] [i_0] [i_0] [i_1] [i_0] [i_14] = ((/* implicit */signed char) min((min((((/* implicit */int) (short)7)), (((((/* implicit */int) arr_28 [i_1] [i_14] [i_14])) - (((/* implicit */int) arr_4 [i_0])))))), (((int) (signed char)127))));
                    }
                    for (signed char i_16 = 0; i_16 < 21; i_16 += 1) 
                    {
                        var_38 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (-1160567097906008972LL) : (-1160567097906008972LL)))) ? (((/* implicit */int) arr_52 [i_16] [(signed char)8] [i_2 - 2] [i_14])) : (max((arr_59 [i_2]), (((/* implicit */int) arr_52 [i_0] [i_1] [(_Bool)1] [i_14])))))));
                        arr_64 [i_0] [12U] [i_1] [i_14] [i_0] = ((/* implicit */unsigned long long int) ((((_Bool) arr_37 [i_0] [i_14] [i_16] [i_14] [i_0])) ? (((/* implicit */unsigned int) max((((/* implicit */int) min((((/* implicit */unsigned char) var_7)), (arr_32 [i_14] [i_1])))), (((((/* implicit */int) (unsigned short)13838)) % (((/* implicit */int) (signed char)91))))))) : (2354067242U)));
                    }
                    /* LoopSeq 1 */
                    for (int i_17 = 1; i_17 < 19; i_17 += 3) 
                    {
                        arr_67 [i_0] [i_1] [i_2] [i_0] [i_0] [i_2] = ((/* implicit */int) max((min((((16777215ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)177))))), (((/* implicit */unsigned long long int) 4503462188417024LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_0] [i_2] [i_17 - 1]))) : (((((/* implicit */unsigned int) 1510647807)) % (2848148571U))))))));
                        var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) -1160567097906008983LL))));
                        var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) ((((/* implicit */int) ((3551664912U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0])))))) << (((((/* implicit */int) ((signed char) 12106901279801647484ULL))) - (94))))))));
                        var_41 ^= ((/* implicit */int) ((signed char) arr_16 [i_0] [i_0] [i_2] [i_0] [i_0] [i_2]));
                    }
                    var_42 -= ((/* implicit */short) (~(max((((((/* implicit */_Bool) -8634798523124996403LL)) ? (((/* implicit */int) (_Bool)0)) : (-2147483639))), ((-(((/* implicit */int) (signed char)-24))))))));
                }
                for (signed char i_18 = 1; i_18 < 20; i_18 += 2) 
                {
                    arr_71 [i_0] [2] [i_2] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((signed char) arr_5 [i_0]))), (((unsigned int) 0ULL)))))));
                    arr_72 [i_0] [i_1] [i_2] [i_0] [i_1] [i_0] = ((/* implicit */long long int) (((-(var_9))) != (((/* implicit */long long int) arr_63 [i_0] [i_0]))));
                }
            }
            arr_73 [i_0] [i_0] [i_0] = ((/* implicit */int) arr_51 [i_0] [i_1]);
            arr_74 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((-2147483639), (((/* implicit */int) (unsigned char)61))))) % (min((((/* implicit */unsigned long long int) 1160567097906008983LL)), (6339842793907904131ULL)))));
        }
        for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
        {
            /* LoopSeq 3 */
            for (signed char i_20 = 0; i_20 < 21; i_20 += 2) 
            {
                arr_79 [i_0] [i_0] [i_20] [i_0] = ((/* implicit */long long int) ((var_6) / (arr_49 [i_0])));
                arr_80 [i_0] [20] [i_19] [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) 12106901279801647508ULL)) ? (7467353173483062859ULL) : (6339842793907904107ULL))), (((/* implicit */unsigned long long int) (signed char)110))));
            }
            for (signed char i_21 = 0; i_21 < 21; i_21 += 1) 
            {
                arr_85 [(_Bool)1] [i_19 - 1] [i_0] = ((/* implicit */long long int) ((int) (+(((/* implicit */int) arr_75 [i_19 - 1] [i_19])))));
                /* LoopSeq 1 */
                for (signed char i_22 = 0; i_22 < 21; i_22 += 3) 
                {
                    var_43 ^= (!(((var_4) != (((/* implicit */int) (short)13373)))));
                    arr_88 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                }
            }
            for (unsigned long long int i_23 = 4; i_23 < 19; i_23 += 3) 
            {
                var_44 = ((/* implicit */int) ((min((((/* implicit */long long int) var_8)), (((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_23]))) - (arr_15 [11] [i_19] [i_19] [i_23 - 1] [i_0]))))) >= (((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned short)51702)) ? (((/* implicit */int) (signed char)-124)) : (((/* implicit */int) arr_90 [i_0] [i_0] [i_0])))))))));
                arr_91 [(_Bool)1] |= ((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_19 - 1] [i_23 - 4] [i_23 - 1] [i_23 - 4] [i_23 - 4])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)40))) * (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) (+(4123671232U))))));
            }
            var_45 = (i_0 % 2 == 0) ? (((((arr_63 [i_0] [i_0]) + (2147483647))) >> (((1613287627427675011ULL) - (1613287627427675000ULL))))) : (((((((arr_63 [i_0] [i_0]) - (2147483647))) + (2147483647))) >> (((1613287627427675011ULL) - (1613287627427675000ULL)))));
            arr_92 [i_0] [i_19] [i_0] = ((/* implicit */unsigned long long int) min(((short)-13369), (((/* implicit */short) (signed char)-82))));
        }
        var_46 = ((/* implicit */signed char) ((((unsigned long long int) 13507611512763441179ULL)) % (((/* implicit */unsigned long long int) 173893848))));
        arr_93 [i_0] [i_0] = ((/* implicit */_Bool) (signed char)28);
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_24 = 0; i_24 < 12; i_24 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) 
        {
            arr_99 [i_24] [i_25] [i_24] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((173893848) >> (((13344933665410886359ULL) - (13344933665410886357ULL)))))), (arr_94 [i_25 - 1] [i_25 - 1])))) || (((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)-20)))) ? (max((((/* implicit */unsigned long long int) var_11)), (13507611512763441177ULL))) : (((/* implicit */unsigned long long int) min((arr_58 [i_24] [i_25] [i_25 - 1] [i_24]), (((/* implicit */int) arr_77 [i_25] [i_24] [i_25]))))))))));
            var_47 = ((/* implicit */short) max((var_47), (((/* implicit */short) (((-(min((-2024376728), (arr_3 [i_24] [(_Bool)1]))))) / (((/* implicit */int) arr_32 [i_24] [i_24])))))));
            arr_100 [i_24] [i_25] [i_24] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 729487172U))));
            var_48 = ((/* implicit */long long int) min((var_48), (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) arr_22 [i_25 - 1] [i_25] [i_24] [i_24]))) ? (var_15) : (max((((arr_0 [18]) << (((arr_57 [(signed char)12] [i_25 - 1] [i_25] [i_25 - 1]) - (73254945))))), (((/* implicit */unsigned long long int) arr_97 [i_24])))))))));
        }
        arr_101 [i_24] = arr_30 [i_24] [i_24] [i_24] [i_24];
    }
    for (short i_26 = 0; i_26 < 11; i_26 += 1) 
    {
        arr_104 [i_26] [i_26] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)15)) << (((2641341694U) - (2641341677U)))))), (min((4294967295U), (((/* implicit */unsigned int) (_Bool)1))))));
        arr_105 [i_26] [i_26] = ((/* implicit */signed char) ((short) min((((/* implicit */unsigned long long int) arr_57 [(short)14] [i_26] [i_26] [i_26])), (((((/* implicit */_Bool) -133703255)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))));
        arr_106 [i_26] &= ((/* implicit */signed char) ((4939132560946110439ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
        arr_107 [i_26] = ((/* implicit */unsigned long long int) (+(min((((var_14) << (((((/* implicit */int) arr_19 [i_26] [i_26] [2] [i_26])) + (96))))), (((/* implicit */unsigned int) arr_34 [i_26] [i_26] [i_26] [i_26] [i_26]))))));
    }
}
