/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117489
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((signed char)0), ((signed char)0)))) || (((/* implicit */_Bool) min((((((/* implicit */int) (short)32757)) | (((/* implicit */int) (short)9)))), (((/* implicit */int) min((var_7), (((/* implicit */short) (signed char)0))))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min(((signed char)0), ((signed char)0)))) + (((/* implicit */int) (signed char)0))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */int) min(((signed char)-1), (((/* implicit */signed char) (_Bool)1))))) + (((/* implicit */int) min((((/* implicit */short) arr_1 [i_0] [i_0])), (max((arr_0 [(_Bool)1]), (((/* implicit */short) var_5)))))))));
        var_21 -= ((/* implicit */short) ((((((0) << (((((/* implicit */int) var_4)) + (145))))) / (((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) <= (((/* implicit */int) (signed char)4))))))) <= (((/* implicit */int) (signed char)-20))));
    }
    for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_22 = ((/* implicit */long long int) ((((/* implicit */int) min((var_6), (((/* implicit */short) ((((/* implicit */int) (unsigned char)0)) <= (((/* implicit */int) var_9)))))))) >= (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (short)0)) <= (((/* implicit */int) (short)7))))) <= (((/* implicit */int) arr_7 [i_2] [i_1])))))));
            /* LoopSeq 3 */
            for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) /* same iter space */
            {
                var_23 -= ((/* implicit */long long int) ((0U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)16)))));
                arr_13 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */short) var_1);
            }
            for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) /* same iter space */
            {
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */long long int) max((((/* implicit */int) max(((short)32767), (arr_16 [i_1] [i_1] [i_1])))), (((((/* implicit */int) arr_16 [i_1] [i_2] [(short)11])) | (((/* implicit */int) var_1))))))) >= (min((max((((/* implicit */long long int) 4294967292U)), (9223372036854775807LL))), (0LL)))));
                var_25 |= ((/* implicit */unsigned char) arr_9 [i_4] [i_4] [i_4]);
            }
            for (unsigned char i_5 = 0; i_5 < 22; i_5 += 3) /* same iter space */
            {
                var_26 |= ((/* implicit */unsigned char) (_Bool)0);
                var_27 = ((/* implicit */long long int) ((((/* implicit */int) (short)32757)) <= (((/* implicit */int) (signed char)0))));
            }
        }
        for (short i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            /* LoopSeq 4 */
            for (long long int i_7 = 0; i_7 < 22; i_7 += 3) 
            {
                var_28 = ((/* implicit */_Bool) var_9);
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 22; i_8 += 3) 
                {
                    for (signed char i_9 = 0; i_9 < 22; i_9 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (unsigned char)21))));
                            var_30 = ((/* implicit */unsigned long long int) arr_28 [i_9] [i_8] [i_8] [i_1]);
                            var_31 *= ((/* implicit */_Bool) arr_24 [i_6]);
                        }
                    } 
                } 
            }
            for (unsigned char i_10 = 0; i_10 < 22; i_10 += 4) 
            {
                arr_35 [18ULL] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) 4U)), (18446744073709551613ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))));
                var_32 = ((/* implicit */short) 18U);
            }
            for (unsigned int i_11 = 0; i_11 < 22; i_11 += 1) 
            {
                var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_11] [i_11]))) != (0LL)))) >= (((((/* implicit */int) var_1)) - (((/* implicit */int) (signed char)19)))))) || (arr_7 [i_11] [i_11]))))));
                var_34 = ((/* implicit */int) max((max((0LL), (((((/* implicit */long long int) 4294967295U)) - (var_8))))), (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) != (0LL))))) - (((((/* implicit */long long int) var_3)) & (var_15)))))));
            }
            for (long long int i_12 = 0; i_12 < 22; i_12 += 1) 
            {
                var_35 = ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned char)255)), (((((((/* implicit */int) (short)0)) + (7))) + (((((/* implicit */int) var_16)) - (((/* implicit */int) var_0))))))));
                arr_44 [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) (short)12))));
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_13 = 0; i_13 < 22; i_13 += 2) 
            {
                var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_6] [i_13])) && (((/* implicit */_Bool) arr_28 [i_1] [i_13] [i_13] [i_13]))))) | (((/* implicit */int) (signed char)121)))))));
                /* LoopSeq 4 */
                for (short i_14 = 0; i_14 < 22; i_14 += 3) 
                {
                    var_37 -= ((/* implicit */unsigned char) arr_31 [i_14] [i_14] [i_1] [i_14] [i_1]);
                    /* LoopSeq 4 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_10))) ^ (((((var_17) + (9223372036854775807LL))) << (((((/* implicit */int) var_4)) + (128))))))))));
                        var_39 |= var_1;
                    }
                    for (unsigned char i_16 = 0; i_16 < 22; i_16 += 2) /* same iter space */
                    {
                        var_40 *= ((/* implicit */signed char) arr_20 [i_13] [i_1] [i_1]);
                        arr_55 [i_14] [i_14] [i_14] [i_14] [i_14] |= ((/* implicit */short) ((4294967292U) - (arr_33 [i_16] [i_16] [i_14])));
                        var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)125)) || (((/* implicit */_Bool) arr_54 [i_1] [i_6] [i_13] [i_14] [i_16])))))));
                    }
                    for (unsigned char i_17 = 0; i_17 < 22; i_17 += 2) /* same iter space */
                    {
                        var_42 = ((/* implicit */unsigned char) arr_14 [(short)6] [(short)6] [i_13]);
                        var_43 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned char)255))));
                        var_44 = ((/* implicit */long long int) (signed char)-20);
                        var_45 = ((/* implicit */_Bool) max((var_45), (((/* implicit */_Bool) var_15))));
                        var_46 = ((/* implicit */short) ((((/* implicit */_Bool) arr_34 [i_6] [i_13] [i_6] [i_13])) || (((/* implicit */_Bool) arr_39 [i_6] [i_13] [i_6]))));
                    }
                    for (unsigned char i_18 = 0; i_18 < 22; i_18 += 2) /* same iter space */
                    {
                        var_47 = ((/* implicit */unsigned long long int) min((var_47), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) ^ (((((/* implicit */int) var_14)) & (((/* implicit */int) arr_43 [i_6] [i_13] [1LL])))))))));
                        var_48 = ((/* implicit */unsigned char) (short)32765);
                    }
                    var_49 = ((/* implicit */unsigned short) ((((arr_8 [i_14] [i_14]) * (((/* implicit */long long int) ((/* implicit */int) var_10))))) * (((/* implicit */long long int) ((((/* implicit */int) var_14)) * (((/* implicit */int) var_13)))))));
                    /* LoopSeq 1 */
                    for (short i_19 = 0; i_19 < 22; i_19 += 2) 
                    {
                        var_50 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)121)) > (((((/* implicit */int) (signed char)127)) - (((/* implicit */int) arr_57 [i_1] [i_1] [i_1]))))));
                        var_51 ^= ((/* implicit */signed char) arr_14 [i_6] [i_13] [i_19]);
                    }
                    var_52 = ((/* implicit */signed char) ((4294967295U) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-122)) < (((/* implicit */int) (_Bool)0))))))));
                }
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    var_53 = ((/* implicit */short) ((((((/* implicit */int) (short)-22)) - (((/* implicit */int) var_16)))) >> (((((((var_15) + (9223372036854775807LL))) << (((/* implicit */int) (signed char)0)))) - (7900879730014787453LL)))));
                    /* LoopSeq 1 */
                    for (short i_21 = 0; i_21 < 22; i_21 += 1) 
                    {
                        var_54 = ((/* implicit */short) ((((((/* implicit */int) (unsigned char)255)) % (((/* implicit */int) arr_30 [i_21])))) != (((/* implicit */int) (signed char)5))));
                        var_55 = ((/* implicit */unsigned short) ((((/* implicit */int) var_14)) * (((/* implicit */int) ((((/* implicit */int) (signed char)-3)) > (((/* implicit */int) var_10)))))));
                        var_56 = ((/* implicit */_Bool) max((var_56), (((/* implicit */_Bool) var_7))));
                        var_57 = ((/* implicit */_Bool) ((((/* implicit */int) arr_68 [i_1] [i_6] [i_6] [i_13] [i_13] [i_21])) + (((((/* implicit */int) var_18)) * (((/* implicit */int) (signed char)0))))));
                    }
                    arr_72 [i_1] = ((/* implicit */unsigned int) (short)15);
                }
                for (short i_22 = 1; i_22 < 19; i_22 += 4) 
                {
                    var_58 |= ((/* implicit */unsigned char) arr_16 [i_1] [21] [i_1]);
                    var_59 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_47 [i_6] [i_6] [1LL] [i_22]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-3)))))) && (((/* implicit */_Bool) (signed char)0))));
                }
                for (short i_23 = 0; i_23 < 22; i_23 += 3) 
                {
                    var_60 = arr_64 [i_6] [i_6] [i_6] [i_23];
                    var_61 = ((/* implicit */short) ((((/* implicit */int) (short)32767)) < (((/* implicit */int) var_0))));
                    var_62 = ((/* implicit */_Bool) ((var_8) + (((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_13] [i_6] [i_6])) + (((/* implicit */int) var_16)))))));
                    var_63 |= ((/* implicit */short) var_5);
                }
                var_64 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_70 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))) * (((((/* implicit */long long int) ((/* implicit */int) var_6))) / (var_17)))));
                var_65 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_16)) > (((/* implicit */int) (unsigned char)253))))) >= (((((/* implicit */int) arr_61 [i_13] [i_1] [i_13] [i_6] [i_13] [i_13] [i_13])) / (((/* implicit */int) var_6))))));
            }
            var_66 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((var_15) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)253))))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1] [i_1])) && (((/* implicit */_Bool) arr_56 [(short)12] [i_6] [3LL]))))))))) % (((/* implicit */int) ((((var_17) ^ (((/* implicit */long long int) ((/* implicit */int) (short)0))))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-4)) && (((/* implicit */_Bool) (short)-18)))))))))));
        }
        var_67 = ((/* implicit */_Bool) max((((((/* implicit */long long int) ((((/* implicit */int) var_6)) + (((/* implicit */int) (signed char)-12))))) & (var_8))), (((/* implicit */long long int) ((((arr_10 [i_1] [i_1]) + (((/* implicit */long long int) ((/* implicit */int) var_5))))) != (((/* implicit */long long int) ((((/* implicit */int) (short)31)) - (((/* implicit */int) arr_43 [i_1] [i_1] [i_1]))))))))));
        /* LoopSeq 2 */
        for (signed char i_24 = 0; i_24 < 22; i_24 += 3) 
        {
            var_68 *= ((/* implicit */_Bool) var_12);
            /* LoopSeq 3 */
            for (unsigned short i_25 = 0; i_25 < 22; i_25 += 2) 
            {
                var_69 |= (signed char)-12;
                var_70 *= ((/* implicit */unsigned char) ((((((((/* implicit */int) ((((/* implicit */long long int) var_11)) != (arr_74 [(signed char)1] [(signed char)1])))) | (((0) | (((/* implicit */int) var_14)))))) + (2147483647))) << (((((((/* implicit */int) (signed char)-12)) + (21))) - (9)))));
                arr_83 [i_1] [i_24] [i_1] = (short)17;
                var_71 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) var_2)) - (((/* implicit */int) (short)-18))))), (9223372036854775807LL)))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) % (((/* implicit */int) arr_82 [i_25] [(signed char)10] [i_1])))))));
            }
            for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) 
            {
                var_72 = ((/* implicit */long long int) max((var_72), (((/* implicit */long long int) ((((((/* implicit */int) (short)-31)) - (((/* implicit */int) (unsigned char)9)))) > (2147483647))))));
                arr_87 [i_24] [i_24] [i_24] [(unsigned char)4] |= ((/* implicit */short) max((((/* implicit */long long int) (signed char)0)), (min((min((arr_60 [i_1] [i_1]), (((/* implicit */long long int) 18U)))), (((/* implicit */long long int) ((0LL) > (((/* implicit */long long int) ((/* implicit */int) var_5))))))))));
                var_73 -= ((/* implicit */unsigned int) ((((((/* implicit */int) max((((/* implicit */unsigned short) var_12)), (var_18)))) - (((((/* implicit */int) arr_4 [i_1])) - (((/* implicit */int) arr_80 [i_1] [i_24] [i_26] [i_24])))))) + (((/* implicit */int) var_5))));
            }
            for (unsigned char i_27 = 4; i_27 < 20; i_27 += 1) 
            {
                arr_90 [(signed char)8] [i_27 - 2] = ((/* implicit */unsigned int) var_1);
                var_74 = ((/* implicit */long long int) var_1);
                var_75 = ((/* implicit */int) ((((/* implicit */int) arr_49 [i_1] [i_1] [i_1] [i_24] [i_24] [i_27])) > (((((/* implicit */int) min((arr_21 [i_1] [i_24] [i_27]), (arr_7 [i_24] [i_24])))) * (((/* implicit */int) var_4))))));
                var_76 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)19)) || (((/* implicit */_Bool) (signed char)11))));
            }
            var_77 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_63 [13LL] [i_24] [i_1] [i_24] [i_1])), (arr_75 [i_1] [i_1] [i_24] [i_1]))))) - (min((arr_6 [i_24] [i_1]), (((/* implicit */long long int) (unsigned short)0))))))) + (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)11))) & (18446744073709551604ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_24])))))));
        }
        for (short i_28 = 0; i_28 < 22; i_28 += 3) 
        {
            var_78 = ((/* implicit */unsigned int) max((((((0LL) * (((/* implicit */long long int) ((/* implicit */int) var_1))))) >> (((/* implicit */int) ((((/* implicit */int) var_16)) > (((/* implicit */int) arr_77 [i_1]))))))), (((/* implicit */long long int) ((((/* implicit */int) max(((unsigned char)0), (((/* implicit */unsigned char) var_13))))) >= (((/* implicit */int) ((((/* implicit */int) var_16)) < (((/* implicit */int) (short)32767))))))))));
            /* LoopSeq 1 */
            for (long long int i_29 = 0; i_29 < 22; i_29 += 4) 
            {
                var_79 |= ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) (short)0))) | (9223372036854775801LL))) < (((/* implicit */long long int) min((((var_11) + (arr_93 [i_29] [i_29] [i_29]))), (var_3))))));
                var_80 = ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_18)) + ((-2147483647 - 1))))), (min((arr_56 [i_1] [i_1] [i_29]), (((/* implicit */unsigned long long int) (signed char)0)))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))));
                arr_96 [i_28] [i_29] [i_29] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) | (min((((/* implicit */long long int) (short)0)), (min((((/* implicit */long long int) arr_24 [i_1])), (11LL)))))));
            }
            var_81 ^= ((/* implicit */unsigned int) arr_42 [i_1] [i_28] [(unsigned char)6]);
            /* LoopSeq 1 */
            for (long long int i_30 = 0; i_30 < 22; i_30 += 2) 
            {
                /* LoopSeq 1 */
                for (short i_31 = 0; i_31 < 22; i_31 += 4) 
                {
                    var_82 = ((/* implicit */short) arr_62 [i_1] [i_28] [i_28] [i_1] [i_30] [i_31]);
                    var_83 ^= ((((((6LL) >> (((/* implicit */int) (unsigned char)22)))) > (((/* implicit */long long int) ((((/* implicit */int) arr_31 [i_28] [i_30] [i_28] [i_28] [i_1])) << (((((/* implicit */int) (unsigned char)255)) - (238)))))))) || (min((((0LL) <= (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((((/* implicit */int) (signed char)127)) != (((/* implicit */int) var_1)))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_32 = 3; i_32 < 21; i_32 += 2) /* same iter space */
                    {
                        arr_107 [i_1] [i_28] [i_32] [i_31] [i_31] [i_28] = ((/* implicit */unsigned char) var_4);
                        var_84 = ((/* implicit */signed char) max((((/* implicit */long long int) max((((((/* implicit */int) var_0)) + (((/* implicit */int) var_2)))), (((/* implicit */int) max((var_16), (((/* implicit */short) arr_103 [i_1] [i_1] [i_1] [i_31])))))))), (var_8)));
                        var_85 ^= ((/* implicit */long long int) ((max((((arr_28 [i_28] [i_31] [i_31] [i_28]) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-4))))), (((/* implicit */unsigned int) ((((/* implicit */int) (short)32767)) > (((/* implicit */int) arr_41 [i_30] [i_1]))))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) min((((/* implicit */short) var_2)), (var_12)))) != (((/* implicit */int) var_9))))))));
                        var_86 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((((/* implicit */int) arr_92 [i_31])) * (((/* implicit */int) var_13))))) & (4294967295U))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_85 [(short)16])) - (((/* implicit */int) var_16))))) || (((var_1) || (((/* implicit */_Bool) var_6))))))))));
                        var_87 = ((/* implicit */long long int) 4294967292U);
                    }
                    for (unsigned int i_33 = 3; i_33 < 21; i_33 += 2) /* same iter space */
                    {
                        var_88 = ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned short)65535)))) < (((/* implicit */int) ((((/* implicit */_Bool) arr_59 [19LL])) && (((/* implicit */_Bool) (short)-32750)))))))) < (((/* implicit */int) var_14))));
                        var_89 = ((/* implicit */unsigned long long int) min((var_89), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) - (((((((/* implicit */int) var_0)) - (((/* implicit */int) arr_64 [12LL] [i_30] [i_30] [i_33])))) + (((((/* implicit */int) (short)-39)) - (((/* implicit */int) var_13)))))))))));
                    }
                }
                arr_111 [i_28] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)29)), (0U)));
            }
            var_90 |= ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_54 [i_28] [i_28] [(short)19] [i_28] [i_28])) || (((/* implicit */_Bool) arr_12 [i_28] [i_1] [i_1])))) && (((/* implicit */_Bool) arr_60 [i_1] [i_28]))))) << (min((((/* implicit */long long int) (short)32767)), (0LL)))));
        }
    }
}
