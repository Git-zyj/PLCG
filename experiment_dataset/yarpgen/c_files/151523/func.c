/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151523
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
    var_18 += ((/* implicit */_Bool) var_17);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_19 = ((/* implicit */long long int) var_2);
        var_20 &= ((/* implicit */long long int) ((unsigned int) max(((!(((/* implicit */_Bool) var_4)))), ((!(((/* implicit */_Bool) var_15)))))));
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))), ((-9223372036854775807LL - 1LL))))) % (arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_2))) ? (((long long int) var_8)) : (((/* implicit */long long int) var_8))));
            /* LoopSeq 3 */
            for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                arr_9 [i_1] [i_3] [i_1] = ((/* implicit */_Bool) ((var_8) & (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3])))));
                var_23 -= ((/* implicit */_Bool) arr_5 [9]);
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    for (signed char i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [0U] [i_2])) ? (arr_14 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */int) arr_4 [i_5])) : (((/* implicit */int) (_Bool)1))));
                            arr_16 [i_5] [i_3] [i_3] [i_3] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)17)) >> (((2465840945U) - (2465840918U)))));
                            var_25 = ((/* implicit */_Bool) var_9);
                        }
                    } 
                } 
                var_26 = ((/* implicit */signed char) ((((((/* implicit */int) var_2)) << (14ULL))) << (((((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) (signed char)-85)) : (var_1))) + (86)))));
            }
            for (unsigned long long int i_6 = 1; i_6 < 15; i_6 += 1) /* same iter space */
            {
                /* LoopSeq 4 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_27 = ((((((/* implicit */long long int) var_7)) > (arr_1 [3]))) ? (((((/* implicit */_Bool) (signed char)47)) ? (((/* implicit */int) arr_22 [i_7] [i_7] [i_6] [i_6 + 1] [i_2] [i_1])) : (var_1))) : (((/* implicit */int) arr_2 [i_7])));
                    var_28 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) < (14ULL))))));
                }
                for (signed char i_8 = 0; i_8 < 16; i_8 += 3) /* same iter space */
                {
                    var_29 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_6] [i_6] [i_6 - 1] [i_6 + 1])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)9))))) : (((unsigned long long int) var_9))));
                    arr_26 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) arr_11 [10LL] [i_8] [i_8] [i_8])) < (arr_3 [i_2] [i_6 - 1])));
                    var_30 &= ((/* implicit */_Bool) ((long long int) 14ULL));
                    var_31 = ((/* implicit */long long int) ((signed char) ((unsigned char) arr_20 [i_1] [i_2] [i_2] [(signed char)12])));
                    arr_27 [i_2] [i_2] [i_6] [i_6] [i_1] &= ((/* implicit */long long int) (_Bool)1);
                }
                for (signed char i_9 = 0; i_9 < 16; i_9 += 3) /* same iter space */
                {
                    var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_6 - 1] [i_2])) ? (var_1) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_30 [i_9] [(_Bool)1] [(_Bool)1] [i_1]))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_10 = 0; i_10 < 16; i_10 += 4) 
                    {
                        var_33 = (i_9 % 2 == 0) ? (((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (signed char)-48)) : (((/* implicit */int) arr_15 [i_9] [i_9]))))) ? (((arr_8 [i_9]) << (((((/* implicit */int) var_2)) - (18197))))) : (((/* implicit */int) (_Bool)1))))) : (((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (signed char)-48)) : (((/* implicit */int) arr_15 [i_9] [i_9]))))) ? (((((arr_8 [i_9]) + (2147483647))) << (((((((/* implicit */int) var_2)) - (18197))) - (1))))) : (((/* implicit */int) (_Bool)1)))));
                        var_34 *= ((/* implicit */unsigned short) 3913504203U);
                    }
                    var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) ((((/* implicit */_Bool) 281337537757184ULL)) ? (((long long int) var_2)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-85))))))));
                }
                for (signed char i_11 = 2; i_11 < 13; i_11 += 2) 
                {
                    arr_36 [i_6] [3ULL] [i_6 + 1] [i_6] = ((/* implicit */int) ((((_Bool) var_17)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((((((/* implicit */int) var_14)) + (2147483647))) << (((((var_17) + (2118464536))) - (2))))))));
                    arr_37 [i_11] [9LL] [i_2] [(short)11] [9LL] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)24)) % (((/* implicit */int) (short)5516))));
                    arr_38 [i_1] [i_2] [i_6] [i_6] |= ((/* implicit */short) arr_10 [i_1] [i_2]);
                }
                var_36 = (+((-(9223372036854775807LL))));
                var_37 *= ((((/* implicit */_Bool) (signed char)-21)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (0U));
            }
            for (unsigned long long int i_12 = 1; i_12 < 15; i_12 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (unsigned long long int i_14 = 1; i_14 < 15; i_14 += 4) 
                    {
                        {
                            arr_46 [i_1] [(unsigned char)11] [(unsigned short)5] [(_Bool)1] [i_1] [i_1] = ((/* implicit */unsigned char) (unsigned short)22825);
                            var_38 = ((/* implicit */long long int) (unsigned short)51958);
                            arr_47 [i_14] [(signed char)7] [(signed char)7] [(signed char)10] [(signed char)7] [i_2] [i_1] = ((/* implicit */short) ((1829126351U) > (3596539966U)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_15 = 0; i_15 < 16; i_15 += 2) 
                {
                    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                    {
                        {
                            var_39 = ((/* implicit */int) -1920958424009121014LL);
                            var_40 = ((/* implicit */int) max((var_40), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [(unsigned char)6])))))) ? (((((/* implicit */int) var_14)) - (((/* implicit */int) (unsigned char)114)))) : (((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_16))))))));
                            var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_1] [i_1] [i_12 + 1] [i_16 - 1])) ? (((/* implicit */unsigned int) arr_24 [i_12 + 1] [i_16 - 1] [i_16 - 1] [i_16 - 1])) : (var_12))))));
                            var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_15] [i_12 - 1] [i_15] [i_16])) && (((/* implicit */_Bool) (signed char)81))));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (unsigned short i_17 = 1; i_17 < 14; i_17 += 3) 
            {
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    {
                        arr_58 [i_1] [i_17] [i_1] [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_41 [i_1] [i_1] [i_17 + 1])) ? (var_17) : (arr_12 [i_17] [i_17] [i_17 - 1] [i_18] [i_18] [i_18] [i_18])));
                        /* LoopSeq 3 */
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
                        {
                            var_43 &= ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) var_11)) & (((/* implicit */int) var_9)))));
                            arr_62 [i_17] [i_18] [(unsigned short)15] [i_2] [i_17] [i_1] [i_17] = ((/* implicit */int) (+((-9223372036854775807LL - 1LL))));
                            var_44 = ((/* implicit */unsigned char) 6229744571373865314ULL);
                            arr_63 [i_1] [i_2] [i_2] [i_18] [i_17] [2LL] [i_17] &= ((/* implicit */long long int) arr_43 [i_17] [i_2] [i_17 + 1]);
                            var_45 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-15493)) ? (939524096U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        }
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
                        {
                            var_46 = ((/* implicit */_Bool) min((var_46), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_17 + 1] [i_17 + 1] [i_17 + 1] [i_17] [i_17] [i_17 + 2])) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_17 + 1] [i_17 + 1] [i_17 + 1] [i_17] [i_17 + 1] [i_17 + 2]))))))));
                            var_47 = ((/* implicit */signed char) max((var_47), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)9538)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) arr_12 [4ULL] [4ULL] [i_17 + 2] [4ULL] [(signed char)4] [i_20] [4ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [14LL] [i_2] [i_18] [i_18] [i_18]))) : (1ULL))))))));
                        }
                        for (int i_21 = 0; i_21 < 16; i_21 += 3) 
                        {
                            var_48 = ((/* implicit */_Bool) min((var_48), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_5 [(unsigned short)6])) ? (((/* implicit */unsigned int) var_17)) : (2366503299U))))))));
                            var_49 = ((/* implicit */int) arr_40 [i_1] [i_1]);
                            arr_71 [i_1] [(_Bool)1] [i_17] [i_18] [i_21] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)0) ? (var_1) : (((/* implicit */int) arr_21 [i_17] [i_2] [i_18] [i_21]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_50 [i_1] [i_2] [i_1] [i_18])) + (((/* implicit */int) arr_25 [i_1] [i_1] [i_17] [i_18]))))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_7 [i_21] [i_17] [14LL])))));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_22 = 0; i_22 < 16; i_22 += 1) 
                        {
                            var_50 = ((/* implicit */long long int) ((unsigned char) arr_57 [i_1] [i_2] [i_17 + 2] [i_17 - 1]));
                            arr_74 [i_1] [i_2] [i_17] [i_18] [i_18] = (_Bool)1;
                            var_51 = ((/* implicit */signed char) var_10);
                            var_52 += ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-55))))));
                            var_53 = ((/* implicit */signed char) (_Bool)1);
                        }
                        var_54 = ((/* implicit */unsigned long long int) max((var_54), (((/* implicit */unsigned long long int) ((((arr_66 [i_17 + 1] [i_17 + 1] [i_17] [i_18] [(signed char)6]) + (2147483647))) << (((((((/* implicit */int) arr_31 [(short)12] [i_17 + 1])) + (152))) - (24))))))));
                    }
                } 
            } 
        }
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
        {
            var_55 = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)47))));
            /* LoopNest 2 */
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
            {
                for (signed char i_25 = 3; i_25 < 13; i_25 += 4) 
                {
                    {
                        var_56 = ((/* implicit */long long int) max((var_56), (((/* implicit */long long int) ((((((/* implicit */_Bool) 1280209570U)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)1)))) >= (((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (_Bool)1)))))))));
                        var_57 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_1)))) ? ((((_Bool)0) ? (((/* implicit */long long int) 4261412864U)) : ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)4095)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)0)))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_26 = 0; i_26 < 16; i_26 += 4) 
            {
                for (unsigned char i_27 = 0; i_27 < 16; i_27 += 4) 
                {
                    {
                        var_58 &= ((/* implicit */signed char) ((((((/* implicit */int) var_11)) >= (((/* implicit */int) (unsigned char)28)))) && (((/* implicit */_Bool) (signed char)-6))));
                        arr_89 [i_1] [(_Bool)1] [i_23] [i_23] [i_1] [i_1] = ((/* implicit */signed char) var_16);
                        var_59 = ((/* implicit */long long int) (_Bool)0);
                        var_60 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1572099555)) ? (((/* implicit */unsigned long long int) ((int) -1764187164))) : (9222809086901354496ULL)));
                        var_61 -= ((/* implicit */unsigned int) var_5);
                    }
                } 
            } 
            arr_90 [i_23] = var_17;
            var_62 |= ((/* implicit */unsigned long long int) ((((var_17) + (2147483647))) >> (((((/* implicit */int) (unsigned char)33)) / (((/* implicit */int) (signed char)99))))));
        }
        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) /* same iter space */
        {
            arr_93 [i_28] [i_28] [(short)11] = ((/* implicit */_Bool) ((unsigned long long int) (unsigned short)11178));
            var_63 = ((/* implicit */_Bool) 144115188075839488ULL);
        }
        var_64 |= ((/* implicit */signed char) ((unsigned char) ((signed char) 144115188075839488ULL)));
        var_65 = ((/* implicit */unsigned char) ((arr_59 [i_1] [i_1] [i_1] [i_1] [(signed char)2]) >> (((((/* implicit */int) arr_72 [i_1] [i_1] [i_1] [i_1])) - (106)))));
    }
    for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_30 = 0; i_30 < 16; i_30 += 2) 
        {
            for (long long int i_31 = 0; i_31 < 16; i_31 += 4) 
            {
                for (unsigned long long int i_32 = 1; i_32 < 14; i_32 += 2) 
                {
                    {
                        var_66 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)42)) ? (16383) : (((/* implicit */int) (unsigned short)43842))));
                        var_67 = ((/* implicit */unsigned short) 9007199254740992LL);
                        var_68 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-31816)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        } 
        arr_107 [i_29] [i_29] = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)13)) & (((((/* implicit */int) var_4)) >> (((var_1) + (1138014215))))))) >= (((((/* implicit */int) (_Bool)1)) / (1682462348)))));
        arr_108 [i_29] [i_29] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((18302628885633712127ULL) >> (((((/* implicit */int) (signed char)-112)) + (136)))))) ? (min((((/* implicit */long long int) (_Bool)1)), (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))))) ? (((/* implicit */int) min((((16252928U) > (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (((arr_19 [0U] [i_29] [i_29] [14U]) > (((/* implicit */unsigned long long int) var_12))))))) : (((/* implicit */int) ((short) (-(((/* implicit */int) (_Bool)1))))))));
        arr_109 [i_29] = ((/* implicit */signed char) min((((/* implicit */int) (((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (2882806409U))) >= (var_8)))), (((((/* implicit */_Bool) arr_34 [i_29] [i_29] [i_29] [i_29])) ? (((((/* implicit */_Bool) arr_85 [i_29] [i_29] [i_29] [i_29])) ? (((/* implicit */int) arr_68 [2U])) : (((/* implicit */int) var_0)))) : (-1809651283)))));
    }
    var_69 = ((/* implicit */signed char) max((var_69), (((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? ((((+(((/* implicit */int) var_0)))) ^ (var_17))) : (((/* implicit */int) (_Bool)0)))))));
    var_70 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) & (9378220461903171915ULL))) < (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) max((var_6), (((/* implicit */unsigned short) (unsigned char)106))))) : (((/* implicit */int) ((signed char) 131071ULL))))))));
}
