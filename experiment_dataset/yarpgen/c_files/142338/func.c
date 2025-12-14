/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142338
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
    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) var_10))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [12] = ((((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)255)), (2147483647)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_1 [i_0]))) : (var_4))) ^ (((/* implicit */unsigned long long int) arr_0 [i_0] [(_Bool)1])));
        arr_3 [9LL] [i_0] = ((/* implicit */unsigned long long int) 0);
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            arr_8 [i_0] [5] = ((/* implicit */_Bool) arr_6 [11ULL] [i_1]);
            var_13 *= ((/* implicit */_Bool) var_1);
            var_14 ^= ((/* implicit */unsigned int) ((signed char) ((((/* implicit */long long int) arr_4 [i_0] [i_1 - 1] [i_1 - 1])) % (var_11))));
        }
        for (unsigned long long int i_2 = 4; i_2 < 16; i_2 += 2) 
        {
            var_15 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)214))) : (3956825044U)))), (((((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_8))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) -4050717750209762032LL)) > (var_4)))))))));
            /* LoopSeq 4 */
            for (signed char i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) arr_10 [(_Bool)1] [(_Bool)1]))));
                            arr_19 [(unsigned char)13] [i_2] [i_3] [i_3] [i_4] [10U] [(unsigned short)4] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) min((4064913114U), (((/* implicit */unsigned int) (unsigned char)237))))) % (18446744073709551600ULL))) + (18ULL)));
                            var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) -4050717750209762032LL))));
                            arr_20 [i_0] [(unsigned char)9] [i_0] [i_0] [i_0] [6ULL] [i_0] = ((/* implicit */int) ((short) 18446744073709551598ULL));
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */int) (unsigned char)0)), (-425946132)))), (var_11)))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) * (var_10)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) arr_10 [i_0] [i_0]))))) : (((unsigned long long int) 425946134)))) : (((((/* implicit */_Bool) ((arr_13 [(short)2]) - (((/* implicit */unsigned long long int) var_5))))) ? (((((/* implicit */unsigned long long int) arr_14 [17] [(unsigned short)10] [i_5] [17] [i_5])) & (arr_1 [i_5]))) : (arr_11 [i_2 + 1] [i_2 - 3] [i_2 - 2])))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [(signed char)0])) ? (((/* implicit */int) arr_7 [i_0] [(unsigned char)7])) : (((((_Bool) -930157029567479276LL)) ? (((((/* implicit */int) var_6)) % (((/* implicit */int) arr_12 [i_0])))) : (((/* implicit */int) ((0U) >= (((/* implicit */unsigned int) -425946132)))))))));
            }
            for (short i_6 = 3; i_6 < 16; i_6 += 4) 
            {
                var_20 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_12 [i_0])) ? (min((var_1), (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_17 [i_0] [i_6 + 2] [i_2 - 3] [(unsigned short)11])))) / (((/* implicit */int) ((_Bool) var_7)))));
                arr_23 [17U] [17U] [7ULL] = var_5;
                var_21 *= ((/* implicit */_Bool) ((unsigned short) (signed char)2));
            }
            for (unsigned char i_7 = 2; i_7 < 17; i_7 += 1) 
            {
                var_22 = ((/* implicit */int) arr_24 [i_0]);
                var_23 = ((/* implicit */signed char) ((max((((/* implicit */long long int) arr_21 [13ULL] [i_2] [i_7 + 1])), (((((/* implicit */_Bool) arr_27 [i_0] [3U])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (511LL))))) == (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 18; i_8 += 3) 
                {
                    for (long long int i_9 = 0; i_9 < 18; i_9 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned char) min((var_24), ((unsigned char)255)));
                            arr_32 [i_9] [0LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_0] [i_2] [i_7 - 1])) ? (((((/* implicit */_Bool) arr_13 [(_Bool)1])) ? (((/* implicit */long long int) arr_27 [9LL] [9LL])) : (arr_9 [(signed char)8] [i_2 - 1] [(short)10]))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_12 [i_0]), (((/* implicit */short) (_Bool)1))))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_4) | (var_8)))) ? (((/* implicit */int) arr_17 [(unsigned char)14] [6] [8] [i_9])) : (((((/* implicit */_Bool) 256U)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)194))))))) : (((((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [(_Bool)1] [(_Bool)1] [(unsigned short)0])) & (((/* implicit */int) var_2))))) ^ (((unsigned int) var_0))))));
                            var_25 *= ((/* implicit */unsigned int) ((long long int) ((arr_4 [i_0] [(_Bool)1] [i_7 - 1]) >> (((max((-1330852775), (((/* implicit */int) var_7)))) + (8696))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (int i_10 = 4; i_10 < 17; i_10 += 4) 
            {
                arr_36 [i_0] [i_0] [(unsigned short)11] [4LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_10] [i_10])) ? (((/* implicit */int) arr_33 [i_2 - 4])) : (((/* implicit */int) arr_30 [i_10] [i_10]))));
                /* LoopSeq 2 */
                for (unsigned int i_11 = 3; i_11 < 15; i_11 += 1) 
                {
                    var_26 &= ((var_0) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_29 [i_2] [i_2] [(short)7] [i_2 + 1] [(unsigned char)3] [(short)6])))) : (var_5));
                    /* LoopSeq 2 */
                    for (signed char i_12 = 0; i_12 < 18; i_12 += 4) 
                    {
                        var_27 *= ((/* implicit */_Bool) arr_12 [i_0]);
                        var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((unsigned long long int) ((_Bool) arr_15 [i_10 - 2]))))));
                    }
                    for (unsigned int i_13 = 0; i_13 < 18; i_13 += 2) 
                    {
                        arr_46 [i_0] [i_10] [(short)0] [(short)0] [i_13] |= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_0] [i_2 - 4] [i_10 - 4] [(signed char)12]))) | (((((/* implicit */_Bool) (unsigned char)43)) ? (arr_43 [i_2] [i_2] [i_10 - 4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_0] [10LL] [10LL] [10LL] [i_13])))))));
                        arr_47 [i_0] [i_2] [i_10] [i_11] [i_13] &= ((/* implicit */_Bool) ((((/* implicit */int) arr_31 [i_2] [i_2 - 3] [i_11 - 2] [i_2 - 3])) & (((/* implicit */int) arr_31 [7LL] [i_2 + 2] [i_11 + 2] [i_2 + 2]))));
                    }
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    var_29 = ((/* implicit */short) var_6);
                    var_30 = ((((/* implicit */int) ((_Bool) (unsigned char)95))) << (((((/* implicit */int) arr_12 [(unsigned char)13])) - (8173))));
                    arr_51 [9] [15U] [i_14] [i_14] = ((/* implicit */int) ((((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) arr_48 [i_2] [15U] [i_14])))) ? (arr_39 [i_0] [(unsigned char)14] [11ULL] [i_0] [i_14]) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) arr_14 [i_10 - 3] [(short)5] [12LL] [i_0] [11U])) : (var_8)))));
                }
            }
        }
    }
    for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 1) /* same iter space */
    {
        arr_54 [i_15] |= ((/* implicit */long long int) var_8);
        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((12ULL) >> (((((/* implicit */int) var_3)) + (31726)))))) ? (((long long int) arr_17 [5U] [(unsigned char)12] [i_15] [(unsigned char)12])) : (var_11)))) ? (((/* implicit */int) ((unsigned char) arr_29 [i_15] [i_15] [i_15] [(_Bool)1] [0U] [7U]))) : (((((/* implicit */_Bool) max((arr_22 [i_15] [i_15] [i_15]), (((/* implicit */unsigned short) var_2))))) ? (var_1) : (((/* implicit */int) ((256U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [(_Bool)1] [2LL] [1U] [i_15]))))))))));
        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) max((((((/* implicit */int) arr_22 [i_15] [i_15] [i_15])) ^ (((/* implicit */int) arr_22 [i_15] [i_15] [i_15])))), (((/* implicit */int) arr_25 [i_15])))))));
    }
    for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
        {
            var_33 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)23267)) ? (((/* implicit */int) arr_42 [2LL] [(unsigned char)8] [2LL] [14LL] [14LL])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_53 [i_17])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_10)))) : (804755328759002601LL))))));
            arr_60 [i_16] = ((/* implicit */unsigned char) ((long long int) arr_37 [(_Bool)1] [10U] [(unsigned char)4] [0U]));
            var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) arr_48 [i_16] [i_17] [(unsigned short)16]))));
            /* LoopSeq 2 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_19 = 0; i_19 < 10; i_19 += 2) 
                {
                    arr_65 [i_18] [i_18] = ((/* implicit */short) ((((/* implicit */int) arr_21 [i_16] [i_17] [i_18])) / (((/* implicit */int) arr_17 [(unsigned char)0] [i_17] [(unsigned short)2] [2U]))));
                    arr_66 [i_18] [i_18] [i_18] [i_18] [7] = ((/* implicit */short) (unsigned char)194);
                    var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)194)) && ((_Bool)1)));
                    /* LoopSeq 2 */
                    for (int i_20 = 0; i_20 < 10; i_20 += 4) /* same iter space */
                    {
                        arr_69 [i_18] [(short)7] [i_18] [(short)4] [(short)7] [(unsigned short)2] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 8991715295262508452ULL)) ? (((/* implicit */unsigned long long int) 4050717750209762029LL)) : (18446744073709551603ULL)));
                        var_36 += ((/* implicit */unsigned long long int) arr_30 [8ULL] [i_20]);
                    }
                    for (int i_21 = 0; i_21 < 10; i_21 += 4) /* same iter space */
                    {
                        var_37 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_16] [i_16] [(_Bool)1] [i_17] [i_21])) ? (var_8) : (var_8)))) ? (arr_58 [i_18] [7LL]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                        var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) (unsigned char)44))));
                        var_39 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */int) var_3)) / (((/* implicit */int) arr_63 [i_21] [i_17] [3U] [i_17] [(_Bool)1])))));
                        var_40 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) & (var_10))) << (((((unsigned long long int) var_6)) - (115ULL)))));
                        var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)15342)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_18] [i_21]))) : (((arr_7 [i_19] [(_Bool)1]) ? (arr_5 [i_16] [12LL] [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)512)))))));
                    }
                }
                for (unsigned short i_22 = 0; i_22 < 10; i_22 += 2) 
                {
                    arr_76 [(signed char)5] [3U] [i_18] [i_22] [i_22] = ((/* implicit */long long int) ((unsigned long long int) min((((/* implicit */unsigned long long int) ((_Bool) -804755328759002602LL))), (((((/* implicit */_Bool) arr_16 [i_16] [i_16] [i_17] [i_18] [(signed char)12] [(_Bool)1] [i_22])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (8861189963319035509ULL))))));
                    var_42 = ((/* implicit */_Bool) max((var_42), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((/* implicit */int) arr_63 [0U] [0U] [i_17] [(_Bool)1] [i_22])) : (((/* implicit */int) (unsigned char)194))))) ? (arr_13 [(unsigned char)12]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((7239265167960511001LL) - (((/* implicit */long long int) 417150620))))) ? (((/* implicit */int) (signed char)-117)) : (((/* implicit */int) (_Bool)0))))))))));
                    arr_77 [i_18] [i_18] [(unsigned char)5] [2] = ((/* implicit */int) min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_56 [(unsigned char)1])) ? (arr_9 [i_16] [i_17] [0U]) : (((/* implicit */long long int) ((/* implicit */int) arr_50 [i_16] [i_17] [9] [(_Bool)0] [i_22] [(signed char)10]))))) != (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_72 [i_16] [i_16] [1U] [i_18] [i_17]))))))), (((min((var_9), (((/* implicit */unsigned int) var_2)))) >> (((max((var_5), (((/* implicit */long long int) arr_17 [1] [1] [1] [1])))) - (1885656332098212779LL)))))));
                }
                var_43 = ((/* implicit */int) -804755328759002602LL);
            }
            for (unsigned long long int i_23 = 0; i_23 < 10; i_23 += 2) 
            {
                var_44 = ((/* implicit */_Bool) max((var_44), (((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) (unsigned char)38)), (min((var_8), (((/* implicit */unsigned long long int) arr_27 [i_16] [i_23])))))) - (((/* implicit */unsigned long long int) min((((var_1) & (((/* implicit */int) arr_40 [i_16] [12U] [i_23] [(signed char)0] [8ULL])))), (((/* implicit */int) ((unsigned char) -4050717750209762032LL)))))))))));
                arr_80 [i_16] [i_16] [6] [6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_9 [i_16] [6U] [(short)3])) * (14862566398307020149ULL)))) ? (((long long int) min((((/* implicit */int) (short)-1160)), (1933673311)))) : (min((((/* implicit */long long int) ((_Bool) (unsigned short)15342))), (4294967295LL)))));
            }
            var_45 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((2109107623), (((/* implicit */int) (_Bool)1))))) ? (arr_64 [(signed char)2] [8ULL] [(signed char)2] [i_17] [i_17] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_16] [0])))))) && (((/* implicit */_Bool) arr_79 [(unsigned short)4]))));
        }
        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) /* same iter space */
        {
            var_46 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_29 [i_16] [i_16] [(_Bool)1] [i_16] [i_24] [i_24]) << (((((arr_70 [8] [(unsigned char)8] [i_16] [8] [i_16]) - (((/* implicit */unsigned long long int) 1333378993910427864LL)))) - (5278899850080975858ULL)))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_7))) % (2504428950491505792LL))) : (((0LL) / (-3442686253454938159LL)))));
            arr_84 [4] [4] [i_24] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)46403)) ? (((/* implicit */int) arr_33 [i_24])) : (((/* implicit */int) (unsigned short)15342))))) ? (((var_4) << (((var_4) - (3931683084268976927ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_55 [i_16]))) : (var_9)))))));
        }
        var_47 = ((/* implicit */_Bool) max((var_47), (((/* implicit */_Bool) ((((unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (-1) : (((/* implicit */int) arr_15 [i_16]))))) * (((/* implicit */unsigned long long int) ((unsigned int) var_5))))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_25 = 0; i_25 < 16; i_25 += 3) 
    {
        for (unsigned short i_26 = 0; i_26 < 16; i_26 += 2) 
        {
            {
                var_48 = ((/* implicit */short) max((var_48), (((/* implicit */short) arr_41 [i_25] [i_26] [(unsigned char)6] [(short)16] [(unsigned char)6] [0U]))));
                /* LoopNest 2 */
                for (unsigned short i_27 = 0; i_27 < 16; i_27 += 2) 
                {
                    for (long long int i_28 = 0; i_28 < 16; i_28 += 4) 
                    {
                        {
                            var_49 = ((/* implicit */short) max((var_49), (((/* implicit */short) ((((arr_39 [12] [16ULL] [(short)3] [(signed char)15] [i_25]) != (((/* implicit */unsigned long long int) arr_43 [i_28] [i_26] [i_26])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_24 [(_Bool)0])))) == (((((/* implicit */_Bool) arr_15 [i_27])) ? (arr_1 [i_25]) : (((/* implicit */unsigned long long int) 4050717750209762004LL)))))))) : (((arr_43 [i_26] [i_26] [i_26]) << (((/* implicit */int) var_2)))))))));
                            arr_95 [(unsigned char)4] [(_Bool)1] [i_27] [(unsigned char)4] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) ((unsigned char) var_6)))) ? (((((/* implicit */_Bool) max((-804755328759002602LL), (((/* implicit */long long int) (_Bool)1))))) ? (((unsigned int) var_2)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [(unsigned char)16] [(unsigned char)8] [(unsigned char)8])) ? (((/* implicit */int) (short)-12)) : (((/* implicit */int) var_2))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_43 [i_27] [i_26] [i_27])) ? (-2504428950491505801LL) : (arr_16 [0ULL] [i_25] [(unsigned char)15] [(unsigned char)15] [i_27] [(unsigned short)11] [i_27]))) < (((/* implicit */long long int) ((1419471385U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))))));
                            arr_96 [0ULL] [(_Bool)1] [i_27] = ((/* implicit */_Bool) ((127) - (((/* implicit */int) (unsigned char)234))));
                            arr_97 [i_25] [(unsigned short)7] [8U] = ((/* implicit */signed char) arr_15 [12LL]);
                        }
                    } 
                } 
            }
        } 
    } 
}
