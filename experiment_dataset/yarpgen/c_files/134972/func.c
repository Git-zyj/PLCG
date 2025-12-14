/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134972
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
    var_18 = ((/* implicit */unsigned char) min((var_3), (((/* implicit */unsigned long long int) var_2))));
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        var_19 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_0)) ? (var_0) : (arr_2 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) + (((/* implicit */int) var_15))))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_20 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_7 [i_2] [i_2] [i_0])), (((long long int) var_14))))), (min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_2] [i_1])))))))));
                    arr_8 [i_0 + 1] [i_0] [i_2] [16ULL] = ((/* implicit */unsigned long long int) arr_4 [i_0]);
                    var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (arr_2 [i_0 + 4]))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) var_4))));
                        var_23 *= ((/* implicit */int) ((_Bool) arr_0 [i_2]));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_0] [i_4] [i_4] [i_4])) : (var_17)));
                        var_25 = var_11;
                    }
                }
            } 
        } 
        var_26 = ((/* implicit */_Bool) max((var_26), (((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [20LL] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_13 [i_0] [i_0 + 1] [0LL] [i_0] [i_0] [i_0])))) | (arr_1 [16]))) != ((-(max((var_9), (((/* implicit */long long int) var_16))))))))));
        var_27 = ((/* implicit */unsigned long long int) min((var_27), (var_3)));
        arr_14 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_0] [i_0 + 3] [i_0 + 3] [i_0])), (var_3)));
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
    {
        var_28 &= ((/* implicit */short) var_11);
        arr_17 [i_5] = ((/* implicit */unsigned int) arr_3 [i_5] [i_5] [i_5]);
        var_29 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_5] [i_5]))));
        /* LoopSeq 2 */
        for (unsigned int i_6 = 3; i_6 < 22; i_6 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 2) 
                {
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_14)) <= (var_0)));
                    arr_26 [i_5] [i_5] [i_7] [i_8] = ((/* implicit */short) var_13);
                    var_31 = ((/* implicit */long long int) ((unsigned int) ((arr_10 [13ULL] [i_7] [(short)19] [i_6] [18ULL] [i_5]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))));
                }
                for (unsigned int i_9 = 0; i_9 < 24; i_9 += 2) 
                {
                    var_32 += ((/* implicit */_Bool) ((((/* implicit */int) var_6)) << (((((/* implicit */int) (unsigned short)30266)) - (30257)))));
                    var_33 = var_0;
                    arr_29 [i_5] [i_5] [i_6 + 2] [i_7] [i_7] [i_5] = ((/* implicit */int) var_14);
                }
                /* LoopSeq 4 */
                for (short i_10 = 1; i_10 < 21; i_10 += 1) /* same iter space */
                {
                    var_34 = ((/* implicit */unsigned char) arr_24 [i_10 + 3] [i_7] [i_7] [12] [i_5]);
                    var_35 = var_5;
                    arr_32 [i_5] [i_6 - 1] [i_6] [i_7] [i_10] = ((/* implicit */short) var_2);
                }
                for (short i_11 = 1; i_11 < 21; i_11 += 1) /* same iter space */
                {
                    var_36 = ((/* implicit */unsigned char) (-(4294967293U)));
                    var_37 = ((/* implicit */signed char) ((var_17) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-83)))));
                }
                for (short i_12 = 1; i_12 < 21; i_12 += 1) /* same iter space */
                {
                    var_38 = var_11;
                    /* LoopSeq 2 */
                    for (short i_13 = 0; i_13 < 24; i_13 += 3) 
                    {
                        var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) var_7))));
                        var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)32764)) : (((/* implicit */int) var_16))))) ? (arr_24 [i_5] [i_6] [i_7] [(_Bool)1] [i_7]) : (((/* implicit */int) arr_19 [i_5] [i_6 + 1] [i_7]))));
                        arr_42 [i_5] [i_13] [3LL] [i_7] [i_6 - 3] [i_5] = ((/* implicit */unsigned short) arr_16 [i_5]);
                    }
                    for (unsigned int i_14 = 1; i_14 < 22; i_14 += 3) 
                    {
                        var_41 = ((((/* implicit */unsigned long long int) arr_13 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])) / (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_27 [i_5] [(short)8] [i_6] [i_7] [17ULL] [i_14])) : (var_0))));
                        arr_46 [i_5] [i_6] [i_5] [4] [i_14] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_14))));
                        var_42 *= ((/* implicit */unsigned int) arr_24 [i_5] [i_6 - 1] [i_7] [i_12 + 1] [i_14 + 1]);
                    }
                    arr_47 [i_5] [i_5] [i_5] [i_5] [i_7] [(short)3] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_5]))))))));
                    var_43 ^= ((/* implicit */_Bool) arr_20 [(_Bool)1] [(unsigned short)19]);
                }
                for (short i_15 = 1; i_15 < 21; i_15 += 1) /* same iter space */
                {
                    arr_50 [i_5] = ((/* implicit */unsigned char) (-(arr_24 [i_5] [i_5] [i_5] [i_7] [i_15])));
                    var_44 = ((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) var_10)))));
                    var_45 = ((/* implicit */unsigned short) ((short) (!(((/* implicit */_Bool) var_15)))));
                }
            }
            arr_51 [i_5] [i_5] = ((/* implicit */short) arr_49 [i_5] [i_5] [i_5] [i_5] [i_6] [i_6]);
            /* LoopSeq 1 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_17 = 0; i_17 < 24; i_17 += 1) 
                {
                    arr_56 [i_5] [i_16] [(_Bool)1] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)23929)) >> (((((/* implicit */int) (unsigned char)54)) - (28)))));
                    var_46 = ((/* implicit */long long int) ((unsigned long long int) arr_43 [i_17] [i_5] [i_5] [i_5]));
                    arr_57 [i_6] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_5])) ? (arr_16 [i_5]) : (arr_16 [i_5])));
                }
                var_47 = ((/* implicit */unsigned int) var_10);
                var_48 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_5] [i_5] [i_5] [i_5] [i_6 - 2] [i_6 - 2])) ? (var_2) : (((/* implicit */long long int) var_14))));
                /* LoopNest 2 */
                for (short i_18 = 0; i_18 < 24; i_18 += 2) 
                {
                    for (short i_19 = 2; i_19 < 23; i_19 += 2) 
                    {
                        {
                            var_49 = ((/* implicit */int) arr_7 [i_6 - 1] [i_5] [11ULL]);
                            var_50 = ((/* implicit */unsigned short) (+(arr_59 [i_5])));
                            var_51 = ((/* implicit */signed char) max((var_51), (((/* implicit */signed char) var_9))));
                            arr_62 [i_19] [i_19] [(unsigned char)2] [i_18] [i_5] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_33 [i_19 - 1] [i_5] [i_5] [(signed char)15]))));
                        }
                    } 
                } 
                var_52 = ((/* implicit */_Bool) (unsigned short)35270);
            }
        }
        for (int i_20 = 2; i_20 < 23; i_20 += 3) 
        {
            var_53 = ((/* implicit */unsigned long long int) (+(((((/* implicit */long long int) ((/* implicit */int) (signed char)-83))) % (var_9)))));
            arr_66 [i_5] [10] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_58 [i_20 - 1] [i_5] [2ULL])) / (((/* implicit */int) var_1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)19391))))) : (((/* implicit */int) arr_7 [i_5] [i_5] [i_5]))));
            var_54 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_5])) ? (((/* implicit */int) var_13)) : (var_12)));
            var_55 = ((/* implicit */unsigned int) arr_35 [i_20] [i_20] [i_20 + 1] [7U] [i_20 + 1]);
        }
    }
    for (unsigned long long int i_21 = 0; i_21 < 24; i_21 += 3) /* same iter space */
    {
        var_56 = ((/* implicit */short) min((((/* implicit */int) (unsigned short)41606)), (arr_59 [i_21])));
        var_57 |= ((/* implicit */int) var_0);
        var_58 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_21])) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (min((var_2), (((/* implicit */long long int) ((((/* implicit */int) var_1)) | (((/* implicit */int) arr_53 [i_21] [i_21] [i_21] [i_21])))))))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_22 = 0; i_22 < 12; i_22 += 3) 
    {
        for (short i_23 = 3; i_23 < 10; i_23 += 1) 
        {
            for (signed char i_24 = 1; i_24 < 10; i_24 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned int i_25 = 0; i_25 < 12; i_25 += 2) 
                    {
                        var_59 = ((/* implicit */short) max((var_59), (((/* implicit */short) ((((/* implicit */int) ((short) arr_28 [i_24] [i_25]))) | (((/* implicit */int) arr_7 [i_25] [i_25] [i_22])))))));
                        /* LoopSeq 1 */
                        for (int i_26 = 0; i_26 < 12; i_26 += 1) 
                        {
                            var_60 = ((/* implicit */unsigned char) var_7);
                            var_61 = ((/* implicit */int) var_8);
                            var_62 = ((/* implicit */signed char) ((unsigned short) (short)-32762));
                            var_63 *= ((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) (unsigned char)10)) | (((/* implicit */int) arr_31 [i_25] [i_25] [i_24] [i_25])))));
                            arr_84 [i_23] [i_22] [i_25] [i_26] = ((/* implicit */short) ((long long int) var_0));
                        }
                        arr_85 [i_22] [i_22] [(signed char)9] [i_24 + 1] [i_25] = arr_5 [i_25] [(unsigned char)15] [i_22];
                    }
                    /* vectorizable */
                    for (unsigned long long int i_27 = 1; i_27 < 9; i_27 += 1) 
                    {
                        var_64 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_7))))));
                        var_65 *= var_3;
                        var_66 = ((/* implicit */short) (_Bool)1);
                        var_67 = ((/* implicit */short) var_13);
                        var_68 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_14)) ? (var_2) : (((/* implicit */long long int) var_12))))));
                    }
                    for (short i_28 = 1; i_28 < 11; i_28 += 1) 
                    {
                        arr_91 [i_22] = ((/* implicit */_Bool) min((var_0), (((unsigned long long int) arr_12 [i_22] [i_28] [i_28 + 1] [i_24 + 1] [i_23 - 3] [i_22]))));
                        var_69 = ((/* implicit */long long int) arr_33 [(short)8] [i_22] [(unsigned char)19] [i_28]);
                        var_70 = ((/* implicit */signed char) min((arr_4 [i_22]), (((/* implicit */short) var_8))));
                    }
                    for (long long int i_29 = 0; i_29 < 12; i_29 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_30 = 2; i_30 < 11; i_30 += 3) 
                        {
                            var_71 *= ((/* implicit */unsigned char) arr_27 [i_24] [i_23 - 3] [i_24] [i_29] [i_30] [i_24]);
                            var_72 |= ((/* implicit */unsigned char) var_4);
                        }
                        var_73 = ((/* implicit */short) arr_55 [i_22] [i_29] [i_22] [(short)21]);
                        arr_96 [i_22] [i_22] [i_29] = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_25 [i_22] [(signed char)9] [i_24 - 1] [11U] [i_29] [(signed char)9])) >> (((var_3) - (11990466156884175899ULL))))), ((-(((/* implicit */int) max((var_6), (var_6))))))));
                        /* LoopSeq 4 */
                        for (short i_31 = 0; i_31 < 12; i_31 += 3) 
                        {
                            var_74 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) arr_73 [i_22] [i_29] [i_22]))));
                            var_75 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) arr_72 [i_23] [i_24] [i_24])) < (((/* implicit */int) (_Bool)0)))));
                            arr_101 [i_22] = ((/* implicit */int) max(((((!(((/* implicit */_Bool) arr_39 [i_22] [i_29] [i_22] [i_24 + 1] [i_22] [i_22] [i_22])))) ? ((+(var_17))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_22] [i_22] [i_22] [i_22] [i_22])) ? (arr_49 [i_22] [17LL] [i_22] [6ULL] [i_29] [(short)11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [i_22] [i_22] [(_Bool)1] [i_29])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_23] [i_23])) ? (var_17) : (((/* implicit */unsigned long long int) var_7))))))))));
                            arr_102 [i_22] [i_23 + 1] [i_23 + 1] [i_22] [i_29] [i_29] [i_22] = ((/* implicit */long long int) var_15);
                        }
                        /* vectorizable */
                        for (unsigned char i_32 = 0; i_32 < 12; i_32 += 3) 
                        {
                            var_76 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? ((+(var_11))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_16))))))));
                            var_77 = arr_88 [i_22] [i_22] [i_22] [i_22] [i_22] [i_22];
                        }
                        for (signed char i_33 = 0; i_33 < 12; i_33 += 3) /* same iter space */
                        {
                            var_78 = ((/* implicit */signed char) max((min((arr_39 [i_22] [i_22] [i_22] [i_24 - 1] [9ULL] [i_29] [i_33]), (((/* implicit */unsigned long long int) ((var_9) % (((/* implicit */long long int) ((/* implicit */int) var_16)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_12))))) != (((/* implicit */int) (_Bool)1)))))));
                            var_79 = ((/* implicit */short) arr_49 [i_22] [i_23 + 2] [i_22] [i_24] [i_29] [i_33]);
                            var_80 = ((/* implicit */int) 3544121065346630400ULL);
                        }
                        for (signed char i_34 = 0; i_34 < 12; i_34 += 3) /* same iter space */
                        {
                            var_81 = ((/* implicit */int) 15U);
                            arr_112 [i_34] [i_22] [i_24 + 1] [i_22] [i_22] = ((/* implicit */long long int) min((((/* implicit */short) arr_48 [i_22] [i_22])), ((short)-11733)));
                            var_82 *= ((/* implicit */short) ((int) var_15));
                            var_83 = ((/* implicit */signed char) min((((/* implicit */int) (!(((_Bool) var_12))))), (((((/* implicit */_Bool) ((unsigned long long int) arr_105 [i_34] [i_22] [i_24 + 2] [i_22] [i_22]))) ? (((/* implicit */int) (short)-7052)) : (((/* implicit */int) arr_70 [i_22]))))));
                        }
                    }
                    var_84 ^= ((/* implicit */short) (!((!(((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned int) var_8)))))))));
                    var_85 = ((/* implicit */short) max((var_85), (((/* implicit */short) arr_104 [i_23]))));
                    var_86 = ((((/* implicit */_Bool) arr_36 [i_23 - 2] [i_23 - 2] [i_24 - 1])) ? (min((((/* implicit */unsigned long long int) var_2)), (var_3))) : (((/* implicit */unsigned long long int) ((var_4) & (2574010636U)))));
                    arr_113 [6U] [i_23] [6U] &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) / (((((/* implicit */_Bool) var_13)) ? (var_0) : (((/* implicit */unsigned long long int) var_12))))))));
                }
            } 
        } 
    } 
}
