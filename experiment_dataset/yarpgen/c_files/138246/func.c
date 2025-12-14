/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138246
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
    for (long long int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) arr_2 [i_0]));
        var_15 = ((/* implicit */unsigned int) ((unsigned char) arr_2 [i_0]));
        /* LoopSeq 2 */
        for (short i_1 = 3; i_1 < 8; i_1 += 4) 
        {
            var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-((-(9338813885538594084ULL))))))));
            var_17 = ((/* implicit */long long int) ((0ULL) & (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_5)), (var_12))))));
        }
        for (unsigned short i_2 = 2; i_2 < 9; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 2; i_3 < 9; i_3 += 1) 
            {
                for (int i_4 = 2; i_4 < 9; i_4 += 2) 
                {
                    {
                        var_18 = ((/* implicit */short) var_10);
                        arr_13 [i_0] [i_0] [i_3] [2LL] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) (short)-32755)))))))));
                        var_19 = (i_3 % 2 == 0) ? (((/* implicit */_Bool) ((var_6) << ((((+(arr_11 [i_3] [i_3] [i_3] [i_3 - 2]))) + (994636917)))))) : (((/* implicit */_Bool) ((var_6) << ((((((+(arr_11 [i_3] [i_3] [i_3] [i_3 - 2]))) + (994636917))) - (310158890))))));
                    }
                } 
            } 
            var_20 ^= ((/* implicit */unsigned char) arr_11 [i_0] [i_2] [i_2] [i_0]);
        }
    }
    for (short i_5 = 0; i_5 < 13; i_5 += 4) 
    {
        var_21 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_14 [i_5]) : (arr_14 [i_5])))))) ? (min((arr_14 [i_5]), (arr_14 [i_5]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) var_9)) - (((/* implicit */int) (unsigned char)132)))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_5] [i_5])))))))))));
        var_22 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (arr_14 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32740))) : (3561421337258061617ULL)))))));
        /* LoopNest 3 */
        for (short i_6 = 1; i_6 < 12; i_6 += 2) 
        {
            for (long long int i_7 = 0; i_7 < 13; i_7 += 4) 
            {
                for (unsigned int i_8 = 2; i_8 < 12; i_8 += 4) 
                {
                    {
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((arr_15 [i_5] [i_5]) + (9223372036854775807LL))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [1U])))))))) ? (((/* implicit */unsigned long long int) arr_19 [i_5] [5LL] [i_7])) : (max((((18446744073709551607ULL) | (18446744073709551606ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)(-32767 - 1))))))))));
                        arr_23 [i_5] [i_5] [i_6] [i_5] = ((/* implicit */short) ((((((/* implicit */_Bool) (short)1235)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [11U] [i_6]))) : (((((/* implicit */_Bool) arr_14 [i_5])) ? (((/* implicit */unsigned long long int) 149802473)) : (var_6))))) - (((/* implicit */unsigned long long int) (+(max((((/* implicit */unsigned int) var_8)), (arr_14 [i_5]))))))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 4 */
    for (unsigned long long int i_9 = 1; i_9 < 13; i_9 += 1) 
    {
        var_24 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (((~(arr_24 [(_Bool)1] [15]))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 6001007845050043722LL)) || (((/* implicit */_Bool) (short)31346))))))))), (max((((/* implicit */long long int) (-(((/* implicit */int) (signed char)-8))))), (arr_24 [i_9 + 3] [i_9 + 2])))));
        /* LoopNest 3 */
        for (unsigned char i_10 = 0; i_10 < 17; i_10 += 4) 
        {
            for (unsigned char i_11 = 0; i_11 < 17; i_11 += 4) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((4ULL) - (((((((/* implicit */int) (unsigned short)49152)) > (((/* implicit */int) arr_34 [i_12] [i_11] [i_10] [15ULL] [(short)13] [i_9])))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)-117)) : (var_4)))) : (((var_13) + (((/* implicit */unsigned long long int) arr_24 [(_Bool)1] [(_Bool)1])))))))))));
                        var_26 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)-31329))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_13 = 0; i_13 < 25; i_13 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_14 = 1; i_14 < 22; i_14 += 4) 
        {
            arr_43 [i_13] [(short)17] = ((/* implicit */short) ((unsigned char) ((((/* implicit */unsigned long long int) ((3734194471U) >> (((/* implicit */int) (_Bool)1))))) + (((arr_42 [i_13] [i_13]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [(unsigned short)16]))))))));
            var_27 = ((/* implicit */unsigned long long int) min(((((!(((/* implicit */_Bool) arr_38 [6ULL] [6ULL])))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_39 [6ULL])) : (-147684412))) : (((((/* implicit */_Bool) (unsigned char)195)) ? (var_4) : (((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) (unsigned char)115)) ? (((/* implicit */int) (short)31346)) : ((+(((/* implicit */int) (short)7329))))))));
            arr_44 [0ULL] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_11)))) / (((((/* implicit */_Bool) (-(arr_41 [i_13])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_14 + 2]))) : (arr_37 [i_13])))));
            arr_45 [i_13] [(signed char)22] = ((arr_37 [i_13]) << ((((+(((/* implicit */int) var_1)))) - (34))));
            /* LoopNest 2 */
            for (short i_15 = 0; i_15 < 25; i_15 += 1) 
            {
                for (long long int i_16 = 0; i_16 < 25; i_16 += 4) 
                {
                    {
                        var_28 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_50 [i_13] [i_14] [i_15] [i_15])) * (((/* implicit */int) arr_47 [i_16] [i_15] [i_13] [i_13]))))) / ((-(17641269455458878887ULL))))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2)))))));
                        var_29 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)2105))) * (arr_42 [i_14 - 1] [i_13]))) > (min((arr_42 [i_14 - 1] [i_13]), (((/* implicit */unsigned long long int) 2434726858U))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (signed char i_17 = 0; i_17 < 25; i_17 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_18 = 0; i_18 < 25; i_18 += 3) 
            {
                for (unsigned int i_19 = 0; i_19 < 25; i_19 += 4) 
                {
                    {
                        var_30 = ((/* implicit */unsigned short) (((_Bool)1) ? (-33554432LL) : (((/* implicit */long long int) -149802476))));
                        var_31 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)138))));
                        arr_60 [5U] [i_18] [i_17] [i_13] [i_13] = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)10624)) : (((/* implicit */int) arr_59 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])));
                        var_32 += ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_59 [(short)8] [(short)8] [(short)8] [16] [16] [14ULL]))))));
                        arr_61 [i_13] = ((/* implicit */long long int) arr_41 [i_13]);
                    }
                } 
            } 
            /* LoopSeq 4 */
            for (long long int i_20 = 0; i_20 < 25; i_20 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_21 = 1; i_21 < 24; i_21 += 2) 
                {
                    for (signed char i_22 = 2; i_22 < 22; i_22 += 4) 
                    {
                        {
                            arr_69 [i_20] [i_20] [i_20] [i_20] [i_20] = ((/* implicit */unsigned long long int) ((arr_37 [i_20]) < (arr_37 [i_21])));
                            var_33 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)31346)) ? (((/* implicit */long long int) arr_41 [i_21])) : (2415978686715531999LL)))) ? (arr_58 [4U] [4U] [i_21 - 1] [i_21] [i_21]) : (((unsigned long long int) arr_46 [i_21]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_23 = 1; i_23 < 21; i_23 += 3) 
                {
                    for (signed char i_24 = 1; i_24 < 24; i_24 += 3) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) arr_49 [i_13] [i_20] [i_17] [i_13]))));
                            arr_74 [i_24] [i_20] [i_17] [i_20] [i_13] = ((/* implicit */long long int) (+(((((/* implicit */int) var_9)) + (((/* implicit */int) (short)-32751))))));
                        }
                    } 
                } 
                arr_75 [i_20] [i_20] [i_20] [i_13] = ((/* implicit */short) ((((arr_65 [i_13] [i_13]) >> (((((/* implicit */int) arr_73 [i_13] [i_13] [i_13] [i_13] [i_13])) + (16856))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_13] [i_17] [i_13] [i_13])))));
                arr_76 [i_20] [i_20] [i_20] = ((/* implicit */short) ((unsigned short) (_Bool)1));
            }
            for (unsigned long long int i_25 = 2; i_25 < 22; i_25 += 1) 
            {
                var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) (~((~(var_11))))))));
                var_36 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) -7845828188011587311LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_64 [i_17]))) : (17749135899698383043ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_77 [i_25] [i_13]))))))));
            }
            for (long long int i_26 = 1; i_26 < 24; i_26 += 4) 
            {
                var_37 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (4294967290U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)218)))))) ? (((/* implicit */int) arr_66 [i_13] [i_17] [i_26 - 1] [12ULL] [(short)21] [(short)21])) : (((/* implicit */int) arr_54 [i_26] [i_17] [i_13]))));
                var_38 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_65 [i_26 - 1] [i_26 - 1]))));
                arr_84 [i_26] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) arr_40 [i_17])))));
            }
            for (unsigned long long int i_27 = 0; i_27 < 25; i_27 += 1) 
            {
                var_39 = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)32754))));
                var_40 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_83 [5ULL] [5ULL] [i_13]))));
            }
        }
        var_41 += ((/* implicit */unsigned long long int) ((unsigned char) max((((/* implicit */unsigned long long int) (-(4174609815U)))), (((((/* implicit */_Bool) arr_67 [i_13] [i_13] [4LL] [i_13] [6U] [i_13] [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31346))) : (1ULL))))));
        arr_88 [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_13] [(unsigned short)4] [i_13] [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31))) : (var_14)))) ? (((((/* implicit */_Bool) arr_73 [i_13] [i_13] [i_13] [i_13] [i_13])) ? (((/* implicit */int) arr_73 [i_13] [i_13] [i_13] [i_13] [i_13])) : (((/* implicit */int) arr_47 [(unsigned short)0] [1ULL] [1ULL] [i_13])))) : (((/* implicit */int) ((((/* implicit */int) (short)-32758)) == (((/* implicit */int) (_Bool)1)))))));
        arr_89 [5LL] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_86 [i_13] [i_13] [i_13])) | (((/* implicit */int) arr_85 [i_13] [i_13] [i_13] [i_13]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)37))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13186))) * (0ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_13)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_85 [i_13] [24U] [(short)12] [i_13]))) : (arr_81 [i_13] [i_13]))))));
    }
    /* vectorizable */
    for (int i_28 = 2; i_28 < 12; i_28 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_29 = 1; i_29 < 10; i_29 += 4) 
        {
            arr_95 [i_28] [i_28] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) arr_94 [i_29 + 3] [i_28 - 2]))));
            var_42 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_77 [i_28] [i_28])) : (((/* implicit */int) arr_78 [i_28] [i_28] [i_28] [i_29]))))) ? (((var_12) * (arr_17 [i_28] [i_29]))) : (((/* implicit */unsigned int) 149802462))));
        }
        for (signed char i_30 = 0; i_30 < 13; i_30 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_31 = 2; i_31 < 12; i_31 += 4) 
            {
                var_43 = ((((/* implicit */_Bool) (signed char)-121)) ? (((((/* implicit */int) arr_80 [(unsigned char)2] [i_30])) & (((/* implicit */int) var_3)))) : (((/* implicit */int) var_8)));
                var_44 ^= ((/* implicit */unsigned long long int) arr_59 [i_28 + 1] [i_28 - 2] [i_31] [i_31] [i_31 - 2] [i_31]);
            }
            /* LoopSeq 2 */
            for (unsigned char i_32 = 0; i_32 < 13; i_32 += 2) 
            {
                var_45 += ((/* implicit */long long int) (unsigned char)253);
                arr_103 [(signed char)1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_91 [i_28]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31347))))))) != (var_0)));
            }
            for (unsigned int i_33 = 4; i_33 < 12; i_33 += 2) 
            {
                var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_53 [i_28 + 1])) && (((_Bool) 400006917U)))))));
                /* LoopNest 2 */
                for (long long int i_34 = 0; i_34 < 13; i_34 += 3) 
                {
                    for (_Bool i_35 = 1; i_35 < 1; i_35 += 1) 
                    {
                        {
                            var_47 = ((/* implicit */int) min((var_47), (((/* implicit */int) ((unsigned int) ((long long int) arr_48 [i_33] [i_33] [i_33] [i_33] [i_28]))))));
                            var_48 *= ((/* implicit */int) var_10);
                        }
                    } 
                } 
                var_49 |= ((/* implicit */signed char) var_12);
                /* LoopNest 2 */
                for (long long int i_36 = 1; i_36 < 9; i_36 += 3) 
                {
                    for (signed char i_37 = 0; i_37 < 13; i_37 += 1) 
                    {
                        {
                            var_50 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)32755))));
                            arr_121 [i_33] [i_36] [i_33] [i_33] [i_30] [3ULL] = ((/* implicit */long long int) (!(((((/* implicit */_Bool) arr_39 [i_28])) || (((/* implicit */_Bool) var_6))))));
                        }
                    } 
                } 
            }
            var_51 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? ((+(((/* implicit */int) var_8)))) : ((-(((/* implicit */int) (_Bool)1))))));
        }
        /* LoopSeq 1 */
        for (_Bool i_38 = 0; i_38 < 1; i_38 += 1) 
        {
            var_52 = ((/* implicit */long long int) max((var_52), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_48 [i_38] [i_28] [i_38] [i_28] [i_28])) ? (((/* implicit */int) arr_34 [i_28] [i_38] [i_38] [i_38] [i_38] [i_38])) : ((~(((/* implicit */int) (short)511)))))))));
            /* LoopNest 3 */
            for (int i_39 = 0; i_39 < 13; i_39 += 4) 
            {
                for (unsigned char i_40 = 2; i_40 < 10; i_40 += 1) 
                {
                    for (unsigned short i_41 = 0; i_41 < 13; i_41 += 4) 
                    {
                        {
                            var_53 = ((/* implicit */unsigned int) (((_Bool)1) ? (6001007845050043699LL) : (((/* implicit */long long int) 2239934474U))));
                            var_54 = ((((/* implicit */_Bool) arr_113 [i_28] [i_28 - 1] [i_28] [i_28 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) < (arr_35 [i_28] [(short)9] [(short)9]))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) -3032391102875087499LL)) : (16094205649668310839ULL))));
                        }
                    } 
                } 
            } 
        }
        arr_137 [i_28] = ((/* implicit */unsigned char) ((arr_99 [i_28] [i_28] [i_28 + 1]) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3)))));
    }
    for (unsigned long long int i_42 = 1; i_42 < 15; i_42 += 4) 
    {
        arr_141 [i_42] = ((/* implicit */_Bool) min(((-((+(12922497161455375563ULL))))), (((/* implicit */unsigned long long int) arr_59 [i_42] [i_42] [i_42] [(_Bool)1] [i_42] [i_42]))));
        var_55 -= ((_Bool) min((max((((/* implicit */unsigned int) arr_29 [i_42] [(unsigned short)1] [i_42])), (280744024U))), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-60)))))));
    }
}
