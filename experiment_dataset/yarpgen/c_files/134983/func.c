/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134983
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
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_16 |= ((/* implicit */unsigned short) (-(((long long int) min((((/* implicit */unsigned int) (unsigned char)33)), (3858377390U))))));
                                var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) 436589907U)) ? (((/* implicit */long long int) 436589906U)) : (-4100400168119890518LL)));
                                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) arr_12 [i_1]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 4100400168119890517LL)) ? (3858377393U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_5] [i_0])) ? (((((/* implicit */_Bool) var_8)) ? (arr_7 [i_6] [i_1] [i_0]) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((unsigned short) arr_3 [i_0])))))))))));
                                arr_18 [i_0] [i_0] [i_2] [0U] [0LL] [i_6] &= ((/* implicit */unsigned char) max((-4100400168119890495LL), (min((4100400168119890495LL), (((/* implicit */long long int) 4294967295U))))));
                                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((int) ((arr_12 [i_6]) - (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [8LL] [i_2] [i_5]))) - (var_7))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        for (long long int i_8 = 0; i_8 < 12; i_8 += 1) 
                        {
                            {
                                var_21 *= max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))), (((((((/* implicit */int) arr_0 [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_0 [i_0])) + (137))))));
                                var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_13 [(unsigned short)2] [(unsigned short)2] [(unsigned short)2] [i_7] [i_7]))));
                                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_19 [i_0] [i_1] [i_8])), (var_12))))) < (min((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_7])), (arr_12 [i_8]))))))))));
                                var_24 = ((/* implicit */unsigned char) min((var_24), (((unsigned char) 19181494U))));
                                var_25 += ((/* implicit */unsigned int) max(((+(var_7))), (((/* implicit */long long int) ((short) 4194303LL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_9 = 0; i_9 < 22; i_9 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_10 = 0; i_10 < 22; i_10 += 2) 
        {
            for (signed char i_11 = 0; i_11 < 22; i_11 += 2) 
            {
                {
                    var_26 = ((/* implicit */signed char) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)24)));
                    /* LoopNest 2 */
                    for (long long int i_12 = 0; i_12 < 22; i_12 += 4) 
                    {
                        for (unsigned int i_13 = 0; i_13 < 22; i_13 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_8)))))) ^ (((var_1) / (((/* implicit */long long int) ((/* implicit */int) var_3)))))))) ? (((int) max((((/* implicit */long long int) arr_39 [(short)4] [(_Bool)0] [i_12] [i_11] [i_11] [(signed char)19] [i_9])), (var_1)))) : (((/* implicit */int) var_5))));
                                var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (short)0)))))));
                                var_29 += ((/* implicit */long long int) ((max((((/* implicit */int) ((1067313114) >= (494177567)))), (((((/* implicit */int) arr_32 [i_13] [i_13])) % (((/* implicit */int) (unsigned short)28348)))))) > (((/* implicit */int) max(((unsigned short)32512), (((/* implicit */unsigned short) (signed char)-13)))))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) max((var_7), (((/* implicit */long long int) ((((/* implicit */int) arr_38 [i_9] [i_10] [(signed char)2] [i_9] [i_10] [i_11] [i_9])) != (((/* implicit */int) arr_38 [i_9] [i_10] [i_11] [i_9] [1LL] [i_10] [i_11]))))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 3) 
        {
            for (short i_15 = 0; i_15 < 22; i_15 += 2) 
            {
                for (signed char i_16 = 0; i_16 < 22; i_16 += 2) 
                {
                    {
                        arr_48 [i_9] [(signed char)16] [i_15] [i_15] [i_16] [(unsigned short)16] &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_26 [i_16])) % (((((/* implicit */int) (unsigned char)222)) | (((/* implicit */int) (unsigned char)90))))));
                        var_31 ^= ((((/* implicit */long long int) max((arr_31 [i_9] [i_14] [i_15]), (((/* implicit */int) arr_43 [i_16] [i_15] [i_14] [i_9]))))) / ((+(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)33))) ^ (9223372036854775807LL))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_17 = 0; i_17 < 22; i_17 += 3) 
        {
            for (long long int i_18 = 0; i_18 < 22; i_18 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_19 = 0; i_19 < 22; i_19 += 2) 
                    {
                        for (long long int i_20 = 0; i_20 < 22; i_20 += 2) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) min((arr_27 [i_18]), (((/* implicit */long long int) (unsigned char)50)))))));
                                var_33 += ((/* implicit */signed char) arr_36 [i_20] [i_18] [i_18] [12]);
                                var_34 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) >> (7ULL)))) ^ (((7ULL) << (((min((var_4), (((/* implicit */long long int) (unsigned char)216)))) - (159LL)))))));
                            }
                        } 
                    } 
                    var_35 -= ((/* implicit */signed char) arr_57 [(signed char)11] [i_18] [(short)14] [i_9]);
                    /* LoopNest 2 */
                    for (long long int i_21 = 0; i_21 < 22; i_21 += 3) 
                    {
                        for (int i_22 = 0; i_22 < 22; i_22 += 2) 
                        {
                            {
                                var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) max((((((/* implicit */int) ((short) arr_50 [i_9]))) >> (((((/* implicit */int) arr_35 [(signed char)15] [i_17] [i_17] [i_17] [i_17] [i_17])) + (34))))), (((/* implicit */int) var_3)))))));
                                var_37 = ((/* implicit */unsigned long long int) var_9);
                            }
                        } 
                    } 
                    var_38 = ((/* implicit */unsigned int) arr_33 [i_9]);
                    var_39 ^= ((/* implicit */unsigned int) arr_40 [11] [11] [i_18]);
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (signed char i_23 = 0; i_23 < 15; i_23 += 2) 
    {
        for (signed char i_24 = 0; i_24 < 15; i_24 += 2) 
        {
            for (signed char i_25 = 0; i_25 < 15; i_25 += 1) 
            {
                {
                    var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) var_8))));
                    var_41 = ((/* implicit */signed char) var_3);
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_26 = 0; i_26 < 23; i_26 += 4) 
    {
        var_42 *= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_72 [i_26] [i_26]))) > (arr_73 [i_26])))) % (((/* implicit */int) ((unsigned char) 9223372036854775807LL)))))) * (min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_72 [i_26] [i_26]))))), (max((var_8), (((/* implicit */long long int) var_3))))))));
        var_43 = ((/* implicit */short) (!((!(((/* implicit */_Bool) 7ULL))))));
        var_44 = ((/* implicit */int) ((unsigned short) min(((unsigned short)0), (((/* implicit */unsigned short) (signed char)-13)))));
    }
    for (short i_27 = 0; i_27 < 17; i_27 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_28 = 0; i_28 < 17; i_28 += 4) 
        {
            for (short i_29 = 0; i_29 < 17; i_29 += 4) 
            {
                {
                    var_45 = ((/* implicit */unsigned char) min((var_45), (((/* implicit */unsigned char) min((((/* implicit */long long int) ((unsigned short) arr_72 [i_27] [i_29]))), (((((/* implicit */_Bool) (unsigned char)231)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)231))) : (5728604874959800745LL))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_30 = 0; i_30 < 17; i_30 += 1) 
                    {
                        for (int i_31 = 0; i_31 < 17; i_31 += 3) 
                        {
                            {
                                var_46 += ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)(-127 - 1))) == (((/* implicit */int) (unsigned short)0))));
                                var_47 ^= ((/* implicit */short) ((unsigned short) (unsigned char)24));
                                var_48 *= ((/* implicit */unsigned char) (+(((/* implicit */int) ((short) arr_78 [i_27])))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned char i_32 = 0; i_32 < 17; i_32 += 4) 
                    {
                        var_49 = ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) != (17179869183ULL))), (((((arr_36 [i_27] [i_28] [i_28] [i_27]) + (((/* implicit */long long int) ((/* implicit */int) var_10))))) == (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13)))))))));
                        var_50 = ((/* implicit */short) arr_31 [i_27] [i_28] [i_32]);
                        var_51 = ((/* implicit */int) min((var_51), (((/* implicit */int) var_2))));
                    }
                    for (long long int i_33 = 0; i_33 < 17; i_33 += 2) 
                    {
                        var_52 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) ((signed char) -1106559888238218558LL)))) ? (((((((/* implicit */int) (unsigned short)20)) / (((/* implicit */int) (unsigned short)47180)))) + (((/* implicit */int) (short)-32099)))) : (((/* implicit */int) ((((/* implicit */int) ((unsigned short) arr_36 [i_27] [i_28] [i_28] [i_33]))) > (((/* implicit */int) ((arr_94 [i_27]) == (((/* implicit */int) var_3))))))))));
                        var_53 &= ((/* implicit */unsigned short) (-(((((/* implicit */long long int) ((((/* implicit */int) var_5)) / (arr_54 [i_27] [i_27] [i_27] [i_27])))) * (((((/* implicit */long long int) ((/* implicit */int) arr_85 [14U] [14U] [14U] [i_33] [14U]))) / (var_1)))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_34 = 0; i_34 < 17; i_34 += 2) 
                    {
                        for (signed char i_35 = 0; i_35 < 17; i_35 += 1) 
                        {
                            {
                                var_54 = ((/* implicit */unsigned short) max((var_54), (((/* implicit */unsigned short) ((signed char) min((arr_74 [i_27] [i_29]), (arr_74 [i_29] [i_34])))))));
                                var_55 += ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)44384)) * (((/* implicit */int) (unsigned short)18360))));
                                var_56 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)65535)) == (((/* implicit */int) var_14)))) ? (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_81 [i_34] [i_34])))) : (((/* implicit */int) ((((/* implicit */_Bool) 268435200)) && (((/* implicit */_Bool) var_13))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_36 = 0; i_36 < 17; i_36 += 1) 
        {
            for (unsigned int i_37 = 0; i_37 < 17; i_37 += 1) 
            {
                {
                    var_57 = ((/* implicit */unsigned long long int) max((var_57), (((/* implicit */unsigned long long int) (-(((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) arr_76 [i_36] [i_36])) > (((/* implicit */int) (short)-25))))), (((unsigned char) (signed char)96))))))))));
                    var_58 = ((/* implicit */_Bool) max((var_58), (((/* implicit */_Bool) (+(((((/* implicit */int) arr_83 [i_27] [i_36] [i_37])) / (((/* implicit */int) arr_83 [i_27] [i_27] [i_27])))))))));
                    var_59 = ((/* implicit */unsigned int) ((arr_73 [i_37]) <= (((/* implicit */long long int) ((/* implicit */int) ((arr_73 [i_27]) <= (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_27] [i_27] [i_36] [i_37] [i_37] [i_37] [i_37])))))))));
                    /* LoopNest 2 */
                    for (signed char i_38 = 0; i_38 < 17; i_38 += 2) 
                    {
                        for (_Bool i_39 = 0; i_39 < 1; i_39 += 1) 
                        {
                            {
                                var_60 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (unsigned short)96)) : (((/* implicit */int) (unsigned char)139))));
                                var_61 = ((/* implicit */unsigned short) max(((~(((((/* implicit */long long int) ((/* implicit */int) arr_59 [(short)14] [i_36] [i_37] [i_38] [i_39] [11U]))) % (var_7))))), (((/* implicit */long long int) (((~(((/* implicit */int) arr_51 [i_36] [i_36])))) ^ (((/* implicit */int) arr_76 [i_39] [i_27])))))));
                                var_62 = ((unsigned char) ((((/* implicit */_Bool) arr_97 [i_27] [i_27] [i_36] [i_27] [i_36] [i_27])) ? (((/* implicit */unsigned long long int) ((long long int) (short)1713))) : (min((((/* implicit */unsigned long long int) arr_104 [i_38] [i_39])), (arr_96 [i_36])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (long long int i_40 = 0; i_40 < 10; i_40 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_41 = 0; i_41 < 10; i_41 += 3) 
        {
            for (int i_42 = 0; i_42 < 10; i_42 += 1) 
            {
                {
                    arr_118 [i_41] [i_41] = ((/* implicit */signed char) ((((/* implicit */int) (short)24)) ^ (((/* implicit */int) (short)0))));
                    var_63 = ((/* implicit */unsigned short) (+(((((/* implicit */long long int) ((/* implicit */int) arr_43 [i_40] [i_40] [i_40] [i_42]))) / (var_1)))));
                    arr_119 [i_41] [i_40] [i_41] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)137)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)153)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)63485)) >= (((/* implicit */int) (unsigned short)2051))))))))));
                }
            } 
        } 
        arr_120 [i_40] [i_40] |= ((/* implicit */unsigned long long int) ((9223372036854775802LL) >> (0ULL)));
        var_64 = ((/* implicit */short) max((var_64), (((/* implicit */short) ((((/* implicit */int) ((max((arr_63 [(signed char)13] [i_40] [i_40] [i_40] [i_40] [i_40] [i_40]), (((/* implicit */long long int) var_5)))) != (((/* implicit */long long int) arr_69 [i_40] [i_40] [i_40] [i_40]))))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_43 = 0; i_43 < 12; i_43 += 1) 
    {
        for (long long int i_44 = 0; i_44 < 12; i_44 += 2) 
        {
            for (_Bool i_45 = 0; i_45 < 1; i_45 += 1) 
            {
                {
                    var_65 |= ((/* implicit */int) ((((max((((/* implicit */long long int) var_9)), (arr_25 [i_44] [i_43] [i_44] [i_44] [i_43] [i_43] [i_44]))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_14)) < (((/* implicit */int) var_9)))))))) != (((/* implicit */long long int) arr_33 [i_44]))));
                    var_66 = ((/* implicit */long long int) min((var_66), (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_56 [i_43]), (arr_56 [i_43])))) ? (((((/* implicit */_Bool) arr_56 [i_43])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_56 [i_43]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_56 [i_43])))))))));
                    var_67 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_71 [i_43] [3U] [i_43] [i_43]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)63487)) ? (((/* implicit */int) (unsigned short)2051)) : (((/* implicit */int) (signed char)31)))))))) ? (((arr_33 [i_43]) & (((((/* implicit */_Bool) arr_79 [i_43] [i_45])) ? (((/* implicit */int) arr_6 [i_44] [i_45])) : (((/* implicit */int) arr_5 [i_43] [i_44] [i_43])))))) : (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_69 [i_43] [i_44] [i_43] [i_43])) ? (arr_33 [i_43]) : (((/* implicit */int) var_12)))) : (((-525902878) + (((/* implicit */int) (unsigned char)32))))))));
                }
            } 
        } 
    } 
}
