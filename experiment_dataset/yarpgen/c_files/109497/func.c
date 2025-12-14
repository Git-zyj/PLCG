/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109497
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
    var_10 = ((/* implicit */int) var_0);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            var_11 = ((/* implicit */signed char) var_7);
            var_12 = (~(((((/* implicit */_Bool) -249762240)) ? (((/* implicit */long long int) 652756091)) : (arr_2 [3ULL] [i_1]))));
            arr_5 [i_0] [i_1] [i_1] = ((/* implicit */int) arr_0 [i_0] [i_1]);
        }
        for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            /* LoopSeq 2 */
            for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                arr_14 [i_3] [i_3] [i_3] &= ((/* implicit */signed char) ((((/* implicit */_Bool) -249762240)) ? (((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)15359)) : (((/* implicit */int) (signed char)8)))), (((/* implicit */int) (signed char)12))))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned int) 249762239)) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)8))) * (0U)))))));
                arr_15 [i_0] [i_2] = (~(arr_13 [i_0] [i_0] [15ULL] [i_2]));
            }
            for (short i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                arr_18 [i_4] = ((/* implicit */signed char) ((unsigned char) min((var_8), (var_4))));
                var_13 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_7 [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : ((~(0U)))));
                arr_19 [i_0] [i_0] = arr_12 [i_0] [i_4];
            }
            var_14 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))));
            /* LoopSeq 1 */
            for (short i_5 = 0; i_5 < 20; i_5 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_6 = 2; i_6 < 19; i_6 += 2) 
                {
                    arr_27 [i_5] [i_5] [i_5] [i_2] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) 291334684)) ? (var_4) : (((/* implicit */unsigned long long int) arr_26 [i_6 + 1] [12LL] [i_5] [15LL] [i_0])))))))));
                    var_15 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) 4178484870U)) ? (((/* implicit */unsigned long long int) 936707219U)) : (5847625317185820252ULL))) != (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_0)) ? (arr_13 [i_0] [i_0] [i_0] [i_0]) : (var_5))))))));
                    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((unsigned long long int) arr_12 [i_2] [i_6 - 2])))));
                }
                for (unsigned char i_7 = 0; i_7 < 20; i_7 += 1) 
                {
                    arr_30 [i_7] [i_5] [i_5] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_11 [i_0] [i_2] [i_5] [i_7]))));
                    arr_31 [i_0] [i_2] [i_2] [(unsigned char)0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? ((+(((unsigned int) var_5)))) : (var_3)));
                }
                for (long long int i_8 = 1; i_8 < 17; i_8 += 4) 
                {
                    arr_34 [i_8] [8LL] [12ULL] [i_5] [12ULL] [i_8] = (~(((((((/* implicit */_Bool) var_9)) ? (arr_25 [i_0] [(unsigned short)1] [i_2] [i_5] [i_5] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) ^ (((((/* implicit */long long int) ((/* implicit */int) (short)16796))) & (arr_24 [(unsigned char)1] [i_2] [i_2] [i_0] [(unsigned char)1]))))));
                    var_17 = ((/* implicit */unsigned long long int) 858299042);
                }
                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) arr_29 [i_0] [i_2] [i_5]))));
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 20; i_9 += 2) 
                {
                    for (long long int i_10 = 2; i_10 < 19; i_10 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */int) arr_22 [19LL] [i_9]);
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (signed char)(-127 - 1)))) ? (((/* implicit */int) min((((/* implicit */short) var_2)), ((short)-4973)))) : (((/* implicit */int) var_2))));
                            arr_43 [i_9] [i_2] [i_2] [i_2] [i_10] |= ((/* implicit */short) (~((((!(((/* implicit */_Bool) 20ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_8 [i_0] [i_0] [(short)4])), (var_1))))) : (arr_24 [i_0] [i_2] [i_2] [i_2] [i_2])))));
                            var_21 = ((/* implicit */short) (+((~(((/* implicit */int) (signed char)0))))));
                            arr_44 [i_0] [i_0] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) arr_0 [i_10] [i_10 - 1]))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-13999))))) ? (arr_23 [i_10] [(signed char)2] [i_10 - 1] [i_10] [i_10 - 1]) : (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_35 [i_0] [i_0] [i_0] [i_0]) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-15465)) ? (65528U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)12))))))))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) (signed char)-1)))));
            }
            var_23 = ((/* implicit */unsigned long long int) var_3);
        }
        for (long long int i_11 = 0; i_11 < 20; i_11 += 3) 
        {
            /* LoopSeq 2 */
            for (long long int i_12 = 3; i_12 < 16; i_12 += 2) 
            {
                var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_0] [12LL] [12LL] [12ULL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_0] [2ULL] [i_12] [i_12]))) : (1375451476879929837LL))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_13 = 0; i_13 < 20; i_13 += 1) 
                {
                    var_25 *= ((/* implicit */short) arr_26 [i_13] [i_11] [i_0] [i_11] [i_0]);
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_16 [i_12 + 2] [i_12 + 2]))));
                }
                arr_53 [i_0] [i_11] [i_12 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) var_9)) ? (arr_7 [i_0]) : (((/* implicit */int) arr_16 [i_11] [i_11]))))));
                /* LoopSeq 2 */
                for (long long int i_14 = 1; i_14 < 18; i_14 += 4) 
                {
                    var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) ((short) (~(var_8)))))));
                    var_28 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_32 [i_12] [i_14])) ? (arr_21 [i_14] [i_14] [i_14 + 1]) : (((/* implicit */long long int) arr_22 [i_12 + 4] [i_14 + 2]))))));
                    var_29 *= (+(((((/* implicit */_Bool) (unsigned char)122)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (arr_25 [i_12 + 3] [i_12 + 3] [i_14 + 1] [i_14 - 1] [i_14 - 1] [i_14 - 1]))));
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_28 [i_0] [i_12] [i_14])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */long long int) arr_4 [i_0]))));
                }
                for (unsigned int i_15 = 1; i_15 < 16; i_15 += 3) 
                {
                    var_31 = ((/* implicit */long long int) arr_8 [i_15] [i_12] [i_0]);
                    arr_62 [i_12] [i_12] [i_12] [15LL] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((+(((/* implicit */int) arr_55 [i_0] [i_0])))) + (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((unsigned int) (short)-15465))) : ((~(2248231536237700296ULL)))));
                }
                /* LoopNest 2 */
                for (short i_16 = 0; i_16 < 20; i_16 += 1) 
                {
                    for (unsigned char i_17 = 1; i_17 < 18; i_17 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) (+(arr_32 [i_12 + 3] [i_12 + 3]))))));
                            var_33 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))));
                        }
                    } 
                } 
            }
            for (int i_18 = 0; i_18 < 20; i_18 += 2) 
            {
                arr_71 [i_0] = arr_61 [i_18] [14LL] [i_0] [(short)18] [i_0];
                var_34 -= ((/* implicit */unsigned char) ((unsigned int) arr_70 [i_0] [(short)11] [6ULL]));
            }
            arr_72 [i_0] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_11 [i_0] [8U] [1U] [i_11])), (arr_49 [i_11]))))) != (((((/* implicit */_Bool) arr_22 [(unsigned short)18] [i_11])) ? (var_4) : (((/* implicit */unsigned long long int) arr_32 [i_0] [i_0])))))) ? (-945801088447336356LL) : (((/* implicit */long long int) ((/* implicit */int) arr_58 [i_0] [i_0] [i_11] [i_11] [i_0])))));
            /* LoopNest 2 */
            for (unsigned int i_19 = 0; i_19 < 20; i_19 += 1) 
            {
                for (short i_20 = 1; i_20 < 19; i_20 += 2) 
                {
                    {
                        arr_77 [i_0] [i_0] |= ((/* implicit */int) ((unsigned int) (+(((/* implicit */int) arr_73 [i_0] [i_19])))));
                        arr_78 [(short)11] [i_20] [(short)14] [(short)14] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_47 [i_20 - 1] [i_20 + 1] [i_20 - 1] [i_20 - 1])) && (((/* implicit */_Bool) arr_47 [i_20 - 1] [i_20 - 1] [i_20 + 1] [i_20 - 1]))))) : (((/* implicit */int) ((((/* implicit */long long int) ((unsigned int) arr_8 [i_19] [i_11] [i_0]))) > (arr_50 [i_20 + 1] [i_20] [i_20] [i_20 - 1] [i_20]))))));
                    }
                } 
            } 
        }
        var_35 ^= (+(((/* implicit */int) arr_67 [i_0] [i_0] [i_0])));
        arr_79 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_39 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_67 [i_0] [(short)14] [i_0])) : (((/* implicit */int) var_0))))) <= (arr_33 [i_0] [i_0] [i_0] [(short)3])))))));
        var_36 = ((/* implicit */short) arr_4 [i_0]);
    }
    for (short i_21 = 0; i_21 < 12; i_21 += 2) 
    {
        var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_67 [i_21] [i_21] [i_21])) ? (arr_35 [i_21] [i_21] [i_21] [i_21]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [(unsigned char)0] [i_21] [(unsigned char)0] [7ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_82 [i_21]))) : (max((((/* implicit */unsigned int) arr_46 [i_21])), (arr_6 [i_21]))))))));
        /* LoopSeq 2 */
        for (int i_22 = 4; i_22 < 10; i_22 += 3) 
        {
            arr_85 [i_21] [i_21] [i_22] = ((/* implicit */unsigned int) (+((+(arr_51 [17U] [i_22 - 1] [i_22] [i_21] [i_21])))));
            var_38 = ((/* implicit */short) (+(arr_36 [i_21] [i_22 - 1] [i_22 - 2])));
            var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_40 [i_21] [i_22])) && (((/* implicit */_Bool) arr_40 [i_21] [i_22 + 1]))))))));
            var_40 = ((/* implicit */unsigned char) (+(arr_57 [i_22 - 2] [i_22] [i_22 - 4] [i_21] [i_21])));
            var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_66 [i_21] [i_21] [i_21] [19LL] [i_22]))) ? (arr_84 [i_21] [i_22 + 2] [i_22 + 1]) : (arr_84 [i_22 - 1] [i_21] [i_21])));
        }
        for (short i_23 = 0; i_23 < 12; i_23 += 4) 
        {
            var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_21] [i_21] [i_21] [i_23] [i_21] [i_23])) ? (max((arr_25 [i_21] [i_21] [i_21] [i_21] [i_23] [i_23]), (arr_25 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_25 [i_21] [i_21] [i_21] [i_23] [i_23] [i_23]))))));
            /* LoopSeq 1 */
            for (signed char i_24 = 0; i_24 < 12; i_24 += 1) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_25 = 1; i_25 < 11; i_25 += 4) 
                {
                    arr_93 [i_25 + 1] [i_25 - 1] [i_24] [0LL] [i_23] [i_21] = ((/* implicit */int) (!(((/* implicit */_Bool) var_9))));
                    var_43 = ((/* implicit */unsigned char) var_9);
                    var_44 += ((/* implicit */short) (~(23U)));
                    arr_94 [i_24] [i_24] [(unsigned char)9] [(signed char)11] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_2 [i_21] [i_23])) - (((((/* implicit */_Bool) arr_55 [i_21] [i_21])) ? (13750663609911241015ULL) : (((/* implicit */unsigned long long int) arr_6 [i_21]))))));
                }
                for (short i_26 = 0; i_26 < 12; i_26 += 4) /* same iter space */
                {
                    var_45 = ((/* implicit */long long int) max((var_3), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)1)) : (((/* implicit */int) (short)29507)))))));
                    /* LoopSeq 1 */
                    for (long long int i_27 = 0; i_27 < 12; i_27 += 2) 
                    {
                        arr_101 [i_21] [i_21] [i_24] [6] [i_24] = ((/* implicit */unsigned char) arr_22 [i_23] [i_27]);
                        var_46 -= ((/* implicit */short) min((3170120470U), (4294967295U)));
                        arr_102 [i_21] [i_26] = ((/* implicit */unsigned long long int) (~(677714928U)));
                    }
                    var_47 = ((/* implicit */unsigned long long int) max((var_47), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_21])) ? (((/* implicit */unsigned long long int) 2906241039U)) : (arr_66 [i_26] [i_26] [17LL] [17LL] [(unsigned char)16])))) ? ((~(((/* implicit */int) arr_3 [i_23] [i_24] [i_26])))) : (((/* implicit */int) var_0))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_28 = 0; i_28 < 12; i_28 += 2) 
                    {
                        var_48 = ((/* implicit */unsigned int) (short)16810);
                        arr_107 [i_28] [i_21] [i_24] [i_21] [i_21] = ((/* implicit */signed char) arr_60 [16] [i_26] [i_24] [i_21] [i_21] [i_21]);
                        var_49 -= ((/* implicit */unsigned long long int) (short)26389);
                    }
                }
                /* vectorizable */
                for (short i_29 = 0; i_29 < 12; i_29 += 4) /* same iter space */
                {
                    var_50 = ((/* implicit */signed char) arr_32 [9ULL] [9ULL]);
                    arr_110 [i_21] [i_21] [i_21] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(var_3))))));
                    arr_111 [i_23] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_76 [i_21] [i_21] [(unsigned char)4] [i_21] [(unsigned char)4] [(unsigned char)4])) - (((/* implicit */int) var_2))));
                    arr_112 [i_23] [i_29] = ((/* implicit */int) arr_89 [i_29] [i_24] [i_21] [i_21]);
                    /* LoopSeq 1 */
                    for (long long int i_30 = 1; i_30 < 9; i_30 += 2) 
                    {
                        var_51 -= ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)0)) == (((/* implicit */int) var_9))));
                        arr_115 [i_30] [i_23] [i_23] [i_23] [i_23] [i_23] = ((/* implicit */short) var_5);
                        arr_116 [i_30] [i_23] [i_30] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_109 [i_30 + 2]))));
                    }
                }
                /* LoopNest 2 */
                for (int i_31 = 0; i_31 < 12; i_31 += 1) 
                {
                    for (signed char i_32 = 0; i_32 < 12; i_32 += 1) 
                    {
                        {
                            arr_124 [i_32] [i_23] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_73 [i_24] [i_21])) << (((max((((/* implicit */unsigned int) var_2)), (var_5))) - (2934813439U)))))) ? (((/* implicit */long long int) 152936035U)) : (min((1375451476879929837LL), (((/* implicit */long long int) arr_87 [i_21] [i_31]))))));
                            var_52 = max((((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) arr_37 [i_21] [i_21] [i_24] [(signed char)18] [i_32]))) & (arr_80 [i_23] [i_21]))) != (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)17838)) : (((/* implicit */int) (unsigned char)64)))))))), (min((arr_52 [i_21] [i_23] [i_24] [i_31] [i_32]), (arr_52 [i_21] [i_23] [i_24] [i_31] [7]))));
                            arr_125 [i_21] [i_23] [i_24] [i_32] [i_32] [i_24] [i_24] = ((/* implicit */unsigned long long int) 16744448LL);
                        }
                    } 
                } 
            }
            var_53 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_108 [i_21] [i_23] [i_23])))) : (((-5616103769442088894LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)122)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)-15725)) : (((/* implicit */int) arr_8 [i_23] [i_21] [i_21]))))) ? (((/* implicit */unsigned long long int) arr_64 [i_21] [i_23] [i_21] [i_23])) : (((var_4) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28645))))))) : (((/* implicit */unsigned long long int) 2196554991805852862LL))));
        }
        arr_126 [3ULL] = ((/* implicit */long long int) var_8);
    }
    var_54 = ((/* implicit */short) ((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (short)(-32767 - 1))))) ? (((/* implicit */int) (unsigned short)46538)) : (((/* implicit */int) ((((var_4) == (var_4))) && (((/* implicit */_Bool) var_3)))))));
    var_55 = ((/* implicit */signed char) var_4);
    var_56 = ((/* implicit */unsigned char) 17666170285766049136ULL);
}
