/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144343
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
    var_16 = ((/* implicit */unsigned char) ((var_5) - (var_2)));
    /* LoopSeq 3 */
    for (int i_0 = 4; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 4; i_1 < 9; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_17 |= ((/* implicit */unsigned long long int) (-(min((((((/* implicit */int) (unsigned short)49631)) / (((/* implicit */int) arr_2 [(_Bool)1] [i_2])))), (((/* implicit */int) max(((unsigned char)4), ((unsigned char)117))))))));
                    arr_6 [i_2] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (+(-2147483625)))) > (var_15)))), (max((13984979233835429242ULL), (((/* implicit */unsigned long long int) (signed char)-73))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (short i_4 = 1; i_4 < 7; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_0 [i_2] [i_0 - 4]) ? (((/* implicit */int) arr_0 [i_2] [i_0 - 3])) : (((/* implicit */int) arr_0 [9ULL] [i_0 - 4]))))) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)23)) : (((/* implicit */int) (signed char)-15)))) : (((/* implicit */int) max(((short)535), ((short)541))))));
                                arr_12 [i_0 - 3] [i_0 - 3] [i_0] [i_0 - 2] [i_0] [i_0] = ((/* implicit */long long int) var_11);
                                var_19 -= ((/* implicit */unsigned short) (~(max((arr_5 [i_4 + 2] [(short)0] [(short)0] [i_0 - 4]), (arr_5 [i_4 + 2] [10ULL] [10ULL] [i_0 - 4])))));
                                var_20 = ((/* implicit */unsigned long long int) (((+(144115187538984960LL))) >= (max((arr_3 [i_0 + 1]), (((/* implicit */long long int) arr_2 [i_0] [i_0]))))));
                            }
                        } 
                    } 
                    var_21 &= max((((/* implicit */int) max((arr_2 [(signed char)0] [(signed char)0]), (arr_2 [(_Bool)0] [i_1 - 2])))), (((((/* implicit */int) (unsigned char)4)) >> (((((/* implicit */int) (signed char)-73)) + (87))))));
                    arr_13 [i_0] = 5738868987603312889LL;
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned short i_5 = 0; i_5 < 11; i_5 += 3) 
        {
            var_22 = ((/* implicit */unsigned long long int) arr_9 [i_5] [i_5] [i_0] [i_0 - 1] [i_0]);
            /* LoopSeq 1 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                /* LoopSeq 2 */
                for (signed char i_7 = 3; i_7 < 7; i_7 += 3) /* same iter space */
                {
                    arr_24 [i_0 - 3] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_0] [i_5] [(signed char)8] [i_7]))));
                    arr_25 [i_0] [6LL] [i_0] = ((/* implicit */unsigned int) (unsigned char)139);
                }
                for (signed char i_8 = 3; i_8 < 7; i_8 += 3) /* same iter space */
                {
                    var_23 = var_1;
                    var_24 = ((/* implicit */short) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)195)), (0U)))) ? (var_12) : (((/* implicit */unsigned long long int) arr_14 [i_8 + 4] [i_6] [i_0]))))));
                    var_25 = ((/* implicit */unsigned char) (short)-13813);
                }
                /* LoopNest 2 */
                for (unsigned short i_9 = 2; i_9 < 9; i_9 += 3) 
                {
                    for (int i_10 = 0; i_10 < 11; i_10 += 3) 
                    {
                        {
                            arr_32 [i_0] [i_9] [i_6] [i_5] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */_Bool) min((-2147483605), (((/* implicit */int) arr_2 [i_0] [i_5]))))) || (((/* implicit */_Bool) (unsigned short)2118))))), ((-((+(((/* implicit */int) (unsigned short)54645))))))));
                            arr_33 [i_0] [i_6] [i_6] [i_5] [i_0] = ((/* implicit */short) ((((/* implicit */int) min(((unsigned short)18806), (((/* implicit */unsigned short) (short)16128))))) >> (max((arr_14 [i_9 - 2] [i_0 - 3] [i_9 - 2]), (((/* implicit */long long int) (unsigned short)0))))));
                            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(max((-5279260184939857279LL), (((/* implicit */long long int) (unsigned short)65535))))))) ? (((/* implicit */int) (short)-16113)) : ((-(((/* implicit */int) (short)-16128))))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) arr_20 [i_0] [i_0 - 3] [2] [i_0 - 4] [i_0 - 3])) && (((((/* implicit */int) arr_0 [i_6] [i_0])) == (1073741824)))))));
            }
            arr_34 [i_0] [(signed char)2] &= ((/* implicit */unsigned int) arr_5 [(unsigned char)10] [(_Bool)1] [(_Bool)1] [i_0]);
        }
        for (signed char i_11 = 4; i_11 < 10; i_11 += 3) 
        {
            var_28 = ((/* implicit */long long int) 0);
            var_29 = ((((/* implicit */int) (short)-13813)) < (((/* implicit */int) max((arr_11 [i_11] [i_11 - 1] [i_11] [i_0 - 3] [i_0 + 1]), (((/* implicit */short) arr_0 [i_0 - 2] [i_0 - 4]))))));
            arr_37 [i_0] [i_11] [i_11] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max(((short)532), (min((((/* implicit */short) arr_7 [i_0 - 4] [i_0 - 4] [i_11 - 1] [(signed char)8])), ((short)16128))))))));
        }
        /* vectorizable */
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_13 = 0; i_13 < 11; i_13 += 3) /* same iter space */
            {
                var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 604684194)) ? (-6914757343326358242LL) : (((/* implicit */long long int) 3310307692U))));
                var_31 = ((/* implicit */unsigned short) ((var_2) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_12 - 1] [i_12 - 1] [i_0 - 4] [(signed char)9])))));
                var_32 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) <= (arr_4 [i_0] [i_0] [6LL])));
            }
            for (unsigned int i_14 = 0; i_14 < 11; i_14 += 3) /* same iter space */
            {
                var_33 ^= ((/* implicit */signed char) var_1);
                var_34 = ((/* implicit */_Bool) (+((~(((/* implicit */int) var_13))))));
                var_35 ^= ((/* implicit */long long int) ((arr_36 [i_0 - 3] [i_0 - 1]) || (((/* implicit */_Bool) arr_31 [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 - 1] [(unsigned char)8] [i_12] [i_12 - 1]))));
            }
            for (unsigned int i_15 = 0; i_15 < 11; i_15 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                {
                    var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 15420522898139399629ULL)) ? (((/* implicit */int) (short)-22096)) : (((/* implicit */int) (unsigned short)14580))));
                    var_37 |= ((/* implicit */unsigned int) arr_26 [i_0] [4U] [i_12 - 1] [(unsigned short)6] [(signed char)6] [(unsigned short)6]);
                }
                for (unsigned short i_17 = 0; i_17 < 11; i_17 += 3) 
                {
                    arr_54 [i_0] = ((/* implicit */unsigned int) var_4);
                    arr_55 [(unsigned char)5] [i_12 - 1] [i_15] [i_0] [i_17] [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (unsigned char)134)) : (-5)));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_18 = 0; i_18 < 11; i_18 += 3) 
                    {
                        var_38 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_12 - 1] [i_12 - 1] [i_0 - 4] [i_0 - 4] [i_0 - 4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)251))));
                        var_39 = ((/* implicit */short) (-(((/* implicit */int) (short)-511))));
                    }
                    for (short i_19 = 1; i_19 < 9; i_19 += 3) /* same iter space */
                    {
                        var_40 &= ((/* implicit */int) (-(arr_1 [i_0 - 2] [10ULL])));
                        var_41 = ((/* implicit */unsigned int) ((arr_56 [0] [i_0 + 1] [i_0] [i_12 - 1] [i_19 + 1] [i_12 - 1]) < (arr_56 [i_0 - 2] [i_0 + 1] [i_0] [i_12 - 1] [i_19 + 1] [i_17])));
                        var_42 = ((/* implicit */unsigned char) 4294967284U);
                        var_43 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_22 [i_12 - 1] [i_0 - 1])) & ((~(((/* implicit */int) (short)532))))));
                        arr_61 [i_0] [i_12 - 1] [i_12 - 1] [i_17] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) arr_44 [i_0] [i_0]))) <= (6914757343326358266LL));
                    }
                    for (short i_20 = 1; i_20 < 9; i_20 += 3) /* same iter space */
                    {
                        var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_64 [i_0] [10LL] [i_0] [10LL] [i_0 - 3] [i_0 - 3] [i_17])) * (((/* implicit */int) arr_64 [i_0] [i_0] [i_0] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_12]))));
                        arr_65 [i_20] [i_0] [i_15] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_63 [i_0 - 4] [i_0] [i_0 + 1] [1]);
                    }
                    arr_66 [i_0] [i_12 - 1] [i_15] [i_12 - 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_9))));
                }
                var_45 = ((/* implicit */int) max((var_45), ((-(((/* implicit */int) (short)-11991))))));
                arr_67 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)535)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)14))))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)535)) * (((/* implicit */int) (_Bool)0)))))));
                arr_68 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 18014398509481983ULL)) ? (2518478040U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32755)))));
            }
            /* LoopSeq 2 */
            for (unsigned char i_21 = 0; i_21 < 11; i_21 += 3) 
            {
                var_46 = ((/* implicit */_Bool) max((var_46), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */int) (signed char)52)) : (((/* implicit */int) (unsigned char)232)))))));
                arr_71 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)16384))));
                /* LoopNest 2 */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    for (signed char i_23 = 2; i_23 < 8; i_23 += 3) 
                    {
                        {
                            var_47 ^= ((/* implicit */signed char) arr_22 [i_0 - 3] [i_12]);
                            var_48 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [(_Bool)1] [i_12 - 1] [i_0 - 1])) ? (((/* implicit */int) (short)21603)) : (((/* implicit */int) arr_75 [i_23 + 1] [i_22] [i_21] [i_12 - 1] [i_0 + 1]))));
                            var_49 = ((/* implicit */_Bool) (+(((/* implicit */int) var_9))));
                            var_50 = arr_43 [i_12];
                        }
                    } 
                } 
            }
            for (short i_24 = 1; i_24 < 10; i_24 += 3) 
            {
                var_51 = ((/* implicit */short) max((var_51), (((/* implicit */short) var_12))));
                var_52 = ((/* implicit */unsigned short) ((var_14) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27542)))));
            }
            var_53 = ((/* implicit */unsigned long long int) min((var_53), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)28))) != (7722432602770175729LL))))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_25 = 0; i_25 < 11; i_25 += 3) 
        {
            var_54 = ((/* implicit */signed char) min((var_54), (((/* implicit */signed char) ((((long long int) 6144U)) + (1073741823LL))))));
            /* LoopNest 2 */
            for (unsigned long long int i_26 = 0; i_26 < 11; i_26 += 3) 
            {
                for (unsigned char i_27 = 1; i_27 < 7; i_27 += 3) 
                {
                    {
                        var_55 = ((/* implicit */int) var_7);
                        var_56 += ((((/* implicit */_Bool) arr_59 [i_27] [8LL] [i_0 + 1] [i_0] [i_0 + 1] [8LL] [i_0])) ? (((/* implicit */int) arr_59 [i_27] [(signed char)8] [i_0 - 1] [i_0] [i_0 - 2] [(signed char)8] [i_0])) : (((/* implicit */int) arr_59 [i_27] [(short)0] [i_0 + 1] [i_0 - 3] [i_0 - 3] [(short)0] [i_0 - 1])));
                        var_57 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_87 [i_0 - 2])) ? (((/* implicit */int) arr_87 [i_0 + 1])) : (((/* implicit */int) arr_87 [i_0 - 2]))));
                        var_58 = arr_31 [i_0 - 3] [i_0 - 1] [(signed char)4] [i_25] [i_0] [i_26] [(unsigned char)0];
                    }
                } 
            } 
        }
        for (short i_28 = 4; i_28 < 10; i_28 += 3) 
        {
            var_59 += ((/* implicit */_Bool) var_13);
            /* LoopNest 2 */
            for (long long int i_29 = 0; i_29 < 11; i_29 += 3) 
            {
                for (_Bool i_30 = 0; i_30 < 0; i_30 += 1) 
                {
                    {
                        var_60 = ((/* implicit */short) (_Bool)1);
                        var_61 -= max(((unsigned short)58058), (((/* implicit */unsigned short) (short)(-32767 - 1))));
                        var_62 = ((/* implicit */unsigned long long int) max((arr_81 [i_30 + 1] [i_30] [i_30 + 1]), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)24))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
            {
                for (unsigned char i_32 = 0; i_32 < 11; i_32 += 3) 
                {
                    {
                        arr_103 [9LL] [i_0] = ((/* implicit */_Bool) arr_44 [i_0] [(_Bool)1]);
                        arr_104 [i_0] [i_0] [4] [i_0] [4] [i_0] = ((/* implicit */unsigned char) max((max((var_6), (arr_1 [i_0 - 1] [i_0]))), (((/* implicit */long long int) max(((short)-535), ((short)-518))))));
                        arr_105 [i_0] [i_31] [i_28] [i_0] = ((/* implicit */_Bool) (unsigned char)128);
                        arr_106 [i_0] [i_0] [i_31] [0] = ((/* implicit */long long int) (+(((/* implicit */int) min((((/* implicit */short) (signed char)72)), (arr_28 [i_0] [i_0] [i_0]))))));
                    }
                } 
            } 
        }
        var_63 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 1649060373U)) ? (max((((/* implicit */long long int) (unsigned short)7468)), (arr_14 [i_0 - 3] [(short)4] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_44 [(unsigned char)2] [i_0 - 3])))));
        var_64 = ((/* implicit */int) var_6);
    }
    for (long long int i_33 = 3; i_33 < 11; i_33 += 3) 
    {
        /* LoopNest 3 */
        for (short i_34 = 0; i_34 < 12; i_34 += 3) 
        {
            for (signed char i_35 = 1; i_35 < 8; i_35 += 3) 
            {
                for (signed char i_36 = 3; i_36 < 9; i_36 += 3) 
                {
                    {
                        var_65 += ((/* implicit */signed char) var_0);
                        var_66 = ((/* implicit */short) (-(((/* implicit */int) max((((/* implicit */short) (_Bool)0)), ((short)535))))));
                    }
                } 
            } 
        } 
        var_67 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((((/* implicit */int) (short)4095)), (2047)))) ? (((/* implicit */unsigned long long int) -1245275908363832137LL)) : (min((var_12), (((/* implicit */unsigned long long int) arr_109 [i_33 - 2])))))) >> (((((/* implicit */int) var_0)) - (2701)))));
        var_68 = ((/* implicit */signed char) min((((/* implicit */long long int) (-((+(((/* implicit */int) (unsigned char)247))))))), (max(((-(arr_110 [i_33] [i_33]))), (((/* implicit */long long int) arr_107 [8] [8]))))));
        var_69 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_109 [i_33 - 3])) ? (((/* implicit */int) arr_113 [i_33 - 1])) : (((/* implicit */int) arr_109 [i_33 - 3]))));
    }
    for (int i_37 = 0; i_37 < 21; i_37 += 3) 
    {
        arr_118 [(unsigned char)16] [i_37] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((1245275908363832136LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)0))))))));
        arr_119 [i_37] &= ((/* implicit */unsigned char) var_11);
        /* LoopNest 3 */
        for (short i_38 = 4; i_38 < 18; i_38 += 3) 
        {
            for (unsigned char i_39 = 0; i_39 < 21; i_39 += 3) 
            {
                for (int i_40 = 1; i_40 < 18; i_40 += 3) 
                {
                    {
                        arr_130 [i_39] [i_37] [i_37] [(unsigned short)4] [i_37] = ((/* implicit */signed char) arr_125 [16] [16] [16] [i_40 + 1]);
                        var_70 -= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_127 [i_38 + 2] [i_38 + 2] [i_38 - 2])), (2645906923U)))) ? (((/* implicit */unsigned long long int) ((long long int) ((unsigned char) (unsigned char)62)))) : (max((6479652520359719034ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)527)) + (((/* implicit */int) (short)-537)))))))));
                    }
                } 
            } 
        } 
    }
    var_71 = ((/* implicit */unsigned short) 9348089775301589051ULL);
}
