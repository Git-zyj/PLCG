/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167643
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                for (unsigned char i_3 = 3; i_3 < 8; i_3 += 4) 
                {
                    {
                        var_16 &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [1ULL] [i_1 + 4] [i_1 + 2] [2U] [i_1 + 4] [i_1]))));
                        var_17 = ((/* implicit */signed char) (short)32763);
                        var_18 = ((/* implicit */unsigned int) var_3);
                        var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_0] [i_0 - 1] [i_0 + 1])) % (((/* implicit */int) var_0))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 1; i_5 < 10; i_5 += 1) 
            {
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 12; i_6 += 2) 
                {
                    for (unsigned char i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */short) (-(((unsigned int) var_15))));
                            var_21 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_21 [i_0 + 2]))));
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((unsigned long long int) ((((/* implicit */_Bool) (short)32743)) ? (((/* implicit */int) (short)-32750)) : (((/* implicit */int) (short)32766)))))));
                            var_23 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32755)) ? (((/* implicit */int) arr_20 [2LL] [0U] [i_6] [2U])) : (((/* implicit */int) (short)-32763))))) ? (((/* implicit */int) (short)32764)) : (((/* implicit */int) (short)-32767))));
                        }
                    } 
                } 
                arr_22 [i_0] [i_4] [0ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [(unsigned char)4] [7U] [i_0 + 2] [i_5 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0 + 2] [i_0 + 1]))) : (16095691919554607476ULL)));
                var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))));
                /* LoopNest 2 */
                for (unsigned char i_8 = 2; i_8 < 11; i_8 += 4) 
                {
                    for (unsigned int i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        {
                            arr_30 [11U] [0U] [i_5] [(_Bool)1] [(signed char)5] = ((/* implicit */_Bool) arr_8 [i_0] [(_Bool)1]);
                            var_25 = ((/* implicit */short) ((arr_7 [i_0 - 1] [i_8 + 1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_8 - 1] [0LL] [i_8 - 2])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 1) 
                {
                    for (short i_11 = 3; i_11 < 11; i_11 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (+(((/* implicit */int) arr_19 [(short)7] [i_4] [i_0 + 1] [i_5 - 1] [(signed char)11])))))));
                            arr_37 [i_0] [(unsigned char)8] [10ULL] [(_Bool)1] [7U] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))));
                            arr_38 [(signed char)0] [7U] [(signed char)8] [0U] [9U] = ((/* implicit */short) (~(((((/* implicit */int) arr_27 [(unsigned short)9] [i_4] [9LL] [1LL] [i_5] [(short)4])) >> (((var_5) - (8957898403294200307ULL)))))));
                            arr_39 [9U] [(unsigned char)4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-32763))))) ? (((/* implicit */unsigned long long int) arr_5 [(_Bool)1])) : (9512566936411195240ULL)));
                        }
                    } 
                } 
            }
            arr_40 [(unsigned short)3] [(short)8] = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)34))) >= (((unsigned int) (unsigned short)32498)));
        }
        for (unsigned char i_12 = 0; i_12 < 12; i_12 += 2) /* same iter space */
        {
            arr_43 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_12] [i_12] [i_12] [i_12] [1] [i_0 + 1])) ? (((/* implicit */int) arr_9 [(_Bool)1] [3ULL] [(unsigned short)6] [i_12] [i_0 + 1] [i_12])) : (((/* implicit */int) arr_9 [i_12] [10U] [i_12] [(short)5] [i_0] [(_Bool)1]))));
            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_0]))) ? (15400443775141436130ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [(unsigned short)9])) ? (((/* implicit */int) var_14)) : (arr_5 [i_12])))))))));
            var_28 -= ((/* implicit */unsigned char) ((((/* implicit */int) (short)-20749)) * (((/* implicit */int) var_14))));
            var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_12] [i_12])) ? (((/* implicit */int) arr_23 [i_0] [9ULL])) : (((/* implicit */int) arr_23 [(unsigned char)6] [2])))))));
        }
        /* LoopNest 2 */
        for (unsigned int i_13 = 2; i_13 < 10; i_13 += 3) 
        {
            for (unsigned long long int i_14 = 1; i_14 < 9; i_14 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_15 = 3; i_15 < 8; i_15 += 4) 
                    {
                        arr_54 [i_13] [9ULL] [7LL] [2U] [(short)7] [(unsigned char)2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)222))) ^ (8355884440889983746ULL)));
                        var_30 = ((/* implicit */_Bool) ((short) (short)15015));
                    }
                    var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((13190290920890518792ULL) / (arr_12 [i_0] [i_0]))))));
                }
            } 
        } 
    }
    for (short i_16 = 0; i_16 < 23; i_16 += 1) 
    {
        var_32 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(var_1)))) * (((((/* implicit */_Bool) arr_56 [2U])) ? (12835736360387319125ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_16])))))));
        /* LoopNest 3 */
        for (unsigned short i_17 = 0; i_17 < 23; i_17 += 1) 
        {
            for (unsigned int i_18 = 0; i_18 < 23; i_18 += 4) 
            {
                for (signed char i_19 = 0; i_19 < 23; i_19 += 1) 
                {
                    {
                        var_33 = ((/* implicit */long long int) max((((/* implicit */int) min((var_13), (max((arr_56 [16U]), (((/* implicit */unsigned char) arr_59 [21LL] [(_Bool)1] [i_18]))))))), ((+(((/* implicit */int) arr_59 [i_18] [i_19] [i_18]))))));
                        var_34 &= ((/* implicit */unsigned char) (-(min((((/* implicit */long long int) ((int) (unsigned char)66))), (((((/* implicit */_Bool) var_12)) ? (-1781758553718499756LL) : (((/* implicit */long long int) ((/* implicit */int) arr_56 [(signed char)12])))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_20 = 0; i_20 < 23; i_20 += 3) 
        {
            var_35 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [(signed char)13] [i_16] [4U]))) / (255ULL)))) || (((/* implicit */_Bool) 18446744073709551615ULL)))))));
            var_36 ^= ((/* implicit */signed char) ((((unsigned long long int) (signed char)-97)) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_13)) < (((/* implicit */int) arr_55 [i_16]))))))));
        }
        for (signed char i_21 = 0; i_21 < 23; i_21 += 1) 
        {
            /* LoopNest 2 */
            for (short i_22 = 4; i_22 < 21; i_22 += 1) 
            {
                for (unsigned char i_23 = 3; i_23 < 22; i_23 += 3) 
                {
                    {
                        var_37 *= ((/* implicit */short) (!(((/* implicit */_Bool) max((arr_59 [i_23] [i_22 + 1] [(short)5]), (arr_55 [(unsigned char)9]))))));
                        arr_75 [i_21] [i_23] [i_22] [(signed char)12] = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (short)32767))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_24 = 0; i_24 < 23; i_24 += 4) 
            {
                for (unsigned int i_25 = 1; i_25 < 21; i_25 += 4) 
                {
                    {
                        arr_81 [i_21] [20U] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_79 [i_16] [i_21] [i_24] [14ULL] [(unsigned char)19] [i_21])) ? (arr_67 [i_16] [4ULL]) : (arr_67 [(signed char)11] [i_25 - 1])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)178))) % (1262546688U))) : (((/* implicit */unsigned int) ((int) arr_79 [8U] [i_21] [i_24] [i_25] [(short)13] [i_21])))));
                        /* LoopSeq 2 */
                        for (unsigned char i_26 = 0; i_26 < 23; i_26 += 2) 
                        {
                            var_38 = ((/* implicit */unsigned int) (-(max((((/* implicit */int) (signed char)79)), (var_2)))));
                            arr_84 [(short)14] [(short)10] [i_21] [i_24] [11LL] [i_26] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((6033889519481902736LL), (1561216031945263089LL)))) ? (((/* implicit */int) arr_78 [i_26] [i_25 - 1] [3U] [i_21])) : (min((((/* implicit */int) arr_78 [17ULL] [18ULL] [i_24] [8LL])), (-776206091)))));
                        }
                        for (signed char i_27 = 0; i_27 < 23; i_27 += 1) 
                        {
                            var_39 ^= ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11236829889558323330ULL)) ? (9718001622708708961ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) ? (((/* implicit */int) max((((/* implicit */short) (unsigned char)96)), (var_15)))) : (((((/* implicit */int) (signed char)-88)) % (((/* implicit */int) arr_79 [(signed char)22] [18U] [i_21] [2ULL] [i_27] [i_24]))))))) : (((((/* implicit */_Bool) arr_78 [i_25 + 1] [i_25 + 2] [22ULL] [i_25 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_83 [i_25 + 1] [i_25 + 2] [9U] [i_25 - 1] [i_25]))) : (arr_73 [i_25 + 1] [i_25 + 2] [i_25] [i_25 - 1] [i_25]))));
                            arr_87 [i_21] [i_27] = ((/* implicit */unsigned short) ((4294967294U) == (1U)));
                        }
                        var_40 = ((/* implicit */unsigned char) ((((min((((/* implicit */unsigned long long int) (unsigned char)82)), (8ULL))) ^ (255ULL))) ^ (((/* implicit */unsigned long long int) max((((((/* implicit */int) (signed char)127)) & (((/* implicit */int) var_15)))), (((/* implicit */int) (unsigned char)179)))))));
                        /* LoopSeq 1 */
                        for (signed char i_28 = 0; i_28 < 23; i_28 += 2) 
                        {
                            arr_92 [i_21] [(unsigned short)8] [i_21] [i_21] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (unsigned short)26030)), (min((467365061888019159ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)168)) & (((/* implicit */int) (short)-18358)))))))));
                            arr_93 [(short)13] [i_21] [(signed char)6] [(unsigned short)5] [i_25] [(signed char)15] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((((/* implicit */unsigned char) arr_80 [i_16] [(short)2] [i_25 + 2] [(unsigned char)15])), ((unsigned char)90)))), (((arr_86 [9LL] [(signed char)12] [i_28] [i_28] [i_25 + 1] [i_25 + 1]) | (arr_86 [i_28] [(unsigned char)19] [(short)6] [(unsigned short)19] [i_25 + 2] [i_25 + 1])))));
                        }
                        var_41 = ((/* implicit */signed char) 16908055658389968274ULL);
                    }
                } 
            } 
        }
        var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_80 [(unsigned short)0] [(unsigned char)18] [(_Bool)1] [13U])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65528))))) : (min((((/* implicit */unsigned long long int) var_11)), (var_8)))))) ? (((/* implicit */unsigned long long int) min((var_9), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_69 [10LL])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)65534)))))))) : (((((/* implicit */unsigned long long int) arr_86 [i_16] [i_16] [(short)7] [12LL] [3U] [i_16])) | (max((arr_71 [22U] [i_16] [(unsigned short)1]), (((/* implicit */unsigned long long int) arr_72 [(signed char)14]))))))));
    }
    for (unsigned long long int i_29 = 0; i_29 < 15; i_29 += 2) 
    {
        var_43 = ((/* implicit */unsigned short) ((arr_94 [13U]) - (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (arr_73 [i_29] [(_Bool)1] [4LL] [(signed char)4] [i_29])))));
        var_44 = ((/* implicit */unsigned char) max((8340621939948992327LL), (((/* implicit */long long int) (unsigned short)43630))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_30 = 2; i_30 < 11; i_30 += 4) 
        {
            var_45 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_78 [i_30] [i_30 - 2] [i_30 + 1] [i_29])) : (arr_88 [(signed char)20] [i_30 + 3] [20] [i_29])));
            /* LoopNest 2 */
            for (short i_31 = 2; i_31 < 11; i_31 += 4) 
            {
                for (unsigned int i_32 = 2; i_32 < 14; i_32 += 1) 
                {
                    {
                        var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 1946310525U)) ? (((/* implicit */int) arr_64 [i_30 - 2] [(signed char)3] [i_32 + 1] [16ULL])) : (((((/* implicit */int) arr_90 [i_30] [20ULL] [i_30] [i_30])) * (((/* implicit */int) (short)32763)))))))));
                        /* LoopSeq 4 */
                        for (unsigned int i_33 = 0; i_33 < 15; i_33 += 1) 
                        {
                            var_47 |= ((-8340621939948992333LL) / (((/* implicit */long long int) ((/* implicit */int) arr_77 [i_30] [i_31] [6ULL] [i_30]))));
                            arr_107 [i_29] [12U] [(unsigned char)7] [(unsigned char)13] [(unsigned char)8] [i_29] = ((/* implicit */unsigned int) (unsigned short)54107);
                            var_48 = ((/* implicit */short) ((signed char) arr_90 [22ULL] [8U] [(_Bool)1] [i_31]));
                            var_49 = ((/* implicit */unsigned int) max((var_49), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_67 [i_30 + 4] [i_31 - 1])) ? (((/* implicit */long long int) arr_105 [(short)14] [i_31 + 3] [(short)0] [i_32] [(short)12] [i_32 + 1])) : (arr_67 [i_30 + 1] [i_31 + 1]))))));
                        }
                        for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
                        {
                            arr_111 [(_Bool)1] [2U] [13ULL] [10LL] [i_34] = ((/* implicit */unsigned int) ((12696118670263342267ULL) | (9559254575841744434ULL)));
                            var_50 = ((/* implicit */signed char) max((var_50), (((/* implicit */signed char) (_Bool)1))));
                            var_51 = ((/* implicit */long long int) min((var_51), (((/* implicit */long long int) ((unsigned int) arr_55 [i_34])))));
                        }
                        for (_Bool i_35 = 0; i_35 < 0; i_35 += 1) /* same iter space */
                        {
                            arr_116 [7U] [i_30] [(unsigned short)12] [i_32] [(unsigned char)13] [(unsigned char)1] [11ULL] = ((/* implicit */unsigned long long int) (unsigned char)156);
                            arr_117 [i_35] [8ULL] [(short)1] [(unsigned char)6] [(short)0] [i_30] [i_29] = ((/* implicit */_Bool) arr_55 [i_32 + 1]);
                            var_52 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_79 [(unsigned short)12] [(unsigned char)4] [20U] [i_32 - 2] [i_35] [i_31])) : (((/* implicit */int) arr_79 [i_29] [(short)16] [(unsigned short)12] [i_31] [20U] [i_29]))));
                        }
                        for (_Bool i_36 = 0; i_36 < 0; i_36 += 1) /* same iter space */
                        {
                            arr_120 [(short)8] [5ULL] [(_Bool)1] [(signed char)3] [12U] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)-58)) ? (((/* implicit */int) arr_63 [(unsigned char)14] [18ULL] [14] [(unsigned char)4])) : (((/* implicit */int) var_13)))));
                            var_53 = ((/* implicit */unsigned char) 8340621939948992336LL);
                            var_54 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) var_3))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)32760))))) : (((((/* implicit */_Bool) arr_65 [(short)21] [(_Bool)1] [i_31])) ? (14965810892293433750ULL) : (11804758652505347503ULL)))));
                        }
                        arr_121 [i_29] [i_30] [12U] [(short)7] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (16624888335076189839ULL))))));
                    }
                } 
            } 
        }
        for (unsigned short i_37 = 4; i_37 < 11; i_37 += 1) /* same iter space */
        {
            var_55 = ((/* implicit */short) min((var_55), (((/* implicit */short) ((unsigned long long int) max((var_5), (((/* implicit */unsigned long long int) arr_109 [i_29] [(_Bool)1] [(short)11] [(short)13] [i_37] [(_Bool)0]))))))));
            var_56 -= ((/* implicit */short) min((((/* implicit */unsigned int) ((signed char) ((((/* implicit */int) (unsigned char)3)) / (((/* implicit */int) (_Bool)1)))))), ((+(((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_90 [8U] [(unsigned char)10] [(_Bool)1] [i_29]))) : (var_1)))))));
        }
        for (unsigned short i_38 = 4; i_38 < 11; i_38 += 1) /* same iter space */
        {
            var_57 += ((/* implicit */unsigned short) min(((-(((/* implicit */int) arr_125 [i_29] [i_29])))), (((/* implicit */int) arr_125 [i_29] [i_29]))));
            var_58 = ((/* implicit */unsigned long long int) max((var_58), (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_90 [(unsigned char)12] [i_29] [(signed char)10] [i_29])))), (((/* implicit */int) (unsigned char)28)))))));
        }
    }
    var_59 = ((/* implicit */short) min((((/* implicit */unsigned int) var_14)), ((+(max((1858406106U), (var_11)))))));
    var_60 = ((/* implicit */unsigned char) min((((unsigned int) min((((/* implicit */unsigned int) (signed char)-24)), (3834299865U)))), (((((/* implicit */_Bool) ((int) (signed char)-51))) ? (((/* implicit */unsigned int) var_2)) : (((var_9) * (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))));
}
