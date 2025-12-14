/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105309
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
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-29132)))))));
    var_17 *= ((/* implicit */short) ((unsigned int) var_3));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        var_18 += ((/* implicit */short) (+(((/* implicit */int) arr_1 [i_0 + 2] [i_0 - 1]))));
        arr_2 [i_0] [i_0] &= ((/* implicit */short) (((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58877)))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        arr_14 [i_2] [i_2 - 1] [i_2] [i_2] = ((/* implicit */short) (~(((/* implicit */int) arr_1 [i_2 - 1] [i_2 - 2]))));
                        var_19 = ((/* implicit */long long int) var_8);
                        var_20 &= ((/* implicit */int) 72057594037927935ULL);
                        var_21 += ((/* implicit */unsigned long long int) (~(arr_0 [i_0 - 1])));
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (((-(((/* implicit */int) (unsigned short)58889)))) % (((int) var_9)))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) var_1))));
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65529)) ? (((/* implicit */int) arr_8 [i_0] [(_Bool)1] [(_Bool)1] [i_4])) : (((/* implicit */int) arr_8 [i_0 - 2] [i_0 - 2] [i_2 - 3] [i_4]))))) ? (var_15) : (((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 2]))));
                        var_25 *= arr_8 [i_0 - 1] [i_2 - 1] [i_2] [i_2 - 1];
                    }
                    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        var_26 += ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_5])) - (((/* implicit */int) (short)-2769))));
                        var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(9223372036854775807LL))))));
                        var_28 = ((/* implicit */int) (unsigned char)116);
                        var_29 = ((/* implicit */int) (-(var_5)));
                        arr_20 [i_0] [i_5] [(short)6] &= ((/* implicit */unsigned char) ((2512920477U) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)19400)) ? (((/* implicit */int) (unsigned short)60148)) : (((/* implicit */int) (_Bool)1)))))));
                    }
                    for (signed char i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((unsigned short) (unsigned short)58869))) : (((/* implicit */int) arr_6 [i_2]))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 1) /* same iter space */
                        {
                            var_31 &= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) >= (9223372036854775798LL)));
                            arr_28 [i_0] [i_0] [i_7] &= ((/* implicit */int) (~((~(var_1)))));
                            var_32 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 - 2] [i_0 - 1] [i_0 - 1])) ? (((((/* implicit */int) var_9)) + (((/* implicit */int) arr_1 [i_6] [i_7])))) : (((((/* implicit */int) (unsigned short)6656)) << (((((/* implicit */int) arr_11 [i_0] [i_0])) - (46)))))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 1) /* same iter space */
                        {
                            var_33 |= ((/* implicit */unsigned long long int) arr_26 [i_0] [i_0]);
                            var_34 = ((/* implicit */short) (unsigned char)131);
                            var_35 ^= ((/* implicit */_Bool) (~(2512920457U)));
                            var_36 += ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */int) arr_7 [i_2 - 1]))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 1) /* same iter space */
                        {
                            var_37 = ((/* implicit */unsigned char) ((unsigned int) ((-833239346) & (((/* implicit */int) (unsigned short)40628)))));
                            var_38 = ((/* implicit */short) arr_22 [i_0 + 2] [i_0 + 4] [i_0] [i_0 + 4] [i_0 + 2] [i_0 + 4]);
                        }
                    }
                    arr_34 [i_2] [i_1] [(short)7] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned char)153)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)134))) : (2512920474U)))));
                    /* LoopSeq 2 */
                    for (unsigned int i_10 = 2; i_10 < 11; i_10 += 3) 
                    {
                        arr_37 [i_0] [i_0] [i_0] [i_10] &= ((/* implicit */long long int) (~(((((/* implicit */_Bool) (short)-30296)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) (_Bool)1))))));
                        var_39 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_1] [3])) ? (((/* implicit */long long int) 2512920475U)) : (9223372036854775789LL))) | (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)58881)) ? (-2799940) : (((/* implicit */int) arr_8 [i_0 + 1] [6ULL] [i_0 + 1] [i_0 + 1])))))));
                        var_40 &= ((/* implicit */unsigned char) arr_35 [i_0] [(_Bool)1] [i_2] [i_2] [i_0 + 3]);
                        arr_38 [i_2] [i_1] [i_2 - 2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -7104646735588270751LL)) ? (((/* implicit */int) arr_36 [i_2] [i_1])) : (((/* implicit */int) var_9)))) + (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_2])) || (((/* implicit */_Bool) 255LL)))))));
                    }
                    for (int i_11 = 0; i_11 < 14; i_11 += 2) 
                    {
                        var_41 += ((/* implicit */_Bool) ((((/* implicit */_Bool) -262LL)) ? (258LL) : (((/* implicit */long long int) 2583696012U))));
                        arr_41 [i_0] [i_0] [i_0] [i_2] [i_2 - 3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_2] [i_2])) ^ (arr_9 [i_0] [i_0])));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 1; i_12 < 10; i_12 += 1) 
                    {
                        var_42 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))));
                        var_43 &= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) -7104646735588270739LL))))) >> (((((/* implicit */int) arr_33 [i_0] [i_0] [i_0 + 4] [i_2 - 2])) - (174)))));
                        var_44 = ((/* implicit */unsigned long long int) max((var_44), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_1]))));
                    }
                }
            } 
        } 
    }
    for (short i_13 = 0; i_13 < 15; i_13 += 2) /* same iter space */
    {
        var_45 &= ((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-7104646735588270763LL)));
        /* LoopSeq 1 */
        for (unsigned int i_14 = 0; i_14 < 15; i_14 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_15 = 0; i_15 < 15; i_15 += 1) 
            {
                for (unsigned long long int i_16 = 2; i_16 < 14; i_16 += 3) 
                {
                    {
                        var_46 = ((/* implicit */long long int) min((var_46), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) < (var_2)))) : ((-(((/* implicit */int) arr_46 [i_16 - 2])))))))));
                        var_47 = ((/* implicit */short) max((((unsigned long long int) max((((/* implicit */unsigned long long int) 231LL)), (var_14)))), (((((((/* implicit */_Bool) -7104646735588270751LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)116))) : (var_10))) / (((/* implicit */unsigned long long int) min((7104646735588270782LL), (((/* implicit */long long int) arr_49 [i_13] [i_14] [i_15])))))))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned char i_17 = 0; i_17 < 15; i_17 += 4) 
            {
                for (unsigned int i_18 = 0; i_18 < 15; i_18 += 3) 
                {
                    for (short i_19 = 2; i_19 < 14; i_19 += 1) 
                    {
                        {
                            arr_64 [i_17] [i_17] [i_17] [i_17] [i_17] = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) 833239325))))), ((+(((/* implicit */int) arr_56 [i_19 - 1] [i_19] [(unsigned short)1] [i_19 - 2]))))));
                            var_48 ^= ((/* implicit */unsigned short) ((min((((/* implicit */long long int) (unsigned char)226)), ((-9223372036854775807LL - 1LL)))) == (((/* implicit */long long int) 2505005670U))));
                            arr_65 [i_13] [i_13] [i_17] &= ((/* implicit */int) (~((~(10U)))));
                            arr_66 [i_13] [i_14] [i_17] [i_14] [i_19 - 1] = ((/* implicit */int) max((((/* implicit */unsigned int) arr_54 [i_19 - 2] [i_19 - 1] [i_19] [i_19 + 1] [i_19 - 1])), (max((21U), (((/* implicit */unsigned int) -833239346))))));
                        }
                    } 
                } 
            } 
            var_49 = ((/* implicit */short) (~(((((/* implicit */_Bool) (short)28751)) ? (((/* implicit */int) arr_45 [(unsigned short)7] [i_14])) : (((/* implicit */int) arr_45 [i_13] [i_13]))))));
        }
    }
    for (short i_20 = 0; i_20 < 15; i_20 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_21 = 0; i_21 < 15; i_21 += 2) 
        {
            for (unsigned short i_22 = 0; i_22 < 15; i_22 += 1) 
            {
                {
                    var_50 = (unsigned char)8;
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_23 = 2; i_23 < 13; i_23 += 3) 
                    {
                        var_51 = ((/* implicit */_Bool) max((var_51), ((!(((/* implicit */_Bool) arr_49 [i_23 - 2] [i_21] [i_20]))))));
                        arr_76 [i_22] [i_22] [i_22] [i_22] [i_22] = ((/* implicit */short) ((((/* implicit */int) arr_56 [i_23 + 1] [i_23 - 1] [i_23 - 1] [i_23 - 1])) + (((/* implicit */int) (_Bool)1))));
                        arr_77 [i_22] = ((/* implicit */long long int) ((((/* implicit */int) arr_56 [i_23 - 2] [i_23 - 2] [i_23 - 1] [i_21])) / (((/* implicit */int) arr_63 [i_23 - 1] [i_23 + 2] [i_23] [i_23 - 1]))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_24 = 0; i_24 < 15; i_24 += 3) 
                    {
                        var_52 = ((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned long long int) -833239346))));
                        var_53 = ((/* implicit */short) min(((+(min((var_12), (((/* implicit */long long int) var_9)))))), ((-(max((243LL), (((/* implicit */long long int) arr_45 [i_20] [i_20]))))))));
                    }
                    arr_80 [i_20] [i_22] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))), (max((((/* implicit */unsigned long long int) ((_Bool) 13595150057698783773ULL))), (max((((/* implicit */unsigned long long int) var_0)), (arr_53 [i_20] [i_21] [i_22])))))));
                }
            } 
        } 
        arr_81 [i_20] = ((/* implicit */int) min((max((var_7), (((/* implicit */long long int) ((unsigned char) var_9))))), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
        var_54 -= ((/* implicit */_Bool) ((signed char) 13));
        arr_82 [i_20] [i_20] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)-29010)) : (((/* implicit */int) (short)-20597))))));
        /* LoopNest 2 */
        for (short i_25 = 0; i_25 < 15; i_25 += 1) 
        {
            for (short i_26 = 0; i_26 < 15; i_26 += 1) 
            {
                {
                    arr_90 [i_20] [i_20] [i_20] = max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65531)))))))), (((((var_14) - (((/* implicit */unsigned long long int) var_2)))) + (min((((/* implicit */unsigned long long int) arr_89 [i_25])), (arr_59 [(unsigned char)12]))))));
                    var_55 ^= ((/* implicit */unsigned short) arr_69 [i_20] [i_25]);
                    arr_91 [i_20] [i_25] [i_26] [i_26] = ((/* implicit */short) (~(14864968549831599123ULL)));
                }
            } 
        } 
    }
    for (short i_27 = 0; i_27 < 15; i_27 += 2) /* same iter space */
    {
        var_56 &= ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)182)) ? (18187384336782239657ULL) : (((/* implicit */unsigned long long int) -1749367563)))), (((((/* implicit */unsigned long long int) -230LL)) - (arr_79 [i_27] [i_27] [(unsigned short)3] [i_27] [i_27])))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) -9100883893498164670LL)) ? (((/* implicit */int) arr_95 [i_27] [i_27])) : (((/* implicit */int) (unsigned short)7626)))) == (((((/* implicit */_Bool) 833239335)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)25873))))))) : ((((-(((/* implicit */int) arr_68 [i_27])))) & (-2147483617))));
        var_57 = max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-23844))))), (max((((((/* implicit */_Bool) 14362513548581499490ULL)) ? (((/* implicit */unsigned long long int) arr_85 [i_27] [i_27])) : (var_10))), (arr_71 [i_27]))));
        var_58 += ((/* implicit */unsigned int) var_0);
        var_59 = ((/* implicit */unsigned long long int) min((var_59), (((/* implicit */unsigned long long int) 3386313804U))));
        var_60 = ((/* implicit */unsigned char) (+(((/* implicit */int) min((arr_54 [i_27] [i_27] [i_27] [i_27] [5LL]), (arr_93 [i_27]))))));
    }
    var_61 ^= max((((/* implicit */unsigned long long int) min((var_11), ((short)32758)))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)202)), (var_5)))) ? (min((((/* implicit */unsigned long long int) var_7)), (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_3)))))));
}
