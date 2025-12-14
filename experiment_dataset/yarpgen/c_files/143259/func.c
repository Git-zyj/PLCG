/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143259
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_14 = ((/* implicit */long long int) max((var_14), (min((min((((/* implicit */long long int) var_6)), (arr_0 [i_0]))), (min((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1])))))));
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (219161010U) : (219161010U)));
                    arr_7 [i_0] [14LL] [i_2] [i_2] = var_4;
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (signed char i_4 = 2; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] = ((/* implicit */short) ((signed char) min((((/* implicit */int) arr_8 [i_0 + 1] [i_0])), (((int) var_6)))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] = ((((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0]))) > (1310067686776560980LL)))) / (((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_8)), (var_1)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (-6424597646387617816LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_3]))))))))));
                                arr_14 [i_0] = ((/* implicit */signed char) min((min((-4344200048615263163LL), (((/* implicit */long long int) var_9)))), (((6424597646387617815LL) % (((/* implicit */long long int) var_8))))));
                                var_15 = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((unsigned char) (~(((/* implicit */int) (signed char)-6)))))) : (min((1789070140), (min((arr_9 [i_2 - 1]), (((/* implicit */int) var_9)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_5 = 4; i_5 < 20; i_5 += 4) 
        {
            var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) arr_10 [i_5])))))) != (((((/* implicit */_Bool) -76685302)) ? (((/* implicit */unsigned int) 759455485)) : (219161010U))))))));
            arr_18 [i_0 + 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((var_11) >> (((var_8) + (386604022)))))) / (((long long int) 6424597646387617822LL))));
            var_17 ^= ((/* implicit */int) ((unsigned short) ((int) var_12)));
            var_18 = ((/* implicit */signed char) -6424597646387617822LL);
            var_19 = ((/* implicit */short) ((int) var_10));
        }
        for (int i_6 = 3; i_6 < 18; i_6 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_7 = 2; i_7 < 19; i_7 += 4) 
            {
                /* LoopSeq 2 */
                for (long long int i_8 = 1; i_8 < 19; i_8 += 4) 
                {
                    var_20 ^= var_12;
                    arr_27 [i_0] [(short)20] [i_0] [i_0] [i_0] [i_7] |= ((((((/* implicit */long long int) var_5)) & (281474976710655LL))) << (((((/* implicit */int) ((signed char) var_5))) - (35))));
                }
                for (unsigned int i_9 = 1; i_9 < 20; i_9 += 1) 
                {
                    arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned short) var_13));
                    var_21 = ((/* implicit */long long int) var_12);
                }
                var_22 |= ((/* implicit */short) arr_2 [i_7]);
            }
            var_23 = ((/* implicit */unsigned int) ((long long int) min((((var_6) ? (((/* implicit */long long int) var_12)) : (-6424597646387617802LL))), (((/* implicit */long long int) ((_Bool) var_7))))));
        }
    }
    for (long long int i_10 = 2; i_10 < 17; i_10 += 4) 
    {
        arr_34 [i_10] = ((/* implicit */signed char) arr_3 [i_10 + 1] [i_10 + 1]);
        var_24 += ((/* implicit */_Bool) (signed char)5);
    }
    for (unsigned short i_11 = 0; i_11 < 18; i_11 += 4) 
    {
        /* LoopSeq 3 */
        for (int i_12 = 0; i_12 < 18; i_12 += 3) /* same iter space */
        {
            arr_40 [i_11] [(unsigned char)12] [i_12] = ((/* implicit */long long int) (((+(((var_1) | (((/* implicit */long long int) arr_1 [i_12] [i_12])))))) > (((/* implicit */long long int) min((min((((/* implicit */int) var_2)), (var_3))), (max((((/* implicit */int) var_9)), (var_3))))))));
            arr_41 [16] [i_12] [i_12] = ((/* implicit */long long int) ((min((905359038U), (((/* implicit */unsigned int) 1799261933)))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_0)))) ? (((3389608260U) & (4104805001U))) : (((/* implicit */unsigned int) (~(var_8))))))));
            arr_42 [i_11] [i_11] [i_11] &= ((/* implicit */_Bool) max((((long long int) arr_33 [i_11])), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_12])) ? (((/* implicit */int) var_6)) : (arr_36 [i_12]))))));
        }
        for (int i_13 = 0; i_13 < 18; i_13 += 3) /* same iter space */
        {
            arr_46 [i_11] = ((/* implicit */int) min((((/* implicit */long long int) ((((-6424597646387617782LL) >= (-6424597646387617812LL))) || (((/* implicit */_Bool) arr_1 [i_11] [i_11]))))), (((long long int) max((((/* implicit */unsigned int) var_4)), (4294967295U))))));
            arr_47 [i_13] [i_13] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((short) -1789070141))), (var_1)))) ? (((long long int) -6424597646387617822LL)) : (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) | (((/* implicit */int) arr_5 [i_11] [i_11] [i_13] [i_13]))))), (min((((/* implicit */unsigned int) var_3)), (3389608274U))))))));
        }
        for (int i_14 = 2; i_14 < 15; i_14 += 4) 
        {
            arr_50 [i_14] [i_14] [i_14 + 2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (1413942275) : (((/* implicit */int) arr_25 [i_14] [i_14 + 3] [i_14] [i_11] [i_11]))))) ? (((/* implicit */long long int) ((1826350628) >> (((2433343192U) - (2433343176U)))))) : (((((/* implicit */long long int) var_3)) | (9216862693731363047LL)))));
            /* LoopNest 2 */
            for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
            {
                for (unsigned short i_16 = 0; i_16 < 18; i_16 += 1) 
                {
                    {
                        arr_55 [i_11] = ((int) ((((long long int) var_11)) >> (((max((arr_51 [i_11] [i_11] [i_11]), (((/* implicit */unsigned int) (signed char)117)))) - (3749905694U)))));
                        arr_56 [i_16] [i_11] [i_14] [i_11] = ((/* implicit */long long int) ((signed char) var_10));
                    }
                } 
            } 
            arr_57 [i_11] = ((/* implicit */_Bool) (signed char)0);
            var_25 = ((/* implicit */unsigned int) max((var_25), (max((1949303963U), (((/* implicit */unsigned int) ((((/* implicit */int) arr_25 [i_14] [i_14] [i_14 - 2] [i_14] [i_14])) ^ (((/* implicit */int) var_6)))))))));
        }
        arr_58 [i_11] = ((/* implicit */short) ((unsigned int) ((signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (6424597646387617790LL)))));
    }
    for (int i_17 = 1; i_17 < 9; i_17 += 4) 
    {
        arr_61 [i_17] = ((/* implicit */unsigned int) var_6);
        arr_62 [(short)4] &= ((/* implicit */long long int) max((((min((1799261957), (-1670873235))) | (((/* implicit */int) ((_Bool) -1789070152))))), (((int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (var_12))))));
    }
    var_26 = ((/* implicit */long long int) ((unsigned char) 3389608282U));
    /* LoopNest 3 */
    for (long long int i_18 = 2; i_18 < 23; i_18 += 4) 
    {
        for (signed char i_19 = 1; i_19 < 24; i_19 += 3) 
        {
            for (unsigned int i_20 = 2; i_20 < 24; i_20 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_21 = 1; i_21 < 22; i_21 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) 171610608))))), ((+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) -1789070146)) : (arr_69 [i_18 - 2] [(unsigned char)10]))))))))));
                        arr_75 [i_20] [i_20 + 1] [i_20] = ((((/* implicit */_Bool) ((unsigned char) 6424597646387617800LL))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_63 [i_19]))) : (arr_73 [i_18] [i_20] [i_18 + 2] [(unsigned short)9])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_8))))) : (((/* implicit */int) ((unsigned short) arr_65 [i_20]))))) : (min((((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (short)-32312))))), (max((((/* implicit */int) (signed char)-124)), (var_13))))));
                    }
                    for (long long int i_22 = 2; i_22 < 21; i_22 += 4) 
                    {
                        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) max((((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_11)) : (var_0))) | (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_68 [2U] [i_19 + 1] [i_20 - 1])), (var_5)))))), (((/* implicit */long long int) max((min((-1760488726), (((/* implicit */int) (signed char)-87)))), (var_13)))))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_23 = 1; i_23 < 22; i_23 += 4) 
                        {
                            var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) (+(var_5))))));
                            arr_82 [i_18] [(unsigned short)23] [i_20] [i_18] [i_18] [15U] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) var_6))));
                        }
                        for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
                        {
                            var_30 = ((/* implicit */long long int) -198572149);
                            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((min((((/* implicit */unsigned int) (+(var_8)))), (min((arr_71 [i_18] [i_18] [i_18] [i_22]), (((/* implicit */unsigned int) var_12)))))) >= (((var_11) & (((/* implicit */unsigned int) ((int) 2660092811097784612LL))))))))));
                            arr_85 [i_20] [i_19] = min((((/* implicit */int) ((((/* implicit */long long int) 1791118098)) < (arr_83 [i_24] [i_19 + 1] [18LL] [i_19])))), (((((/* implicit */_Bool) 115049157)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6)))));
                            var_32 = ((/* implicit */int) var_9);
                        }
                        for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) 
                        {
                            var_33 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_9))) + (((long long int) arr_74 [i_25] [i_22 + 1] [i_20] [i_20] [i_19 + 1] [i_18 - 2]))));
                            arr_90 [i_25 - 1] [i_20] [i_20] [i_19] [i_20] [0LL] [(unsigned char)2] = ((/* implicit */_Bool) var_11);
                            var_34 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((unsigned int) 1284954026U))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_70 [i_20] [i_20])))))) : (min((((/* implicit */unsigned int) var_9)), (var_11))))) * (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)0)))))));
                            arr_91 [i_18] [i_18] [i_18] &= ((/* implicit */long long int) max((((unsigned int) var_4)), ((+(3010013269U)))));
                        }
                        arr_92 [i_20] [i_20] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */unsigned int) ((int) var_6))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) + (arr_89 [i_18] [(unsigned short)1] [i_20] [i_18 + 2] [i_18] [i_18 + 1])))))) ? (((3389608296U) | (((/* implicit */unsigned int) max((((/* implicit */int) var_4)), (var_3)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)7)) && (((/* implicit */_Bool) 905359038U))))))));
                    }
                    for (unsigned int i_26 = 1; i_26 < 24; i_26 += 1) 
                    {
                        arr_95 [i_18] [i_19 + 1] [i_19 - 1] [18] |= ((/* implicit */int) 1284954026U);
                        arr_96 [i_26] [i_20] [i_19] [i_20] [i_18 + 1] = ((/* implicit */int) max((((long long int) arr_89 [i_18] [i_18] [i_20] [i_19] [i_26] [i_26])), (((/* implicit */long long int) max(((signed char)31), (var_2))))));
                        /* LoopSeq 1 */
                        for (int i_27 = 1; i_27 < 23; i_27 += 4) 
                        {
                            arr_99 [i_18] [11] [i_18 - 1] [i_20] [i_18] = ((/* implicit */unsigned char) ((short) 1176456819U));
                            arr_100 [i_18] [i_20] [i_18] [i_18] = ((min((var_8), (var_8))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_68 [i_26] [i_20 + 1] [i_19]))))));
                        }
                        /* LoopSeq 3 */
                        for (int i_28 = 1; i_28 < 22; i_28 += 4) 
                        {
                            var_35 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((unsigned short) var_6))), (((((((/* implicit */_Bool) var_10)) ? (3010013252U) : (((/* implicit */unsigned int) var_13)))) - (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_13))))))));
                            var_36 *= ((/* implicit */int) ((max((((/* implicit */long long int) ((((/* implicit */int) var_6)) * (((/* implicit */int) arr_93 [i_28] [i_18] [i_18]))))), (((((/* implicit */_Bool) 1799261957)) ? (-1457747811804511687LL) : (((/* implicit */long long int) var_3)))))) <= (min((((-4912123400723642578LL) & (((/* implicit */long long int) -1799261911)))), (((/* implicit */long long int) min((3389608257U), (((/* implicit */unsigned int) var_12)))))))));
                        }
                        for (short i_29 = 1; i_29 < 24; i_29 += 4) 
                        {
                            var_37 = ((/* implicit */int) -7447303841992605883LL);
                            var_38 = ((/* implicit */unsigned int) var_6);
                        }
                        for (unsigned int i_30 = 1; i_30 < 22; i_30 += 4) 
                        {
                            var_39 = ((/* implicit */int) 1284954043U);
                            arr_109 [i_20] [i_19] [i_19] [i_20] [i_19] [i_19] [i_19 + 1] = ((/* implicit */short) ((((max((8870129624757052358LL), (((/* implicit */long long int) (signed char)-57)))) ^ (((/* implicit */long long int) ((/* implicit */int) var_9))))) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            arr_110 [i_20] [i_19] = ((/* implicit */int) (!(((/* implicit */_Bool) min((((long long int) arr_69 [i_26 - 1] [i_18])), (var_1))))));
                        }
                        arr_111 [i_18] [i_19] [i_20] [2LL] = ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) == (arr_70 [i_20] [i_19])))), (((long long int) arr_78 [i_18 - 1] [i_18]))))) ? (var_13) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1799261915)) && ((_Bool)1))))) != (-7447303841992605883LL)))));
                    }
                    arr_112 [i_20] = ((/* implicit */long long int) max((min((((/* implicit */int) (_Bool)1)), (((var_3) % (var_8))))), (268435456)));
                    arr_113 [i_18] [i_20] [i_19 - 1] = ((/* implicit */unsigned int) min((((/* implicit */int) arr_84 [i_18] [i_19] [i_20] [i_20] [i_20])), (var_13)));
                    /* LoopSeq 1 */
                    for (long long int i_31 = 1; i_31 < 24; i_31 += 1) 
                    {
                        var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) max((((int) var_3)), (((((/* implicit */_Bool) (short)-18032)) ? (((/* implicit */int) (signed char)-73)) : (((/* implicit */int) (short)18024)))))))));
                        arr_118 [i_18] [i_20] [i_18] [i_18] = ((/* implicit */signed char) var_9);
                        /* LoopSeq 1 */
                        for (int i_32 = 1; i_32 < 23; i_32 += 4) 
                        {
                            arr_123 [20LL] [i_20] [i_20] [i_20 - 2] [i_20] = max((((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 8172202022785447085LL)) ? (-268435457) : (1895724745)))) : (-7447303841992605872LL))), (((/* implicit */long long int) ((((((/* implicit */unsigned int) 0)) * (1284954043U))) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                            var_41 &= ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)101)) + (((/* implicit */int) arr_102 [i_18 + 2]))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_7)) / (-1799261957))))))), (var_5)));
                        }
                    }
                }
            } 
        } 
    } 
}
