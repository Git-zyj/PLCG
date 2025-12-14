/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127458
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
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        var_16 = var_4;
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_1 [i_0 - 2] [i_0 - 2]), (arr_2 [i_0 - 1])))) ? (9760516510658109543ULL) : (((var_4) | (((/* implicit */unsigned long long int) var_8))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 3; i_2 < 9; i_2 += 3) 
        {
            var_18 *= ((/* implicit */unsigned char) arr_7 [i_1] [i_2] [i_1]);
            /* LoopSeq 2 */
            for (unsigned short i_3 = 4; i_3 < 7; i_3 += 1) 
            {
                var_19 = ((/* implicit */long long int) arr_9 [i_2] [i_2] [i_3]);
                /* LoopSeq 1 */
                for (long long int i_4 = 1; i_4 < 8; i_4 += 4) 
                {
                    arr_13 [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
                    var_20 = var_1;
                    arr_14 [i_1] [0ULL] [i_3] [i_4 + 2] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((8686227563051442059ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */int) arr_11 [i_3 - 3] [i_2 - 3] [i_2 - 3] [i_4 - 1] [i_1])) : (((((/* implicit */int) arr_11 [i_3 - 3] [i_2 - 3] [(_Bool)1] [i_4 - 1] [i_2 - 3])) >> (((((/* implicit */int) arr_11 [i_3 - 3] [i_2 - 3] [i_4] [i_4 - 1] [i_1])) - (17000)))))));
                }
                arr_15 [i_2] [i_2] = ((/* implicit */unsigned char) 9760516510658109546ULL);
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    arr_19 [i_2] [i_3] = arr_6 [i_2];
                    arr_20 [(short)6] [i_3] [(short)6] [i_2] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((8686227563051442069ULL) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)48364)) ? (((/* implicit */int) (unsigned short)48364)) : (((/* implicit */int) var_0)))))))), (((arr_5 [i_1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)5)), (arr_1 [i_5] [i_3])))))))));
                    arr_21 [i_2] [i_3] [i_3] [i_3] = 9760516510658109526ULL;
                    /* LoopSeq 4 */
                    for (long long int i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        var_21 = ((5360114597848766463ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))));
                        arr_24 [i_6] [i_5] [i_2] [5ULL] [i_1] = ((/* implicit */long long int) var_9);
                    }
                    for (signed char i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        arr_27 [i_2] [i_5] [i_5] [(unsigned short)2] [i_2] = ((/* implicit */unsigned long long int) var_10);
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((9760516510658109545ULL) << (((((4294967295U) >> (((var_10) - (403912572611593642LL))))) - (1048523U)))))) ? (((((/* implicit */unsigned long long int) arr_0 [i_3 - 2] [i_3 - 4])) / (arr_16 [i_1] [i_1] [i_3] [i_2 + 1] [i_3 - 3]))) : (((((/* implicit */_Bool) 3856283190760352092LL)) ? (arr_26 [i_2 - 2] [i_3 - 4] [i_3] [i_3] [i_3] [i_7]) : (12103436659561278402ULL)))));
                    }
                    for (signed char i_8 = 2; i_8 < 8; i_8 += 2) 
                    {
                        arr_30 [i_2] [i_3] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_10 [i_2 - 1] [5LL] [i_8 - 1] [i_3 + 3])), (var_8)));
                        arr_31 [i_1] [i_3] [i_2] = ((/* implicit */unsigned long long int) max(((unsigned short)65535), ((unsigned short)17177)));
                        var_23 = ((/* implicit */unsigned short) var_15);
                    }
                    for (signed char i_9 = 2; i_9 < 9; i_9 += 2) 
                    {
                        arr_36 [6LL] [i_2] [i_3 - 3] [i_3] [i_2] [i_9] = ((/* implicit */unsigned char) min((arr_26 [i_3 + 2] [i_3] [i_9 + 1] [i_9] [i_9 - 2] [i_9 + 1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551593ULL)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) (unsigned short)17153)))))));
                        var_24 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_29 [i_1] [i_9 + 1] [i_3] [i_1] [i_9] [i_2 - 2])), (((((/* implicit */_Bool) var_12)) ? (17785109462544239855ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                        var_25 = ((/* implicit */unsigned short) arr_2 [i_5]);
                    }
                }
            }
            for (unsigned int i_10 = 0; i_10 < 10; i_10 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_11 = 2; i_11 < 8; i_11 += 2) 
                {
                    for (unsigned char i_12 = 1; i_12 < 7; i_12 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)111)) ? (((/* implicit */unsigned long long int) var_14)) : (((((/* implicit */_Bool) 384159277795072757ULL)) ? (arr_38 [i_2 + 1] [i_2 - 1] [i_11 - 1] [i_12 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))))));
                            var_27 = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_2 - 3] [i_12 + 1]))) + (arr_41 [i_12 + 3] [i_1] [i_2 + 1] [i_10]))), (min((5360114597848766468ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
                        }
                    } 
                } 
                arr_46 [i_2] [i_2] [i_2] = ((arr_41 [i_2 - 2] [i_2 - 1] [i_2 - 1] [i_2 - 3]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56048))));
                var_28 = ((/* implicit */unsigned long long int) var_11);
            }
        }
        /* LoopNest 2 */
        for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 4) 
        {
            for (unsigned char i_14 = 0; i_14 < 10; i_14 += 3) 
            {
                {
                    arr_51 [i_1] [i_1] |= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)145)), (var_12)));
                    var_29 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (arr_17 [i_1] [i_1] [i_13] [(unsigned char)1]) : (8686227563051442087ULL)))) ? (max((14607441887974163533ULL), (((/* implicit */unsigned long long int) (unsigned char)255)))) : (((/* implicit */unsigned long long int) min((var_12), (((/* implicit */long long int) var_2))))));
                    var_30 = ((/* implicit */long long int) var_0);
                    var_31 = ((/* implicit */_Bool) 14405617895468953152ULL);
                    var_32 = ((/* implicit */signed char) 18446744073709551615ULL);
                }
            } 
        } 
        /* LoopSeq 2 */
        for (short i_15 = 3; i_15 < 9; i_15 += 3) 
        {
            var_33 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_11 [i_15 - 2] [i_15] [i_15] [i_15 - 1] [i_15])), (13086629475860785152ULL)));
            arr_54 [i_15] [i_1] = ((/* implicit */unsigned long long int) (unsigned char)74);
        }
        for (unsigned short i_16 = 2; i_16 < 7; i_16 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned char i_17 = 1; i_17 < 9; i_17 += 2) 
            {
                for (unsigned long long int i_18 = 1; i_18 < 9; i_18 += 4) 
                {
                    for (unsigned long long int i_19 = 0; i_19 < 10; i_19 += 3) 
                    {
                        {
                            arr_64 [i_19] [i_19] = ((/* implicit */short) max((min((((/* implicit */unsigned long long int) (signed char)15)), (18446744073709551608ULL))), (((/* implicit */unsigned long long int) (unsigned short)17153))));
                            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)32767)) % (((/* implicit */int) (unsigned char)4))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned int i_20 = 0; i_20 < 10; i_20 += 4) 
            {
                var_35 = ((/* implicit */signed char) (unsigned char)241);
                arr_67 [(_Bool)1] [i_16] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (signed char)27)), (max((min((((/* implicit */unsigned long long int) var_10)), (9760516510658109537ULL))), (((/* implicit */unsigned long long int) arr_44 [i_1] [8ULL] [i_16] [i_16] [i_20]))))));
                var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)141))) : (arr_33 [i_1] [i_1] [i_1] [i_20] [i_1] [i_20]))) / (((/* implicit */unsigned long long int) max((var_6), (((/* implicit */unsigned int) arr_23 [i_1])))))))) ? (min((((/* implicit */unsigned long long int) var_13)), (max((((/* implicit */unsigned long long int) var_2)), (var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17172)))));
                arr_68 [i_1] [i_20] = min((min((((/* implicit */unsigned long long int) var_13)), (arr_17 [i_20] [i_16] [i_1] [i_1]))), (((/* implicit */unsigned long long int) max((var_9), (((/* implicit */unsigned short) var_11))))));
            }
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                arr_71 [i_16 - 1] [0U] [i_1] [i_21] = ((/* implicit */signed char) var_6);
                var_37 = ((/* implicit */unsigned char) 16930780518209145992ULL);
                var_38 = ((/* implicit */signed char) min((min((arr_52 [i_16 - 2] [i_16 + 3] [i_16 + 3]), (((/* implicit */unsigned long long int) (unsigned short)17137)))), (((/* implicit */unsigned long long int) (unsigned char)9))));
                /* LoopSeq 1 */
                for (unsigned long long int i_22 = 0; i_22 < 10; i_22 += 4) 
                {
                    var_39 = ((/* implicit */short) var_4);
                    var_40 = ((/* implicit */unsigned char) max((min((12332377078844853616ULL), (((/* implicit */unsigned long long int) arr_5 [i_16 + 1])))), (arr_60 [i_16 - 2] [i_16 + 1])));
                    var_41 = ((/* implicit */unsigned long long int) ((4294967283U) >> (((((17248813420871690146ULL) + (((/* implicit */unsigned long long int) -2872711240251145298LL)))) - (14376102180620544843ULL)))));
                }
            }
        }
        /* LoopSeq 3 */
        for (unsigned long long int i_23 = 3; i_23 < 9; i_23 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_24 = 0; i_24 < 10; i_24 += 1) 
            {
                for (signed char i_25 = 1; i_25 < 9; i_25 += 1) 
                {
                    {
                        var_42 = var_1;
                        var_43 = ((/* implicit */signed char) var_5);
                    }
                } 
            } 
            arr_80 [i_23] = ((/* implicit */unsigned long long int) 4294967291U);
        }
        for (unsigned char i_26 = 1; i_26 < 9; i_26 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_27 = 0; i_27 < 10; i_27 += 1) 
            {
                for (unsigned long long int i_28 = 2; i_28 < 9; i_28 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_29 = 0; i_29 < 10; i_29 += 1) 
                        {
                            var_44 = ((/* implicit */signed char) (unsigned short)9933);
                            var_45 = ((/* implicit */long long int) var_11);
                            arr_92 [i_29] [(signed char)1] [i_27] [i_26 - 1] [i_27] [i_26 - 1] [i_1] = ((/* implicit */unsigned long long int) 0U);
                            arr_93 [i_1] [i_27] [i_27] [6U] [i_28] [i_29] = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) (short)-32757)), (1515963555500405624ULL))), (max((((/* implicit */unsigned long long int) 4294967267U)), (arr_37 [i_26 - 1])))));
                            arr_94 [i_27] [i_28] [i_27] [(signed char)1] [i_27] = ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) >> (((((arr_10 [i_1] [i_26] [i_28] [i_29]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_69 [8ULL] [i_26 + 1]))) - (18446744073709551528ULL)))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned long long int i_30 = 1; i_30 < 8; i_30 += 3) 
                        {
                            var_46 = ((/* implicit */unsigned char) 4294967295U);
                            var_47 = ((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_15)), ((unsigned short)55603)))) > (((/* implicit */int) var_9))));
                            arr_98 [i_1] [i_1] [i_27] [2LL] [8ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32767))) >= (arr_34 [i_28 - 1] [8LL] [i_28 + 1] [i_28 - 2] [i_28 - 1])));
                        }
                        for (unsigned long long int i_31 = 0; i_31 < 10; i_31 += 3) 
                        {
                            arr_101 [i_1] [i_26] [i_26] [i_27] [i_28 - 2] [i_31] [i_31] = ((min((arr_97 [i_28 - 2] [i_28 + 1] [i_1] [i_26 + 1] [i_1] [i_1] [i_1]), (arr_97 [i_28 - 1] [i_28 + 1] [i_28] [i_26 - 1] [i_26 - 1] [i_26] [i_1]))) >> (((5986043539079925972LL) - (5986043539079925970LL))));
                            var_48 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_53 [i_28 + 1])) ? (((/* implicit */int) (unsigned char)229)) : (((((/* implicit */int) arr_95 [i_1] [i_28] [i_28] [i_26 + 1] [i_31] [i_28 - 1] [i_26])) << (((((/* implicit */int) (signed char)-39)) + (61)))))));
                            var_49 = ((/* implicit */long long int) var_0);
                        }
                    }
                } 
            } 
            arr_102 [i_26] = ((/* implicit */long long int) max((4294967270U), (((/* implicit */unsigned int) (signed char)-10))));
            var_50 = ((/* implicit */unsigned int) arr_65 [i_1] [i_26 + 1] [i_26] [i_26]);
            arr_103 [i_1] = ((/* implicit */unsigned short) min((var_14), (arr_39 [i_1] [i_1] [(signed char)6])));
        }
        for (unsigned short i_32 = 2; i_32 < 8; i_32 += 3) 
        {
            var_51 -= ((/* implicit */_Bool) var_13);
            /* LoopSeq 3 */
            for (unsigned short i_33 = 0; i_33 < 10; i_33 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_34 = 1; i_34 < 6; i_34 += 2) 
                {
                    for (unsigned long long int i_35 = 3; i_35 < 9; i_35 += 3) 
                    {
                        {
                            var_52 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((var_6) - (var_6)))) ? (((((/* implicit */_Bool) var_11)) ? (4294967294U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) var_3)), (var_0))))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
                            var_53 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-32763)) % (((/* implicit */int) (unsigned char)184))));
                            arr_115 [i_1] [i_33] [i_33] [i_34] [i_35 - 1] = ((/* implicit */unsigned short) arr_18 [4ULL]);
                        }
                    } 
                } 
                var_54 = ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) var_2)), (var_8))), (((/* implicit */long long int) arr_25 [i_33] [i_32] [i_32] [(signed char)4] [(unsigned short)1] [i_33] [i_32 - 2]))));
                var_55 = ((/* implicit */unsigned int) max((var_55), (((/* implicit */unsigned int) max((max((0LL), (-9223372036854775796LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-13)) ? (19U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_1] [i_33] [i_33] [i_32] [i_32 + 2] [i_33] [(unsigned short)0])))))))))));
            }
            for (short i_36 = 2; i_36 < 9; i_36 += 1) /* same iter space */
            {
                var_56 = ((/* implicit */long long int) 3U);
                /* LoopNest 2 */
                for (unsigned long long int i_37 = 0; i_37 < 10; i_37 += 2) 
                {
                    for (unsigned char i_38 = 2; i_38 < 9; i_38 += 3) 
                    {
                        {
                            var_57 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_9)), (((4294967261U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1097)))))));
                            arr_125 [i_1] [i_36] [i_36] [i_36] [i_1] = ((/* implicit */unsigned int) max((7713322893224651484ULL), (((/* implicit */unsigned long long int) (unsigned short)29572))));
                        }
                    } 
                } 
            }
            for (short i_39 = 2; i_39 < 9; i_39 += 1) /* same iter space */
            {
                arr_129 [1ULL] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((max((29U), (arr_74 [i_1] [i_1] [i_1]))) % (arr_74 [i_39 + 1] [i_32 + 2] [i_1])));
                var_58 = ((/* implicit */unsigned int) ((0ULL) & (((/* implicit */unsigned long long int) 4294967287U))));
                var_59 = ((/* implicit */unsigned short) var_11);
            }
        }
    }
    var_60 = ((/* implicit */unsigned int) var_14);
}
