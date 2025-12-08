/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13
Invocation: ../scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13 -o /data/zyj/loop_generator/baselines/yarpgen/mytest/c_files/13
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0] [8] = ((/* implicit */long long int) ((((((/* implicit */int) arr_1 [0])) % (((/* implicit */int) arr_2 [i_0])))) << (((/* implicit */int) min((arr_2 [i_0]), (arr_2 [i_0]))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 20; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            var_11 = var_7;
                            var_12 -= ((/* implicit */unsigned short) arr_0 [i_0]);
                            arr_16 [i_0] [i_0] [i_2 + 1] [i_2 + 1] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_6 [i_0]))))) == (max((1577074442U), (((/* implicit */unsigned int) (unsigned char)83))))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 4) 
                        {
                            var_13 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) arr_1 [i_5]))))) && (((/* implicit */_Bool) arr_12 [i_2 - 2] [i_2] [i_2] [i_2 - 1] [i_2] [i_2 + 1]))))) <= (((((/* implicit */int) (signed char)81)) & (((/* implicit */int) (signed char)-81))))));
                            arr_20 [i_5] [9ULL] [i_2] [i_1] [i_5] = ((/* implicit */unsigned short) arr_13 [i_0] [i_0] [i_2] [i_3] [i_5]);
                            var_14 = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_3])) << (((max((((/* implicit */long long int) (+(((/* implicit */int) var_7))))), ((~(var_9))))) - (3044907775031293152LL)))));
                            var_15 = ((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) 963901388)) || (((/* implicit */_Bool) (short)(-32767 - 1)))))), (max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))))), (max((arr_10 [(signed char)4] [(signed char)4] [(signed char)4] [i_2] [i_2] [i_5]), (((/* implicit */unsigned char) arr_2 [i_0]))))))));
                            arr_21 [i_0] [i_1] [i_0] [(signed char)16] [i_5] = ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) ((var_2) / (arr_12 [20] [20] [i_3] [i_1] [20] [i_2]))))))), (((arr_17 [20]) / (((/* implicit */int) arr_9 [18LL] [i_3] [i_0]))))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 4) 
                        {
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_8), (((/* implicit */int) ((((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])) <= (((/* implicit */int) arr_23 [i_0] [i_0])))))))) ? (((/* implicit */long long int) min((((/* implicit */int) arr_23 [i_1] [i_2 - 2])), (arr_25 [i_0] [i_1] [i_2 + 1] [i_1] [i_6])))) : (var_2)));
                            var_17 = ((/* implicit */_Bool) ((min((arr_24 [i_1] [i_2 - 2] [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1] [i_6]), (arr_24 [i_0] [i_2 - 1] [i_2 - 2] [i_2] [i_2] [i_2 + 1] [i_6]))) & (((/* implicit */int) min((arr_9 [i_2] [i_2] [i_2 + 1]), (arr_9 [i_2 + 1] [i_2] [i_2 - 1]))))));
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_2 - 2] [i_2] [i_2 - 1] [(unsigned char)9])) % (((/* implicit */int) arr_9 [i_2 - 1] [i_2] [i_2 + 1]))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_0] [20LL] [i_2] [i_3] [i_6])) | (arr_19 [(short)13] [i_0] [i_0] [i_1] [i_2] [i_3] [i_6]))))));
                            var_19 = ((/* implicit */short) (+(((/* implicit */int) arr_18 [i_0] [i_0] [i_0]))));
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((var_0) ^ (((/* implicit */long long int) (~(arr_14 [i_0] [i_1] [i_2] [i_2 + 1])))))))));
                        }
                        arr_26 [i_0] [i_0] [11ULL] [i_1] [i_2 - 2] [i_3] = ((/* implicit */_Bool) arr_1 [i_0]);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_7 = 2; i_7 < 18; i_7 += 2) 
                        {
                            arr_29 [i_0] [i_1] [i_2 - 2] [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((arr_27 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] [i_7]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3] [i_7] [i_7]))))) ? (arr_12 [17] [i_7 - 2] [i_7 - 2] [i_7] [i_7] [i_7]) : (((/* implicit */long long int) arr_7 [i_1]))));
                        }
                    }
                } 
            } 
            arr_30 [i_0] [i_1] [i_0] = ((/* implicit */short) max((2147483621), (-963901412)));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_8 = 3; i_8 < 19; i_8 += 3) 
            {
                arr_35 [i_0] [i_1] [i_8 - 1] [i_8] = ((/* implicit */signed char) ((((/* implicit */int) arr_10 [i_8 + 2] [i_8] [i_8] [i_8 - 2] [i_8 - 1] [i_8 - 2])) | (arr_22 [i_8 - 1] [i_8 - 1] [i_8 - 3] [i_8 - 1] [i_8 - 3] [i_8 + 2] [i_8 + 1])));
                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) arr_2 [i_8 + 1]))));
            }
        }
    }
    /* vectorizable */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        arr_38 [i_9] = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_23 [i_9] [i_9])))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_9] [12U] [i_9] [i_9] [i_9] [i_9])))))));
        /* LoopSeq 2 */
        for (signed char i_10 = 0; i_10 < 17; i_10 += 4) 
        {
            /* LoopSeq 3 */
            for (long long int i_11 = 3; i_11 < 15; i_11 += 3) 
            {
                var_23 = ((/* implicit */signed char) arr_42 [i_9]);
                arr_43 [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_11 - 2]))));
                arr_44 [i_9] [i_9] [i_11] = ((/* implicit */signed char) ((((/* implicit */int) arr_37 [i_11 - 2] [i_11 - 1])) ^ (((/* implicit */int) arr_37 [i_11 - 2] [i_11 - 2]))));
            }
            for (unsigned short i_12 = 2; i_12 < 14; i_12 += 3) 
            {
                var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_18 [i_9] [i_9] [i_9]))));
                arr_48 [i_12 + 2] [i_9] [i_9] = ((/* implicit */unsigned char) var_10);
                arr_49 [i_9] [i_9] [i_9] = ((((((/* implicit */int) arr_37 [i_12 + 1] [i_12 - 1])) + (2147483647))) >> (((((/* implicit */int) arr_37 [i_12 - 2] [i_12 - 1])) + (32389))));
                var_25 ^= ((/* implicit */long long int) ((((/* implicit */int) var_1)) > (((/* implicit */int) arr_32 [i_12 - 2] [i_12 + 1] [i_12 + 1]))));
            }
            for (unsigned short i_13 = 0; i_13 < 17; i_13 += 3) 
            {
                var_26 ^= ((/* implicit */short) (+(((/* implicit */int) arr_5 [(short)11]))));
                var_27 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_31 [i_9] [i_9] [i_9]))));
            }
            arr_52 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)22089)) && (((/* implicit */_Bool) 1577074442U))));
        }
        for (unsigned short i_14 = 0; i_14 < 17; i_14 += 3) 
        {
            var_28 = ((/* implicit */signed char) (+(((/* implicit */int) var_1))));
            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_14])) > (arr_39 [i_14]))))));
        }
        /* LoopNest 2 */
        for (unsigned short i_15 = 0; i_15 < 17; i_15 += 2) 
        {
            for (unsigned short i_16 = 0; i_16 < 17; i_16 += 4) 
            {
                {
                    var_30 = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)108)) % (((/* implicit */int) (signed char)(-127 - 1))))) != (var_8)));
                    var_31 = ((((/* implicit */_Bool) arr_23 [i_16] [i_16])) ? (arr_7 [i_16]) : (((/* implicit */int) arr_23 [i_9] [i_15])));
                    var_32 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_18 [i_9] [i_16] [i_16]))));
                }
            } 
        } 
        var_33 = ((/* implicit */unsigned short) ((arr_27 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_9] [4] [i_9] [(unsigned short)2] [i_9])))));
    }
    for (int i_17 = 0; i_17 < 19; i_17 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_18 = 0; i_18 < 19; i_18 += 2) 
        {
            var_34 = ((/* implicit */long long int) (((~(arr_17 [i_17]))) << ((((((+(arr_17 [i_18]))) + (942513568))) - (9)))));
            /* LoopSeq 2 */
            for (unsigned short i_19 = 2; i_19 < 16; i_19 += 4) 
            {
                arr_68 [i_17] [i_18] = ((/* implicit */unsigned char) arr_7 [i_19]);
                arr_69 [i_18] [i_18] [i_19] [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_17] [i_17] [i_17] [i_17] [i_17])) ? (((/* implicit */int) arr_28 [i_17] [i_17] [i_17] [(unsigned char)15] [i_17])) : (((/* implicit */int) arr_28 [i_19 - 1] [i_19 + 3] [i_19] [i_19] [i_19 + 3]))))) > (((((((arr_12 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]) / (((/* implicit */long long int) ((/* implicit */int) var_7))))) + (9223372036854775807LL))) >> (((arr_64 [i_18]) - (757604995)))))));
                arr_70 [i_18] [i_19] = ((/* implicit */short) min(((unsigned char)111), (((/* implicit */unsigned char) (signed char)24))));
                arr_71 [i_18] [i_18] [i_19 - 1] = ((/* implicit */unsigned short) max((-13841156), (((/* implicit */int) (short)26374))));
                arr_72 [i_17] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_27 [(short)5] [i_19] [(short)5] [i_19 + 3] [(short)5] [i_19 + 1] [i_19])) && (((/* implicit */_Bool) arr_27 [i_18] [i_18] [i_18] [i_18] [i_19] [i_19 + 2] [i_19]))))) >> (((max((max((((/* implicit */int) arr_11 [i_17] [i_17] [i_18] [i_19])), (var_8))), (((/* implicit */int) ((arr_63 [i_18]) > (((/* implicit */int) arr_2 [i_17]))))))) - (43571)))));
            }
            /* vectorizable */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                /* LoopSeq 3 */
                for (signed char i_21 = 0; i_21 < 19; i_21 += 2) /* same iter space */
                {
                    var_35 = ((/* implicit */unsigned long long int) (-(arr_33 [i_17] [i_17] [i_17])));
                    /* LoopSeq 1 */
                    for (int i_22 = 2; i_22 < 17; i_22 += 2) 
                    {
                        arr_81 [i_17] [i_17] [i_17] [i_17] [i_17] = ((/* implicit */long long int) ((((/* implicit */int) arr_32 [i_17] [i_17] [i_21])) * (((/* implicit */int) arr_10 [i_22] [(short)14] [(signed char)10] [i_22] [i_22 + 2] [i_22]))));
                        arr_82 [13U] [i_18] [(short)0] [13U] [i_18] [13U] = (~(((((arr_22 [i_17] [i_18] [i_20] [i_17] [i_22] [i_17] [i_22]) + (2147483647))) << (((arr_7 [i_22]) - (1443720012))))));
                        var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_17] [i_22 + 2] [i_22 + 2] [i_22 + 2] [i_20] [i_21] [i_20])) && (((/* implicit */_Bool) var_5))));
                        var_37 = ((/* implicit */short) var_3);
                    }
                    var_38 = ((/* implicit */short) ((((/* implicit */_Bool) arr_77 [i_18] [i_18] [i_18] [i_18])) ? (((/* implicit */long long int) arr_22 [i_17] [i_18] [i_18] [i_17] [i_20] [i_21] [i_21])) : (var_9)));
                }
                for (signed char i_23 = 0; i_23 < 19; i_23 += 2) /* same iter space */
                {
                    var_39 *= ((/* implicit */signed char) ((arr_27 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20] [(unsigned short)5]) < (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1)))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_24 = 1; i_24 < 17; i_24 += 2) 
                    {
                        arr_89 [i_17] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) -591173770)) ? (((/* implicit */int) (signed char)-40)) : (963901395)));
                        var_40 = ((/* implicit */int) (((+(var_2))) | (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_24] [i_24 + 1] [i_24] [i_24] [i_24])))));
                    }
                    for (int i_25 = 0; i_25 < 19; i_25 += 3) 
                    {
                        var_41 = ((/* implicit */signed char) arr_34 [i_17] [i_17] [i_20] [i_17]);
                        var_42 = ((/* implicit */int) (~(((((/* implicit */long long int) ((/* implicit */int) var_1))) % (var_10)))));
                        var_43 *= ((/* implicit */signed char) arr_7 [i_23]);
                        var_44 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_11 [i_17] [i_18] [i_25] [i_23])) > (((/* implicit */int) arr_83 [i_17] [i_18])))))) > (var_2)));
                    }
                    for (int i_26 = 0; i_26 < 19; i_26 += 3) 
                    {
                        arr_95 [i_17] [i_18] [i_20] [i_26] [i_23] [i_26] = ((/* implicit */signed char) (-(((/* implicit */int) arr_78 [i_17] [i_18] [i_20]))));
                        arr_96 [i_26] [i_18] [i_18] [i_23] [i_26] = ((/* implicit */unsigned char) ((var_0) & (((/* implicit */long long int) arr_25 [i_17] [i_18] [i_20] [i_23] [i_26]))));
                        arr_97 [i_17] [i_18] [i_20] [i_26] [i_26] = ((/* implicit */signed char) ((((/* implicit */int) arr_91 [i_17] [i_18] [i_20] [i_23] [i_26] [i_26])) / (((/* implicit */int) arr_91 [i_17] [i_17] [i_18] [i_20] [i_26] [i_26]))));
                    }
                    var_45 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_17])) > (arr_14 [i_23] [i_23] [i_23] [i_23])))) ^ (((/* implicit */int) arr_78 [i_17] [i_17] [i_17]))));
                }
                for (signed char i_27 = 0; i_27 < 19; i_27 += 2) /* same iter space */
                {
                    var_46 = ((/* implicit */unsigned char) ((((var_6) << (((((/* implicit */int) arr_13 [i_17] [i_17] [(unsigned short)3] [i_17] [i_17])) - (12065))))) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_17] [i_18] [i_18] [i_27]))))))));
                    arr_101 [i_17] [i_17] [i_17] [i_20] [i_27] = ((/* implicit */signed char) ((arr_94 [i_17] [i_18] [i_20] [i_27]) + (arr_94 [i_17] [i_18] [i_17] [16U])));
                    var_47 = ((/* implicit */long long int) max((var_47), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_80 [i_17] [i_17] [i_17] [i_17] [i_17])))))));
                    arr_102 [i_17] [i_18] [i_20] [i_27] [i_27] [i_18] = ((/* implicit */unsigned short) var_10);
                }
                /* LoopSeq 2 */
                for (signed char i_28 = 2; i_28 < 17; i_28 += 3) 
                {
                    var_48 = ((/* implicit */int) (+(arr_62 [i_28 - 1])));
                    arr_105 [i_17] [i_28] [i_20] [i_28 - 1] = ((/* implicit */unsigned short) arr_79 [i_17] [i_18] [i_20]);
                    arr_106 [i_17] [i_18] [i_17] [i_17] [i_28] [(unsigned short)12] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)(-127 - 1)))))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_28 [i_17] [i_17] [i_20] [i_18] [i_20]))) & (var_9))))));
                    arr_107 [i_17] [i_28] = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_84 [i_17] [i_18] [i_20] [i_28 + 1] [i_18] [i_17])) * (((((/* implicit */long long int) ((/* implicit */int) (signed char)-74))) / (-1LL)))));
                }
                for (int i_29 = 3; i_29 < 16; i_29 += 2) 
                {
                    var_49 ^= ((/* implicit */unsigned char) arr_33 [i_17] [i_20] [i_29 + 2]);
                    var_50 = ((/* implicit */int) ((var_9) != (((/* implicit */long long int) arr_64 [i_29 - 3]))));
                }
                arr_110 [i_17] [i_18] [i_18] [18] = ((/* implicit */signed char) var_4);
            }
            var_51 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((arr_33 [3U] [i_18] [i_18]) % (var_4))) / (max((arr_22 [i_17] [i_17] [i_17] [16] [i_18] [16] [i_17]), (((/* implicit */int) arr_9 [i_17] [i_18] [i_18]))))))) ? (min((((/* implicit */unsigned int) arr_1 [i_17])), (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) min((max((var_7), (((/* implicit */short) arr_65 [i_18] [i_17] [i_17])))), (((/* implicit */short) ((((/* implicit */_Bool) arr_22 [i_17] [i_17] [i_17] [i_18] [i_18] [i_18] [i_18])) && (((/* implicit */_Bool) arr_85 [i_17] [i_17] [i_17] [i_18] [i_17] [i_18])))))))))));
            /* LoopNest 2 */
            for (short i_30 = 3; i_30 < 17; i_30 += 2) 
            {
                for (int i_31 = 3; i_31 < 17; i_31 += 1) 
                {
                    {
                        arr_116 [i_17] [i_18] [i_31] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_28 [i_30] [i_30 - 2] [i_31 - 2] [i_31] [i_31 - 3]), (((/* implicit */unsigned short) arr_76 [i_17] [i_17]))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)73))))) : (min((((var_5) | (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_113 [i_31] [i_31] [i_31] [i_30 - 2] [i_18] [i_17])))))))));
                        arr_117 [i_17] [i_17] [i_17] [i_31] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_17] [i_18] [i_17] [i_31 + 1] [i_31])) && (((/* implicit */_Bool) arr_25 [i_17] [i_17] [i_18] [i_30] [i_30]))))) < (min((arr_25 [i_17] [i_17] [i_17] [i_17] [i_17]), (arr_25 [i_17] [i_17] [i_17] [i_17] [i_17])))));
                    }
                } 
            } 
            var_52 = ((/* implicit */long long int) min((min((max((arr_108 [i_17] [i_17] [i_17]), (((/* implicit */unsigned long long int) arr_62 [i_18])))), (((/* implicit */unsigned long long int) max((arr_34 [5LL] [5LL] [(unsigned char)0] [18LL]), (((/* implicit */unsigned short) arr_76 [i_17] [1ULL]))))))), (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (unsigned char)0)))), (max((((/* implicit */int) arr_10 [i_17] [i_18] [(unsigned short)0] [i_18] [(unsigned short)0] [i_18])), (arr_25 [i_17] [i_17] [i_18] [i_18] [i_18]))))))));
        }
        var_53 ^= ((/* implicit */long long int) arr_27 [i_17] [(unsigned short)5] [i_17] [i_17] [(unsigned short)5] [(unsigned short)5] [i_17]);
        var_54 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_17])) ? (((/* implicit */long long int) max((arr_86 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]), (arr_86 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17] [i_17])))) : (var_9)));
    }
    var_55 = ((/* implicit */unsigned short) ((((var_9) + (9223372036854775807LL))) >> (((var_8) + (650387100)))));
    var_56 = ((/* implicit */int) var_10);
}
