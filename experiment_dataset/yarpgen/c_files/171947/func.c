/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171947
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
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_17 = ((/* implicit */int) (+(((((/* implicit */_Bool) 31U)) ? (16598535970396850779ULL) : (6213129345815581545ULL)))));
        arr_3 [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
        var_18 = ((/* implicit */unsigned int) arr_1 [i_0]);
        arr_4 [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0])))));
    }
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_10)) ? (var_3) : (var_3))), (((/* implicit */long long int) (+(((/* implicit */int) var_9)))))))) ? (var_15) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) var_1)) : (var_15)))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) var_16)) ? (var_14) : (var_14))))))));
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 17; i_1 += 3) 
    {
        for (int i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    arr_12 [i_2] [(unsigned char)18] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (min((((/* implicit */unsigned long long int) arr_0 [i_1 + 1])), (var_6))) : (((/* implicit */unsigned long long int) max((arr_8 [i_1 + 1] [i_1] [i_3]), (arr_8 [i_1 + 1] [i_2] [i_3]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 3; i_4 < 18; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_17 [i_4] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */_Bool) ((unsigned int) min((max((var_3), (((/* implicit */long long int) var_12)))), (((/* implicit */long long int) var_8)))));
                                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_0), (((/* implicit */int) arr_2 [i_4 - 3] [i_1 + 2]))))) ? (((/* implicit */unsigned long long int) min((3026443515U), (((/* implicit */unsigned int) -623368543))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1] [i_1 + 3])) ? (var_15) : (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_13 [i_2] [10ULL] [i_3] [i_3] [i_2] [i_2])))))))))));
                            }
                        } 
                    } 
                }
                for (signed char i_6 = 3; i_6 < 18; i_6 += 4) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_7 = 0; i_7 < 20; i_7 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (short i_8 = 0; i_8 < 20; i_8 += 2) 
                        {
                            var_21 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_1 + 1])) ? (arr_18 [i_6 + 2]) : (((/* implicit */long long int) var_13))));
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
                        }
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_6])) ? (arr_14 [i_6]) : (arr_14 [i_6])));
                        arr_26 [i_1] [i_2] [i_6] [i_6] = ((/* implicit */unsigned long long int) var_3);
                    }
                    var_24 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) arr_25 [i_1 - 1] [i_6 - 2] [i_6 - 2] [(_Bool)1] [i_2]))))) ? ((~(arr_25 [i_2] [i_2] [i_2] [i_2] [i_2]))) : (((((/* implicit */_Bool) arr_7 [i_1 + 3])) ? (var_5) : (((/* implicit */long long int) arr_13 [i_2] [i_2] [i_1] [i_1] [i_1 - 1] [i_6 + 1]))))));
                    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_19 [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_6 - 1])) ? (arr_24 [(_Bool)1] [i_1] [i_2] [i_1] [i_6 - 3]) : (((/* implicit */unsigned int) (+(var_12)))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_13) : (arr_19 [i_1] [i_2] [i_6] [16ULL]))))))))))));
                    arr_27 [i_6] [i_6] [i_6] [i_1] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_13 [i_6] [i_6] [i_2] [i_2] [i_6] [i_6])))) ? (max((arr_14 [i_6]), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) arr_21 [i_1 + 2] [i_2] [i_6 + 2])))), (((((/* implicit */_Bool) min((var_14), (((/* implicit */int) var_7))))) ? (min((var_11), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) max((var_1), (((/* implicit */unsigned int) var_12)))))))));
                    var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_6] [i_1 - 1])) ? (var_4) : (arr_18 [(_Bool)1])))) ? (((/* implicit */long long int) max((((/* implicit */int) var_7)), (arr_23 [i_1] [i_2] [i_6] [2ULL] [i_6])))) : (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) -1994016969)))))), (((/* implicit */long long int) (-((-(((/* implicit */int) var_7))))))))))));
                }
                for (long long int i_9 = 0; i_9 < 20; i_9 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_10 = 0; i_10 < 20; i_10 += 3) /* same iter space */
                    {
                        var_27 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((-9070452863174543336LL), (((/* implicit */long long int) 1251478669))))) ? (12233614727893970070ULL) : (((/* implicit */unsigned long long int) -8351503038115621032LL))));
                        var_28 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_1] [i_1 + 2] [i_2] [i_9] [i_10])) ? (((/* implicit */unsigned int) var_8)) : (arr_0 [i_2])))) ? (min((var_5), (((/* implicit */long long int) arr_13 [i_10] [i_2] [i_9] [i_10] [i_9] [i_10])))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_6)))))), (((/* implicit */long long int) ((unsigned short) min((((/* implicit */unsigned long long int) var_4)), (arr_14 [i_10]))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_11 = 0; i_11 < 20; i_11 += 3) /* same iter space */
                    {
                        arr_35 [i_1] [i_1 + 3] [i_1] [i_11] = ((/* implicit */_Bool) (-(var_16)));
                        arr_36 [i_1] [i_9] [i_9] [i_2] [i_9] [i_11] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_11] [i_2] [i_1] [i_2] [i_1])) ? (arr_15 [i_11] [i_2] [(_Bool)1] [i_2] [i_1]) : (arr_15 [i_2] [i_2] [i_1] [i_2] [i_1])));
                    }
                    for (unsigned short i_12 = 0; i_12 < 20; i_12 += 3) /* same iter space */
                    {
                        arr_40 [i_1] [i_2] [i_9] [i_12] = ((/* implicit */signed char) max((((var_7) ? (arr_15 [i_1 + 2] [i_12] [i_1] [i_12] [i_1 + 3]) : (arr_15 [i_1 + 2] [i_12] [i_1 + 2] [i_12] [i_1 - 1]))), (((((/* implicit */_Bool) arr_15 [i_1 - 1] [i_12] [i_1] [i_12] [i_1 + 2])) ? (arr_15 [i_1 + 1] [i_12] [i_1] [i_12] [i_1 + 2]) : (arr_15 [i_1 + 3] [i_12] [i_1] [i_12] [i_1 + 2])))));
                        var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (+(arr_6 [i_12] [i_2]))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 20; i_13 += 4) 
                        {
                            arr_44 [i_12] [i_13] = ((long long int) ((((/* implicit */_Bool) arr_8 [i_13] [i_9] [i_2])) ? (var_5) : (((/* implicit */long long int) arr_33 [4] [i_1 + 1] [i_2] [i_9] [11LL] [i_13]))));
                            var_30 = ((/* implicit */unsigned char) (-(arr_16 [i_1 + 3] [i_1] [i_1] [i_1 - 1] [i_1 + 2] [i_13] [i_13])));
                        }
                        for (signed char i_14 = 1; i_14 < 19; i_14 += 3) 
                        {
                            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_28 [i_1 + 1] [i_1 + 1] [i_14 - 1] [i_14 + 1]))) ? (max((arr_38 [i_1] [i_2] [i_9] [i_12] [i_14 - 1]), (((/* implicit */unsigned long long int) var_16)))) : ((+(min((((/* implicit */unsigned long long int) arr_2 [i_1] [i_14 + 1])), (var_6)))))));
                            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_23 [i_1] [i_1 + 2] [i_9] [i_12] [i_14 - 1]), (((/* implicit */int) min((var_2), (((/* implicit */unsigned char) var_7)))))))) ? (min((((/* implicit */unsigned long long int) min((arr_13 [i_12] [i_2] [i_9] [i_12] [i_14] [i_2]), (var_1)))), (max((arr_20 [i_1] [i_1] [i_1]), (var_11))))) : (((/* implicit */unsigned long long int) var_1))));
                        }
                    }
                    /* LoopSeq 4 */
                    for (long long int i_15 = 2; i_15 < 17; i_15 += 4) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_16 = 3; i_16 < 18; i_16 += 4) 
                        {
                            var_33 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (arr_33 [i_16] [i_16] [i_16 + 1] [i_16 - 3] [i_16 - 2] [i_16 + 2]) : (((/* implicit */int) arr_50 [i_1] [i_1] [i_1] [i_1 - 1]))));
                            arr_54 [i_1] [i_1] [i_1] [i_15] [i_16] [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_15) : (((/* implicit */unsigned long long int) arr_1 [i_2]))));
                            arr_55 [i_1] [i_2] [i_9] [i_15 + 1] [i_16 - 2] = ((/* implicit */unsigned long long int) arr_25 [i_1 + 3] [i_2] [i_16] [i_15] [i_16 + 1]);
                        }
                        var_34 *= ((/* implicit */unsigned int) (+(var_10)));
                        var_35 = min((((/* implicit */int) var_7)), ((+(((((/* implicit */_Bool) var_10)) ? (var_12) : (var_8))))));
                    }
                    for (int i_17 = 2; i_17 < 19; i_17 += 4) 
                    {
                        var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned int) var_7))))) ? (((/* implicit */unsigned long long int) var_13)) : (var_11))), (max(((+(var_15))), (((/* implicit */unsigned long long int) var_16)))))))));
                        arr_59 [i_1] = ((/* implicit */unsigned long long int) var_16);
                        var_37 = ((/* implicit */unsigned long long int) var_16);
                    }
                    for (unsigned int i_18 = 0; i_18 < 20; i_18 += 2) 
                    {
                        arr_64 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */int) min((min((min((var_11), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) arr_53 [i_1] [i_1] [i_1] [i_1 - 1] [i_1 + 2] [i_2])))), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_0)) : (var_3))))))));
                        arr_65 [i_1] [i_1 - 1] [i_1 + 1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_9] [i_2] [i_1])) ? ((~(arr_25 [i_1 + 3] [i_1 - 1] [i_1] [i_1] [i_1 + 2]))) : (max((min((var_5), (((/* implicit */long long int) arr_53 [i_1 + 3] [i_1] [i_2] [i_9] [i_9] [i_18])))), (((/* implicit */long long int) max((arr_50 [i_18] [i_9] [i_1] [i_1]), (((/* implicit */short) var_9)))))))));
                    }
                    /* vectorizable */
                    for (int i_19 = 0; i_19 < 20; i_19 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (long long int i_20 = 2; i_20 < 19; i_20 += 4) /* same iter space */
                        {
                            arr_72 [i_1] [i_1 + 3] [16] [i_1 - 1] = ((/* implicit */unsigned int) var_7);
                            var_38 = ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-41))) : (15651372300620026267ULL));
                            var_39 = ((/* implicit */_Bool) arr_61 [i_20] [i_2] [16] [i_19] [i_1]);
                            var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_0)))) ? (arr_11 [i_1] [i_20 - 1] [i_9] [i_19]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-23644)) ? (((/* implicit */int) (unsigned char)241)) : (394382262))))));
                            arr_73 [i_1 + 2] [i_2] [i_9] [i_20] [i_20 + 1] = ((((/* implicit */_Bool) arr_41 [i_20 - 2] [i_1 + 2])) ? (arr_41 [i_20 + 1] [i_1 + 2]) : (arr_41 [i_20 - 1] [i_1 + 2]));
                        }
                        for (long long int i_21 = 2; i_21 < 19; i_21 += 4) /* same iter space */
                        {
                            var_41 |= ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_11)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
                            arr_78 [9U] [i_2] [i_2] [i_19] [i_21] = ((/* implicit */int) arr_48 [i_1 + 3] [i_2]);
                            var_42 = ((/* implicit */unsigned char) ((signed char) arr_6 [i_1 + 3] [i_19]));
                            arr_79 [i_1] [i_2] [(_Bool)1] [i_19] [i_21] = ((/* implicit */int) ((((/* implicit */_Bool) arr_71 [2U] [i_1 - 1] [i_1] [i_1 - 1] [i_2] [i_21 + 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_52 [i_1] [i_2] [i_9] [i_19] [i_21])) ? (((/* implicit */int) var_9)) : (var_8)))) : (arr_20 [i_9] [i_2] [i_1 + 2])));
                            arr_80 [i_2] [i_19] = ((((_Bool) arr_20 [i_1] [i_2] [i_21])) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))));
                        }
                        for (long long int i_22 = 2; i_22 < 19; i_22 += 4) /* same iter space */
                        {
                            var_43 &= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_50 [i_2] [i_2] [i_9] [i_19]))) : (((((/* implicit */_Bool) arr_0 [i_22])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
                            var_44 = ((/* implicit */unsigned long long int) var_14);
                        }
                        for (unsigned long long int i_23 = 1; i_23 < 18; i_23 += 4) 
                        {
                            arr_86 [i_1 + 1] [i_1] [i_1] [i_1] = var_15;
                            var_45 = ((/* implicit */unsigned long long int) arr_18 [i_1]);
                            var_46 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_63 [2] [8] [i_19] [i_9] [i_2] [i_1 - 1])))) ? (((/* implicit */long long int) var_12)) : (((((/* implicit */_Bool) var_13)) ? (arr_74 [i_1 + 2] [i_1] [i_1] [i_1 + 3] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_66 [i_19] [i_9])))))));
                        }
                        arr_87 [i_1 + 2] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) arr_11 [i_1 + 1] [i_1] [i_1] [i_1 - 1]);
                        arr_88 [i_19] [i_19] [i_9] [i_9] [i_2] [i_1] = ((/* implicit */long long int) var_13);
                        var_47 ^= ((/* implicit */unsigned int) (-(var_0)));
                    }
                    /* LoopNest 2 */
                    for (int i_24 = 0; i_24 < 20; i_24 += 3) 
                    {
                        for (int i_25 = 0; i_25 < 20; i_25 += 2) 
                        {
                            {
                                arr_94 [i_1] [i_1] [i_2] [i_9] [i_24] [i_24] [i_24] = ((/* implicit */_Bool) (~(((/* implicit */int) var_7))));
                                arr_95 [i_24] [i_2] [i_2] [i_2] [i_2] = ((((/* implicit */_Bool) (short)906)) ? (-394382262) : (min((((/* implicit */int) (signed char)-38)), (3))));
                            }
                        } 
                    } 
                }
                arr_96 [i_1] [i_1] [10ULL] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_4) : (((/* implicit */long long int) var_16))))) ? (((((/* implicit */_Bool) arr_28 [i_1] [i_2] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_42 [i_2] [i_2] [i_2] [i_2] [i_1] [i_1]))) : (min((arr_76 [i_1] [i_2] [i_2]), (var_5))))))));
            }
        } 
    } 
}
