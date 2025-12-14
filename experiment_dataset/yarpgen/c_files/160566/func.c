/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160566
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
    var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) (-((-(584970118322254270LL))))))));
    var_18 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) (signed char)123)))));
    /* LoopSeq 4 */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_2 = 3; i_2 < 19; i_2 += 3) 
            {
                /* LoopSeq 4 */
                for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_12)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 878894263U)) ? (arr_2 [i_0 + 4] [i_4]) : (((/* implicit */int) arr_3 [i_2] [i_2 - 1] [i_2]))));
                        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0 + 4] [i_1] [i_2] [i_3])) || (((/* implicit */_Bool) arr_6 [i_0 - 2] [i_1] [i_2] [i_3])))))));
                        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((var_7) ^ (((/* implicit */unsigned long long int) var_1)))))));
                    }
                    var_23 = ((/* implicit */unsigned int) var_5);
                }
                for (unsigned short i_5 = 0; i_5 < 20; i_5 += 4) /* same iter space */
                {
                    var_24 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) arr_1 [i_0 + 3]))));
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_16))));
                }
                for (int i_6 = 0; i_6 < 20; i_6 += 1) 
                {
                    var_26 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (((var_7) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                    var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (~(var_3))))));
                    var_28 = ((/* implicit */short) arr_15 [i_2 + 1] [i_1] [i_2] [i_6] [i_1] [i_0 - 1]);
                }
                for (short i_7 = 2; i_7 < 19; i_7 += 2) 
                {
                    var_29 -= ((/* implicit */unsigned int) (~(((/* implicit */int) var_15))));
                    var_30 -= ((/* implicit */unsigned char) var_11);
                }
                var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) (signed char)121))));
            }
            arr_19 [i_0] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (var_13) : (((/* implicit */unsigned long long int) var_8)))) >> ((((~(((/* implicit */int) (short)63)))) + (126)))));
            var_32 ^= var_0;
            var_33 -= ((/* implicit */unsigned short) 4111943649U);
        }
        var_34 = ((/* implicit */unsigned long long int) ((-4979697306751081119LL) - (((/* implicit */long long int) var_9))));
    }
    for (signed char i_8 = 1; i_8 < 8; i_8 += 2) /* same iter space */
    {
        var_35 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_8 + 1] [i_8 + 1])) + ((((-2147483647 - 1)) & (-1874937482)))));
        var_36 = ((/* implicit */signed char) (-((+(var_7)))));
    }
    for (signed char i_9 = 1; i_9 < 8; i_9 += 2) /* same iter space */
    {
        var_37 -= ((/* implicit */unsigned short) 3250456369U);
        var_38 += ((/* implicit */_Bool) (signed char)73);
        /* LoopSeq 2 */
        for (signed char i_10 = 1; i_10 < 8; i_10 += 2) 
        {
            var_39 = ((/* implicit */short) ((((/* implicit */_Bool) 2236056189U)) ? ((+(((/* implicit */int) (short)-5422)))) : (((/* implicit */int) (unsigned short)30809))));
            arr_26 [i_9] [i_9] = ((/* implicit */_Bool) ((((10596610187844894806ULL) / (((/* implicit */unsigned long long int) arr_13 [i_9 + 2] [i_9 + 1] [i_9 + 3] [i_9 + 2])))) >> ((((~(((/* implicit */int) ((var_8) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)-31994)))))))) + (55)))));
            /* LoopSeq 1 */
            for (long long int i_11 = 1; i_11 < 9; i_11 += 3) 
            {
                /* LoopSeq 3 */
                for (short i_12 = 2; i_12 < 8; i_12 += 3) /* same iter space */
                {
                    var_40 ^= ((/* implicit */unsigned int) arr_1 [i_11 + 2]);
                    var_41 = ((1044510927U) >> ((((+(var_1))) - (1176755341U))));
                    var_42 = ((/* implicit */signed char) min((var_42), (((/* implicit */signed char) var_5))));
                    var_43 ^= ((/* implicit */long long int) (+(((/* implicit */int) (short)2649))));
                }
                /* vectorizable */
                for (short i_13 = 2; i_13 < 8; i_13 += 3) /* same iter space */
                {
                    var_44 -= ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)28))) & (4040527979854637827LL)))) && (((/* implicit */_Bool) 536870904ULL)));
                    /* LoopSeq 4 */
                    for (long long int i_14 = 0; i_14 < 11; i_14 += 3) 
                    {
                        var_45 = ((/* implicit */int) (~(var_1)));
                        var_46 = ((/* implicit */unsigned int) min((var_46), (((/* implicit */unsigned int) 11810529622469757983ULL))));
                        arr_39 [i_9] [i_9] [i_11 + 2] [(_Bool)1] [i_14] [i_9] = ((/* implicit */long long int) ((((/* implicit */int) arr_20 [i_9] [i_11 + 2])) - (((/* implicit */int) arr_20 [i_9] [i_11 - 1]))));
                    }
                    for (unsigned long long int i_15 = 3; i_15 < 7; i_15 += 2) /* same iter space */
                    {
                        var_47 = ((/* implicit */int) max((var_47), (((/* implicit */int) -1LL))));
                        var_48 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_16))));
                    }
                    for (unsigned long long int i_16 = 3; i_16 < 7; i_16 += 2) /* same iter space */
                    {
                        var_49 ^= ((/* implicit */unsigned long long int) 65534);
                        var_50 += ((((/* implicit */_Bool) arr_41 [(unsigned char)0] [i_10] [i_11] [i_13 + 3] [i_13 + 3])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-118))));
                        var_51 -= ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_27 [i_10 - 1] [i_11 - 1] [i_11] [i_9 + 1])) & (6226208972149990691LL)));
                        arr_46 [i_9] [i_10 - 1] [i_9] [i_13] [i_16] = ((/* implicit */unsigned int) arr_21 [i_9]);
                        var_52 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (arr_9 [i_16 - 1] [i_13] [i_11] [i_10] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_9 + 1] [i_11 + 1] [i_13 + 2])))));
                    }
                    for (unsigned long long int i_17 = 3; i_17 < 7; i_17 += 2) /* same iter space */
                    {
                        var_53 = ((/* implicit */unsigned short) ((var_14) % (((/* implicit */long long int) ((/* implicit */int) var_15)))));
                        var_54 = ((/* implicit */unsigned long long int) var_11);
                        var_55 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_10 - 1] [i_11 - 1] [i_11 + 2] [i_17])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_17 [i_10 - 1] [i_11 - 1] [i_11] [i_10 - 1])));
                        var_56 = ((/* implicit */long long int) max((var_56), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_12)))) ? (arr_36 [i_10 + 3] [i_10 + 3] [i_10] [i_10] [i_10] [i_11 + 2] [i_17 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))));
                    }
                    var_57 -= ((/* implicit */unsigned int) (+(-1655630673942004270LL)));
                    /* LoopSeq 2 */
                    for (short i_18 = 1; i_18 < 10; i_18 += 2) 
                    {
                        var_58 -= (!(((/* implicit */_Bool) 3810316564U)));
                        var_59 = ((/* implicit */unsigned short) max((var_59), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_48 [i_11 + 1] [i_11 + 1] [i_13 - 2])) ? (arr_48 [i_11 - 1] [i_11] [i_13 - 1]) : (arr_48 [i_11 - 1] [i_13] [i_13 + 1]))))));
                    }
                    for (short i_19 = 1; i_19 < 8; i_19 += 2) 
                    {
                        var_60 = ((/* implicit */short) ((unsigned char) (signed char)126));
                        var_61 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_41 [i_9] [i_9] [i_9 + 2] [i_13 + 3] [i_19 - 1]))) > (var_14)));
                    }
                    arr_55 [i_9] [i_10 + 2] [i_11] [i_13 + 1] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_40 [i_11])) ? (-6226208972149990685LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_1 [i_9 - 1])) + (2339)))));
                }
                for (int i_20 = 0; i_20 < 11; i_20 += 2) 
                {
                    /* LoopSeq 4 */
                    for (long long int i_21 = 4; i_21 < 10; i_21 += 2) 
                    {
                        var_62 = ((/* implicit */unsigned int) max((max((arr_45 [i_9] [i_20] [i_11] [i_9] [i_9] [i_9]), (((/* implicit */int) max(((short)29670), (((/* implicit */short) (_Bool)1))))))), (((((/* implicit */int) var_16)) * (((/* implicit */int) (short)-16801))))));
                        var_63 = ((/* implicit */signed char) (-(var_13)));
                    }
                    for (signed char i_22 = 1; i_22 < 7; i_22 += 1) 
                    {
                        var_64 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)16384))) : (var_1)))) ? ((~(var_8))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_15))))))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_9] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) (short)24))) : (var_14)))) ? (((/* implicit */unsigned long long int) var_9)) : (var_7))) - (1865778548ULL))));
                        var_65 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) - (min((((/* implicit */unsigned long long int) (_Bool)1)), (10596610187844894815ULL)))));
                    }
                    for (long long int i_23 = 0; i_23 < 11; i_23 += 1) 
                    {
                        var_66 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((int) var_12))), (min((((/* implicit */unsigned long long int) var_5)), (var_7)))))) ? ((~(((var_9) | (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_11 + 1] [i_10 - 1]))))))));
                        var_67 = ((/* implicit */short) arr_54 [i_9]);
                        var_68 = ((/* implicit */int) var_12);
                        var_69 = ((/* implicit */unsigned long long int) min((var_4), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)85)))))));
                    }
                    for (int i_24 = 0; i_24 < 11; i_24 += 2) 
                    {
                        var_70 = ((/* implicit */long long int) max((var_70), (((/* implicit */long long int) var_3))));
                        var_71 = ((/* implicit */long long int) max((var_71), (((/* implicit */long long int) var_0))));
                    }
                    var_72 = min((min((arr_47 [i_10 + 2] [i_10 + 3] [i_10 - 1] [i_10 + 2] [i_10 + 1]), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) var_11)));
                }
                var_73 = ((/* implicit */int) ((((/* implicit */_Bool) (-(970307075U)))) ? (((/* implicit */unsigned long long int) 1311825498U)) : (12971335958877613533ULL)));
            }
        }
        for (short i_25 = 0; i_25 < 11; i_25 += 4) 
        {
            var_74 = ((/* implicit */long long int) (-(((/* implicit */int) arr_43 [i_9] [(short)2] [(short)2] [i_9] [i_25] [i_9] [8LL]))));
            /* LoopNest 2 */
            for (short i_26 = 0; i_26 < 11; i_26 += 3) 
            {
                for (int i_27 = 0; i_27 < 11; i_27 += 4) 
                {
                    {
                        arr_76 [i_27] [i_9] [i_9] [i_9] = ((/* implicit */short) ((unsigned char) ((signed char) min((var_13), (10596610187844894828ULL)))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_28 = 2; i_28 < 9; i_28 += 2) 
                        {
                            var_75 -= ((/* implicit */_Bool) (~(arr_4 [i_9 + 2] [i_9 + 2])));
                            var_76 = ((/* implicit */short) ((7525732814052208300ULL) & (12061700192347105882ULL)));
                            var_77 += ((/* implicit */short) var_10);
                            var_78 = ((/* implicit */unsigned int) ((arr_42 [i_9] [i_25] [i_9] [i_27] [i_28 + 1] [i_27]) & (((/* implicit */long long int) arr_2 [i_28 + 1] [i_26]))));
                        }
                        for (unsigned int i_29 = 3; i_29 < 8; i_29 += 4) 
                        {
                            var_79 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)166))))) | (var_14)));
                            arr_83 [i_9] [i_9] = -6903231696651271051LL;
                            var_80 = var_13;
                            var_81 ^= ((/* implicit */short) max((((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_81 [i_29 - 2] [i_25] [i_27] [i_25] [i_9]))))), (((/* implicit */unsigned int) (-2147483647 - 1)))));
                            var_82 = ((/* implicit */unsigned long long int) 978606471U);
                        }
                        arr_84 [i_9] [i_25] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) (unsigned short)3584)))));
                        var_83 += ((/* implicit */short) arr_52 [i_27]);
                        var_84 = ((/* implicit */unsigned int) ((short) -4564233459132166402LL));
                    }
                } 
            } 
            var_85 += ((/* implicit */unsigned long long int) (short)23367);
            var_86 = ((/* implicit */_Bool) var_11);
            var_87 = ((/* implicit */unsigned char) max((var_87), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)203)) && (((/* implicit */_Bool) 7454727937494013371ULL)))))));
        }
        var_88 = ((/* implicit */short) ((((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (var_3))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_72 [i_9] [i_9] [i_9]))))));
    }
    for (signed char i_30 = 1; i_30 < 8; i_30 += 2) /* same iter space */
    {
        arr_88 [i_30] = (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_30 + 1]))))));
        /* LoopNest 3 */
        for (long long int i_31 = 3; i_31 < 9; i_31 += 2) 
        {
            for (unsigned int i_32 = 2; i_32 < 10; i_32 += 1) 
            {
                for (long long int i_33 = 0; i_33 < 11; i_33 += 3) 
                {
                    {
                        var_89 ^= ((/* implicit */_Bool) arr_22 [i_30] [i_30]);
                        var_90 = ((/* implicit */long long int) ((_Bool) (~(((/* implicit */int) (short)-10355)))));
                    }
                } 
            } 
        } 
        var_91 -= ((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) var_11)))) ? (arr_13 [i_30 + 3] [i_30] [i_30] [i_30]) : (((var_9) & (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))));
    }
    var_92 -= ((/* implicit */int) var_15);
    var_93 = ((/* implicit */unsigned int) max((var_93), (((min((max((((/* implicit */unsigned int) var_15)), (var_1))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))))))) - (((/* implicit */unsigned int) -1820130675))))));
}
