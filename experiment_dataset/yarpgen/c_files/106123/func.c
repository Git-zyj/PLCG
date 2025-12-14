/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106123
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
    var_13 = ((/* implicit */unsigned int) var_8);
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        var_14 ^= ((/* implicit */_Bool) var_0);
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            var_15 = ((/* implicit */short) ((((unsigned int) ((((/* implicit */int) var_3)) | (((/* implicit */int) var_5))))) != (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))));
            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)0)) ? (107790361) : (((/* implicit */int) var_8))))) & (var_11))))));
            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) 107790361)) && (((/* implicit */_Bool) arr_0 [i_0 + 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1]))) * (3107398259U))))))));
        }
        for (signed char i_2 = 3; i_2 < 18; i_2 += 3) 
        {
            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_11))));
            /* LoopSeq 4 */
            for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                var_19 = arr_7 [0U];
                var_20 = min((var_11), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_8)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) arr_5 [i_2] [i_3]))))))));
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (min((arr_3 [i_2] [i_3]), (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) <= (var_0)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
            }
            for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
            {
                var_22 = ((/* implicit */unsigned char) min(((unsigned short)61149), (((/* implicit */unsigned short) min((var_8), (((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) 1668985725U))))))))));
                /* LoopSeq 1 */
                for (long long int i_5 = 1; i_5 < 16; i_5 += 4) 
                {
                    /* LoopSeq 1 */
                    for (short i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        var_23 ^= ((/* implicit */unsigned int) (+(((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) 677351724U)) : (var_11))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                        var_24 = min((min((((/* implicit */unsigned int) var_6)), (((((/* implicit */_Bool) 3617615572U)) ? (((/* implicit */unsigned int) var_0)) : (3107398271U))))), (((/* implicit */unsigned int) ((unsigned short) arr_8 [i_5 + 2] [i_2 - 1]))));
                        arr_18 [i_0] [i_0] [i_0 + 2] [i_0] [i_0] = ((/* implicit */unsigned int) arr_9 [i_5 + 2] [i_2] [i_0]);
                    }
                    /* LoopSeq 2 */
                    for (short i_7 = 0; i_7 < 19; i_7 += 4) 
                    {
                        arr_21 [i_0] [i_0] [i_2 + 1] [i_4] [5] [i_7] = ((/* implicit */unsigned long long int) var_1);
                        var_25 = ((((/* implicit */int) (unsigned short)45136)) | (var_4));
                    }
                    for (int i_8 = 0; i_8 < 19; i_8 += 3) 
                    {
                        var_26 ^= ((/* implicit */unsigned int) var_10);
                        arr_25 [i_8] [i_8] [i_5] [i_4] [i_4] [i_8] [i_0] = ((/* implicit */signed char) var_5);
                    }
                    var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (~(var_4))))));
                }
                var_28 = ((/* implicit */_Bool) arr_11 [i_0 - 1]);
            }
            for (int i_9 = 0; i_9 < 19; i_9 += 3) 
            {
                var_29 = ((/* implicit */unsigned short) arr_15 [i_9] [i_9] [i_2 - 2] [i_0]);
                /* LoopSeq 4 */
                for (signed char i_10 = 4; i_10 < 17; i_10 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_11 = 2; i_11 < 15; i_11 += 4) 
                    {
                        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
                        var_31 += ((/* implicit */short) min((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_8 [i_0 + 1] [i_2 - 2]))))), (var_12))), ((+(3107398288U)))));
                        arr_32 [i_0] [i_0] [i_2 - 1] [i_9] [i_10] [i_11] &= ((/* implicit */short) min((((unsigned int) ((((/* implicit */_Bool) var_4)) ? (-5106213497118587950LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32766)))))), (((/* implicit */unsigned int) (unsigned char)5))));
                    }
                    for (int i_12 = 0; i_12 < 19; i_12 += 2) /* same iter space */
                    {
                        var_32 += ((/* implicit */signed char) (-(((/* implicit */int) min((var_10), (arr_29 [i_0 - 1] [i_9]))))));
                        arr_35 [i_0] [i_2 - 1] [i_0 + 3] = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_4)), (var_7)));
                    }
                    for (int i_13 = 0; i_13 < 19; i_13 += 2) /* same iter space */
                    {
                        var_33 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (min((((/* implicit */long long int) 1187568981U)), (((((/* implicit */long long int) ((/* implicit */int) var_1))) ^ (var_7))))) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_13] [i_0] [i_2] [i_2] [i_9] [i_10 + 2] [i_13])))));
                        var_34 = ((/* implicit */unsigned int) 268435455);
                    }
                    var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) var_5))));
                    var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) var_8))));
                    var_37 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((3107398271U) ^ (min((((/* implicit */unsigned int) var_6)), (var_12)))))), (((((unsigned long long int) (unsigned short)23161)) * (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) >> (((1704672166U) - (1704672135U))))))))));
                }
                for (signed char i_14 = 3; i_14 < 18; i_14 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_15 = 0; i_15 < 19; i_15 += 4) 
                    {
                        var_38 = ((/* implicit */_Bool) 11707768504756656612ULL);
                        var_39 = ((/* implicit */unsigned int) var_9);
                    }
                    for (short i_16 = 1; i_16 < 15; i_16 += 3) 
                    {
                        arr_48 [i_14] [i_16] [i_9] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? ((((-(5106213497118587952LL))) / (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) min(((-(arr_4 [i_0] [i_2]))), (((/* implicit */int) arr_29 [i_2] [i_9])))))));
                        var_40 = ((((/* implicit */_Bool) min((min((((/* implicit */unsigned int) var_8)), (var_12))), (((/* implicit */unsigned int) ((signed char) 3107398303U)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) var_7))) ? (((/* implicit */int) var_3)) : ((-(((/* implicit */int) var_5))))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_12))));
                        var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) var_6))) || (((/* implicit */_Bool) (short)-17981))));
                    }
                    for (signed char i_17 = 0; i_17 < 19; i_17 += 1) 
                    {
                        var_42 = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) << (((1187569026U) - (1187569016U)))));
                        arr_51 [i_17] [i_14] [i_9] [i_9] [i_2] [10] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (unsigned short)20400))))) * (((/* implicit */int) (unsigned short)53051))));
                    }
                    var_43 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((arr_17 [i_14 - 1]) / (arr_17 [i_14 - 3])))), ((+(min((var_11), (((/* implicit */unsigned long long int) var_4))))))));
                    /* LoopSeq 1 */
                    for (signed char i_18 = 1; i_18 < 17; i_18 += 3) 
                    {
                        arr_55 [i_0] [i_0] [i_2 - 1] [i_9] [i_0] [i_18 + 1] [i_18] = (signed char)74;
                        arr_56 [i_0] [i_2] [i_9] [i_14 + 1] [16] |= ((/* implicit */signed char) arr_47 [i_0] [i_2] [i_2 - 2] [i_9] [i_14] [i_18]);
                        var_44 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) (+(4294967295U)))) / (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-4638605085630404225LL))))) >> (((((((((/* implicit */_Bool) arr_20 [i_0 + 1] [i_14 + 1] [i_9] [i_14] [i_18])) ? (var_7) : (((/* implicit */long long int) var_9)))) + (((/* implicit */long long int) ((/* implicit */int) var_3))))) + (431878542444137460LL)))));
                    }
                }
                for (short i_19 = 0; i_19 < 19; i_19 += 4) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_20 = 0; i_20 < 19; i_20 += 3) 
                    {
                        var_45 = ((/* implicit */unsigned char) -365767484);
                        arr_61 [i_20] [i_9] = ((/* implicit */unsigned int) arr_29 [i_0 - 1] [i_2 - 1]);
                    }
                    /* vectorizable */
                    for (int i_21 = 4; i_21 < 18; i_21 += 3) /* same iter space */
                    {
                        var_46 = var_12;
                        arr_65 [i_0] [i_21] [i_0] = ((/* implicit */signed char) var_4);
                    }
                    for (int i_22 = 4; i_22 < 18; i_22 += 3) /* same iter space */
                    {
                        var_47 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 4638605085630404208LL)) >= (var_11)))), (min((((/* implicit */unsigned short) (unsigned char)255)), (var_10)))))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (1013157402U)))), ((-(var_7)))))));
                        var_48 = ((/* implicit */signed char) min((((/* implicit */long long int) var_4)), (((((/* implicit */_Bool) ((((/* implicit */int) var_10)) + (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_2)) ? (arr_63 [i_0 + 1] [i_0 + 1] [i_19] [i_19] [i_19]) : (((/* implicit */long long int) arr_27 [i_22 - 1])))) : (((((/* implicit */_Bool) arr_4 [i_19] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) (short)6685))) : (arr_46 [i_9] [i_2] [i_22] [i_9] [i_22] [i_19] [i_19])))))));
                        var_49 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) var_2)) | (((/* implicit */int) var_5)))), (((/* implicit */int) arr_9 [i_2 + 1] [i_0 + 1] [i_22 - 2]))));
                    }
                    /* LoopSeq 3 */
                    for (signed char i_23 = 0; i_23 < 19; i_23 += 1) 
                    {
                        arr_71 [i_19] &= ((/* implicit */short) arr_14 [i_2] [i_2] [(unsigned char)12] [7ULL]);
                        var_50 = ((/* implicit */unsigned short) arr_3 [i_0] [i_9]);
                        var_51 = ((/* implicit */unsigned long long int) arr_60 [0] [0] [i_9] [i_19] [i_23]);
                    }
                    for (unsigned char i_24 = 2; i_24 < 17; i_24 += 2) /* same iter space */
                    {
                        var_52 += ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_1)))) ? (var_11) : (((/* implicit */unsigned long long int) min((((/* implicit */int) var_5)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (1068679253))))))));
                        arr_74 [i_0 + 2] [i_2 - 1] [i_2 - 1] [i_24 - 1] = ((/* implicit */int) arr_39 [i_0] [i_2] [(short)9] [i_19] [i_24]);
                    }
                    for (unsigned char i_25 = 2; i_25 < 17; i_25 += 2) /* same iter space */
                    {
                        var_53 = ((/* implicit */int) max((var_53), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-18)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_42 [i_2] [i_2] [i_9])))) ? (((/* implicit */int) min((((/* implicit */short) var_6)), ((short)-40)))) : (((/* implicit */int) var_6))))) ? ((-9223372036854775807LL - 1LL)) : (min((-5106213497118587937LL), (((/* implicit */long long int) arr_2 [i_2 - 2])))))))));
                        arr_79 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_2);
                        var_54 = ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
                    }
                }
                for (unsigned int i_26 = 0; i_26 < 19; i_26 += 3) 
                {
                    arr_82 [i_0] [i_0] [10U] [i_2] [8ULL] [i_26] |= ((/* implicit */int) min((((/* implicit */long long int) var_5)), (((arr_42 [i_2 + 1] [i_2 - 1] [i_0 + 1]) - (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2)))))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_27 = 0; i_27 < 19; i_27 += 3) 
                    {
                        var_55 = ((/* implicit */unsigned char) min(((((!(((/* implicit */_Bool) 503725585U)))) ? (arr_39 [i_0] [i_2] [i_2] [i_26] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0 + 3]))))), (((/* implicit */long long int) ((((/* implicit */int) arr_30 [i_27] [i_27] [i_27] [i_27] [i_27])) < ((~(((/* implicit */int) var_10)))))))));
                        var_56 = ((/* implicit */unsigned char) min((var_56), (((/* implicit */unsigned char) 365767484))));
                        arr_86 [i_26] [(short)6] [i_26] [(unsigned short)2] [i_26] [i_26] [i_26] |= ((/* implicit */unsigned short) var_9);
                    }
                    /* vectorizable */
                    for (long long int i_28 = 0; i_28 < 19; i_28 += 4) 
                    {
                        arr_89 [i_0 + 1] [i_2 - 3] [i_0 + 1] [i_26] [i_28] = ((/* implicit */_Bool) (((~(var_0))) / ((+(((/* implicit */int) var_1))))));
                        arr_90 [i_9] [i_28] [i_9] [i_28] [i_28] |= var_10;
                    }
                    for (int i_29 = 0; i_29 < 19; i_29 += 2) 
                    {
                        var_57 = ((/* implicit */unsigned long long int) -1068679253);
                        var_58 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_2] [i_26] [i_29]))));
                        var_59 = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) (-(((/* implicit */int) var_6))))), (((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)57))))))) < (var_7)));
                    }
                    /* LoopSeq 2 */
                    for (short i_30 = 2; i_30 < 18; i_30 += 3) /* same iter space */
                    {
                        var_60 = ((/* implicit */unsigned int) var_1);
                        var_61 = ((/* implicit */unsigned int) arr_92 [i_2] [i_2 + 1] [i_2 + 1] [(short)13] [i_2 + 1] [i_2 + 1]);
                    }
                    for (short i_31 = 2; i_31 < 18; i_31 += 3) /* same iter space */
                    {
                        arr_99 [i_0 - 1] [i_2 - 2] [i_2] [12] [i_26] [i_26] = ((min((((((((/* implicit */int) var_2)) + (2147483647))) << (((((((/* implicit */int) var_2)) + (9))) - (3))))), (var_0))) / (((/* implicit */int) (short)-32761)));
                        var_62 = ((/* implicit */long long int) min((var_62), (((/* implicit */long long int) (signed char)3))));
                        var_63 = ((/* implicit */long long int) arr_57 [i_0] [i_2] [i_2 + 1] [i_31 + 1] [i_31 - 2] [(unsigned short)9]);
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_32 = 3; i_32 < 18; i_32 += 3) 
                    {
                        arr_102 [i_0] [i_2] [i_26] [i_26] [i_32] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(var_4))))));
                        var_64 = ((/* implicit */signed char) max((var_64), (((/* implicit */signed char) var_3))));
                    }
                }
                var_65 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_6 [i_2 - 2] [i_0 + 3]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_20 [i_9] [i_9] [i_9] [i_2] [i_0]), (((/* implicit */long long int) var_1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((((/* implicit */_Bool) arr_87 [i_0] [i_0] [(signed char)7] [i_2 - 3] [(short)18])) ? (((/* implicit */int) var_1)) : (var_0))))))));
            }
            for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
            {
                var_66 = ((/* implicit */unsigned long long int) var_12);
                arr_105 [i_0 + 2] [i_2 - 2] &= ((/* implicit */short) arr_96 [i_0] [i_0 - 1] [i_2] [i_2] [18ULL] [i_2 - 3] [i_2 + 1]);
                /* LoopSeq 1 */
                for (int i_34 = 0; i_34 < 19; i_34 += 3) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
                    {
                        arr_110 [i_35] [i_34] [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) 211825889U);
                        var_67 |= ((/* implicit */unsigned long long int) 9198140781442344770LL);
                        var_68 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) (unsigned char)80)) : (((((/* implicit */int) arr_10 [i_0] [i_2] [i_33] [i_34])) & (((/* implicit */int) var_10)))))))));
                    }
                    arr_111 [i_0 + 3] [i_2] [i_33] [i_34] = ((/* implicit */int) (+(min((var_11), (((/* implicit */unsigned long long int) arr_44 [i_33] [i_33] [i_33] [(unsigned short)14]))))));
                    var_69 = ((/* implicit */long long int) min((var_69), (((/* implicit */long long int) (short)-8509))));
                }
            }
        }
        /* vectorizable */
        for (int i_36 = 1; i_36 < 18; i_36 += 3) 
        {
            var_70 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_29 [i_0 + 3] [i_0 + 3])) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) arr_39 [14LL] [i_36] [i_0] [i_0 + 2] [i_0 + 3])) : (var_11)))));
            var_71 = ((/* implicit */unsigned long long int) min((var_71), (((/* implicit */unsigned long long int) ((arr_3 [i_0] [i_36]) / (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
        }
    }
    var_72 = ((/* implicit */signed char) max((var_72), (((/* implicit */signed char) 677351724U))));
}
