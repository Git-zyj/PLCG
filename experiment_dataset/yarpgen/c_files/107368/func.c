/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107368
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
    var_13 = ((/* implicit */long long int) (~(max((((unsigned long long int) var_2)), (((/* implicit */unsigned long long int) var_3))))));
    var_14 *= ((/* implicit */signed char) -261877076);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [(unsigned short)14] |= arr_5 [i_0] [i_1] [i_2];
                    var_15 = ((/* implicit */int) 1036269780U);
                }
            } 
        } 
        arr_9 [(short)6] |= ((/* implicit */short) (_Bool)1);
        /* LoopSeq 4 */
        for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            var_16 -= ((/* implicit */unsigned int) arr_1 [16ULL] [i_3]);
            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (~(((((/* implicit */long long int) ((/* implicit */int) var_7))) | (var_3))))))));
        }
        for (long long int i_4 = 1; i_4 < 15; i_4 += 4) /* same iter space */
        {
            arr_14 [i_4 + 1] [6LL] |= ((/* implicit */unsigned char) min((((/* implicit */int) var_1)), (((int) ((unsigned short) var_1)))));
            arr_15 [i_0] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? ((-(3305789864U))) : (var_10)));
        }
        /* vectorizable */
        for (long long int i_5 = 1; i_5 < 15; i_5 += 4) /* same iter space */
        {
            arr_18 [i_0] [i_5] [i_0] = ((var_11) ^ (arr_5 [i_0] [i_5] [i_5 + 1]));
            var_18 -= ((/* implicit */unsigned int) (+(arr_5 [i_5 - 1] [i_5 + 2] [i_5 + 1])));
            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (~(arr_17 [i_5 - 1] [i_5] [(unsigned char)0]))))));
            var_20 -= ((/* implicit */unsigned int) arr_12 [i_5] [6ULL]);
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 17; i_6 += 1) 
        {
            var_21 = (signed char)113;
            var_22 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (9223372028264841216ULL))) : (((/* implicit */unsigned long long int) var_4))));
            /* LoopNest 3 */
            for (unsigned char i_7 = 0; i_7 < 17; i_7 += 2) 
            {
                for (unsigned long long int i_8 = 2; i_8 < 13; i_8 += 2) 
                {
                    for (unsigned int i_9 = 0; i_9 < 17; i_9 += 4) 
                    {
                        {
                            var_23 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((unsigned char) arr_26 [i_7] [i_7] [i_8] [i_9] [i_9] [i_7]))) : (((/* implicit */int) var_6))));
                            var_24 ^= ((arr_27 [i_8 + 4] [i_8] [i_8 - 1] [i_7]) | ((~(var_4))));
                            arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (-(arr_23 [i_6] [i_8 + 4] [i_8 - 2] [i_8])));
                            var_25 -= ((/* implicit */short) (-((-(arr_23 [i_7] [i_9] [i_0] [i_8])))));
                            var_26 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_9)) ? (3885303855U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_10 = 1; i_10 < 15; i_10 += 2) 
            {
                for (unsigned int i_11 = 1; i_11 < 16; i_11 += 4) 
                {
                    {
                        arr_37 [(_Bool)1] &= ((/* implicit */short) (_Bool)1);
                        var_27 *= ((/* implicit */unsigned long long int) (+(arr_6 [i_10 + 1] [i_10 - 1] [i_11 + 1])));
                    }
                } 
            } 
            arr_38 [i_0] [(_Bool)1] &= ((/* implicit */unsigned int) ((arr_1 [6U] [i_6]) - (((/* implicit */long long int) 989177432U))));
        }
        var_28 -= ((/* implicit */unsigned short) (-(max((((((/* implicit */_Bool) (short)-32766)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-5504663617462619517LL))), (min((((/* implicit */long long int) var_2)), (var_9)))))));
        /* LoopSeq 4 */
        for (int i_12 = 2; i_12 < 16; i_12 += 2) /* same iter space */
        {
            var_29 *= ((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0]);
            var_30 += ((/* implicit */unsigned short) 70772791);
            /* LoopSeq 2 */
            for (unsigned char i_13 = 0; i_13 < 17; i_13 += 2) 
            {
                var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)13869)) ? (3175883415824139996LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16824)))))))))));
                var_32 = ((/* implicit */int) (unsigned char)120);
            }
            for (unsigned char i_14 = 0; i_14 < 17; i_14 += 1) 
            {
                arr_45 [i_0] [i_12] [i_12] [i_12] &= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (unsigned short)18895)) : (((/* implicit */int) arr_26 [i_0] [i_12] [i_14] [i_12] [i_12] [i_12]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_20 [i_12])))) : (var_12))));
                var_33 |= ((/* implicit */int) (+(((((/* implicit */long long int) ((/* implicit */int) var_7))) + (((var_9) - (((/* implicit */long long int) var_12))))))));
            }
        }
        for (int i_15 = 2; i_15 < 16; i_15 += 2) /* same iter space */
        {
            arr_48 [i_15] [i_0] [i_15] = ((/* implicit */unsigned short) ((((arr_47 [i_15 - 2] [i_15]) + (2147483647))) >> (((((/* implicit */_Bool) 409663445U)) ? (17ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)102)))))));
            arr_49 [i_15] |= ((/* implicit */int) ((var_9) + (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_0] [i_15] [i_0] [i_0])))));
            var_34 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-15152)) ^ (((/* implicit */int) var_6))));
        }
        for (int i_16 = 2; i_16 < 16; i_16 += 2) /* same iter space */
        {
            var_35 |= ((/* implicit */_Bool) min((var_3), (((/* implicit */long long int) ((signed char) -1911414340)))));
            var_36 |= ((/* implicit */long long int) ((((/* implicit */_Bool) 409663440U)) && ((_Bool)0)));
            /* LoopSeq 3 */
            for (unsigned int i_17 = 3; i_17 < 14; i_17 += 3) 
            {
                var_37 += ((/* implicit */int) min((((((arr_53 [i_16] [i_17 + 1] [i_16 - 2]) + (9223372036854775807LL))) >> (((arr_53 [i_16] [i_17 - 1] [i_16 + 1]) + (3230887289644681977LL))))), (((/* implicit */long long int) (~((~(((/* implicit */int) (short)-32766)))))))));
                /* LoopSeq 3 */
                for (long long int i_18 = 0; i_18 < 17; i_18 += 3) /* same iter space */
                {
                    var_38 |= ((/* implicit */unsigned char) (~(((((((/* implicit */_Bool) 6144U)) ? (arr_47 [i_0] [i_0]) : (((/* implicit */int) arr_31 [i_17] [i_16] [i_17])))) | (((/* implicit */int) (unsigned char)78))))));
                    var_39 ^= ((/* implicit */int) (_Bool)1);
                }
                for (long long int i_19 = 0; i_19 < 17; i_19 += 3) /* same iter space */
                {
                    arr_59 [i_0] [i_0] [i_19] [i_0] = ((/* implicit */unsigned long long int) arr_46 [i_0]);
                    var_40 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))) ^ (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248))) % (arr_41 [i_0] [i_16] [i_17]))) << (((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (unsigned char)102)) : (((/* implicit */int) (unsigned char)255)))) - (229)))))));
                }
                for (long long int i_20 = 0; i_20 < 17; i_20 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_21 = 0; i_21 < 17; i_21 += 4) 
                    {
                        arr_64 [i_17] [i_20] [i_17] [i_0] [i_21] = ((((/* implicit */_Bool) arr_39 [i_0] [i_0])) ? (((-5925658512704946590LL) / (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_16 + 1] [i_16 + 1] [i_17 - 1] [i_20]))))) : (((/* implicit */long long int) (((((~(((/* implicit */int) arr_54 [i_0] [i_17] [i_17] [i_0])))) + (2147483647))) >> (((var_11) + (516683153)))))));
                        var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_40 [i_16 - 1] [i_17 + 2])))) ? (((unsigned long long int) var_6)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                        var_42 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? ((((!(((/* implicit */_Bool) 9129818963752560460ULL)))) ? (((((/* implicit */_Bool) (unsigned short)2184)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)78))) : (arr_35 [i_16] [i_17]))) : (((/* implicit */unsigned long long int) max((var_9), (((/* implicit */long long int) arr_36 [i_0] [i_16] [i_17] [i_20] [i_21]))))))) : (((/* implicit */unsigned long long int) arr_3 [i_0]))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_22 = 0; i_22 < 17; i_22 += 1) 
                    {
                        var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) ((((/* implicit */_Bool) ((short) (unsigned char)166))) ? (((/* implicit */int) arr_44 [i_0])) : (((/* implicit */int) var_7)))))));
                        var_44 += ((/* implicit */unsigned char) arr_46 [i_20]);
                        var_45 -= ((/* implicit */signed char) var_3);
                        arr_69 [i_16] [i_16] [i_17] [i_20] [i_20] |= ((/* implicit */short) (+((+(((/* implicit */int) arr_26 [i_16 - 2] [i_16] [i_16] [i_17] [i_17 - 2] [i_22]))))));
                        var_46 = ((/* implicit */_Bool) min((var_46), (((/* implicit */_Bool) arr_2 [i_16]))));
                    }
                    arr_70 [i_20] [i_20] [i_20] [i_16] [i_20] &= (~(((((/* implicit */_Bool) ((var_5) >> (((-1487090986) + (1487090988)))))) ? (((/* implicit */int) (unsigned char)28)) : (((/* implicit */int) arr_21 [i_16 - 2] [i_16 - 2] [i_16])))));
                    var_47 = ((/* implicit */unsigned char) arr_36 [i_0] [i_16 - 1] [i_16 - 1] [i_17 + 1] [i_17]);
                }
                arr_71 [i_0] [i_16] [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)78)) ? (((unsigned int) arr_36 [i_16 - 1] [i_16 - 1] [i_16] [i_16] [i_16 - 2])) : (((min((((/* implicit */unsigned int) var_7)), (arr_28 [i_0] [i_0] [i_0] [i_0] [i_0]))) * (((/* implicit */unsigned int) (~(var_11))))))));
            }
            for (unsigned int i_23 = 0; i_23 < 17; i_23 += 2) /* same iter space */
            {
                var_48 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) 2938967828U)), (((arr_53 [i_16] [i_0] [i_23]) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) ((var_10) >> (((var_10) - (2949194662U)))))) ? (arr_66 [i_16] [i_16 + 1] [i_0] [i_16 + 1] [i_23]) : (arr_3 [i_0]))) : (((/* implicit */int) (short)2781))));
                var_49 = ((/* implicit */long long int) (~((~(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned char)20)))))))));
                /* LoopSeq 1 */
                for (short i_24 = 0; i_24 < 17; i_24 += 3) 
                {
                    arr_79 [i_0] [i_16 - 1] [i_23] [i_24] = ((((/* implicit */_Bool) 1283278584)) ? (((/* implicit */unsigned long long int) (~((-(var_12)))))) : (arr_78 [i_0] [i_16]));
                    arr_80 [i_0] = ((/* implicit */short) var_12);
                }
            }
            for (unsigned int i_25 = 0; i_25 < 17; i_25 += 2) /* same iter space */
            {
                var_50 = ((/* implicit */unsigned short) (-(((-221245050) ^ (((/* implicit */int) ((_Bool) (_Bool)1)))))));
                var_51 ^= ((/* implicit */unsigned char) max((125032151360778062ULL), (max((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (10123794674341973764ULL))), (((/* implicit */unsigned long long int) (+(480425991))))))));
            }
            var_52 -= ((/* implicit */unsigned long long int) var_7);
            /* LoopSeq 1 */
            for (unsigned short i_26 = 0; i_26 < 17; i_26 += 2) 
            {
                var_53 = ((/* implicit */unsigned long long int) min((var_53), (((/* implicit */unsigned long long int) ((long long int) ((((((/* implicit */_Bool) 1073741760)) ? (arr_24 [i_0] [i_16] [i_16]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) >= (var_9)))))));
                var_54 += ((/* implicit */unsigned char) ((unsigned long long int) 125032151360778062ULL));
                arr_87 [i_0] [i_0] [i_26] [i_16] = (~(max((((((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_0]))) & (var_10))), (((/* implicit */unsigned int) ((var_5) < (var_11)))))));
            }
        }
        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
        {
            arr_90 [i_0] [i_27] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_0] [i_27] [i_27] [i_27])) || (((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_0]))))), (min((arr_23 [i_0] [i_27] [i_0] [i_27]), (arr_22 [i_0]))));
            /* LoopSeq 1 */
            for (long long int i_28 = 2; i_28 < 16; i_28 += 1) 
            {
                arr_93 [(signed char)14] |= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_11)), (max(((+(arr_7 [2]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-32766)))))))));
                /* LoopNest 2 */
                for (unsigned char i_29 = 0; i_29 < 17; i_29 += 4) 
                {
                    for (long long int i_30 = 0; i_30 < 17; i_30 += 4) 
                    {
                        {
                            arr_100 [i_0] [i_30] [i_0] |= ((/* implicit */short) ((((long long int) (unsigned char)44)) <= (((/* implicit */long long int) (((-(((/* implicit */int) arr_98 [i_28] [i_27] [i_28] [i_29] [i_30])))) + (((/* implicit */int) arr_57 [i_0] [i_27] [i_28] [i_30])))))));
                            var_55 -= ((/* implicit */_Bool) var_9);
                            arr_101 [i_0] [i_27] [i_28] [i_29] [i_0] [i_27] [i_28] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_0])) ? (((arr_67 [i_28] [i_28 - 2] [i_0] [i_28 - 2] [i_28 - 1]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_36 [i_30] [i_27] [i_28] [i_29] [i_30])))) : (((((/* implicit */_Bool) ((((arr_61 [i_0]) + (2147483647))) >> (((var_10) - (2949194655U)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (arr_62 [i_0] [i_27] [i_0]))))))));
                        }
                    } 
                } 
                var_56 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) var_11))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) | ((((_Bool)0) ? (arr_7 [(unsigned short)8]) : (10144007763487587481ULL))))) : (((/* implicit */unsigned long long int) arr_4 [i_0]))));
            }
        }
    }
    /* vectorizable */
    for (unsigned long long int i_31 = 0; i_31 < 17; i_31 += 3) /* same iter space */
    {
        var_57 &= ((/* implicit */unsigned char) ((((unsigned long long int) (_Bool)0)) != (((/* implicit */unsigned long long int) arr_66 [i_31] [i_31] [i_31] [i_31] [i_31]))));
        /* LoopSeq 1 */
        for (unsigned char i_32 = 0; i_32 < 17; i_32 += 2) 
        {
            var_58 = ((((/* implicit */_Bool) (unsigned short)53399)) ? (((/* implicit */int) ((unsigned char) arr_102 [i_31] [i_31]))) : (((/* implicit */int) ((unsigned char) arr_103 [i_31]))));
            arr_108 [i_31] [i_32] = ((/* implicit */unsigned short) arr_103 [i_31]);
            var_59 = ((/* implicit */short) min((var_59), (((/* implicit */short) ((unsigned int) (short)16382)))));
            var_60 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_11))))));
        }
    }
    /* vectorizable */
    for (unsigned int i_33 = 0; i_33 < 25; i_33 += 4) 
    {
        arr_112 [i_33] [i_33] = arr_110 [i_33] [i_33];
        arr_113 [i_33] = ((/* implicit */_Bool) var_5);
        arr_114 [i_33] [i_33] = ((/* implicit */long long int) ((unsigned char) arr_109 [i_33]));
        /* LoopSeq 2 */
        for (unsigned char i_34 = 0; i_34 < 25; i_34 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_35 = 0; i_35 < 25; i_35 += 4) 
            {
                var_61 ^= ((/* implicit */unsigned char) (~(arr_115 [i_33] [i_34] [i_35])));
                arr_120 [i_34] [i_33] [i_35] = ((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_116 [i_33] [i_34]))))) != (arr_111 [i_33])));
                var_62 *= ((/* implicit */unsigned long long int) ((signed char) (short)3825));
            }
            var_63 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_109 [i_34])) : (((/* implicit */int) arr_116 [i_33] [i_33]))));
            /* LoopNest 3 */
            for (signed char i_36 = 0; i_36 < 25; i_36 += 1) 
            {
                for (int i_37 = 0; i_37 < 25; i_37 += 1) 
                {
                    for (unsigned short i_38 = 0; i_38 < 25; i_38 += 2) 
                    {
                        {
                            var_64 *= ((/* implicit */short) var_11);
                            arr_130 [i_33] [i_34] [i_33] [i_38] &= (~(((/* implicit */int) var_6)));
                            var_65 ^= ((/* implicit */unsigned char) (+(arr_123 [i_33])));
                            arr_131 [i_37] [i_38] |= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)11765))));
                            var_66 += ((/* implicit */signed char) arr_128 [i_33] [i_38] [i_36] [i_37] [i_38]);
                        }
                    } 
                } 
            } 
        }
        for (int i_39 = 0; i_39 < 25; i_39 += 1) 
        {
            var_67 &= ((/* implicit */unsigned long long int) ((arr_133 [i_33]) / (arr_133 [i_33])));
            var_68 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 7793013600280130710ULL)) ? ((((_Bool)1) ? (arr_132 [i_33] [i_39]) : (((/* implicit */long long int) arr_122 [i_33] [i_39] [i_39])))) : (((/* implicit */long long int) ((/* implicit */int) arr_109 [i_33])))));
            var_69 &= ((/* implicit */short) (+((-(arr_125 [i_33] [i_33] [i_39])))));
            var_70 = ((/* implicit */unsigned char) min((var_70), (((/* implicit */unsigned char) arr_110 [i_33] [i_39]))));
        }
    }
}
