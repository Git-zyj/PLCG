/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15691
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
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_14 += ((/* implicit */unsigned short) max((((/* implicit */int) min(((unsigned char)121), (((/* implicit */unsigned char) arr_1 [i_0] [i_0]))))), (max((((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) (signed char)-48)))), (((/* implicit */int) (signed char)(-127 - 1)))))));
        var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) min(((short)21343), (((/* implicit */short) arr_1 [i_0] [i_0]))))), (15728640U)));
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (unsigned short)65535))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 13; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (short i_3 = 2; i_3 < 13; i_3 += 4) /* same iter space */
            {
                var_17 = ((/* implicit */unsigned char) var_4);
                /* LoopSeq 4 */
                for (unsigned char i_4 = 1; i_4 < 12; i_4 += 2) 
                {
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */int) (short)15936)) - (((/* implicit */int) arr_7 [i_4 + 1] [i_4] [i_4 + 2] [i_3])))))));
                    arr_12 [i_3] [i_3] [i_3] [i_3] [1LL] [i_2] = ((/* implicit */unsigned int) (unsigned char)159);
                    var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) | (arr_9 [i_3 + 1])));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */int) arr_6 [i_3 - 1] [i_3 + 1] [i_3])) * (((/* implicit */int) (unsigned char)216)))))));
                    var_21 ^= ((/* implicit */unsigned char) (unsigned short)45690);
                    var_22 = ((/* implicit */int) (_Bool)1);
                }
                for (unsigned char i_6 = 0; i_6 < 14; i_6 += 4) /* same iter space */
                {
                    var_23 = ((/* implicit */short) ((((/* implicit */int) arr_11 [i_3] [i_3 - 1] [i_3 - 1] [i_1 + 1] [i_1])) * (((/* implicit */int) arr_1 [i_1 + 1] [i_3 - 2]))));
                    var_24 = ((/* implicit */short) ((((/* implicit */int) arr_10 [i_2] [i_1 - 2] [i_1] [i_1] [i_1 - 2] [i_1 - 1])) / (((/* implicit */int) (unsigned short)4))));
                }
                for (unsigned char i_7 = 0; i_7 < 14; i_7 += 4) /* same iter space */
                {
                    var_25 = ((/* implicit */signed char) arr_16 [i_2]);
                    var_26 = ((/* implicit */int) ((arr_13 [i_1] [i_2]) != (((/* implicit */unsigned long long int) var_2))));
                }
                var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_2] [i_3 + 1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_8 [i_1 - 1] [i_2]))));
            }
            for (short i_8 = 2; i_8 < 13; i_8 += 4) /* same iter space */
            {
                var_28 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_1 + 1] [i_8 + 1])) | (((/* implicit */int) arr_2 [i_1 - 2] [i_8 - 1]))));
                var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_21 [i_2] [i_8] [i_2] [i_2])) >= (((/* implicit */int) (unsigned short)10335))))) / (((((/* implicit */int) var_5)) | (((/* implicit */int) (unsigned short)55201)))))))));
                arr_23 [i_1 - 1] [i_2] [i_8] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)21))));
            }
            var_30 = ((/* implicit */signed char) (_Bool)1);
        }
        for (unsigned short i_9 = 1; i_9 < 11; i_9 += 4) 
        {
            /* LoopSeq 4 */
            for (signed char i_10 = 0; i_10 < 14; i_10 += 4) 
            {
                arr_28 [i_9] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_9] [(unsigned char)3] [i_9])) ^ (((/* implicit */int) arr_6 [i_9] [i_1 - 1] [i_9]))));
                /* LoopNest 2 */
                for (unsigned short i_11 = 2; i_11 < 13; i_11 += 4) 
                {
                    for (unsigned char i_12 = 0; i_12 < 14; i_12 += 2) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((((/* implicit */int) var_0)) + (-1))) : (((/* implicit */int) (unsigned short)65531)))))));
                            arr_34 [i_9] [i_9] [i_10] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */short) arr_30 [i_9 - 1] [(signed char)10] [i_9] [i_11 + 1]);
                            var_32 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))));
                        }
                    } 
                } 
                arr_35 [i_1] [i_9] [i_10] = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)4)) ? (((/* implicit */int) (short)-32764)) : (((/* implicit */int) (signed char)63)))) % (((/* implicit */int) (short)-2201))));
                var_33 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_9 + 2] [i_9 + 1]))) % ((~(var_9)))));
            }
            for (signed char i_13 = 2; i_13 < 12; i_13 += 4) 
            {
                var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)3909)) | (((/* implicit */int) (unsigned short)10334)))))));
                /* LoopSeq 3 */
                for (short i_14 = 0; i_14 < 14; i_14 += 3) 
                {
                    arr_41 [i_1] [i_9 + 1] [i_13] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_25 [i_9 + 1] [i_9])) == (((/* implicit */int) arr_31 [i_9 + 2]))));
                    var_35 &= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)55200)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2532712818U)));
                    arr_42 [i_9] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((1762254478U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1 + 1] [i_9 + 1] [i_9])))));
                    var_36 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_37 [i_1 - 2] [i_9 + 2] [i_9 + 2] [i_13 - 2])) | (((/* implicit */int) arr_37 [i_1 - 2] [i_1 - 2] [i_9 + 2] [i_13 - 2]))));
                }
                for (signed char i_15 = 0; i_15 < 14; i_15 += 3) 
                {
                    var_37 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_30 [i_1 + 1] [i_1 + 1] [i_9] [i_1 - 2])) / (((/* implicit */int) var_8))));
                    var_38 = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_1 + 1] [i_9 - 1])) + (((/* implicit */int) (unsigned short)21))));
                    arr_45 [i_15] [i_9] [i_9] [i_1] = ((/* implicit */long long int) var_10);
                }
                for (unsigned int i_16 = 1; i_16 < 12; i_16 += 2) 
                {
                    arr_48 [i_1 + 1] [i_9] [i_9 + 2] [i_9 + 3] [i_13] [i_9] = ((/* implicit */int) ((var_12) - (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_9] [i_9] [i_9 + 3] [i_9])))));
                    var_39 *= ((/* implicit */short) (((_Bool)1) || (((/* implicit */_Bool) arr_37 [i_1] [i_9] [i_1] [i_1 - 1]))));
                    /* LoopSeq 1 */
                    for (signed char i_17 = 1; i_17 < 12; i_17 += 2) 
                    {
                        var_40 = ((/* implicit */signed char) ((var_4) >= (((/* implicit */int) var_8))));
                        var_41 *= ((/* implicit */signed char) ((((/* implicit */int) arr_20 [i_1 - 2] [i_1 + 1])) / (((/* implicit */int) arr_43 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 - 2]))));
                    }
                }
            }
            for (unsigned short i_18 = 1; i_18 < 12; i_18 += 2) 
            {
                arr_57 [7ULL] [i_9 + 1] [i_9] [i_9] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)146))) == (arr_3 [i_18 - 1] [i_18 - 1]));
                var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-105)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)11))) : (-5187344795816054288LL)));
            }
            for (int i_19 = 0; i_19 < 14; i_19 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_20 = 1; i_20 < 13; i_20 += 4) /* same iter space */
                {
                    var_43 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)109))) + ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_9] [i_1] [i_9] [i_9 + 2] [i_9 + 1]))) : (arr_26 [i_1 - 2] [i_1] [i_1 - 1])));
                    var_44 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) % (arr_17 [i_1] [i_9] [i_9] [i_20] [7] [(signed char)11])));
                }
                for (unsigned int i_21 = 1; i_21 < 13; i_21 += 4) /* same iter space */
                {
                    var_45 = ((/* implicit */int) max((var_45), (((/* implicit */int) ((((/* implicit */int) arr_21 [i_1] [i_1] [i_1 - 1] [i_19])) != (((/* implicit */int) arr_21 [(signed char)10] [i_1] [i_1 + 1] [i_1])))))));
                    var_46 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-20)) ? (((4503599627370495ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_21] [i_9] [(_Bool)1])))));
                    var_47 = (signed char)127;
                }
                var_48 += ((/* implicit */unsigned short) ((arr_36 [i_1]) >= (((/* implicit */unsigned long long int) arr_59 [i_19] [i_9 - 1] [i_1 + 1] [i_19]))));
                arr_64 [i_9] = var_5;
            }
            arr_65 [i_9] = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1 - 2] [i_9]))));
            var_49 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)52))) >= (arr_29 [i_1] [(signed char)3] [i_9] [i_1])))) | (var_4)));
            /* LoopSeq 1 */
            for (unsigned long long int i_22 = 0; i_22 < 14; i_22 += 3) 
            {
                arr_69 [i_1] [i_1] [i_9] [i_22] = ((/* implicit */_Bool) arr_67 [(unsigned char)12] [i_9 - 1] [i_22] [i_1 - 1]);
                var_50 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)55200))));
                /* LoopSeq 1 */
                for (signed char i_23 = 3; i_23 < 13; i_23 += 1) 
                {
                    var_51 = ((/* implicit */signed char) var_10);
                    arr_73 [i_9] = arr_39 [i_23 - 2] [i_9] [i_9];
                    arr_74 [i_9] [i_9] [i_9] [i_9 - 1] = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (unsigned char)12)))))) | (arr_59 [i_23 - 3] [i_23 - 1] [i_23 - 3] [i_23 + 1]));
                    var_52 &= ((((/* implicit */int) arr_11 [i_1] [i_1 + 1] [i_1] [(signed char)2] [i_1 - 2])) + (((/* implicit */int) arr_11 [i_1] [i_1 - 2] [i_1 - 2] [i_1] [i_1 - 2])));
                }
                /* LoopNest 2 */
                for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
                {
                    for (signed char i_25 = 0; i_25 < 14; i_25 += 2) 
                    {
                        {
                            var_53 = ((/* implicit */short) 17569427788013203378ULL);
                            var_54 |= ((/* implicit */signed char) (-(((/* implicit */int) arr_37 [i_1 - 1] [i_9 + 1] [i_9 - 1] [i_24 - 1]))));
                        }
                    } 
                } 
            }
            var_55 = arr_27 [i_9] [i_9];
        }
        /* LoopSeq 1 */
        for (signed char i_26 = 0; i_26 < 14; i_26 += 4) 
        {
            var_56 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_66 [i_1] [i_1] [i_1 - 2] [3LL])) ? (((/* implicit */int) arr_66 [i_1] [i_1] [i_1 - 2] [(signed char)6])) : (var_4)));
            var_57 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) arr_10 [i_1] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1]))));
        }
        var_58 = ((/* implicit */int) (short)32432);
        arr_82 [i_1] [i_1 - 2] = ((/* implicit */short) ((((/* implicit */int) arr_52 [i_1 + 1] [i_1] [i_1 + 1] [i_1] [i_1] [i_1])) - (((/* implicit */int) arr_52 [(signed char)6] [i_1] [i_1 - 2] [i_1] [i_1] [i_1]))));
    }
    var_59 = ((/* implicit */unsigned long long int) max((var_59), (((/* implicit */unsigned long long int) var_12))));
    var_60 = ((((/* implicit */int) (unsigned char)239)) >= ((~(max((((/* implicit */int) (unsigned short)40697)), (227165296))))));
}
