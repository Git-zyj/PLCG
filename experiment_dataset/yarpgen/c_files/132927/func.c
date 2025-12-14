/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132927
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            for (unsigned char i_2 = 4; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        arr_11 [1U] [i_1] [i_1] [i_1 + 2] = ((/* implicit */_Bool) (unsigned char)197);
                        var_13 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) (unsigned char)224)))));
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) /* same iter space */
                        {
                            arr_14 [i_0] [i_4] [(short)20] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_3)) % (var_5))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_3) <= (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))))) ? (((((/* implicit */unsigned long long int) var_3)) * (max((((/* implicit */unsigned long long int) var_7)), (var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1])))));
                            var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (+(((((/* implicit */long long int) ((/* implicit */int) var_11))) % (arr_7 [i_1 + 1] [i_1 + 3] [i_2 + 2] [i_3]))))))));
                            arr_15 [i_0] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (8414461446602522617LL)));
                        }
                        /* vectorizable */
                        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) /* same iter space */
                        {
                            var_15 = ((/* implicit */unsigned int) ((int) var_2));
                            var_16 += ((/* implicit */signed char) ((long long int) arr_4 [i_3] [i_3]));
                        }
                        /* vectorizable */
                        for (short i_6 = 3; i_6 < 20; i_6 += 3) 
                        {
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_6] = ((/* implicit */_Bool) ((unsigned int) (_Bool)1));
                            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_1 + 1] [i_2 + 1] [i_6 + 1])) ? (((/* implicit */unsigned long long int) var_2)) : (var_8))))));
                            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_16 [(short)6])))))));
                            var_19 += ((/* implicit */int) ((signed char) (((_Bool)1) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                        }
                        var_20 = ((/* implicit */unsigned short) (+(arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                    }
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        for (signed char i_8 = 3; i_8 < 19; i_8 += 4) 
                        {
                            {
                                arr_28 [i_0] [i_0] [i_2 - 3] [i_7] [i_8] = ((/* implicit */int) (unsigned short)14665);
                                arr_29 [i_0] [(_Bool)1] [i_0] [16ULL] [i_0] [i_0] = ((/* implicit */unsigned int) max((arr_27 [10LL] [i_1 - 1] [i_1 + 1] [i_1] [i_1 + 1]), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) << (((max((((/* implicit */unsigned long long int) var_3)), (arr_13 [i_0] [i_0]))) - (13790378797084266517ULL))))))));
                                var_21 += ((/* implicit */unsigned char) ((((_Bool) (unsigned char)94)) ? ((~((~(arr_26 [(unsigned char)1] [i_1] [(unsigned char)1] [i_7]))))) : (((/* implicit */long long int) (~(((/* implicit */int) var_7)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) var_5);
    /* LoopSeq 3 */
    for (int i_9 = 0; i_9 < 17; i_9 += 2) 
    {
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((min((max((((/* implicit */long long int) var_11)), (arr_26 [i_9] [i_9] [i_9] [i_9]))), (((/* implicit */long long int) min((var_4), (((/* implicit */short) var_6))))))) / (((((/* implicit */_Bool) var_8)) ? (var_12) : (((/* implicit */long long int) arr_33 [i_9])))))))));
        var_24 = ((/* implicit */long long int) (signed char)91);
        arr_34 [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_1), (var_6)))) < (((/* implicit */int) (unsigned short)32767))));
    }
    for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_11 = 0; i_11 < 20; i_11 += 4) 
        {
            arr_40 [i_10] = ((/* implicit */_Bool) arr_24 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]);
            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 6819619676639432130LL)) ^ (2ULL))))));
        }
        for (long long int i_12 = 0; i_12 < 20; i_12 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 4) 
            {
                /* LoopSeq 1 */
                for (signed char i_14 = 0; i_14 < 20; i_14 += 2) 
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (long long int i_15 = 0; i_15 < 20; i_15 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned int) ((((var_0) + (arr_35 [i_14]))) / (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) & (var_3))))));
                        arr_52 [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2611821634U)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) arr_4 [i_14] [i_10]))))) : (((/* implicit */int) var_11))));
                        arr_53 [i_14] = ((/* implicit */unsigned long long int) ((var_3) % (arr_17 [i_12] [i_12] [i_10] [i_12] [i_15] [i_10] [i_15])));
                    }
                    /* vectorizable */
                    for (long long int i_16 = 0; i_16 < 20; i_16 += 1) /* same iter space */
                    {
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((((/* implicit */int) var_6)) + (2147483647))) << (((/* implicit */int) (_Bool)0))))) % (arr_44 [i_10] [i_12])));
                        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32767)) < (((/* implicit */int) arr_2 [i_12]))));
                        var_29 = ((/* implicit */_Bool) var_12);
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_10] [i_10])) ^ (((/* implicit */int) var_4))));
                    }
                    /* vectorizable */
                    for (short i_17 = 1; i_17 < 19; i_17 += 4) 
                    {
                        arr_59 [i_10] = ((/* implicit */unsigned int) ((unsigned short) var_12));
                        arr_60 [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_8) & (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */int) (signed char)2))))) : (((var_11) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                        var_31 = ((/* implicit */int) arr_56 [8LL] [i_12] [i_14] [7U] [i_17 + 1] [i_14] [18ULL]);
                    }
                    for (unsigned int i_18 = 2; i_18 < 19; i_18 += 4) 
                    {
                        var_32 = ((/* implicit */unsigned long long int) var_6);
                        arr_63 [0U] = ((_Bool) arr_54 [i_10] [i_10] [i_10] [i_10] [i_10]);
                    }
                    var_33 = ((/* implicit */unsigned int) min((var_33), (((unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_54 [i_14] [i_14] [19U] [i_14] [i_14])) ? (var_3) : (arr_18 [i_14] [i_10] [i_10])))) ^ (((((/* implicit */_Bool) 34359705600ULL)) ? (6819619676639432144LL) : (((/* implicit */long long int) 4294967295U)))))))));
                    var_34 += ((/* implicit */unsigned char) (+(18446744073709551609ULL)));
                }
                arr_64 [i_10] [i_10] [i_12] [i_10] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_50 [7U] [i_12] [i_13])) * (((/* implicit */int) arr_50 [i_10] [i_12] [i_12]))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -5294558443648358765LL)), (17798867258326507963ULL)))) ? (max((((/* implicit */unsigned long long int) var_2)), (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) == (var_5))) ? (min((((/* implicit */unsigned long long int) var_11)), (var_0))) : (((/* implicit */unsigned long long int) var_12))))));
            }
            /* vectorizable */
            for (signed char i_19 = 0; i_19 < 20; i_19 += 1) 
            {
                var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_48 [0LL] [0LL] [0LL])) >> (((((/* implicit */int) var_1)) - (92)))));
                var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_12) ^ (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_19] [i_12] [i_10])))))) ? (5504756725623660449ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_2) >= (((/* implicit */int) var_10))))))));
                /* LoopNest 2 */
                for (unsigned int i_20 = 0; i_20 < 20; i_20 += 3) 
                {
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        {
                            arr_74 [i_10] [i_10] [i_12] [i_19] [12ULL] [i_21] = ((/* implicit */long long int) arr_0 [i_21] [i_12]);
                            var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) 31457280U))) ? (((var_10) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_10))));
                            var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */int) (short)-6582)) : (((/* implicit */int) ((unsigned char) var_3)))));
                            arr_75 [i_10] [i_12] [i_10] [i_21] [i_21] [i_21] [i_10] = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                arr_76 [i_10] [1U] [i_10] [i_12] = ((/* implicit */long long int) ((unsigned char) var_8));
            }
            for (unsigned short i_22 = 0; i_22 < 20; i_22 += 1) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_23 = 4; i_23 < 18; i_23 += 2) 
                {
                    var_39 += ((/* implicit */long long int) ((((/* implicit */int) arr_62 [i_23] [i_23 - 1] [i_23] [i_23 - 1] [i_23 - 4] [i_23 + 2])) >= (((/* implicit */int) var_7))));
                    arr_81 [1LL] [i_12] [i_12] [i_12] = ((/* implicit */_Bool) (+(arr_72 [i_23 - 2] [i_23 - 4] [19] [i_23 - 3])));
                    var_40 += ((/* implicit */unsigned short) ((unsigned char) (short)-20825));
                    /* LoopSeq 2 */
                    for (long long int i_24 = 0; i_24 < 20; i_24 += 4) 
                    {
                        var_41 = ((/* implicit */short) (+(((/* implicit */int) var_6))));
                        arr_84 [i_10] [i_12] [i_22] [i_23] [12ULL] [18LL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_25 [i_23 + 1] [i_23 + 2] [i_23 - 4] [i_23])) > (((((/* implicit */int) var_11)) * (-1)))));
                        var_42 = ((/* implicit */_Bool) (-(((/* implicit */int) var_11))));
                    }
                    for (unsigned char i_25 = 0; i_25 < 20; i_25 += 4) 
                    {
                        arr_89 [i_10] [i_10] [i_22] [i_23] [i_25] = ((/* implicit */short) ((((arr_58 [i_10] [19U] [0ULL] [i_10] [i_10] [i_10] [(short)19]) << (((5393682115033690712ULL) - (5393682115033690650ULL))))) ^ (((((/* implicit */_Bool) 7777583030869466585LL)) ? (((/* implicit */unsigned long long int) arr_66 [i_10] [i_10] [i_10])) : (var_5)))));
                        var_43 = ((/* implicit */unsigned long long int) min((var_43), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)255)) < (((/* implicit */int) (unsigned short)59236)))) ? (((/* implicit */long long int) ((int) 2599729043940387312LL))) : (var_12))))));
                        arr_90 [i_10] [i_12] [(signed char)18] = ((/* implicit */long long int) ((var_0) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_23 - 3])))));
                        var_44 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (var_0)));
                        var_45 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_87 [i_23 - 1] [i_23 + 2] [i_23 - 3])) || (var_10)));
                    }
                }
                arr_91 [i_10] [i_10] = ((/* implicit */long long int) ((short) ((arr_13 [5U] [5U]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))));
                var_46 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_9 [i_22] [i_22] [i_10] [i_12] [18ULL] [i_10]) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) 2099386492)) : (15681693642495118996ULL))) >> (((((/* implicit */int) var_1)) - (70))));
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_26 = 1; i_26 < 17; i_26 += 1) 
            {
                arr_96 [i_10] [i_10] [i_10] = ((((/* implicit */_Bool) 6038664523444157183ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (13053061958675860912ULL));
                /* LoopNest 2 */
                for (unsigned char i_27 = 1; i_27 < 19; i_27 += 1) 
                {
                    for (unsigned long long int i_28 = 0; i_28 < 20; i_28 += 2) 
                    {
                        {
                            var_47 = ((/* implicit */unsigned int) min((var_47), (((/* implicit */unsigned int) ((_Bool) ((var_11) && (((/* implicit */_Bool) var_7))))))));
                            var_48 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) << (((((/* implicit */int) (signed char)-36)) + (39)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) arr_68 [i_26 + 1] [i_26 + 1])) ? (((/* implicit */unsigned int) arr_9 [i_28] [4LL] [i_26] [i_27] [i_10] [i_26 + 1])) : (var_3)))));
                        }
                    } 
                } 
            }
            var_49 = ((/* implicit */unsigned long long int) min((var_49), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) <= (5393682115033690714ULL))))))) & (max((((arr_0 [i_12] [4LL]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_10] [i_10] [i_10] [i_10]))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) var_2)) : (arr_19 [i_12] [i_12] [i_12] [i_12] [i_10] [i_10]))))))))));
        }
        arr_103 [i_10] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((arr_78 [(signed char)12]) >> ((+(((/* implicit */int) var_10))))))) ^ (((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned int) (unsigned char)255))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)159), (((/* implicit */unsigned char) (signed char)(-127 - 1))))))) : (arr_95 [i_10] [i_10])))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_29 = 0; i_29 < 20; i_29 += 2) 
        {
            var_50 = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) << (((arr_73 [i_29] [i_10] [i_10] [i_10]) - (3523796171813093021LL)))));
            arr_107 [i_29] = ((/* implicit */int) arr_17 [i_10] [i_29] [6U] [i_29] [i_29] [i_29] [i_10]);
        }
        for (unsigned char i_30 = 1; i_30 < 19; i_30 += 4) 
        {
            var_51 = ((/* implicit */unsigned long long int) var_4);
            /* LoopSeq 4 */
            for (signed char i_31 = 0; i_31 < 20; i_31 += 2) 
            {
                var_52 = ((/* implicit */short) ((_Bool) ((arr_25 [i_31] [i_30 + 1] [i_31] [i_10]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_25 [i_10] [i_30 + 1] [i_31] [i_10])))));
                var_53 = ((/* implicit */long long int) ((max((((var_5) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_1)), (arr_93 [i_30])))))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)1)) ^ (arr_45 [i_31] [i_31] [i_30 - 1]))))));
            }
            for (long long int i_32 = 0; i_32 < 20; i_32 += 4) 
            {
                var_54 = ((/* implicit */short) max((((/* implicit */long long int) (short)24100)), (-2599729043940387291LL)));
                arr_118 [i_10] [i_30 - 1] [(unsigned char)18] = ((/* implicit */short) arr_104 [i_32] [i_32]);
                var_55 += ((/* implicit */_Bool) max((var_7), (((/* implicit */signed char) var_10))));
                arr_119 [i_10] [(_Bool)1] [(_Bool)1] [i_10] = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) arr_48 [i_10] [i_30] [i_32]))) ? (((/* implicit */int) ((var_5) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1))))))), (arr_72 [i_10] [i_30 + 1] [i_30 - 1] [i_30 + 1]));
            }
            /* vectorizable */
            for (unsigned char i_33 = 2; i_33 < 19; i_33 += 1) 
            {
                var_56 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)163)) & (((/* implicit */int) ((((/* implicit */_Bool) arr_117 [i_10] [i_10] [i_10])) || (((/* implicit */_Bool) var_3)))))));
                var_57 = ((/* implicit */_Bool) arr_100 [18U] [i_33] [i_33] [i_10]);
                var_58 |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) 6291456U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-97))) : (4028333045636635882LL))) ^ (((/* implicit */long long int) ((/* implicit */int) (short)32736)))));
            }
            for (int i_34 = 0; i_34 < 20; i_34 += 1) 
            {
                var_59 = ((/* implicit */short) ((((((/* implicit */_Bool) ((unsigned char) 18446744073709551598ULL))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_61 [i_10] [i_10] [8U] [i_10] [i_10])) % (var_5)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2553985471U)) ? (((/* implicit */int) ((((/* implicit */_Bool) 10921813743718360856ULL)) || (((/* implicit */_Bool) 1874578067077382219ULL))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9))))))) : (((((/* implicit */_Bool) -2788366524539718691LL)) ? (1395731565U) : (14U)))));
                arr_126 [i_34] = (!(((/* implicit */_Bool) ((unsigned int) 2553985481U))));
            }
            var_60 |= ((/* implicit */int) var_12);
        }
    }
    for (unsigned long long int i_35 = 0; i_35 < 24; i_35 += 4) 
    {
        var_61 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1304993228)) / (var_5)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((var_10) && (((/* implicit */_Bool) var_5)))))))) || (((_Bool) arr_129 [i_35] [i_35])));
        var_62 = ((/* implicit */short) ((((((long long int) (short)-24135)) + (9223372036854775807LL))) >> (((34909494181888LL) - (34909494181867LL)))));
    }
}
