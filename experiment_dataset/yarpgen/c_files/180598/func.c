/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180598
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
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 16; i_0 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 15; i_2 += 3) 
            {
                for (long long int i_3 = 2; i_3 < 16; i_3 += 2) 
                {
                    {
                        var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((arr_4 [i_0 - 1] [i_0 - 3] [i_0 - 1]) - (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
                        arr_11 [i_0] [i_0] [(unsigned char)13] [i_3] [7ULL] = ((/* implicit */unsigned short) ((var_6) + (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                    }
                } 
            } 
        } 
        var_12 = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_9 [i_0 - 2] [(_Bool)1])))) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0] [i_0])))))));
        var_13 |= ((/* implicit */unsigned int) (-(2147483647)));
    }
    /* vectorizable */
    for (long long int i_4 = 3; i_4 < 16; i_4 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */short) (+((-(8589934591ULL)))));
        arr_15 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_8))) - (var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_4] [i_4]))) : (((var_2) & (arr_0 [i_4])))));
        /* LoopSeq 3 */
        for (unsigned int i_5 = 2; i_5 < 16; i_5 += 4) 
        {
            var_15 = (-(((/* implicit */int) arr_6 [i_5 - 2])));
            var_16 = ((/* implicit */long long int) ((((((/* implicit */int) var_0)) / (((/* implicit */int) var_5)))) > (((/* implicit */int) arr_2 [i_4] [i_4]))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_7))));
            /* LoopSeq 1 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                arr_23 [i_4] = ((/* implicit */_Bool) var_0);
                var_18 |= ((/* implicit */unsigned char) (+(((/* implicit */int) var_5))));
            }
            arr_24 [i_4] = (((_Bool)1) && (((/* implicit */_Bool) 2147483647)));
        }
        for (signed char i_8 = 3; i_8 < 16; i_8 += 3) 
        {
            var_19 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_12 [i_4])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4 + 1])))))));
            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) arr_16 [i_4] [5LL]))));
            /* LoopSeq 4 */
            for (long long int i_9 = 0; i_9 < 17; i_9 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (signed char i_10 = 4; i_10 < 15; i_10 += 1) 
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_11 = 0; i_11 < 17; i_11 += 2) 
                    {
                        arr_35 [i_4] [(_Bool)1] [i_8] [(unsigned short)6] [i_10] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-40)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))) : (0ULL)));
                        arr_36 [i_4] [(_Bool)1] [(short)0] [16LL] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))));
                        arr_37 [i_4] [i_4] [7LL] [(_Bool)1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((long long int) var_5)) : (((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (signed char)40)) : (((/* implicit */int) var_10)))))));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_4 - 2] [i_4 - 3] [i_8 - 1])) ? ((~(var_1))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8)))))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        arr_40 [i_12] [6ULL] [i_8] [6ULL] [i_4] |= ((/* implicit */int) 13344889834824913640ULL);
                        arr_41 [(unsigned char)7] [i_8] [i_10 + 2] [i_4] = ((/* implicit */_Bool) (-(18122951016441707800ULL)));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */int) arr_12 [i_4]);
                        var_23 = ((/* implicit */unsigned char) (~(arr_32 [13U] [i_4])));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned long long int) var_4);
                        var_25 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_6)) ? (arr_46 [2LL] [4ULL] [i_9] [i_10] [11] [i_4] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
                        var_26 = ((/* implicit */signed char) arr_9 [i_8] [i_9]);
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_15 = 3; i_15 < 16; i_15 += 3) 
                    {
                        var_27 = ((/* implicit */unsigned long long int) ((int) arr_6 [i_8 + 1]));
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_31 [i_15 + 1] [i_15 + 1] [i_15 - 1] [i_15 - 3])) == (((/* implicit */int) arr_7 [16] [i_15] [i_15 + 1] [i_15 - 3]))));
                    }
                    for (int i_16 = 0; i_16 < 17; i_16 += 3) 
                    {
                        arr_52 [i_4] [i_9] [i_16] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) / (arr_14 [i_4])));
                        var_29 += ((/* implicit */short) arr_32 [(unsigned short)12] [(unsigned short)12]);
                        var_30 = ((/* implicit */unsigned long long int) ((unsigned char) arr_49 [i_16] [i_8] [i_10 - 1] [i_10] [i_10 - 1] [i_10] [i_8]));
                    }
                }
                for (signed char i_17 = 0; i_17 < 17; i_17 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_18 = 1; i_18 < 15; i_18 += 2) 
                    {
                        arr_59 [6LL] [i_4] [i_9] [i_17] [(_Bool)1] [(signed char)14] [11LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -2147483633)) ? (arr_14 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_4] [i_4] [i_9])))));
                        var_31 -= ((/* implicit */unsigned long long int) ((((var_9) - (((/* implicit */long long int) 460553922)))) & (((/* implicit */long long int) 1757775069))));
                        var_32 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [4])) ? (((/* implicit */unsigned long long int) -4048353337298119921LL)) : (18122951016441707790ULL)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_17] [i_8 + 1])) : (((/* implicit */int) arr_58 [i_4 + 1] [(unsigned char)8] [(_Bool)1] [i_4] [16ULL])))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)40)) && (((/* implicit */_Bool) var_8)))))));
                    }
                    var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-8425)) ? (((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */unsigned long long int) 460553922)) : (323793057267843816ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                }
                arr_60 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) / (1517408068)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_4] [i_8] [i_9] [i_4]))))) : (((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) var_0)))))));
            }
            for (long long int i_19 = 0; i_19 < 17; i_19 += 3) /* same iter space */
            {
                arr_64 [i_4] [i_4] [i_19] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_57 [i_4 - 3] [i_8 - 2] [i_8 + 1] [i_4] [i_8 - 2]))));
                var_34 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (4294967295U)))));
                var_35 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 460553922)) && (((/* implicit */_Bool) -1))));
                var_36 ^= ((/* implicit */short) 0U);
            }
            for (long long int i_20 = 0; i_20 < 17; i_20 += 1) /* same iter space */
            {
                var_37 = ((/* implicit */unsigned long long int) max((var_37), ((~(((var_1) | (((/* implicit */unsigned long long int) var_2))))))));
                var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) (+(0U))))));
                arr_69 [6U] [14LL] [i_20] [6U] |= ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_8 [10LL])) + (((/* implicit */int) arr_16 [2ULL] [i_4]))))));
                var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) -460553922))));
            }
            for (long long int i_21 = 0; i_21 < 17; i_21 += 1) /* same iter space */
            {
                var_40 ^= ((/* implicit */int) (((+(arr_45 [i_4 - 2] [i_8] [(unsigned char)0] [i_21] [(short)12] [i_21]))) == (((/* implicit */int) ((arr_44 [i_4] [i_8] [i_8] [(short)4] [i_21]) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))))));
                var_41 *= ((/* implicit */int) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (16ULL)))));
                var_42 = (-(((/* implicit */int) arr_2 [i_4] [i_4])));
                /* LoopSeq 4 */
                for (unsigned char i_22 = 4; i_22 < 15; i_22 += 3) 
                {
                    var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) var_0))));
                    /* LoopSeq 2 */
                    for (unsigned int i_23 = 2; i_23 < 16; i_23 += 2) 
                    {
                        var_44 = ((/* implicit */unsigned char) min((var_44), (((/* implicit */unsigned char) var_9))));
                        var_45 ^= ((/* implicit */int) var_1);
                        var_46 = ((/* implicit */_Bool) (+(var_9)));
                        var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_4 - 2])) ? (((/* implicit */int) (unsigned short)46984)) : ((-(((/* implicit */int) (unsigned char)224))))));
                        var_48 ^= ((/* implicit */long long int) (-(((/* implicit */int) (signed char)-19))));
                    }
                    for (unsigned short i_24 = 1; i_24 < 14; i_24 += 1) 
                    {
                        arr_81 [i_4] [7U] [i_4] [(unsigned short)9] [i_24] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_24 + 3] [i_4])) ? (((/* implicit */unsigned long long int) arr_54 [i_8] [8] [(unsigned char)7])) : (var_1)));
                        arr_82 [i_4] [i_8] [(unsigned char)8] [(unsigned char)16] [(unsigned char)8] = ((/* implicit */long long int) (short)(-32767 - 1));
                        var_49 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -5960882713741158823LL)) ? (((/* implicit */int) (signed char)-117)) : (((/* implicit */int) (signed char)-1))));
                        var_50 = ((/* implicit */int) arr_56 [i_4] [0U] [i_4 - 1] [i_4] [14U] [i_4] [i_4]);
                        var_51 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((arr_75 [i_8 - 2] [(unsigned short)14] [i_22] [i_24]) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-40))))))));
                    }
                }
                for (unsigned long long int i_25 = 1; i_25 < 14; i_25 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_26 = 4; i_26 < 16; i_26 += 2) 
                    {
                        arr_89 [i_4] [i_26] [(_Bool)1] [i_25 + 1] [i_21] [16] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_70 [i_4] [(signed char)5] [i_4] [12LL])) ^ (((/* implicit */int) arr_80 [i_4] [i_25] [i_21] [i_8] [i_4]))))) || (((/* implicit */_Bool) (~(4294967295U)))));
                        var_52 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_30 [6U] [i_8] [i_8] [i_8]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_6) <= (((/* implicit */long long int) ((/* implicit */int) var_0))))))) : ((+(arr_75 [(unsigned char)2] [i_21] [13U] [i_26])))));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                    {
                        var_53 -= ((/* implicit */unsigned int) ((unsigned char) (-(4294967295U))));
                        var_54 = ((/* implicit */unsigned char) max((var_54), ((unsigned char)24)));
                        arr_92 [i_4] [(unsigned char)11] [i_4] [i_21] [i_25] [i_4] = ((/* implicit */unsigned char) ((arr_22 [i_27] [i_8 - 3] [(signed char)16]) + (((/* implicit */long long int) 0U))));
                    }
                    for (int i_28 = 1; i_28 < 15; i_28 += 1) 
                    {
                        var_55 = ((/* implicit */unsigned int) max((var_55), (((/* implicit */unsigned int) var_0))));
                        var_56 = ((/* implicit */unsigned char) ((unsigned short) arr_5 [i_4] [i_4 - 1] [0ULL]));
                        var_57 = ((/* implicit */short) min((var_57), (((/* implicit */short) 4095U))));
                    }
                    var_58 = ((/* implicit */signed char) ((((/* implicit */long long int) 4294967294U)) <= (arr_38 [15U] [i_4 + 1] [16U] [i_4] [i_21] [i_25])));
                    var_59 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2147483647U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)25))) : (4128483486U)));
                }
                for (long long int i_29 = 0; i_29 < 17; i_29 += 1) 
                {
                    arr_98 [(short)14] [(short)14] [i_8] [(short)14] [i_21] [i_29] |= var_9;
                    var_60 = ((/* implicit */unsigned char) max((var_60), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? ((-(((/* implicit */int) arr_56 [(signed char)9] [i_8 - 2] [i_8] [i_8 - 2] [(_Bool)1] [16U] [(short)8])))) : (((/* implicit */int) arr_72 [9LL] [i_4 - 2] [i_4] [i_8 - 3] [i_8 - 2])))))));
                    var_61 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((0U) - (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_72 [i_8 + 1] [i_8] [i_4 + 1] [i_4] [12])))));
                    var_62 = ((/* implicit */int) max((var_62), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-36))) & (0ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) ((signed char) 4294967278U)))))));
                    var_63 = ((/* implicit */long long int) ((int) var_6));
                }
                for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                {
                    var_64 = ((/* implicit */unsigned char) 3466161761U);
                    var_65 = ((/* implicit */int) min((var_65), (((/* implicit */int) ((long long int) ((((/* implicit */_Bool) arr_88 [6LL] [14] [(signed char)16] [3ULL] [i_8] [i_8] [i_8 + 1])) && (((/* implicit */_Bool) arr_85 [4U]))))))));
                }
                var_66 -= ((/* implicit */unsigned long long int) var_0);
            }
            var_67 -= ((/* implicit */unsigned char) arr_22 [i_4] [(_Bool)1] [i_4]);
        }
        arr_102 [i_4] = ((/* implicit */unsigned char) ((-3589258761539074879LL) - (((/* implicit */long long int) 4294967295U))));
        arr_103 [4ULL] &= ((/* implicit */signed char) ((_Bool) (unsigned short)127));
    }
    var_68 -= ((/* implicit */_Bool) var_4);
}
