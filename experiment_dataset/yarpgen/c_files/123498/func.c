/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123498
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
    var_14 = ((/* implicit */long long int) max((var_14), (min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)53211)) : (((/* implicit */int) var_7))))) ? (((var_8) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_2))) : (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) ((short) max((-1007397294), (((/* implicit */int) var_8))))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_15 = ((/* implicit */int) ((signed char) arr_2 [i_0]));
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((long long int) (unsigned char)32)) : (((/* implicit */long long int) var_1))))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 7; i_1 += 4) 
    {
        var_17 |= ((/* implicit */_Bool) ((long long int) var_10));
        var_18 = ((/* implicit */signed char) (_Bool)1);
    }
    for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        arr_9 [10U] |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (-3306800607927307904LL) : (var_10)))) ? (max((var_10), (((/* implicit */long long int) (short)-7071)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -8828078161048472489LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-7071))))))) & (min((((/* implicit */long long int) var_11)), (((((/* implicit */_Bool) -6675154493348109783LL)) ? (var_9) : (((/* implicit */long long int) arr_7 [i_2] [i_2]))))))));
        var_19 ^= ((/* implicit */long long int) (_Bool)1);
        arr_10 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) ((long long int) var_6)))) ? (((int) max(((signed char)-119), ((signed char)-10)))) : (((/* implicit */int) ((unsigned short) ((var_9) + (((/* implicit */long long int) 835811812))))))));
        /* LoopNest 3 */
        for (unsigned short i_3 = 1; i_3 < 22; i_3 += 2) 
        {
            for (int i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                for (long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    {
                        arr_21 [4LL] [4LL] [i_4] [i_3] &= ((/* implicit */unsigned short) ((max((((long long int) arr_7 [i_2] [i_5])), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-7070)) : (((/* implicit */int) (short)-7086))))))) & (min((arr_16 [i_3 + 3]), (((/* implicit */long long int) (short)-7071))))));
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((((min((((/* implicit */long long int) (short)-15844)), (var_9))) + (9223372036854775807LL))) >> (((unsigned long long int) var_6))))) ? (max((((/* implicit */unsigned int) ((int) 605680023))), (min((((/* implicit */unsigned int) var_12)), (var_11))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_2] [i_2] [i_2]))))))));
                        var_21 *= (+((+(((/* implicit */int) (signed char)-1)))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 3 */
    for (unsigned short i_6 = 4; i_6 < 22; i_6 += 4) 
    {
        var_22 = ((/* implicit */int) max((var_22), (var_12)));
        var_23 = ((/* implicit */short) var_8);
        var_24 = ((/* implicit */long long int) ((_Bool) ((short) 8559947815529861770LL)));
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [(unsigned short)3] [i_6])) ? (((unsigned int) arr_16 [i_6 - 1])) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(605680023)))) ? ((~(((/* implicit */int) (signed char)2)))) : (((/* implicit */int) ((signed char) arr_22 [i_6]))))))));
    }
    for (int i_7 = 0; i_7 < 24; i_7 += 3) 
    {
        var_26 = max((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((signed char) var_2))) : (((/* implicit */int) ((((/* implicit */int) arr_15 [i_7] [i_7] [i_7])) == (var_12))))))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])) && (((/* implicit */_Bool) 6917529027641081856LL))))), (((long long int) (short)7070)))));
        var_27 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_26 [i_7])) < (2137147598))) ? (min((((((/* implicit */_Bool) 8559947815529861770LL)) ? (((/* implicit */unsigned long long int) var_1)) : (arr_22 [i_7]))), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((unsigned int) 605680023)))));
        var_28 |= ((/* implicit */long long int) var_5);
        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) var_4)), (((var_8) ? (arr_27 [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)7071)))))))) : (((((/* implicit */_Bool) (unsigned short)34039)) ? (((/* implicit */long long int) max((var_11), (((/* implicit */unsigned int) var_5))))) : (max((7080420755347746960LL), (((/* implicit */long long int) (unsigned short)10834))))))));
    }
    for (unsigned short i_8 = 0; i_8 < 24; i_8 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 3) 
        {
            /* LoopSeq 4 */
            for (unsigned char i_10 = 0; i_10 < 24; i_10 += 3) /* same iter space */
            {
                var_30 = ((/* implicit */unsigned int) min((18102460327087297171ULL), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_8]))) : (344283746622254445ULL)))));
                /* LoopNest 2 */
                for (signed char i_11 = 1; i_11 < 21; i_11 += 2) 
                {
                    for (long long int i_12 = 1; i_12 < 23; i_12 += 3) 
                    {
                        {
                            var_31 &= ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-104)) ? (((/* implicit */unsigned long long int) var_0)) : (((min((((/* implicit */unsigned long long int) -8664018273226296290LL)), (var_13))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7080420755347746960LL)) ? (((/* implicit */int) (short)-3891)) : (((/* implicit */int) var_8)))))))));
                            var_32 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_10)))) || (((/* implicit */_Bool) 6LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((int) var_6))))) : (min((-8559947815529861770LL), (((/* implicit */long long int) var_12)))));
                            var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) arr_27 [(unsigned short)20])))))) : (((((/* implicit */_Bool) arr_18 [i_8] [i_8] [i_8] [i_8] [(short)8])) ? (min((144114088564228096LL), (((/* implicit */long long int) (_Bool)1)))) : (max((((/* implicit */long long int) var_5)), (5917389879976003622LL))))))))));
                        }
                    } 
                } 
            }
            for (unsigned char i_13 = 0; i_13 < 24; i_13 += 3) /* same iter space */
            {
                /* LoopSeq 4 */
                for (unsigned int i_14 = 2; i_14 < 23; i_14 += 1) 
                {
                    var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) var_9))));
                    var_35 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((signed char) ((unsigned short) 144114088564228100LL)))), (((unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)32704)) : (((/* implicit */int) (_Bool)1)))))));
                    arr_49 [(signed char)6] [i_14 - 1] [i_9] [i_9] [i_8] [(signed char)6] |= ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned int) ((signed char) var_10)))))) ? (min((-605680017), (((/* implicit */int) var_8)))) : (((/* implicit */int) ((unsigned short) ((var_13) / (((/* implicit */unsigned long long int) 144114088564228126LL))))))));
                }
                /* vectorizable */
                for (unsigned long long int i_15 = 2; i_15 < 20; i_15 += 3) /* same iter space */
                {
                    var_36 = ((/* implicit */int) ((unsigned long long int) ((unsigned short) 605680010)));
                    arr_53 [i_8] [i_9] [i_8] [i_8] = ((/* implicit */short) -144114088564228091LL);
                    var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) ((long long int) ((unsigned int) arr_41 [7ULL] [i_9] [i_13] [i_15]))))));
                    arr_54 [8LL] [i_15] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_27 [2])) ? (((/* implicit */int) ((_Bool) var_9))) : (((/* implicit */int) arr_46 [22LL]))));
                }
                for (unsigned long long int i_16 = 2; i_16 < 20; i_16 += 3) /* same iter space */
                {
                    var_38 -= ((/* implicit */int) ((_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) 144114088564228107LL))))));
                    var_39 *= ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_11)) : (-1LL))), (((/* implicit */long long int) ((unsigned char) arr_41 [i_8] [i_9] [i_13] [i_16])))))) ? (((long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (arr_51 [i_8] [i_9] [i_13] [(_Bool)1])))) : (min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)14))) : (7080420755347746938LL))), (((/* implicit */long long int) var_8))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_17 = 0; i_17 < 24; i_17 += 4) 
                    {
                        var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)3968)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_8] [i_9] [i_13] [i_16] [i_9] [i_13]))))) : (((/* implicit */int) arr_26 [i_8]))));
                        var_41 *= ((/* implicit */short) arr_32 [i_13] [i_8]);
                        var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) ((144114088564228100LL) | (((/* implicit */long long int) arr_17 [i_16 - 1] [i_16 - 1] [i_16 + 3] [i_16 + 3])))))));
                        var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) 2564693273134011658LL))) ? (((int) -7080420755347746959LL)) : (((/* implicit */int) ((signed char) var_7)))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 3) 
                    {
                        var_44 -= ((/* implicit */signed char) var_2);
                        var_45 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) ((int) var_12))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-20294)) ? (((/* implicit */unsigned long long int) -7080420755347746960LL)) : (var_13)))))));
                        arr_64 [i_9] [i_9] = min((arr_19 [i_13] [i_9] [i_9] [i_9] [i_9] [i_8]), (((((((/* implicit */int) var_5)) < ((-2147483647 - 1)))) ? (((((/* implicit */_Bool) (unsigned short)22274)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((int) (unsigned short)8802))))));
                    }
                    for (long long int i_19 = 3; i_19 < 21; i_19 += 4) 
                    {
                        var_46 = ((/* implicit */unsigned char) max((var_46), (((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) ((unsigned char) var_0))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)-83)), (var_5))))) : (((((/* implicit */_Bool) var_9)) ? (1931048956451676073LL) : (((/* implicit */long long int) var_1))))))))));
                        var_47 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) var_7)), (((int) var_3))))) ? (min((((/* implicit */long long int) arr_41 [i_19 - 2] [i_16] [i_16 + 2] [i_16 + 2])), (((((/* implicit */_Bool) (unsigned short)43269)) ? (2564693273134011658LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))) : (((/* implicit */long long int) var_11))));
                    }
                    /* vectorizable */
                    for (int i_20 = 0; i_20 < 24; i_20 += 3) 
                    {
                        arr_71 [i_9] [i_13] [i_9] = ((/* implicit */unsigned long long int) ((unsigned int) 144114088564228093LL));
                        var_48 &= ((/* implicit */unsigned short) ((signed char) ((long long int) var_1)));
                    }
                }
                for (short i_21 = 1; i_21 < 23; i_21 += 3) 
                {
                    var_49 ^= -7080420755347746964LL;
                    var_50 = ((/* implicit */int) min((var_50), (((/* implicit */int) (~((-(144114088564228114LL))))))));
                    arr_75 [i_9] [i_9] [16LL] = ((/* implicit */unsigned short) 3740423895U);
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_22 = 2; i_22 < 21; i_22 += 4) 
                {
                    var_51 *= ((/* implicit */_Bool) -2564693273134011641LL);
                    var_52 = ((/* implicit */short) var_9);
                }
                for (unsigned int i_23 = 0; i_23 < 24; i_23 += 2) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_24 = 4; i_24 < 22; i_24 += 4) 
                    {
                        var_53 = var_5;
                        arr_84 [i_8] [i_9] [i_8] [i_24] [i_24 - 2] [i_24] [i_24] |= ((/* implicit */unsigned int) ((unsigned short) ((long long int) 554543409U)));
                    }
                    /* vectorizable */
                    for (unsigned char i_25 = 0; i_25 < 24; i_25 += 3) /* same iter space */
                    {
                        var_54 = ((/* implicit */unsigned short) var_5);
                        var_55 = ((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) var_11)))));
                        var_56 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_7))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -144114088564228097LL))))) : (((((/* implicit */_Bool) arr_70 [i_8] [i_9] [i_13] [i_9] [i_25] [i_8] [i_25])) ? (((/* implicit */int) arr_26 [i_8])) : (-605680027)))));
                    }
                    for (unsigned char i_26 = 0; i_26 < 24; i_26 += 3) /* same iter space */
                    {
                        var_57 -= ((/* implicit */unsigned int) ((short) var_1));
                        arr_89 [i_26] [i_9] [i_9] [i_9] [i_9] [i_8] = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_12)), (3382590974133922551ULL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 391266324)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))))))) ? (((/* implicit */long long int) 3740423893U)) : (3617813890240241222LL)));
                        arr_90 [i_8] [i_8] [i_9] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((long long int) (_Bool)1)), (((/* implicit */long long int) min((((/* implicit */short) var_6)), (var_5))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8796093014016ULL)) ? (3474507356U) : (var_1)))) ? (((((/* implicit */_Bool) (short)32767)) ? (144114088564228082LL) : (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) var_12)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (signed char)36)))))) : (min((((/* implicit */unsigned int) var_6)), (var_11))))))));
                    }
                    arr_91 [i_8] [i_8] [i_9] [i_8] [i_8] = ((/* implicit */unsigned short) 9223372036854775807LL);
                    var_58 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) & (((/* implicit */int) arr_14 [i_23]))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) arr_74 [i_8])), (var_7))))) : (min((-144114088564228097LL), (((/* implicit */long long int) (unsigned short)768))))))) : (6174158972959512160ULL)));
                    var_59 = ((/* implicit */int) min((var_59), (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_10))))))));
                }
                var_60 = ((/* implicit */unsigned short) min((min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (605680017) : (((/* implicit */int) var_5))))))), (((/* implicit */unsigned long long int) (unsigned short)4096))));
            }
            for (signed char i_27 = 0; i_27 < 24; i_27 += 4) /* same iter space */
            {
                var_61 = ((/* implicit */int) max((((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-126))) - (-5876854731952219564LL)))), (((/* implicit */unsigned short) ((short) var_1)))));
                var_62 -= ((/* implicit */unsigned long long int) ((unsigned short) max((((var_2) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14))))), (((((/* implicit */_Bool) var_5)) ? (3617813890240241199LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)124))))))));
            }
            for (signed char i_28 = 0; i_28 < 24; i_28 += 4) /* same iter space */
            {
                arr_97 [i_8] [i_9] = ((((/* implicit */_Bool) ((int) ((1984031148519384939LL) & (-9223372036854775790LL))))) ? (((long long int) ((int) var_11))) : (((/* implicit */long long int) ((int) ((long long int) var_9)))));
                var_63 = ((/* implicit */unsigned short) ((_Bool) (short)(-32767 - 1)));
            }
            var_64 *= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((long long int) -319814401))) ? (min((((/* implicit */long long int) var_3)), (-4071877073007912013LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_8] [i_9] [i_8]))))), (((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (8388607U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) >= (var_10))))));
            var_65 += ((/* implicit */unsigned long long int) (_Bool)0);
            var_66 = ((/* implicit */signed char) max((((/* implicit */long long int) ((unsigned short) (!(((/* implicit */_Bool) 61522551U)))))), (5876854731952219552LL)));
            /* LoopNest 3 */
            for (long long int i_29 = 0; i_29 < 24; i_29 += 2) 
            {
                for (short i_30 = 1; i_30 < 21; i_30 += 4) 
                {
                    for (unsigned short i_31 = 1; i_31 < 23; i_31 += 3) 
                    {
                        {
                            var_67 -= ((/* implicit */unsigned short) ((long long int) min((min((var_13), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_57 [i_8] [i_9] [i_29] [i_30 + 1])), (arr_56 [i_29] [i_29] [i_29] [i_9])))))));
                            var_68 &= ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-91)), (((((/* implicit */_Bool) var_7)) ? (-5876854731952219564LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))))));
                            arr_107 [i_8] [i_9] [i_29] [i_30] [i_30 + 2] = ((((/* implicit */_Bool) ((signed char) ((signed char) arr_94 [i_29])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((unsigned int) 1432652804)) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_10) < (((/* implicit */long long int) var_1))))))))) : (min((((-144114088564228097LL) % (((/* implicit */long long int) 61522533U)))), (((/* implicit */long long int) ((int) arr_41 [i_30] [i_9] [i_30] [i_31 - 1]))))));
                            var_69 ^= ((/* implicit */short) ((unsigned short) ((long long int) var_4)));
                        }
                    } 
                } 
            } 
        }
        var_70 += ((/* implicit */unsigned long long int) (short)21261);
        arr_108 [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) 3532843702446663069LL)) ? (3532843702446663069LL) : (max((((/* implicit */long long int) min((1637542832U), (((/* implicit */unsigned int) (signed char)39))))), (var_10)))));
        var_71 = ((/* implicit */long long int) max((var_71), (((/* implicit */long long int) (-((-(((((/* implicit */_Bool) arr_102 [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_1))))))))));
    }
}
