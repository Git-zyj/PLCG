/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184489
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
        {
            arr_7 [i_0] [i_1] |= ((/* implicit */_Bool) ((((arr_6 [i_0] [i_1 - 1] [i_1]) ? ((~(340799052U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 3954168224U)) && (((/* implicit */_Bool) 340799052U)))))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            var_14 += ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1 - 1]))) | (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)62))) & ((~(3954168244U))))));
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_15 &= (_Bool)1;
            /* LoopSeq 3 */
            for (unsigned char i_3 = 4; i_3 < 9; i_3 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_4 = 1; i_4 < 9; i_4 += 1) 
                {
                    var_16 = ((((/* implicit */_Bool) (((_Bool)1) ? (4294967295U) : (4171916216U)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_2 - 1] [i_3 - 1])) | (((/* implicit */int) arr_14 [i_2 - 1] [i_3 + 2]))))) : (min((((/* implicit */long long int) arr_14 [i_2 - 1] [i_3 + 1])), (6364555466993027604LL))));
                    var_17 = ((((/* implicit */_Bool) ((arr_15 [i_4 + 1] [i_4] [i_2] [i_4 + 2] [i_3 - 3]) / (arr_15 [i_3 - 1] [5U] [i_2] [i_4 + 1] [i_3 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_2 - 1])) > (((/* implicit */int) arr_8 [i_2 - 1])))))) : (min((arr_15 [i_4] [i_3 - 4] [i_2] [i_4 + 2] [i_3 - 4]), (((/* implicit */unsigned int) arr_8 [i_2 - 1])))));
                }
                var_18 = ((/* implicit */signed char) var_11);
            }
            for (signed char i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                var_19 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_2] [i_2] [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (262143U)))), (arr_11 [i_0] [i_0] [i_0]))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)61982)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4171916241U))))));
                arr_20 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) (((~(((/* implicit */int) arr_14 [i_2 - 1] [i_2 - 1])))) ^ (((((/* implicit */_Bool) arr_14 [i_2 - 1] [i_2 - 1])) ? (((/* implicit */int) arr_14 [i_2 - 1] [i_2 - 1])) : (((/* implicit */int) (unsigned char)252))))));
            }
            /* vectorizable */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                arr_23 [i_2] [(unsigned short)6] = ((/* implicit */long long int) (+(((/* implicit */int) arr_17 [i_0] [i_2 - 1] [i_2]))));
                var_20 = ((/* implicit */_Bool) ((((arr_3 [i_0] [i_2 - 1] [i_6]) + (((/* implicit */long long int) 2754050492U)))) + (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_2 - 1])))));
            }
        }
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
        {
            arr_28 [i_0] = ((arr_26 [i_0] [i_0] [i_7]) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_6 [0LL] [i_0] [i_7 - 1])) : (((/* implicit */int) (_Bool)0)))) * (((((/* implicit */int) var_4)) * (((/* implicit */int) (unsigned short)0))))))) : (2519148927U));
            arr_29 [(_Bool)1] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) min((((/* implicit */unsigned int) arr_0 [i_0] [i_7])), (2041482599U))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-92)) + (2147483647))) >> (((2388845174U) - (2388845143U)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_7] [i_7 - 1] [i_7]))))) : (((arr_10 [i_0] [i_7] [i_7]) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) arr_0 [(short)9] [i_7 - 1]))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)16))) - ((~(arr_13 [i_0] [i_7] [i_0] [i_7])))))));
        }
        var_21 = ((/* implicit */_Bool) 18446744073709551602ULL);
        var_22 ^= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)49921))))) ? ((((_Bool)1) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)57))))) : (((((/* implicit */_Bool) (signed char)3)) ? (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44902)))))))));
    }
    /* vectorizable */
    for (signed char i_8 = 0; i_8 < 15; i_8 += 2) 
    {
        arr_32 [i_8] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_8])) ? (((/* implicit */int) arr_30 [i_8] [i_8])) : (((/* implicit */int) arr_30 [i_8] [i_8]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (1228556756U));
        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((arr_31 [i_8]) % (arr_31 [i_8]))))));
        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((_Bool) arr_30 [i_8] [i_8])))));
        var_25 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_31 [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (1090640634U)))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_9 = 1; i_9 < 7; i_9 += 3) 
    {
        var_26 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 2253484679U))) ? (((((/* implicit */_Bool) var_9)) ? (381937270U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_9]))))))));
        var_27 = ((/* implicit */unsigned int) min((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_8 [i_9 + 3])))), ((~(((/* implicit */int) arr_8 [i_9 + 3]))))));
        /* LoopSeq 2 */
        for (unsigned char i_10 = 0; i_10 < 10; i_10 += 1) 
        {
            arr_40 [i_9] = ((/* implicit */unsigned char) 9078391557668310541ULL);
            arr_41 [i_9] = ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)120))) != (((unsigned int) arr_8 [i_9 + 2])));
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_28 = ((/* implicit */unsigned int) min((((18446744073709551615ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_9] [i_9] [i_9]))))), (((arr_27 [6U] [i_11] [i_11]) || ((_Bool)0)))));
            /* LoopSeq 3 */
            for (unsigned int i_12 = 3; i_12 < 8; i_12 += 1) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    arr_49 [i_9] [i_11] [i_12] [i_13] = ((/* implicit */long long int) (((-(((/* implicit */int) (signed char)-7)))) & (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned char)236)))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_14 = 0; i_14 < 10; i_14 += 1) 
                    {
                        arr_52 [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned short)53504))));
                        var_29 = ((/* implicit */unsigned short) (unsigned char)176);
                        var_30 = ((((/* implicit */_Bool) arr_50 [i_9 + 2] [i_9] [i_12] [i_12 + 2] [i_9 + 2] [i_12 + 2])) ? (arr_50 [i_9 - 1] [i_12 + 1] [(signed char)1] [(unsigned char)7] [i_12] [i_12 - 2]) : (arr_50 [i_9 + 1] [i_12 + 1] [i_12] [i_12 + 1] [i_12] [i_12 - 2]));
                        arr_53 [0U] [i_9] [i_12 + 2] [i_13] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2488211700U)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? ((-(((/* implicit */int) (unsigned short)56085)))) : (((/* implicit */int) arr_12 [i_14] [i_11] [i_9 + 2]))));
                    }
                    for (unsigned char i_15 = 0; i_15 < 10; i_15 += 4) 
                    {
                        arr_57 [(_Bool)1] [6U] [(unsigned char)8] [i_15] [i_15] [i_15] |= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)40883)) ^ (((/* implicit */int) (signed char)0))));
                        var_31 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)28286))) : (1090640605U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)12650)) : (((/* implicit */int) (unsigned short)11039))))) : (arr_13 [i_15] [i_9] [i_9 - 1] [i_15])));
                    }
                    arr_58 [i_9 + 2] [i_9 + 3] [i_9] [i_9] [i_9] = ((/* implicit */signed char) (((_Bool)0) || (arr_54 [(_Bool)1] [i_9] [i_12 + 1])));
                    var_32 = ((/* implicit */unsigned short) arr_17 [i_9 + 2] [i_11] [i_9]);
                }
                var_33 = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 2418100845U)) ? (-253780322087512921LL) : (((/* implicit */long long int) 450497703U))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) / (4294967295U)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_11] [i_11] [i_12]))) : (arr_31 [i_9])))) ? (arr_15 [8LL] [i_9 - 1] [i_9] [i_9 - 1] [(_Bool)1]) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_9])) - (((/* implicit */int) (short)18122))))))));
                var_34 = 0U;
            }
            for (signed char i_16 = 0; i_16 < 10; i_16 += 3) /* same iter space */
            {
                var_35 *= ((/* implicit */unsigned int) (unsigned short)59532);
                var_36 |= ((/* implicit */unsigned int) ((((_Bool) (_Bool)1)) ? (max((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))), (max((arr_24 [6LL] [i_11] [i_9]), (((/* implicit */long long int) (_Bool)1)))))) : (((/* implicit */long long int) (~(((((/* implicit */int) (signed char)7)) & (((/* implicit */int) var_5)))))))));
            }
            for (signed char i_17 = 0; i_17 < 10; i_17 += 3) /* same iter space */
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_18 = 0; i_18 < 10; i_18 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (signed char i_19 = 3; i_19 < 8; i_19 += 1) 
                    {
                        var_37 = ((((unsigned int) 2855251056U)) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-42))));
                        arr_68 [i_9] [i_9] [i_11] [i_11] [i_18] [i_19 - 1] [i_19 - 3] = ((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_9] [i_11] [i_17]))));
                        var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_11] [5U] [5U])) ? (((((/* implicit */_Bool) 1622377503U)) ? (1552533845U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_19] [i_19]))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)91)))))));
                    }
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        arr_73 [i_9] [i_11] [i_11] [i_9] [i_20] = arr_0 [i_9] [i_9 - 1];
                        arr_74 [i_9] [i_18] [i_9] [i_11] [i_9] = ((/* implicit */long long int) ((_Bool) arr_6 [i_9] [(_Bool)1] [i_20]));
                    }
                    var_39 = ((/* implicit */_Bool) arr_18 [i_9] [i_9] [i_9] [i_9 + 1]);
                    var_40 *= ((/* implicit */signed char) ((1U) > (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)121)) % (((/* implicit */int) arr_47 [i_17] [i_18] [i_17] [i_17])))))));
                }
                for (long long int i_21 = 0; i_21 < 10; i_21 += 4) /* same iter space */
                {
                    var_41 = ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) arr_15 [i_9 + 3] [i_9] [i_9] [i_9 + 3] [i_9])) ? (arr_15 [i_9 - 1] [6U] [i_9] [i_9 + 3] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43185))))) : (max((692751439U), (arr_15 [i_9 + 3] [9ULL] [i_9] [i_9 + 3] [i_9]))));
                    var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)33546)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned short) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3844469594U)))))));
                    var_43 += ((/* implicit */unsigned short) (_Bool)1);
                    var_44 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) == (1093908500U))))) ^ (arr_44 [i_9] [i_9] [i_21]));
                }
                for (signed char i_22 = 4; i_22 < 9; i_22 += 2) 
                {
                    arr_81 [i_9 - 1] [i_9 - 1] [i_9] [i_9 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((1746286184U), (109044635U)))) ? (((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (8671736363891238244ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-96))))) <= (((692751439U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_23 = 0; i_23 < 10; i_23 += 1) 
                    {
                        arr_86 [i_9 + 3] [i_11] [i_17] [i_9] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_71 [i_9] [i_9 + 2] [i_9] [i_9] [i_9])) + (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_1 [i_9 + 2] [i_22 - 3]))));
                        var_45 = (((_Bool)0) ? (arr_39 [i_9] [i_9 + 3]) : (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (unsigned short)2)) : (((/* implicit */int) (unsigned short)19539))))));
                        var_46 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)110)) ? (((/* implicit */int) arr_54 [i_9] [i_22] [i_9 + 1])) : (((/* implicit */int) arr_0 [i_11] [i_22]))));
                    }
                    var_47 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_9 [i_17] [(short)0] [(short)0])) : (((/* implicit */int) (unsigned char)129))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_75 [i_22 - 4] [i_22 + 1] [i_22 - 2] [i_22 - 2]))) : (((4194303U) & (1215673292U)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) (unsigned short)21753)))))) : (((((/* implicit */_Bool) arr_45 [i_22 - 3] [i_22 + 1] [i_9])) ? (5116445184664403002ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19)))))));
                }
                arr_87 [i_9] = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) ((signed char) (unsigned short)50080))), (min((var_8), (((/* implicit */unsigned int) arr_71 [i_11] [0U] [i_17] [i_9] [i_9])))))) % (max((((arr_1 [i_11] [4ULL]) ? (arr_55 [i_9 - 1] [i_9] [i_9] [i_11] [i_11] [6ULL] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_9] [i_11] [i_9] [i_9]))))), (((var_9) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))))));
                arr_88 [i_9] [(unsigned char)0] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (450497706U) : (2592763931U)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) ? (718211330U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            }
            var_48 = ((/* implicit */unsigned long long int) min((var_48), (((/* implicit */unsigned long long int) arr_54 [i_9] [(_Bool)1] [i_11]))));
        }
    }
}
