/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125508
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [(short)22] = min((min((arr_3 [i_0 + 1] [i_1 + 1]), (arr_3 [i_0 + 1] [i_1 + 1]))), (((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (arr_3 [i_0 + 1] [i_1 + 1]))));
                    arr_11 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1505329869U)) ? (2157703459U) : (3439545772U)));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                {
                    var_10 ^= ((/* implicit */unsigned short) arr_15 [i_3]);
                    /* LoopNest 2 */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 20; i_7 += 4) 
                        {
                            {
                                arr_26 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_25 [(signed char)2] [(signed char)2] [(signed char)2])), (min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [(unsigned short)20]))))), (((((/* implicit */_Bool) 4294967278U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3] [i_3]))) : (var_3)))))));
                                var_11 = ((/* implicit */unsigned short) arr_23 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1]);
                                var_12 += ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_25 [i_6 - 1] [i_6 - 1] [i_6 - 1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 22; i_8 += 3) 
    {
        for (unsigned char i_9 = 1; i_9 < 21; i_9 += 4) 
        {
            {
                arr_31 [i_8] [19U] = ((/* implicit */unsigned int) (short)-21283);
                var_13 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_1 [i_8 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_8 + 3]))) : (arr_1 [i_8 + 3]))), (((/* implicit */unsigned long long int) ((3189421892U) - (271260729U))))));
                /* LoopSeq 3 */
                for (unsigned int i_10 = 0; i_10 < 25; i_10 += 4) 
                {
                    arr_35 [i_8] [i_8] [(unsigned short)8] [i_8] |= ((/* implicit */long long int) ((4294967295U) == (((/* implicit */unsigned int) ((/* implicit */int) ((4294967295U) != (1505329869U)))))));
                    var_14 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_4 [i_8 + 3] [i_9 + 3])) > (((/* implicit */int) arr_4 [i_8 + 2] [(unsigned short)15])))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_11 = 0; i_11 < 25; i_11 += 4) /* same iter space */
                    {
                        arr_40 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */_Bool) max((855421524U), (((/* implicit */unsigned int) -1))));
                        arr_41 [(signed char)15] = ((/* implicit */signed char) 3439545772U);
                        arr_42 [1LL] [0U] [3U] [3U] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-55)))))));
                    }
                    for (unsigned short i_12 = 0; i_12 < 25; i_12 += 4) /* same iter space */
                    {
                        arr_45 [i_8] [i_8] [i_8] [i_8] = ((((/* implicit */int) (signed char)99)) / (((/* implicit */int) (unsigned short)48324)));
                        /* LoopSeq 1 */
                        for (unsigned short i_13 = 1; i_13 < 24; i_13 += 3) 
                        {
                            arr_49 [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */int) 3189421892U);
                            arr_50 [7U] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) var_2);
                        }
                        var_15 ^= ((/* implicit */unsigned long long int) arr_34 [i_8] [18U] [i_8] [14U]);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_14 = 2; i_14 < 21; i_14 += 2) 
                        {
                            arr_54 [i_8] [i_8] [(_Bool)1] [(unsigned char)23] [i_8] = ((/* implicit */unsigned short) 511U);
                            arr_55 [17U] [17U] [17U] [23] [23] [17U] [23] = ((/* implicit */long long int) ((_Bool) arr_9 [i_8 + 3]));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_15 = 2; i_15 < 23; i_15 += 2) 
                    {
                        for (unsigned int i_16 = 2; i_16 < 21; i_16 += 4) 
                        {
                            {
                                arr_61 [i_8] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned short)64512)))) ? (((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */int) (unsigned char)184)) : (((/* implicit */int) (unsigned short)4442)))) : (1)));
                                arr_62 [13U] [13U] [12U] [12U] [12U] = ((/* implicit */unsigned long long int) (~(min((((/* implicit */unsigned int) var_8)), (((((/* implicit */_Bool) (signed char)-43)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9098))) : (arr_39 [5U] [5U])))))));
                                arr_63 [i_8] [i_8] [i_8] [(short)7] [(short)23] [20LL] = ((/* implicit */signed char) arr_43 [i_8] [i_8] [i_8] [i_8]);
                                var_16 = ((/* implicit */signed char) arr_34 [21U] [20U] [21U] [21U]);
                                var_17 = ((/* implicit */unsigned short) var_9);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_17 = 0; i_17 < 25; i_17 += 4) 
                    {
                        for (unsigned short i_18 = 3; i_18 < 23; i_18 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_4))));
                                arr_70 [3ULL] [3ULL] [3ULL] [3ULL] [3ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)36)) ? (((((/* implicit */_Bool) -3542337352540962910LL)) ? (((/* implicit */int) (short)21270)) : (7))) : ((~(((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned char i_19 = 0; i_19 < 25; i_19 += 3) 
                {
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_57 [i_8] [i_8 + 3] [i_8] [i_8] [i_8 + 2] [i_8 + 2])) ? (((/* implicit */unsigned long long int) var_2)) : (var_9)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_20 = 2; i_20 < 23; i_20 += 3) 
                    {
                        for (long long int i_21 = 1; i_21 < 23; i_21 += 1) 
                        {
                            {
                                arr_79 [(signed char)22] [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_8] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 520U)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (unsigned short)48324))));
                                var_20 = (~(((((/* implicit */_Bool) arr_34 [(short)22] [(short)22] [24] [(short)22])) ? (4294966775U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)105))))));
                                var_21 = arr_51 [i_8] [(_Bool)1] [(_Bool)1] [(unsigned short)24] [(signed char)19];
                                var_22 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 3542337352540962909LL)) ? (500U) : (arr_39 [12ULL] [12ULL])))));
                                arr_80 [i_19] [17ULL] [i_19] [8ULL] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_38 [i_20] [i_20] [(unsigned short)23] [i_20] [i_20] [i_21 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_65 [i_9 - 1]))) : (((((/* implicit */_Bool) (unsigned short)59043)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48336))) : (-3542337352540962914LL)))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_22 = 0; i_22 < 25; i_22 += 4) 
                    {
                        var_23 = ((_Bool) var_0);
                        arr_84 [i_19] [i_19] = ((/* implicit */unsigned int) 12069289809469811156ULL);
                    }
                }
                for (unsigned long long int i_23 = 1; i_23 < 23; i_23 += 4) 
                {
                    arr_88 [(short)13] [(short)13] [(short)13] = ((/* implicit */int) var_5);
                    /* LoopSeq 3 */
                    for (unsigned short i_24 = 4; i_24 < 23; i_24 += 4) /* same iter space */
                    {
                        arr_91 [14ULL] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_82 [i_8 + 2])) ? (((((/* implicit */_Bool) 1744979462)) ? (1878065769U) : (1105545404U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [2ULL]))))) / ((-((+(4294967271U)))))));
                        /* LoopSeq 2 */
                        for (int i_25 = 1; i_25 < 24; i_25 += 4) /* same iter space */
                        {
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */long long int) var_3)) == (((((/* implicit */_Bool) (unsigned short)34793)) ? (((/* implicit */long long int) 935328602)) : (-3542337352540962914LL))))))));
                            arr_95 [i_8] [i_8] [i_8] [(unsigned short)8] [i_8] = ((/* implicit */int) var_6);
                        }
                        for (int i_26 = 1; i_26 < 24; i_26 += 4) /* same iter space */
                        {
                            arr_98 [i_8] [i_8] [i_26] [i_8] [(unsigned short)0] = (+((~(((/* implicit */int) arr_48 [i_26] [(unsigned short)4] [i_26 + 1] [(unsigned short)4] [(unsigned short)4] [(unsigned short)12] [(unsigned char)1])))));
                            arr_99 [i_26] [(unsigned char)22] [i_26] = min((((/* implicit */int) ((-2038462641) <= (((/* implicit */int) (unsigned short)53510))))), (min((var_7), (((/* implicit */int) ((((/* implicit */int) arr_53 [0U] [(unsigned short)6] [13U] [(unsigned short)6] [(unsigned char)18] [(unsigned char)18] [(unsigned short)6])) >= (((/* implicit */int) arr_36 [10LL] [(unsigned char)22] [(unsigned char)22] [(short)16]))))))));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((unsigned int) (signed char)-95))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) ^ (((var_9) * (((/* implicit */unsigned long long int) 3189421891U))))))));
                            var_26 ^= ((/* implicit */unsigned short) min((min((var_7), (((/* implicit */int) arr_4 [i_23 + 1] [i_8 + 3])))), (min(((~(((/* implicit */int) arr_85 [(signed char)21] [(unsigned char)18])))), (((/* implicit */int) max((arr_58 [i_8]), (arr_5 [i_26] [i_26]))))))));
                        }
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((unsigned long long int) (unsigned short)511)), (((8356867691656858865ULL) - (((/* implicit */unsigned long long int) 65528U))))))) ? ((~((-(2147483648U))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_77 [i_8] [i_8] [i_8] [(unsigned short)2] [i_8])))))));
                        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) 4294967295U))));
                        /* LoopSeq 2 */
                        for (int i_27 = 0; i_27 < 25; i_27 += 1) 
                        {
                            var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((3719710775U), (min((((/* implicit */unsigned int) 521425619)), (4294967293U)))))) ? (arr_72 [i_24] [6U] [20U] [i_24]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 436817144U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_83 [i_8]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32752))) | (4294967295U))) : (3438511545U))))));
                            arr_104 [i_8] [(unsigned short)5] = ((/* implicit */_Bool) ((((/* implicit */int) arr_47 [(unsigned char)10] [(unsigned char)10] [(signed char)10] [(unsigned char)10])) + (((/* implicit */int) arr_28 [(unsigned char)16]))));
                            arr_105 [i_8] [i_8] [(unsigned short)10] [11U] [i_8] [(short)8] = ((/* implicit */_Bool) (-((+(3781119075357684187LL)))));
                            arr_106 [(unsigned short)8] [(unsigned short)8] [(unsigned short)8] [(unsigned short)8] [12ULL] [3] [(unsigned short)8] = ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) arr_90 [i_8] [i_8] [i_8] [i_8] [i_8] [(unsigned short)2])) ? (((/* implicit */unsigned long long int) 925335685U)) : (7493252136474535982ULL))), (((/* implicit */unsigned long long int) 856455737U)))) < (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-53))))) ? (((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_75 [i_24]))) : (arr_1 [i_8]))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) 1744979468)), (4294966272U))))))));
                        }
                        /* vectorizable */
                        for (int i_28 = 1; i_28 < 22; i_28 += 4) 
                        {
                            arr_109 [5U] [5U] [5U] [5U] [5U] [5U] = ((/* implicit */unsigned short) ((unsigned long long int) arr_83 [i_8 - 1]));
                            var_30 = ((/* implicit */signed char) (~(((/* implicit */int) arr_71 [i_28 + 2] [i_23 + 1] [i_23 + 1]))));
                            var_31 += ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) 3598896390U)) >= (10089876382052692749ULL)))) <= (((/* implicit */int) arr_44 [i_8] [i_8] [(unsigned short)3]))));
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 856455751U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_86 [i_24 + 1] [i_9 + 4] [i_23 + 2] [i_9 + 4]))) : (arr_102 [i_23 - 1] [i_23 - 1] [i_23 - 1] [i_23 - 1] [i_23 - 1])));
                        }
                    }
                    for (unsigned short i_29 = 4; i_29 < 23; i_29 += 4) /* same iter space */
                    {
                        var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (8356867691656858865ULL)))) ? ((+(1128934501))) : (((/* implicit */int) ((unsigned char) 0U)))))) ? (((((/* implicit */_Bool) arr_97 [i_8] [16U] [2ULL] [i_29] [2ULL] [(unsigned short)6])) ? (((((/* implicit */_Bool) -3542337352540962914LL)) ? (arr_3 [(unsigned short)16] [(unsigned short)16]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) arr_66 [(_Bool)1] [(_Bool)1] [23U])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [(_Bool)1] [16] [i_8]))) : (856455741U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_76 [22] [22]))) < (10089876382052692751ULL)))))));
                        arr_112 [i_8] [i_8] = ((/* implicit */unsigned char) var_4);
                        var_34 *= ((/* implicit */signed char) max(((-(((/* implicit */int) (short)13427)))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) >= (-1))))));
                        arr_113 [i_23] = ((((/* implicit */int) (short)-29201)) ^ (((/* implicit */int) (short)25575)));
                        /* LoopSeq 1 */
                        for (unsigned short i_30 = 0; i_30 < 25; i_30 += 4) 
                        {
                            arr_116 [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1] = (~(((unsigned int) ((((/* implicit */_Bool) (unsigned short)59810)) ? (((/* implicit */int) arr_0 [i_9] [i_9])) : (((/* implicit */int) var_8))))));
                            var_35 = ((/* implicit */unsigned short) (~(1152640029630136320ULL)));
                        }
                    }
                    for (unsigned short i_31 = 4; i_31 < 23; i_31 += 4) /* same iter space */
                    {
                        var_36 = ((/* implicit */_Bool) min((3772725545U), (856455751U)));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_32 = 0; i_32 < 25; i_32 += 3) 
                        {
                            arr_123 [i_8] [i_8] [(unsigned short)14] [i_8] [i_8] = ((/* implicit */signed char) arr_44 [i_8] [i_8] [i_8]);
                            arr_124 [i_8] [i_8] [i_8] [(unsigned char)8] [i_8] = ((/* implicit */unsigned short) var_3);
                            arr_125 [(unsigned short)23] [21U] [21U] [21U] [21U] |= ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_94 [i_23 + 2] [i_9 + 1]))) ^ (var_9));
                        }
                        for (signed char i_33 = 1; i_33 < 24; i_33 += 4) 
                        {
                            var_37 = ((/* implicit */unsigned long long int) (unsigned short)3584);
                            var_38 = ((/* implicit */short) 3598896397U);
                        }
                    }
                    var_39 ^= ((/* implicit */int) (((+(((((/* implicit */_Bool) (signed char)-29)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5725))) : (4294967294U))))) * (((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2747744805U)) ? (((/* implicit */int) arr_29 [i_9] [i_9] [i_9])) : (((/* implicit */int) arr_27 [i_8]))))) / (max((4294967294U), (((/* implicit */unsigned int) var_8))))))));
                }
            }
        } 
    } 
}
