/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17317
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned int i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        {
                            arr_10 [i_3] [i_1] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)19)) ? (((((/* implicit */int) var_1)) ^ ((-(((/* implicit */int) var_9)))))) : (((/* implicit */int) var_0))));
                            var_15 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_8 [i_3 - 1] [8U] [i_0])))) ? ((-(((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) ((unsigned char) arr_8 [i_3 + 1] [i_3 + 1] [i_0])))));
                            var_16 &= ((/* implicit */int) (((-(((var_5) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))) << ((((~((-(((/* implicit */int) arr_6 [i_1] [i_1] [i_3 - 1])))))) - (98)))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned long long int) ((long long int) (unsigned short)0));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
    {
        var_18 = ((/* implicit */unsigned int) (~(min((max((((/* implicit */unsigned long long int) var_1)), (var_12))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2)))))))));
        /* LoopSeq 4 */
        for (unsigned char i_5 = 1; i_5 < 11; i_5 += 3) 
        {
            arr_16 [i_5] [i_5] [10LL] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) 6578230572543929958ULL)) ? (arr_15 [i_5 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27737))))));
            /* LoopNest 2 */
            for (long long int i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                for (int i_7 = 3; i_7 < 10; i_7 += 3) 
                {
                    {
                        var_19 = ((/* implicit */int) (+(((((/* implicit */_Bool) (-(arr_17 [i_6] [i_6] [i_6])))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_10))) : (((130816U) - (arr_12 [(unsigned char)4])))))));
                        arr_21 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) min((arr_7 [i_4] [i_5] [i_6]), ((-2147483647 - 1)))))) ? (((((/* implicit */_Bool) arr_8 [i_4] [i_4] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_6 [i_4] [i_4] [i_4])))) : (arr_17 [i_7 - 1] [i_5 - 1] [6LL]))) : (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned short)27737))))))))));
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) arr_6 [3U] [i_5] [i_5]))) * ((((+(arr_8 [(_Bool)0] [i_4] [i_4]))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_4] [i_4] [i_4])))))))));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 12; i_8 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)29813)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_15 [i_8])));
            /* LoopNest 2 */
            for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 3) 
            {
                for (unsigned char i_10 = 1; i_10 < 11; i_10 += 4) 
                {
                    {
                        var_22 = ((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_8] [(_Bool)1] [i_10]))));
                        arr_31 [i_4] [i_9] [i_9] [i_4] = ((/* implicit */unsigned int) (+(arr_18 [i_4] [i_9] [i_10 - 1] [i_10])));
                    }
                } 
            } 
            /* LoopSeq 4 */
            for (unsigned int i_11 = 0; i_11 < 12; i_11 += 4) 
            {
                /* LoopSeq 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_38 [i_4] [3] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_4])) ? (((/* implicit */int) arr_6 [i_12] [i_8] [i_4])) : (((/* implicit */int) var_7))));
                    var_23 = ((/* implicit */unsigned int) (-(var_4)));
                    var_24 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_36 [i_4] [0LL] [0LL] [i_11] [i_11] [i_12])) / (((/* implicit */int) (short)5385))));
                }
                for (unsigned short i_13 = 1; i_13 < 10; i_13 += 2) 
                {
                    arr_42 [i_4] [i_4] [i_13] [i_4] [7LL] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) | (arr_40 [i_13] [i_13 + 1])));
                    /* LoopSeq 1 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_4] [(unsigned char)0] [0U])) ? (((((/* implicit */_Bool) arr_27 [i_4] [i_4] [i_13] [i_4])) ? (((/* implicit */long long int) 130816U)) : (var_5))) : (arr_37 [i_13] [i_13 + 2] [i_13] [i_13] [i_13])));
                        var_26 = ((/* implicit */int) ((unsigned int) arr_3 [i_13]));
                        var_27 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_8)) != (arr_44 [i_13] [i_13 + 1] [i_13 - 1] [i_4] [i_4] [i_4] [i_13])))) ^ (arr_35 [i_8] [i_11] [i_13 + 2] [i_13 + 2])));
                    }
                    arr_47 [i_4] [i_4] [i_13] [i_4] [i_4] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_28 [i_13 - 1] [i_13] [i_13 - 1]))));
                }
                arr_48 [i_4] = ((/* implicit */short) ((arr_17 [i_11] [i_8] [i_4]) / (arr_17 [i_4] [i_8] [i_11])));
                arr_49 [i_8] [i_8] [i_8] [i_4] = ((/* implicit */unsigned short) (_Bool)1);
                /* LoopNest 2 */
                for (long long int i_15 = 2; i_15 < 11; i_15 += 1) 
                {
                    for (int i_16 = 0; i_16 < 12; i_16 += 1) 
                    {
                        {
                            arr_56 [i_4] [i_8] [i_15] [i_15] [i_4] [(_Bool)1] = ((/* implicit */signed char) arr_41 [i_4]);
                            var_28 &= ((/* implicit */unsigned int) (-(((/* implicit */int) var_7))));
                            arr_57 [i_4] [i_4] [5LL] [i_4] [i_15] = ((/* implicit */unsigned short) ((arr_13 [i_4] [i_4]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_15] [i_15] [i_8] [i_8] [i_15] [i_15] [i_16])))));
                            var_29 = ((/* implicit */short) (~(arr_18 [i_15 + 1] [i_15] [i_15 - 2] [i_16])));
                            var_30 = ((/* implicit */int) (-(((((/* implicit */_Bool) (unsigned short)36493)) ? (arr_3 [i_15]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25640)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 12; i_17 += 3) 
                {
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        {
                            arr_63 [8LL] [i_17] [i_4] [i_11] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)144)) != (((/* implicit */int) ((unsigned short) (unsigned char)174)))));
                            arr_64 [i_4] [i_4] = ((((/* implicit */_Bool) arr_27 [i_4] [i_4] [i_4] [i_17])) ? (arr_27 [i_4] [i_11] [i_11] [i_4]) : (arr_27 [i_4] [i_8] [i_4] [i_17]));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_19 = 2; i_19 < 8; i_19 += 4) 
            {
                arr_69 [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_51 [i_4] [i_8] [i_4] [i_4]) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45134)))))) - ((-(2147483627)))));
                var_31 = ((long long int) -6350302452544175685LL);
                arr_70 [2] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [14LL] [14LL] [i_19 - 2] [i_4])) ? (var_5) : (((/* implicit */long long int) ((int) -539586403872812746LL)))));
                var_32 = ((/* implicit */unsigned char) var_12);
            }
            for (signed char i_20 = 4; i_20 < 9; i_20 += 1) 
            {
                var_33 = ((/* implicit */short) 4294836482U);
                var_34 = ((/* implicit */unsigned short) arr_46 [i_4] [i_20 + 3] [i_20] [i_4] [i_20] [i_4] [i_20 + 2]);
                /* LoopNest 2 */
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    for (signed char i_22 = 0; i_22 < 12; i_22 += 1) 
                    {
                        {
                            var_35 = ((((/* implicit */_Bool) ((unsigned int) arr_15 [i_4]))) ? (6350302452544175711LL) : (((((/* implicit */long long int) ((/* implicit */int) arr_67 [i_4] [i_4]))) & (9223372036854775807LL))));
                            var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27747))) >= (arr_73 [i_4] [i_20 - 4] [i_4] [i_22]))))));
                            var_37 = ((short) var_13);
                            var_38 = ((/* implicit */short) var_8);
                            arr_78 [i_8] [i_21] [i_21] [i_8] [i_4] = ((/* implicit */unsigned int) (-(((arr_43 [i_4] [i_21] [i_21] [i_4]) ^ (arr_24 [i_8])))));
                        }
                    } 
                } 
                var_39 -= ((/* implicit */short) 18446744073709551608ULL);
            }
            for (unsigned int i_23 = 0; i_23 < 12; i_23 += 1) 
            {
                arr_81 [i_4] [i_8] [i_8] [i_23] = ((/* implicit */short) (~(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (var_4)))));
                var_40 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) var_9))) != (arr_20 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])));
                arr_82 [i_4] [i_8] [i_4] = ((/* implicit */int) var_1);
                /* LoopSeq 2 */
                for (int i_24 = 0; i_24 < 12; i_24 += 4) 
                {
                    var_41 = ((/* implicit */long long int) var_9);
                    var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_72 [i_8])) : (-2063940227)));
                }
                for (long long int i_25 = 0; i_25 < 12; i_25 += 1) 
                {
                    var_43 = arr_60 [i_4] [i_4] [i_4] [i_4];
                    arr_87 [i_25] [(unsigned char)3] [i_25] [i_25] = ((/* implicit */int) 6350302452544175684LL);
                    arr_88 [i_25] [i_25] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)12))));
                }
            }
            var_44 = ((unsigned char) arr_83 [i_4] [i_8] [i_8] [i_8] [(unsigned short)5]);
            /* LoopSeq 2 */
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
            {
                arr_91 [(unsigned char)7] [i_8] [i_8] [i_26] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (130825U))));
                /* LoopNest 2 */
                for (unsigned short i_27 = 0; i_27 < 12; i_27 += 2) 
                {
                    for (int i_28 = 0; i_28 < 12; i_28 += 4) 
                    {
                        {
                            arr_96 [i_26] [i_26] [3U] [i_26] [(short)5] [i_27] [i_26] = (unsigned short)448;
                            var_45 = ((((/* implicit */_Bool) arr_26 [i_27] [i_8])) ? ((-(var_10))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_19 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))))));
                            var_46 = ((unsigned long long int) (unsigned short)448);
                        }
                    } 
                } 
                var_47 ^= ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) arr_40 [i_4] [i_4])) : (var_5))));
            }
            for (short i_29 = 0; i_29 < 12; i_29 += 3) 
            {
                var_48 = ((/* implicit */unsigned char) min((var_48), (((/* implicit */unsigned char) ((unsigned int) arr_25 [i_29] [i_4])))));
                arr_99 [i_4] = ((/* implicit */unsigned int) var_1);
            }
        }
        for (int i_30 = 0; i_30 < 12; i_30 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned long long int i_31 = 0; i_31 < 12; i_31 += 3) 
            {
                for (unsigned char i_32 = 1; i_32 < 10; i_32 += 4) 
                {
                    for (unsigned int i_33 = 3; i_33 < 10; i_33 += 3) 
                    {
                        {
                            arr_112 [i_30] [9ULL] [i_32] [i_30] [i_30] [i_30] [i_4] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_8)))) | (((((/* implicit */int) arr_30 [i_33] [i_33] [i_33] [i_33 + 1] [(unsigned char)8])) << (((/* implicit */int) arr_77 [i_33] [i_33] [i_33 + 2] [i_33] [i_33] [i_33 + 1] [i_32]))))));
                            var_49 = ((/* implicit */_Bool) (unsigned char)0);
                            arr_113 [(signed char)0] [i_30] [i_30] [i_30] [i_30] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_68 [(unsigned short)7] [i_31] [(unsigned short)7] [i_32 - 1])) ? (arr_68 [2LL] [(short)10] [i_32 + 1] [i_32 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65087)))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_32] [i_32] [i_32] [i_32 - 1] [i_33 - 2] [i_33]))) : (arr_68 [(unsigned short)9] [i_30] [(unsigned short)9] [i_32 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) arr_36 [i_32] [i_32] [i_32] [i_32 - 1] [i_33 - 2] [i_32])))))));
                            var_50 ^= ((/* implicit */short) ((int) ((((long long int) (_Bool)1)) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned char i_34 = 0; i_34 < 12; i_34 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned char i_35 = 0; i_35 < 12; i_35 += 2) 
                {
                    arr_119 [i_4] [i_30] = ((/* implicit */signed char) arr_32 [i_30]);
                    var_51 *= ((/* implicit */unsigned char) min((((/* implicit */long long int) (unsigned char)107)), (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_116 [i_30] [i_34] [i_30])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_2 [i_35])))) % (arr_93 [i_35] [i_30] [i_30] [i_35])))));
                    arr_120 [i_4] [i_30] [i_4] [i_30] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) ((unsigned short) arr_46 [i_30] [i_30] [i_30] [i_35] [i_30] [i_35] [i_35]))), (((int) 18446744073709551608ULL))))) ? (var_12) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_71 [i_4] [i_4] [i_34])), (833290004U))))));
                    var_52 = ((int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-32450))) + (max((var_10), (((/* implicit */unsigned int) (unsigned char)62))))));
                }
                /* LoopNest 2 */
                for (unsigned int i_36 = 0; i_36 < 12; i_36 += 1) 
                {
                    for (short i_37 = 2; i_37 < 8; i_37 += 4) 
                    {
                        {
                            var_53 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_25 [i_4] [i_37 + 1])), (arr_58 [i_4] [i_4] [i_34] [i_34] [i_37 + 4] [i_34]))))));
                            var_54 = ((/* implicit */unsigned char) (-(arr_22 [i_37 - 1])));
                        }
                    } 
                } 
            }
            for (unsigned char i_38 = 0; i_38 < 12; i_38 += 4) /* same iter space */
            {
                arr_128 [i_4] [i_30] [i_4] = ((/* implicit */int) min(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 31525197391593472LL)) ? (11335606324457124915ULL) : (((/* implicit */unsigned long long int) 4503599618981888LL))))))), (((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)65523))) || (((-4503599618981889LL) >= (((/* implicit */long long int) arr_61 [i_38] [i_30] [i_30] [i_4] [i_4]))))))));
                var_55 = ((/* implicit */int) (((-(((var_10) * (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))) <= (1048572U)));
                var_56 = ((/* implicit */unsigned long long int) min((var_56), (((/* implicit */unsigned long long int) min((min((((/* implicit */int) var_9)), (arr_8 [i_4] [12] [i_38]))), (min((((/* implicit */int) (unsigned short)7409)), (arr_8 [i_4] [i_4] [i_4]))))))));
                arr_129 [i_30] [i_30] [i_38] = arr_14 [(unsigned short)2] [i_38];
            }
            /* vectorizable */
            for (unsigned long long int i_39 = 0; i_39 < 12; i_39 += 1) 
            {
                var_57 = ((/* implicit */unsigned short) var_2);
                /* LoopNest 2 */
                for (unsigned char i_40 = 0; i_40 < 12; i_40 += 1) 
                {
                    for (unsigned char i_41 = 2; i_41 < 8; i_41 += 1) 
                    {
                        {
                            arr_138 [i_4] [i_30] [i_40] [i_40] [i_30] [i_40] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -268435456)) ? (4ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 19U)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)194))))))));
                            var_58 = (+(arr_101 [i_41 - 2]));
                        }
                    } 
                } 
            }
        }
        for (unsigned char i_42 = 2; i_42 < 11; i_42 += 3) 
        {
            arr_142 [i_4] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (min((var_4), (var_5))) : ((+(9223372036854775807LL)))));
            var_59 = ((/* implicit */unsigned char) arr_0 [i_4]);
            /* LoopNest 3 */
            for (int i_43 = 1; i_43 < 10; i_43 += 1) 
            {
                for (unsigned short i_44 = 4; i_44 < 11; i_44 += 1) 
                {
                    for (unsigned int i_45 = 1; i_45 < 11; i_45 += 1) 
                    {
                        {
                            arr_152 [i_42] = ((/* implicit */unsigned int) 19ULL);
                            var_60 -= ((/* implicit */unsigned char) var_6);
                            var_61 = ((/* implicit */signed char) max((var_61), (((/* implicit */signed char) ((unsigned short) min((var_5), (((/* implicit */long long int) (short)-3725))))))));
                        }
                    } 
                } 
            } 
        }
        arr_153 [i_4] = ((/* implicit */_Bool) var_2);
    }
    var_62 = ((/* implicit */unsigned long long int) ((signed char) max((((/* implicit */int) ((unsigned short) var_9))), (((int) var_12)))));
    var_63 = ((/* implicit */int) min((var_5), (((max((9223372036854775799LL), (((/* implicit */long long int) var_1)))) / (((/* implicit */long long int) (+(((/* implicit */int) (signed char)97)))))))));
    var_64 |= ((/* implicit */unsigned int) var_11);
}
