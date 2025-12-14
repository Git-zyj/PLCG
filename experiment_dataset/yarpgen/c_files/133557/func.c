/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133557
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
    var_16 = ((/* implicit */signed char) var_4);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)53310)), (-6944279836520396124LL)))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-5))) | (arr_1 [i_0] [6U]))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((1774370888U), (572783441U)))) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_0] [i_0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)45))))))))))));
        /* LoopSeq 3 */
        for (long long int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            var_18 *= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (((+(var_4))) / (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1])))))), (var_1)));
            /* LoopSeq 4 */
            for (long long int i_2 = 1; i_2 < 16; i_2 += 2) /* same iter space */
            {
                /* LoopSeq 3 */
                for (signed char i_3 = 3; i_3 < 16; i_3 += 4) 
                {
                    var_19 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_7 [i_1] [i_0])), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)5)) : (((/* implicit */int) arr_4 [i_0] [i_2]))))))) ? (min((arr_5 [i_2 - 1] [i_3 + 1]), (((/* implicit */long long int) (unsigned char)3)))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)26343))) : (arr_6 [i_1]))) << (((((/* implicit */_Bool) arr_2 [i_3] [i_2] [7U])) ? (((/* implicit */int) (unsigned char)2)) : (-1599824236))))))));
                    var_20 = ((/* implicit */long long int) max((var_20), ((-(-8002262316714376922LL)))));
                }
                /* vectorizable */
                for (long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    arr_13 [i_0] [i_0] [i_1 + 1] [i_2] [i_1 + 1] = ((/* implicit */signed char) ((long long int) arr_7 [i_0] [i_0]));
                    arr_14 [i_0 + 1] [i_2] [i_0 + 1] [i_0 + 1] = (+((-(576458553280167936ULL))));
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((arr_6 [i_0 - 1]) % (1774370871U))))));
                    var_22 = ((/* implicit */int) max((var_22), (((((/* implicit */int) arr_7 [i_0 + 1] [i_1 + 1])) / (1949060710)))));
                }
                for (signed char i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    var_23 += ((/* implicit */short) ((arr_1 [i_0] [i_0]) == (((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_0 + 1])) ? (((/* implicit */unsigned long long int) arr_2 [i_2 + 2] [i_1 + 1] [i_0])) : (((((/* implicit */_Bool) arr_12 [i_0] [i_1 - 1] [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (2557241959607903731ULL)))))));
                    var_24 = ((/* implicit */unsigned char) min((var_24), (arr_0 [i_0 + 1] [i_1])));
                }
                /* LoopSeq 1 */
                for (unsigned int i_6 = 0; i_6 < 18; i_6 += 1) 
                {
                    var_25 = ((/* implicit */long long int) min((var_25), (((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1])) | (((/* implicit */int) arr_7 [i_1 - 1] [i_2]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_1 + 1] [i_2 + 1]))))) : (min((-1LL), (((/* implicit */long long int) (unsigned char)208))))))));
                    var_26 += ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-5))) / (1774370902U));
                    arr_19 [i_0] [i_1] [i_2 - 1] [i_1] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_3 [i_1 + 1] [i_2 - 1]))))));
                    var_27 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_11)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1]))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_1])) ? (((/* implicit */int) arr_4 [(unsigned char)3] [(unsigned char)3])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)-26353)), ((unsigned short)24938))))));
                    arr_20 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) 4294967295U);
                }
            }
            /* vectorizable */
            for (long long int i_7 = 1; i_7 < 16; i_7 += 2) /* same iter space */
            {
                arr_24 [i_0] [i_0] = ((/* implicit */unsigned int) (~((-(arr_11 [i_0] [i_0] [i_0] [i_7])))));
                arr_25 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 12211119976345254547ULL)) ? (-6944279836520396129LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1171))))))));
                arr_26 [i_0] [i_1] [i_7] [i_7] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)23173)) + (((/* implicit */int) (signed char)-1))));
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 18; i_8 += 3) 
                {
                    for (unsigned int i_9 = 0; i_9 < 18; i_9 += 2) 
                    {
                        {
                            var_28 |= ((/* implicit */unsigned long long int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)26353))) - (arr_28 [i_8] [(unsigned char)2] [i_0] [i_0]))));
                            arr_32 [i_0] [i_8] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)26348)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0 - 1] [i_7 - 1] [i_9]))) : (((((/* implicit */_Bool) arr_6 [i_8])) ? (((/* implicit */unsigned long long int) 1006632960U)) : (arr_1 [i_1] [i_1])))));
                        }
                    } 
                } 
            }
            for (long long int i_10 = 1; i_10 < 16; i_10 += 2) /* same iter space */
            {
                var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((-422043196), (((/* implicit */int) (unsigned short)40573))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)1))))) >= (3288334335U))))) : (((((/* implicit */_Bool) 567453553048682496ULL)) ? (4294967276U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24925))))))))));
                var_30 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned short)40610))))))) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [i_10] [i_10 - 1])) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_15 [i_1 - 1] [7U] [(signed char)6] [i_1] [i_1])), (arr_36 [i_0] [i_0])))) ? (arr_36 [i_10 - 1] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_12 [i_0] [i_10] [i_10])) : (((/* implicit */int) (unsigned short)40610)))))))));
                var_31 += ((/* implicit */signed char) max((0U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (1914098844) : (((/* implicit */int) (unsigned short)42365)))))));
            }
            /* vectorizable */
            for (long long int i_11 = 1; i_11 < 16; i_11 += 2) /* same iter space */
            {
                var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)40610)) ? (arr_2 [i_0 + 1] [i_0 + 1] [i_11 + 2]) : (((/* implicit */unsigned int) -1914098837))));
                var_33 -= ((/* implicit */unsigned int) arr_4 [i_0] [i_0]);
                arr_40 [i_0] [i_0] [15U] [(signed char)7] = ((/* implicit */unsigned char) ((567453553048682487ULL) <= (((/* implicit */unsigned long long int) arr_8 [i_11 - 1] [i_1 - 1] [i_1 - 1] [i_0 - 1] [i_0]))));
                var_34 = ((/* implicit */unsigned int) max((var_34), (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)197)) || (((/* implicit */_Bool) 2036594569U)))))) & (arr_8 [i_11] [i_1 + 1] [i_11 + 2] [i_0 + 1] [i_1 + 1])))));
                var_35 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) var_11))));
            }
        }
        for (unsigned int i_12 = 0; i_12 < 18; i_12 += 1) 
        {
            var_36 *= ((var_14) / ((~(arr_22 [i_0] [i_0 - 1] [i_0 + 1]))));
            var_37 += ((/* implicit */unsigned int) arr_29 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0 + 1]);
            /* LoopNest 2 */
            for (unsigned int i_13 = 0; i_13 < 18; i_13 += 1) 
            {
                for (unsigned int i_14 = 0; i_14 < 18; i_14 += 4) 
                {
                    {
                        var_38 = var_10;
                        /* LoopSeq 1 */
                        for (unsigned char i_15 = 1; i_15 < 14; i_15 += 4) 
                        {
                            arr_52 [i_12] [i_14] = ((((/* implicit */_Bool) (~(arr_9 [i_0] [i_0] [i_0 - 1] [i_0 + 1] [i_15 - 1])))) ? (((arr_9 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_15 - 1]) + (arr_9 [i_0] [i_0] [i_0 - 1] [i_0] [i_15 + 3]))) : (arr_9 [i_0] [i_0] [i_0 + 1] [i_14] [i_15 + 4]));
                            var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_0 - 1] [i_15 + 3] [i_13] [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_37 [i_0 - 1] [i_15 + 1] [i_0 - 1] [i_13])))) ? (arr_38 [i_14] [i_12]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((13267496310891161675ULL) / (arr_30 [i_13])))) ? (arr_28 [i_0] [i_0] [i_0 - 1] [i_15 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_17 [i_0] [i_0] [i_13] [i_14] [i_15] [2]) <= (((/* implicit */unsigned long long int) 1832238257))))))))))))));
                        }
                        arr_53 [i_0] [i_13] [i_12] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_9)) ? (51U) : ((+(arr_28 [i_0 + 1] [5U] [i_13] [i_14]))))) >> (((arr_2 [i_0] [i_14] [i_14]) - (2966850295U)))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_16 = 3; i_16 < 15; i_16 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_17 = 3; i_17 < 17; i_17 += 2) 
                {
                    for (unsigned int i_18 = 1; i_18 < 14; i_18 += 3) 
                    {
                        {
                            var_40 = ((/* implicit */unsigned char) (-((-(arr_34 [i_18 + 3])))));
                            arr_62 [i_0] [i_0] [i_12] [i_17] [i_18] = (+(((((/* implicit */_Bool) arr_56 [i_17 + 1] [i_12] [i_0 - 1] [i_17])) ? (17879290520660869131ULL) : (((unsigned long long int) var_15)))));
                            var_41 = ((/* implicit */unsigned char) arr_15 [i_18 - 1] [i_17] [i_16] [i_0] [i_0]);
                            var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((arr_3 [i_12] [i_18 - 1]) - (arr_3 [i_0 - 1] [i_17])))) + (arr_30 [i_16]))))));
                            var_43 = ((/* implicit */unsigned long long int) (~(-2147483626)));
                        }
                    } 
                } 
                var_44 = ((/* implicit */unsigned int) var_12);
                /* LoopNest 2 */
                for (unsigned int i_19 = 0; i_19 < 18; i_19 += 2) 
                {
                    for (unsigned char i_20 = 0; i_20 < 18; i_20 += 4) 
                    {
                        {
                            arr_67 [(unsigned char)9] [i_12] [i_12] [i_12] = ((/* implicit */long long int) max((max((arr_11 [i_0 - 1] [7LL] [i_0 + 1] [7LL]), (((/* implicit */unsigned long long int) arr_3 [i_0 + 1] [i_0 - 1])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_20] [i_16 - 1] [i_12] [i_0 + 1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (arr_18 [i_16 - 3] [i_16 - 1] [i_0 + 1] [i_0 + 1] [i_0]))))));
                            arr_68 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_12] [17U] [i_0 + 1] = ((/* implicit */unsigned char) min((((((-6944279836520396130LL) + (9223372036854775807LL))) >> (((-8042078228075132422LL) + (8042078228075132432LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_0] [i_12])) ? (262112U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_0] [i_12] [i_16] [i_19] [i_20])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_15 [16ULL] [i_12] [i_16 + 1] [i_12] [i_0]))))) : (((/* implicit */int) max(((short)23699), (((/* implicit */short) arr_29 [i_12] [i_12] [i_12] [i_12] [i_12] [6ULL]))))))))));
                            var_45 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 280375465082880LL)) || (((/* implicit */_Bool) (unsigned char)251))));
                        }
                    } 
                } 
                var_46 = ((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) arr_16 [i_0 - 1])))), (((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) 6944279836520396129LL))))));
            }
            var_47 += ((/* implicit */unsigned short) arr_60 [i_0] [i_0] [i_0] [(signed char)9] [i_12]);
        }
        for (unsigned long long int i_21 = 0; i_21 < 18; i_21 += 3) 
        {
            arr_73 [i_21] = ((/* implicit */short) min((arr_15 [i_21] [i_21] [i_21] [i_21] [i_0 - 1]), (((/* implicit */unsigned int) ((unsigned short) arr_57 [i_0])))));
            var_48 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483631)) ? (8713712534520631549ULL) : (((/* implicit */unsigned long long int) arr_27 [i_21] [i_21] [i_21] [(unsigned char)14] [i_21]))))) ? (((((/* implicit */_Bool) (unsigned char)228)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)5))) : (arr_34 [i_21]))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_21])) ? (arr_56 [i_0] [i_0] [i_21] [12U]) : (arr_59 [i_0] [i_0] [i_21] [i_21] [(short)6]))))));
        }
        /* LoopSeq 2 */
        for (long long int i_22 = 0; i_22 < 18; i_22 += 3) /* same iter space */
        {
            arr_77 [i_22] [i_22] [i_22] = ((/* implicit */unsigned long long int) (+((((-(arr_10 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_0]))) * (((/* implicit */unsigned int) (-(arr_21 [i_0] [i_22] [i_22] [15ULL]))))))));
            var_49 ^= ((/* implicit */unsigned long long int) ((-4010186883923581767LL) ^ (max((6944279836520396130LL), (((/* implicit */long long int) var_3))))));
            arr_78 [i_0] [i_22] = ((/* implicit */unsigned int) (~(arr_39 [i_0] [1ULL] [i_0 - 1] [i_22])));
        }
        for (long long int i_23 = 0; i_23 < 18; i_23 += 3) /* same iter space */
        {
            arr_82 [i_0] [i_0 + 1] [i_23] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)11))));
            var_50 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)110)) * (((/* implicit */int) (unsigned char)64))))) ? (((((/* implicit */_Bool) arr_6 [i_0 - 1])) ? (arr_6 [i_0 + 1]) : (arr_6 [i_0 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
            arr_83 [i_0] [i_0] = arr_5 [(unsigned char)7] [i_0];
            /* LoopSeq 1 */
            for (signed char i_24 = 2; i_24 < 14; i_24 += 4) 
            {
                /* LoopSeq 1 */
                for (short i_25 = 2; i_25 < 16; i_25 += 1) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_26 = 0; i_26 < 18; i_26 += 3) 
                    {
                        var_51 = ((/* implicit */unsigned char) 2147483626);
                        var_52 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((arr_41 [i_0 - 1] [i_23]) != (arr_41 [i_0 - 1] [i_0 - 1]))))));
                        var_53 = ((/* implicit */unsigned int) ((567453553048682499ULL) * (((/* implicit */unsigned long long int) 2590644696U))));
                        arr_93 [i_26] [i_0 + 1] [i_0 + 1] [(unsigned char)8] [6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 7020558613169615345LL)) ? (3172631996274707992ULL) : (15274112077434843620ULL)));
                    }
                    /* vectorizable */
                    for (unsigned int i_27 = 3; i_27 < 17; i_27 += 3) 
                    {
                        var_54 = ((/* implicit */unsigned int) ((((arr_74 [i_24] [i_24]) / (((/* implicit */long long int) var_5)))) + (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)200)))))));
                        arr_96 [i_23] = ((/* implicit */short) 7020558613169615345LL);
                    }
                    var_55 = ((/* implicit */int) max((var_55), ((-(((int) 232944500U))))));
                }
                var_56 = ((/* implicit */long long int) min((var_56), (arr_18 [i_0] [i_0] [i_0] [9ULL] [i_0])));
            }
        }
    }
    /* vectorizable */
    for (unsigned long long int i_28 = 3; i_28 < 20; i_28 += 3) 
    {
        var_57 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_99 [i_28 - 3])) > (((/* implicit */int) (unsigned char)27))));
        var_58 = arr_100 [i_28 - 1];
        var_59 = ((/* implicit */unsigned long long int) ((arr_97 [i_28 + 2]) & (arr_97 [i_28 + 2])));
    }
    var_60 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) (~(-2147483618))))) ? (((((/* implicit */_Bool) ((((var_7) + (9223372036854775807LL))) >> (((576460752303422976LL) - (576460752303422967LL)))))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) : (((/* implicit */unsigned long long int) var_13))));
    var_61 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4464657516211226570ULL)) ? (((((/* implicit */_Bool) (-(var_5)))) ? (((var_4) - (6944279836520396129LL))) : (min((((/* implicit */long long int) var_10)), (var_7))))) : (((((/* implicit */_Bool) max((-2147483617), (-2147483599)))) ? (((/* implicit */long long int) max((var_5), (1540853297U)))) : (var_4)))));
}
