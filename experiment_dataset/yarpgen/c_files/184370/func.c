/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184370
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)24473)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)124))) : (arr_1 [i_0]))), (((/* implicit */long long int) (signed char)-45))))) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_10))) ? (((((/* implicit */_Bool) min((arr_1 [i_0]), (arr_0 [i_0] [i_0])))) ? (((((/* implicit */_Bool) var_7)) ? (var_13) : (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))) : ((+(15ULL))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_19)), (min((arr_1 [i_0]), (arr_0 [i_0] [i_0]))))))));
        var_22 = ((/* implicit */signed char) max(((-(((long long int) arr_1 [i_0])))), (((/* implicit */long long int) ((short) max((var_9), (((/* implicit */unsigned int) var_18))))))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_4 = 3; i_4 < 19; i_4 += 3) 
                        {
                            arr_12 [i_0] [i_3] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) arr_2 [i_4] [i_2] [i_1]);
                            var_23 ^= ((/* implicit */unsigned long long int) var_5);
                            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)12285)) ? (((/* implicit */int) ((signed char) (unsigned char)255))) : (((/* implicit */int) (signed char)61)))))));
                            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((short) ((signed char) var_4))))));
                        }
                        var_26 -= ((/* implicit */int) ((max((((/* implicit */unsigned long long int) 2702808358U)), (((var_13) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) == (var_13))))))));
                        var_27 += ((/* implicit */long long int) var_15);
                        var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1062786895915402077LL)) ? (((/* implicit */int) (short)-14064)) : (var_17)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_6 [i_3] [i_2] [i_1] [i_0])) || (((/* implicit */_Bool) (signed char)126))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)93))) : (4294967295ULL)))) ? (var_2) : (((/* implicit */unsigned long long int) ((arr_3 [i_3] [i_1]) / (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned int i_5 = 0; i_5 < 21; i_5 += 3) 
            {
                var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) ((signed char) var_16))) ? ((+(((/* implicit */int) (short)27681)))) : (((2010822314) + (((/* implicit */int) arr_5 [i_5] [i_1] [i_0] [i_0]))))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 4) 
                {
                    /* LoopSeq 2 */
                    for (short i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        var_30 ^= ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) (signed char)-107)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (arr_19 [i_7] [7U] [i_5] [i_1] [i_0]))));
                        var_31 ^= ((/* implicit */long long int) ((unsigned char) (!(((/* implicit */_Bool) 13810417553303743532ULL)))));
                        var_32 &= ((-9223372036854775805LL) - (-260064983372670367LL));
                        var_33 = ((/* implicit */long long int) ((short) -1664744752));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_23 [i_8] [i_6] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) 4294967301ULL))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_8] [i_0] [i_0] [i_1] [i_0]))) : (6754064668012586460LL))) : (((((/* implicit */_Bool) (unsigned short)13830)) ? (arr_1 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                        var_34 = ((/* implicit */long long int) ((unsigned long long int) ((short) arr_16 [i_8] [i_6] [i_6] [i_6] [(unsigned short)14] [i_0])));
                        var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_18)) : ((+(((/* implicit */int) var_14))))));
                        var_36 ^= ((/* implicit */int) ((unsigned int) 260064983372670367LL));
                    }
                    var_37 = ((/* implicit */long long int) ((_Bool) ((short) arr_18 [i_6] [i_5] [i_1] [i_0] [i_0])));
                    /* LoopSeq 1 */
                    for (unsigned int i_9 = 1; i_9 < 20; i_9 += 3) 
                    {
                        var_38 = ((/* implicit */unsigned int) ((short) arr_17 [i_0] [i_6] [i_5] [i_1] [i_0]));
                        arr_26 [i_6] &= ((/* implicit */short) (~(((/* implicit */int) (short)17844))));
                    }
                }
                for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 2) 
                {
                    var_39 &= ((/* implicit */unsigned int) var_14);
                    var_40 *= (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_19)), (260064983372670372LL)))), (arr_24 [i_0] [i_5] [i_1] [18U] [i_0])))));
                }
                /* LoopNest 2 */
                for (signed char i_11 = 0; i_11 < 21; i_11 += 2) 
                {
                    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                    {
                        {
                            var_41 *= ((/* implicit */short) 260064983372670372LL);
                            var_42 = ((/* implicit */unsigned short) 4294967295ULL);
                            var_43 = ((((/* implicit */_Bool) var_4)) ? (((long long int) max((((/* implicit */long long int) (signed char)-1)), (arr_10 [(unsigned char)1] [i_0] [(unsigned short)17] [i_0] [(unsigned short)17])))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (+(2010822314)))))));
                            var_44 ^= ((/* implicit */unsigned long long int) ((short) (short)-16180));
                            var_45 = ((/* implicit */unsigned short) max((var_45), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? ((-2147483647 - 1)) : (((/* implicit */int) ((((/* implicit */int) ((unsigned short) 2964284242U))) > (((/* implicit */int) (signed char)-120))))))))));
                        }
                    } 
                } 
            }
            for (unsigned short i_13 = 0; i_13 < 21; i_13 += 4) 
            {
                /* LoopSeq 4 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_15 = 0; i_15 < 21; i_15 += 1) 
                    {
                        var_46 ^= ((/* implicit */unsigned long long int) ((signed char) ((short) ((unsigned int) (signed char)115))));
                        var_47 = 65535;
                        var_48 = ((/* implicit */signed char) max((var_48), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_17 [i_13] [i_14] [i_13] [i_0] [i_13]) != (((/* implicit */long long int) ((/* implicit */int) (signed char)-126)))))) > (((/* implicit */int) arr_21 [(signed char)17] [i_14] [i_13] [i_1] [(signed char)17]))))), ((~(((((/* implicit */_Bool) var_19)) ? (var_2) : (((/* implicit */unsigned long long int) -6066604435320358406LL)))))))))));
                        var_49 &= ((/* implicit */short) var_7);
                    }
                    var_50 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((~(0))) | (((/* implicit */int) arr_34 [i_13]))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_35 [i_14] [i_0] [i_1] [i_1] [i_0]), (((/* implicit */unsigned short) var_19)))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_22 [i_13] [i_13] [i_1] [i_0] [18U])), (1497197438U)))) ? (max((arr_3 [i_1] [i_0]), (((/* implicit */long long int) var_16)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_13] [i_13] [i_13] [i_1] [i_13])) ? (((/* implicit */int) var_16)) : (-1))))))));
                }
                for (signed char i_16 = 0; i_16 < 21; i_16 += 2) 
                {
                    var_51 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)4095))))) % (((((/* implicit */_Bool) 6754064668012586465LL)) ? (var_9) : (3518527138U))))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((int) var_10)) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (_Bool)0)))))))));
                    var_52 = ((unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */short) var_16)), ((short)-25309)))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) 9223372036854775778LL)) ? (-7401807577128288222LL) : (((/* implicit */long long int) ((/* implicit */int) var_19)))))));
                    arr_45 [i_16] [i_0] [(unsigned short)13] [i_13] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) (short)18701)))))) ? (var_4) : (((/* implicit */unsigned long long int) -9136445231587965795LL))));
                    var_53 *= (!(((_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (6992390311719283095ULL)))));
                }
                for (unsigned int i_17 = 4; i_17 < 19; i_17 += 2) 
                {
                    arr_48 [i_0] [(short)6] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_0);
                    var_54 &= ((/* implicit */unsigned int) ((signed char) (short)-32147));
                }
                for (short i_18 = 0; i_18 < 21; i_18 += 4) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_19 = 2; i_19 < 20; i_19 += 2) 
                    {
                        arr_53 [i_0] [i_18] [i_13] [10ULL] [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) 13007676541175264158ULL)) ? (11024669555491369122ULL) : (((/* implicit */unsigned long long int) var_9))))));
                        var_55 ^= ((/* implicit */short) arr_37 [i_1] [i_13] [i_1]);
                        var_56 += ((/* implicit */short) 7422074518218182507ULL);
                    }
                    for (long long int i_20 = 0; i_20 < 21; i_20 += 2) 
                    {
                        var_57 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */long long int) 1497197447U)) / (9223372036854775781LL))), (((/* implicit */long long int) (signed char)84))))) || (((/* implicit */_Bool) var_16))));
                        var_58 = ((/* implicit */unsigned short) min((var_58), (((/* implicit */unsigned short) ((unsigned int) min((((signed char) arr_55 [i_20] [i_18] [(signed char)16] [i_1] [i_0])), ((signed char)-74)))))));
                        var_59 &= ((/* implicit */unsigned char) (unsigned short)6);
                        var_60 = ((/* implicit */signed char) max((var_60), (((/* implicit */signed char) arr_41 [i_20] [i_20] [i_18] [i_13] [i_18] [i_1] [i_0]))));
                    }
                    var_61 &= ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) arr_5 [i_18] [i_13] [i_1] [i_0])) : (((/* implicit */int) (signed char)84))))) ? (((/* implicit */int) ((signed char) 14ULL))) : (((/* implicit */int) ((short) var_4))))));
                    var_62 ^= ((/* implicit */unsigned int) ((long long int) arr_28 [i_13] [i_0]));
                }
                var_63 = max(((signed char)0), (((/* implicit */signed char) ((((/* implicit */_Bool) max(((signed char)15), (((/* implicit */signed char) var_8))))) || (((((/* implicit */_Bool) var_19)) && (((/* implicit */_Bool) 6870513355999448105LL))))))));
            }
            arr_57 [i_0] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((((/* implicit */long long int) var_1)), (arr_55 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_35 [i_1] [i_1] [i_0] [i_0] [i_0])) : (((/* implicit */int) (signed char)115))))) : (((long long int) (unsigned char)253)))), (((long long int) ((((/* implicit */int) var_7)) & (((/* implicit */int) var_16)))))));
            var_64 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)1))) - (arr_55 [i_1] [i_1] [i_1] [i_1] [i_0]))))));
        }
        /* vectorizable */
        for (unsigned int i_21 = 0; i_21 < 21; i_21 += 1) 
        {
            var_65 = ((/* implicit */unsigned short) 18446744073709551615ULL);
            /* LoopSeq 3 */
            for (unsigned int i_22 = 0; i_22 < 21; i_22 += 1) 
            {
                /* LoopSeq 1 */
                for (short i_23 = 0; i_23 < 21; i_23 += 1) 
                {
                    arr_67 [i_23] [i_0] [(short)19] [i_21] [i_0] [i_0] = ((/* implicit */long long int) var_10);
                    var_66 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) var_16)))));
                    /* LoopSeq 2 */
                    for (signed char i_24 = 0; i_24 < 21; i_24 += 1) 
                    {
                        var_67 = ((/* implicit */signed char) min((var_67), (arr_39 [(unsigned short)18])));
                        var_68 -= ((/* implicit */unsigned long long int) ((short) (signed char)-85));
                    }
                    for (unsigned char i_25 = 1; i_25 < 18; i_25 += 3) 
                    {
                        var_69 ^= ((/* implicit */signed char) (-(((/* implicit */int) var_10))));
                        arr_72 [i_25 + 1] [i_23] [i_0] [i_0] [i_21] [i_0] = ((/* implicit */unsigned long long int) ((short) ((unsigned char) arr_14 [i_23] [i_22] [i_0] [i_0])));
                        arr_73 [i_0] [i_21] [(signed char)14] [i_21] [i_0] = ((/* implicit */unsigned long long int) (signed char)-105);
                    }
                    var_70 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) 13085463008898423724ULL))) ? ((+(var_13))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7)))))));
                    arr_74 [i_0] [i_23] [i_22] [i_22] [i_21] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_0)) ? (arr_33 [i_23] [i_23] [i_22] [14ULL] [i_0]) : (-9223372036854775774LL)))));
                }
                var_71 = ((/* implicit */unsigned long long int) max((var_71), (11888160852384540136ULL)));
                var_72 = ((/* implicit */signed char) min((var_72), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-109)) ? (((/* implicit */int) ((unsigned char) arr_66 [i_22] [18LL] [18LL] [i_0]))) : (((/* implicit */int) ((_Bool) var_5))))))));
            }
            for (unsigned char i_26 = 1; i_26 < 18; i_26 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_27 = 0; i_27 < 21; i_27 += 1) 
                {
                    var_73 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)57547)) ? (((/* implicit */unsigned long long int) 0LL)) : (2620735991808986702ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 11024669555491369122ULL)) || (((/* implicit */_Bool) 8467027231812558466LL)))))) : (9223372036854775774LL)));
                    arr_81 [i_27] [i_0] [i_21] [i_0] [i_0] = ((/* implicit */unsigned short) arr_20 [i_0] [i_26 + 1] [i_21] [i_0] [i_0]);
                    arr_82 [i_0] [i_27] [i_26] [i_21] [i_0] = ((/* implicit */_Bool) var_5);
                    arr_83 [i_0] [i_21] [i_0] = ((/* implicit */unsigned char) (short)-15967);
                }
                arr_84 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) ^ (arr_52 [i_26] [i_21] [i_21] [i_21] [i_0] [i_0] [i_0])))) ? ((+(arr_33 [i_26 + 3] [i_26 + 2] [i_26] [i_21] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_64 [i_0] [i_0]))))));
                var_74 = ((/* implicit */unsigned char) max((var_74), (((/* implicit */unsigned char) (unsigned short)7988))));
            }
            for (unsigned long long int i_28 = 3; i_28 < 18; i_28 += 2) 
            {
                arr_88 [i_0] [i_21] [i_0] [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) -9223372036854775792LL)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)(-32767 - 1)))));
                var_75 = ((/* implicit */signed char) (!(((var_4) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))))));
                var_76 = ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned short)8455)))));
                arr_89 [i_0] [i_0] = ((/* implicit */signed char) arr_54 [i_28 + 3] [2ULL] [i_21] [2ULL] [i_0] [i_0] [i_0]);
                /* LoopNest 2 */
                for (unsigned short i_29 = 3; i_29 < 19; i_29 += 1) 
                {
                    for (signed char i_30 = 0; i_30 < 21; i_30 += 2) 
                    {
                        {
                            var_77 = ((/* implicit */signed char) ((var_18) ? (2797769864U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (signed char)-67)) : (((/* implicit */int) var_14)))))));
                            var_78 = ((/* implicit */unsigned int) arr_37 [i_28] [i_0] [i_0]);
                            var_79 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */unsigned long long int) 2650303793U))))) ? (((((/* implicit */_Bool) var_15)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 1497197432U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-53))) != (-1166567980403029904LL))))));
                        }
                    } 
                } 
            }
            var_80 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_20 [i_0] [i_21] [i_21] [i_0] [i_0])) <= (((long long int) var_19))));
            arr_96 [i_0] [i_0] = ((/* implicit */short) arr_8 [i_21]);
            var_81 = ((/* implicit */_Bool) var_11);
        }
    }
    /* vectorizable */
    for (signed char i_31 = 0; i_31 < 22; i_31 += 2) 
    {
        arr_99 [i_31] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(-1LL)))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_98 [i_31])))));
        var_82 ^= ((/* implicit */unsigned long long int) (unsigned char)167);
        arr_100 [i_31] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) > (var_9)));
    }
    /* vectorizable */
    for (unsigned int i_32 = 0; i_32 < 12; i_32 += 3) 
    {
        var_83 = ((/* implicit */int) ((long long int) (short)4229));
        var_84 ^= ((/* implicit */unsigned short) arr_70 [i_32] [14LL] [i_32] [14LL] [i_32]);
    }
    var_85 = ((/* implicit */signed char) var_5);
}
