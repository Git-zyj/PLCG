/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126791
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
    for (unsigned int i_0 = 4; i_0 < 8; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 7; i_1 += 4) /* same iter space */
        {
            arr_5 [8LL] [8LL] [i_1] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 0U)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) ((unsigned char) (unsigned short)10098))), ((unsigned short)10098)))) : (((int) arr_4 [i_0 + 2]))));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_0)))))))), ((~(((((/* implicit */int) (unsigned short)55411)) * (((/* implicit */int) var_7)))))))))));
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((unsigned int) max((arr_6 [i_2] [6U] [2U] [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_8 [i_1] [i_1 + 1] [(unsigned char)1] [i_1])) : (((/* implicit */int) arr_3 [(unsigned char)9])))))))))));
                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)0)) ? (7067006747025894547ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))), (((/* implicit */unsigned long long int) arr_7 [i_0 - 2] [i_1 + 3] [i_2]))))) || (((/* implicit */_Bool) var_15)))))));
                var_23 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -7124550912514670356LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_6)))))) ? (max((((/* implicit */int) arr_4 [i_0 - 2])), ((-(((/* implicit */int) (signed char)0)))))) : (((/* implicit */int) ((unsigned char) min((((/* implicit */long long int) (unsigned char)122)), (-7124550912514670356LL)))))));
            }
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                /* LoopSeq 2 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (short i_5 = 1; i_5 < 6; i_5 += 1) 
                    {
                        var_24 = ((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_5 + 1] [i_5] [4U] [1ULL] [i_5 + 1])) | (((/* implicit */int) ((unsigned char) ((unsigned long long int) 693449758))))));
                        arr_17 [i_5 + 1] [i_4] [i_3] [i_4] [i_0 - 3] = ((/* implicit */unsigned char) min((((unsigned int) arr_12 [i_0 + 1])), (((/* implicit */unsigned int) arr_8 [(signed char)9] [i_1 - 1] [i_5] [(unsigned char)1]))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 2; i_6 < 8; i_6 += 2) /* same iter space */
                    {
                        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) arr_13 [8U] [i_0 + 1] [i_1 + 1] [(unsigned short)3] [i_4 - 1] [(unsigned short)3])) & (7067006747025894532ULL))), (((/* implicit */unsigned long long int) max(((unsigned char)255), (((/* implicit */unsigned char) (signed char)103)))))))) ? (((/* implicit */int) ((-1373686090) >= (((/* implicit */int) (unsigned short)55411))))) : (((/* implicit */int) ((unsigned char) arr_6 [i_0] [i_1] [(signed char)9] [(unsigned char)0])))));
                        arr_20 [i_0 - 4] [(unsigned char)9] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) ((823815334U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(unsigned char)8] [i_1] [i_1])))))))));
                    }
                    for (unsigned long long int i_7 = 2; i_7 < 8; i_7 += 2) /* same iter space */
                    {
                        arr_24 [(signed char)2] [i_1] [7U] [i_1] [i_4] = ((/* implicit */unsigned long long int) max((max((arr_13 [(signed char)6] [i_4] [1ULL] [(unsigned short)1] [1ULL] [i_3]), (((/* implicit */unsigned int) max(((short)-32630), (((/* implicit */short) arr_16 [0U] [6ULL] [i_3] [(unsigned char)4] [6ULL]))))))), (((/* implicit */unsigned int) ((((int) (unsigned short)10119)) > (((/* implicit */int) ((unsigned char) (unsigned char)255))))))));
                        var_26 = ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)34)), (((((/* implicit */_Bool) arr_22 [i_1 + 2] [i_4] [i_4] [i_1] [(short)6])) ? (((/* implicit */int) arr_4 [5])) : (((/* implicit */int) arr_1 [i_4]))))));
                        var_27 *= ((/* implicit */unsigned char) -7124550912514670356LL);
                    }
                }
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    var_28 = ((/* implicit */unsigned long long int) (unsigned char)72);
                    /* LoopSeq 1 */
                    for (signed char i_9 = 4; i_9 < 9; i_9 += 1) 
                    {
                        arr_29 [i_3] [(unsigned char)1] [i_9] [i_8] = ((/* implicit */short) (+(min((78824262U), (4216143033U)))));
                        arr_30 [i_9 + 1] [(unsigned short)3] [6U] [i_9] [i_9] = ((/* implicit */short) ((unsigned long long int) 2241143438135950840ULL));
                    }
                    arr_31 [i_0 + 2] [i_0 + 2] [5ULL] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_7 [(_Bool)1] [i_8 - 1] [i_0 - 2]))))));
                }
                /* LoopSeq 3 */
                for (unsigned char i_10 = 0; i_10 < 10; i_10 += 1) /* same iter space */
                {
                    arr_34 [i_0 + 2] [i_1] [(unsigned char)5] [i_10] = ((/* implicit */short) arr_13 [i_3] [4LL] [6U] [9ULL] [9U] [i_3]);
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 0; i_11 < 10; i_11 += 1) 
                    {
                        var_29 += ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((short) (signed char)-3)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_0] [i_3] [i_3] [i_11] [(unsigned char)4])) ? (arr_13 [i_0] [i_0] [i_0] [3ULL] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [0ULL] [0ULL] [(unsigned char)6] [3U] [i_10] [3U] [i_11])))))) ? (((/* implicit */int) ((_Bool) 4294967295U))) : (((arr_27 [i_0] [(_Bool)0] [7U] [(short)0] [(unsigned char)8]) - (arr_27 [3LL] [i_1 - 1] [(unsigned char)4] [i_11] [i_11])))))) : (((((/* implicit */_Bool) -1512600897278950130LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32737))) : (11379737326683657084ULL)))));
                        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((arr_1 [i_0 - 1]) ? (max((((/* implicit */int) arr_1 [i_0 - 3])), (2147483647))) : (((/* implicit */int) (signed char)-11)))))));
                    }
                    arr_38 [4] [i_0] [i_3] [(unsigned char)6] [i_0] [i_0] = ((/* implicit */unsigned short) (+((~(11379737326683657084ULL)))));
                    arr_39 [i_10] [(_Bool)1] = ((/* implicit */unsigned char) (~(((unsigned int) arr_4 [i_1 + 2]))));
                }
                /* vectorizable */
                for (unsigned char i_12 = 0; i_12 < 10; i_12 += 1) /* same iter space */
                {
                    var_31 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_1 [i_0 - 2]) ? (arr_13 [i_0] [(unsigned char)6] [(short)7] [(unsigned char)6] [(unsigned char)5] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (arr_21 [i_0 - 4] [i_0 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [(signed char)4] [(short)8] [i_3] [(short)8] [i_3] [(unsigned char)4] [i_12])))));
                    arr_44 [i_12] [i_1 + 2] [i_12] [i_1] [i_1] = ((/* implicit */unsigned char) ((long long int) (~(arr_27 [i_1] [(signed char)7] [9ULL] [i_1] [4LL]))));
                    /* LoopSeq 1 */
                    for (unsigned char i_13 = 0; i_13 < 10; i_13 += 1) 
                    {
                        arr_48 [i_12] [i_12] [(unsigned char)5] [i_12] = ((/* implicit */signed char) (-(arr_33 [i_13] [i_1] [(signed char)0] [i_0 - 3])));
                        arr_49 [i_12] [i_1] [(signed char)9] [i_12] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [(signed char)4] [i_1] [i_12] [i_3] [i_3] [5U] [8U]))));
                        var_32 = ((/* implicit */int) var_1);
                        var_33 -= ((/* implicit */short) ((((/* implicit */int) arr_26 [i_1 + 2] [i_1 + 2] [i_3] [i_0 - 3] [4ULL])) < (((/* implicit */int) arr_18 [8ULL] [8ULL] [i_0 + 1] [i_0 + 1] [i_1 + 3] [8LL] [i_12]))));
                    }
                    var_34 *= ((/* implicit */unsigned int) var_2);
                }
                for (unsigned char i_14 = 0; i_14 < 10; i_14 += 1) /* same iter space */
                {
                    var_35 = ((/* implicit */signed char) min((((9223372036854775807LL) << (((((((/* implicit */int) (short)-4548)) + (4596))) - (48))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)193)), (arr_6 [i_0] [i_0 + 2] [i_0 + 2] [i_0 - 1]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_15 = 2; i_15 < 9; i_15 += 3) 
                    {
                        var_36 = ((/* implicit */unsigned char) (-(0U)));
                        arr_55 [i_0] [i_1] [6U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_40 [i_0] [i_0] [i_3] [i_15 - 1])) ^ (11379737326683657076ULL)))) ? (((/* implicit */int) (unsigned char)24)) : ((-(((/* implicit */int) arr_50 [i_0] [i_0] [i_0]))))));
                        arr_56 [i_0] = ((/* implicit */signed char) ((unsigned char) ((1512600897278950129LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))));
                        var_37 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_3] [i_3])) ? (((/* implicit */int) arr_18 [i_0 + 2] [i_0 + 2] [(unsigned char)0] [(signed char)7] [i_3] [3U] [i_15 - 1])) : ((~(((/* implicit */int) var_16))))));
                    }
                    var_38 &= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)188))))), (max((((/* implicit */unsigned long long int) arr_21 [(unsigned char)6] [0])), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)4))) : (15614776445710765229ULL)))))));
                    /* LoopSeq 2 */
                    for (int i_16 = 2; i_16 < 8; i_16 += 3) /* same iter space */
                    {
                        arr_61 [i_0] [i_0] [i_14] [6] [i_16] = ((((((/* implicit */int) arr_50 [i_16 + 2] [i_0 - 2] [i_14])) <= (((/* implicit */int) arr_50 [i_16 + 1] [i_0 - 1] [(short)0])))) ? (((/* implicit */int) arr_50 [i_16 - 2] [i_0 + 1] [1U])) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_50 [i_16 - 2] [i_0 - 3] [i_3])), (var_1)))));
                        var_39 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_35 [i_0 + 1] [i_1 - 1] [(unsigned char)4] [8ULL] [i_16 + 1])) ? (((/* implicit */unsigned int) 2047)) : (arr_35 [i_0 + 1] [i_1 + 1] [i_16] [1ULL] [i_16 + 2]))), (4294967295U)));
                        var_40 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)225))));
                        arr_62 [i_0 - 1] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1785537266)) ? (arr_0 [i_16 - 1]) : (arr_0 [i_0])))), (((((/* implicit */_Bool) arr_12 [i_0 + 2])) ? (arr_12 [i_14]) : (((/* implicit */unsigned long long int) var_14))))));
                    }
                    /* vectorizable */
                    for (int i_17 = 2; i_17 < 8; i_17 += 3) /* same iter space */
                    {
                        arr_67 [i_1] [4ULL] [i_3] [i_14] |= ((/* implicit */short) ((4294967295U) >> (((7067006747025894532ULL) - (7067006747025894509ULL)))));
                        arr_68 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_59 [i_0] [i_1 + 3] [(_Bool)1] [(unsigned char)7] [i_17]) ? (((/* implicit */int) arr_36 [i_0])) : (((/* implicit */int) (unsigned char)91)))))));
                    }
                }
                arr_69 [i_0] [6U] [1U] [(signed char)7] = ((/* implicit */signed char) arr_40 [(signed char)0] [i_1 - 1] [i_3] [i_0 - 2]);
                var_41 = ((/* implicit */signed char) arr_65 [i_0] [i_0] [i_0 - 1] [i_1] [(short)5] [i_3] [(short)5]);
            }
        }
        /* vectorizable */
        for (int i_18 = 1; i_18 < 7; i_18 += 4) /* same iter space */
        {
            var_42 = ((/* implicit */int) var_8);
            arr_73 [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)193)) ? (11379737326683657084ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))));
            var_43 = ((/* implicit */unsigned int) ((signed char) ((arr_19 [(_Bool)1] [i_18 + 1]) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-123))))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_19 = 2; i_19 < 9; i_19 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_20 = 2; i_20 < 9; i_20 += 2) 
            {
                for (unsigned char i_21 = 1; i_21 < 8; i_21 += 2) 
                {
                    for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) 
                    {
                        {
                            var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_60 [i_20 + 1])) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) 127)) ? (((/* implicit */int) arr_75 [(signed char)1] [i_20] [(unsigned char)9])) : (((/* implicit */int) (unsigned char)39))))));
                            var_45 = ((/* implicit */int) ((((/* implicit */_Bool) arr_87 [i_22] [i_21 - 1])) ? (arr_87 [i_22] [i_21 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (short i_23 = 2; i_23 < 8; i_23 += 1) 
            {
                var_46 = ((/* implicit */signed char) (_Bool)1);
                var_47 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_22 [(signed char)4] [i_0 - 3] [i_23] [6U] [i_0]))));
                /* LoopSeq 3 */
                for (unsigned int i_24 = 2; i_24 < 7; i_24 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_25 = 1; i_25 < 9; i_25 += 3) 
                    {
                        arr_96 [i_23] [i_19 - 1] [i_23] [3U] [i_19] = ((/* implicit */unsigned char) ((11379737326683657083ULL) << (((((/* implicit */int) (unsigned short)63994)) - (63966)))));
                        arr_97 [i_25] [i_24] [i_23] [(short)3] [i_0] = ((/* implicit */unsigned char) ((unsigned int) (-(var_2))));
                        var_48 = ((/* implicit */signed char) ((var_4) == (arr_2 [i_0 - 3])));
                    }
                    for (unsigned short i_26 = 0; i_26 < 10; i_26 += 2) 
                    {
                        var_49 = ((/* implicit */unsigned char) (+((-(4294967295U)))));
                        var_50 = ((/* implicit */unsigned char) (+(arr_41 [i_23] [i_24 - 1] [i_24] [(signed char)7] [i_24 - 2])));
                    }
                    var_51 = ((/* implicit */unsigned long long int) max((var_51), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_82 [i_23] [i_23 + 2] [i_23 - 1] [i_23])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))) : (((((/* implicit */_Bool) (unsigned char)174)) ? (4294967289U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                    arr_100 [i_23] [0U] [i_23 - 1] [i_23] = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-110))));
                    arr_101 [i_0] [i_0] [i_23] [(signed char)3] = ((/* implicit */signed char) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) ((unsigned short) -1)))));
                }
                for (unsigned char i_27 = 3; i_27 < 9; i_27 += 3) 
                {
                    var_52 += ((/* implicit */int) ((((/* implicit */_Bool) arr_52 [i_23 + 1] [i_27 - 3])) && (((/* implicit */_Bool) arr_52 [i_0 - 4] [i_27 - 3]))));
                    arr_104 [i_23] = ((/* implicit */unsigned char) (signed char)65);
                }
                for (signed char i_28 = 4; i_28 < 8; i_28 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_29 = 1; i_29 < 6; i_29 += 2) 
                    {
                        var_53 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_41 [i_23] [i_19 - 2] [i_19 - 2] [(unsigned char)1] [i_29 + 4])))) ? (((/* implicit */int) (unsigned char)255)) : ((-(((/* implicit */int) (unsigned char)186))))));
                        var_54 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-1)))))));
                    }
                    var_55 *= ((/* implicit */unsigned char) arr_70 [i_0] [i_19 - 1]);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_30 = 1; i_30 < 9; i_30 += 4) 
                    {
                        var_56 = ((/* implicit */unsigned int) ((signed char) (~(4294967295U))));
                        var_57 = arr_3 [i_0];
                    }
                    for (unsigned char i_31 = 3; i_31 < 8; i_31 += 3) 
                    {
                        var_58 = ((/* implicit */unsigned char) ((int) arr_109 [i_19] [i_19] [i_19] [i_19] [8LL] [i_19] [0LL]));
                        arr_113 [i_0 - 2] [i_28] [i_23] [i_23] [i_0 - 2] [i_0 + 1] = ((/* implicit */unsigned char) ((unsigned long long int) (unsigned char)255));
                        arr_114 [i_23] [i_23] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1575546862U)) ? (((/* implicit */int) (unsigned char)255)) : (((((/* implicit */int) var_8)) & (((/* implicit */int) (_Bool)1))))));
                    }
                }
            }
            for (unsigned char i_32 = 2; i_32 < 7; i_32 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_33 = 2; i_33 < 8; i_33 += 2) 
                {
                    for (unsigned char i_34 = 2; i_34 < 8; i_34 += 4) 
                    {
                        {
                            arr_122 [i_0] [4U] [i_32] = ((/* implicit */short) arr_95 [i_32 + 3] [i_32] [i_32]);
                            var_59 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_72 [(unsigned char)6] [6U] [i_32 + 2])) ? (((/* implicit */int) arr_72 [i_32] [i_32] [i_32 - 1])) : (((/* implicit */int) var_18))));
                            var_60 -= ((/* implicit */unsigned char) ((arr_47 [i_19] [i_19 - 1]) << (((/* implicit */int) arr_107 [i_34 - 2] [i_34] [i_32] [i_34] [i_19 - 2]))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_35 = 2; i_35 < 9; i_35 += 1) 
                {
                    var_61 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)186)) != (((/* implicit */int) (short)28270))))) : (((/* implicit */int) ((short) arr_45 [i_0] [i_0] [(unsigned char)2] [(signed char)7] [(signed char)8] [(unsigned char)2])))));
                    var_62 = ((/* implicit */unsigned char) arr_22 [i_32] [i_19] [i_32] [i_19] [i_32]);
                }
                var_63 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_94 [i_32 + 3] [i_32] [i_32] [i_32 + 2] [i_32] [(unsigned char)2] [i_19 - 1]))));
            }
        }
        arr_125 [i_0] [3ULL] = ((/* implicit */short) min((min((((/* implicit */long long int) max((arr_99 [(unsigned char)1] [i_0 - 3] [i_0] [(short)3] [i_0]), (((/* implicit */short) (unsigned char)57))))), (((((/* implicit */_Bool) 5575981984475422670ULL)) ? (arr_70 [i_0] [(unsigned char)2]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)199)))))));
    }
    var_64 *= ((/* implicit */signed char) ((short) (~(((/* implicit */int) max((((/* implicit */unsigned char) var_17)), ((unsigned char)221)))))));
}
