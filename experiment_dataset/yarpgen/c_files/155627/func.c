/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155627
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) /* same iter space */
                    {
                        arr_11 [i_0] [i_1] [10LL] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_2 + 2])) >= ((~(((/* implicit */int) (unsigned char)73))))));
                        var_18 = ((/* implicit */long long int) ((((var_10) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) == ((+(18446744073709551613ULL)))));
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 4; i_5 < 20; i_5 += 3) 
                        {
                            arr_16 [i_4] [(unsigned short)10] [(signed char)12] [i_4] &= ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((unsigned char) -5048492489050117989LL))) : (((/* implicit */int) var_4))));
                            var_19 *= ((/* implicit */signed char) (((~(((/* implicit */int) var_1)))) & ((~(((/* implicit */int) var_8))))));
                        }
                        arr_17 [i_0] [i_1] [11ULL] [11ULL] [11ULL] = ((/* implicit */unsigned char) var_15);
                    }
                    /* vectorizable */
                    for (unsigned int i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        var_20 = ((/* implicit */long long int) ((((((/* implicit */int) var_12)) == (((/* implicit */int) (unsigned char)243)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_8 [i_0] [i_1 - 2] [i_6])));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 4; i_7 < 21; i_7 += 3) 
                        {
                            arr_24 [i_0] [i_0] [i_0] = ((/* implicit */short) (~(18446744073709551615ULL)));
                            var_21 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_20 [i_2] [i_2] [i_2] [i_2 + 3])) >= (((/* implicit */int) var_7))));
                        }
                        arr_25 [i_1] [i_1 - 2] [i_0] [(_Bool)1] [(_Bool)0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_2 + 3] [i_2 + 3])) ? (((/* implicit */int) ((_Bool) (unsigned short)5822))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2])))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */short) (+(((/* implicit */int) ((short) (!(((/* implicit */_Bool) arr_2 [i_0]))))))));
                                var_23 = ((/* implicit */signed char) max((((/* implicit */long long int) var_5)), (((max((((/* implicit */long long int) var_1)), (5048492489050118012LL))) + (((/* implicit */long long int) (-(((/* implicit */int) var_5)))))))));
                            }
                        } 
                    } 
                    arr_30 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */_Bool) max(((+(-803866819767636101LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) max((var_15), (var_15)))) : ((~(((/* implicit */int) arr_26 [i_2] [i_0] [i_0] [i_0] [i_0] [(signed char)5])))))))));
                }
            } 
        } 
    } 
    var_24 = var_3;
    /* LoopNest 2 */
    for (short i_10 = 0; i_10 < 13; i_10 += 4) 
    {
        for (unsigned short i_11 = 1; i_11 < 12; i_11 += 1) 
        {
            {
                arr_36 [i_10] [i_11] = ((/* implicit */unsigned int) ((var_1) || (((/* implicit */_Bool) min((max((arr_18 [i_10] [(unsigned short)9] [i_11] [i_10]), (((/* implicit */short) var_5)))), (min((((/* implicit */short) (unsigned char)10)), (var_2))))))));
                /* LoopNest 2 */
                for (unsigned short i_12 = 0; i_12 < 13; i_12 += 2) 
                {
                    for (unsigned char i_13 = 0; i_13 < 13; i_13 += 1) 
                    {
                        {
                            arr_44 [i_11] = ((/* implicit */unsigned char) var_13);
                            arr_45 [i_11] [i_11 - 1] [i_12] [i_13] = ((/* implicit */short) ((unsigned char) ((5048492489050118004LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65533))))));
                            var_25 ^= ((/* implicit */unsigned long long int) ((unsigned char) (~(arr_34 [i_10]))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_32 [i_11 - 1] [i_11 - 1]))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_32 [i_11 + 1] [(_Bool)1]))))) : ((+(var_11)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_14 = 0; i_14 < 25; i_14 += 3) 
    {
        for (unsigned char i_15 = 0; i_15 < 25; i_15 += 1) 
        {
            for (unsigned char i_16 = 0; i_16 < 25; i_16 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_17 = 0; i_17 < 25; i_17 += 3) 
                    {
                        var_27 = ((/* implicit */unsigned char) var_4);
                        var_28 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)123)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)110)))))))));
                        var_29 ^= ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_52 [(short)16] [i_16] [(short)16])), (max(((+(((/* implicit */int) var_7)))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4))))))));
                        var_30 *= ((/* implicit */short) var_6);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_18 = 0; i_18 < 25; i_18 += 2) 
                        {
                            var_31 ^= ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)87))));
                            var_32 &= ((/* implicit */unsigned char) (-(((/* implicit */int) (short)(-32767 - 1)))));
                            arr_57 [i_14] [i_14] [i_14] [i_17] [i_14] [i_14] = ((unsigned int) (~(((/* implicit */int) (short)32752))));
                            var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) (short)(-32767 - 1)))) ? (((/* implicit */int) ((unsigned char) arr_49 [i_16]))) : (((/* implicit */int) (_Bool)1)))))));
                            var_34 = ((/* implicit */long long int) (+(((/* implicit */int) var_17))));
                        }
                        for (signed char i_19 = 0; i_19 < 25; i_19 += 3) 
                        {
                            arr_62 [i_14] [i_15] [i_14] [i_17] [i_14] = ((/* implicit */unsigned char) min(((+(((/* implicit */int) (short)-32749)))), ((-(((/* implicit */int) (_Bool)1))))));
                            arr_63 [(short)0] [i_17] [i_14] = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_3)) & (((/* implicit */int) arr_50 [(unsigned char)1]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_50 [i_15]))))) : ((+(5048492489050117983LL)))))));
                        }
                    }
                    var_35 = ((/* implicit */unsigned long long int) ((unsigned char) var_8));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_20 = 4; i_20 < 17; i_20 += 3) 
    {
        for (unsigned char i_21 = 0; i_21 < 21; i_21 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_22 = 2; i_22 < 20; i_22 += 3) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_23 = 2; i_23 < 20; i_23 += 3) 
                    {
                        arr_75 [i_20] [i_22] [(short)20] [(short)3] [7ULL] [i_20] = ((/* implicit */unsigned long long int) var_2);
                        var_36 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) (short)10))));
                    }
                    for (long long int i_24 = 0; i_24 < 21; i_24 += 4) 
                    {
                        var_37 = ((/* implicit */short) ((unsigned short) (unsigned char)125));
                        var_38 = ((/* implicit */short) ((((/* implicit */long long int) (~(((/* implicit */int) arr_52 [i_20] [14U] [(_Bool)1]))))) > ((+(3013796151438408699LL)))));
                        var_39 = ((/* implicit */long long int) ((short) (signed char)-124));
                        arr_78 [i_20] [(_Bool)1] [i_20] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_72 [i_20] [i_20 + 1] [i_22 - 1])) ? (((/* implicit */int) arr_72 [i_20] [i_20 + 1] [i_22 - 1])) : (((/* implicit */int) arr_72 [i_20] [i_20 + 1] [i_22 - 1]))));
                    }
                    for (signed char i_25 = 0; i_25 < 21; i_25 += 3) 
                    {
                        var_40 = ((/* implicit */long long int) (~(((/* implicit */int) var_2))));
                        arr_83 [i_20] [i_20] = ((/* implicit */unsigned short) arr_52 [i_20] [(_Bool)1] [(_Bool)1]);
                        var_41 = arr_22 [i_25] [i_21] [i_25] [i_21] [(unsigned char)16] [13U] [i_20];
                    }
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        var_42 += ((/* implicit */signed char) arr_55 [i_20] [i_21] [i_21] [12U] [(_Bool)0] [i_26]);
                        var_43 = ((/* implicit */short) (+(((((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) & (877560246U)))));
                    }
                    var_44 |= ((/* implicit */unsigned long long int) arr_7 [10ULL] [(short)14] [16ULL]);
                    arr_86 [i_20 - 1] [i_20] [i_20] [i_22 - 2] = ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
                    var_45 = ((/* implicit */_Bool) ((((/* implicit */int) ((short) var_15))) * ((~(((/* implicit */int) (short)7))))));
                }
                /* vectorizable */
                for (short i_27 = 2; i_27 < 20; i_27 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_28 = 0; i_28 < 21; i_28 += 4) 
                    {
                        for (unsigned char i_29 = 0; i_29 < 21; i_29 += 3) 
                        {
                            {
                                arr_93 [i_20 + 2] [i_20] [20LL] [i_28] [i_20 + 2] = ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (arr_82 [i_20 - 4] [(unsigned short)11] [(unsigned short)11] [i_27]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)2))))));
                                var_46 = ((/* implicit */short) (unsigned char)148);
                                var_47 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) arr_52 [i_20] [(unsigned char)17] [(unsigned char)12])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_27 [i_20] [(unsigned short)10] [16ULL] [i_29])))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (long long int i_30 = 0; i_30 < 21; i_30 += 3) 
                    {
                        var_48 = ((((unsigned long long int) var_6)) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned char)8)))));
                        var_49 += ((/* implicit */short) ((9223372036854775807LL) >= (((/* implicit */long long int) arr_8 [i_20 - 1] [i_21] [i_30]))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_31 = 0; i_31 < 21; i_31 += 4) 
                    {
                        for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
                        {
                            {
                                var_50 = ((/* implicit */short) max((var_50), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-61))) | (13065992339110363341ULL))))));
                                var_51 = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)-6142))));
                            }
                        } 
                    } 
                    arr_102 [i_20] = ((/* implicit */unsigned short) ((short) var_11));
                    /* LoopNest 2 */
                    for (unsigned long long int i_33 = 0; i_33 < 21; i_33 += 3) 
                    {
                        for (short i_34 = 0; i_34 < 21; i_34 += 3) 
                        {
                            {
                                var_52 -= ((/* implicit */unsigned char) 5048492489050117990LL);
                                arr_108 [(signed char)18] [i_20] [(signed char)20] [i_33] = ((/* implicit */unsigned char) arr_66 [i_20] [i_20]);
                                arr_109 [i_20] [(signed char)12] [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-13945))))) && (((/* implicit */_Bool) var_11))));
                            }
                        } 
                    } 
                }
                /* LoopSeq 2 */
                for (signed char i_35 = 0; i_35 < 21; i_35 += 3) 
                {
                    arr_112 [i_20 - 4] [(_Bool)1] [(unsigned char)18] [i_20] = ((/* implicit */_Bool) var_15);
                    var_53 ^= ((/* implicit */unsigned char) (+(min((((/* implicit */int) ((unsigned char) var_4))), ((~(((/* implicit */int) (short)13375))))))));
                    /* LoopNest 2 */
                    for (signed char i_36 = 0; i_36 < 21; i_36 += 3) 
                    {
                        for (unsigned long long int i_37 = 0; i_37 < 21; i_37 += 3) 
                        {
                            {
                                arr_118 [i_20] [i_21] [i_20] [i_36] [i_37] = ((/* implicit */short) ((signed char) var_17));
                                arr_119 [i_20] [i_20] [i_20] [i_20] [i_37] [i_37] = ((/* implicit */unsigned char) max((arr_51 [i_20] [i_20] [i_20] [i_20]), (min((arr_71 [i_20] [i_20 + 1]), (((/* implicit */short) var_17))))));
                                arr_120 [(unsigned char)10] [i_21] [(signed char)16] [10LL] [16ULL] |= ((/* implicit */unsigned long long int) ((_Bool) (((!(arr_47 [(signed char)18]))) ? (14157741346146849400ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))));
                                arr_121 [i_20 - 4] [i_20] [i_35] [(unsigned char)13] [i_37] = ((/* implicit */unsigned char) ((14157741346146849421ULL) != (min((7543098820244224164ULL), (16779421840556690684ULL)))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_38 = 0; i_38 < 21; i_38 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_39 = 0; i_39 < 0; i_39 += 1) 
                    {
                        for (unsigned int i_40 = 2; i_40 < 19; i_40 += 4) 
                        {
                            {
                                var_54 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_74 [i_40] [i_21])) ? ((~(((/* implicit */int) (short)-1)))) : (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)96)), ((unsigned char)131))))));
                                var_55 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_12)) - (((/* implicit */int) var_0))))) ? (((((/* implicit */int) arr_19 [i_40] [i_39 + 1] [i_21] [i_21] [i_20 - 3])) - (((/* implicit */int) (short)30742)))) : ((-(((/* implicit */int) var_3))))))));
                                var_56 = ((/* implicit */short) min((((arr_90 [(unsigned char)6] [i_20] [i_39] [i_39 + 1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
                                var_57 *= ((/* implicit */short) var_5);
                            }
                        } 
                    } 
                    arr_129 [i_38] [i_20] [i_20] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_3)), (var_8)))) ? (((/* implicit */int) (((+(arr_127 [i_20] [i_20] [i_20] [3U]))) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)65534)) != (((/* implicit */int) (short)-32757))))))))) : ((((+(((/* implicit */int) var_14)))) / (((/* implicit */int) var_12))))));
                    arr_130 [i_20] [i_21] [i_20] [i_38] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */int) (short)32762)) | (((/* implicit */int) (unsigned char)139))))))) ? (((/* implicit */unsigned long long int) min((min((var_13), (((/* implicit */long long int) (signed char)-123)))), (((/* implicit */long long int) ((short) var_10)))))) : (var_10)));
                }
                var_58 = ((/* implicit */short) (_Bool)1);
            }
        } 
    } 
}
