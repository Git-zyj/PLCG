/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170384
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */_Bool) (unsigned char)3);
        var_21 = ((/* implicit */_Bool) min((min((((/* implicit */long long int) arr_3 [i_0])), (var_18))), (((/* implicit */long long int) 3143205035U))));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_11 [i_1] [(short)20] [i_1] [i_1] = ((/* implicit */long long int) min((((min((arr_0 [i_1] [i_0]), (((/* implicit */unsigned long long int) var_15)))) - (((/* implicit */unsigned long long int) ((arr_10 [i_0] [12LL] [i_2]) / (((/* implicit */long long int) arr_2 [(signed char)1] [i_2]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1 + 1] [i_1 + 3] [i_1 - 1])) ? (((/* implicit */int) arr_8 [i_1 + 3] [i_1 + 2])) : (((/* implicit */int) arr_8 [i_1 - 1] [i_1 + 1])))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        var_22 += (+(((((/* implicit */_Bool) arr_10 [i_0] [i_1 + 2] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (arr_2 [i_0] [i_1 + 3]))));
                        var_23 = ((((/* implicit */_Bool) arr_12 [i_3] [i_2] [(_Bool)1] [i_0] [i_0])) ? (arr_10 [i_1 - 1] [i_1 + 3] [i_1 + 3]) : (((((/* implicit */_Bool) -964618725)) ? (var_18) : (var_18))));
                    }
                }
            } 
        } 
        arr_16 [i_0] = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4131851007U)) ? (arr_3 [i_0]) : (4131851007U)))), (max((((/* implicit */unsigned long long int) arr_2 [(_Bool)1] [i_0])), (1780321804555526732ULL))))), (((/* implicit */unsigned long long int) arr_2 [i_0] [(signed char)5]))));
    }
    var_24 *= ((/* implicit */unsigned int) var_0);
    /* LoopSeq 4 */
    for (long long int i_4 = 4; i_4 < 24; i_4 += 3) 
    {
        var_25 = ((/* implicit */unsigned long long int) var_4);
        var_26 = ((/* implicit */long long int) arr_19 [i_4]);
        arr_20 [i_4] = ((/* implicit */long long int) arr_17 [i_4 - 2] [(_Bool)1]);
        var_27 = ((/* implicit */short) min((var_14), ((-(var_18)))));
        /* LoopSeq 2 */
        for (int i_5 = 4; i_5 < 24; i_5 += 4) 
        {
            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_4 + 1] [i_4 - 3])) || (((/* implicit */_Bool) max((arr_17 [i_4 + 1] [i_4 - 3]), (arr_17 [i_4] [i_5 - 2]))))));
            arr_23 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_18) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_4] [(unsigned short)0])))))))))) : ((+(arr_17 [i_4 - 4] [i_5 - 3])))));
            var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_18 [i_4])) ? (((((/* implicit */_Bool) arr_22 [i_5])) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_5]))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)115))))) / (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_17 [i_4] [(unsigned char)16])) ? (((/* implicit */int) (short)-18651)) : (var_16)))))))))));
            var_30 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)20))))) * (((((/* implicit */_Bool) 1780321804555526746ULL)) ? (var_19) : (arr_17 [2ULL] [i_5]))))))));
        }
        for (long long int i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (long long int i_7 = 0; i_7 < 25; i_7 += 2) 
            {
                arr_28 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_24 [i_4])) ? (arr_24 [i_4]) : (arr_24 [i_4])));
                arr_29 [i_4] [i_4] [i_4] [i_4 + 1] = ((/* implicit */_Bool) arr_25 [i_4 - 4] [i_4 - 4]);
                var_31 = ((/* implicit */long long int) ((var_5) ? (arr_17 [i_4 - 1] [i_4 - 3]) : (((/* implicit */unsigned long long int) var_2))));
            }
            /* vectorizable */
            for (unsigned int i_8 = 0; i_8 < 25; i_8 += 4) 
            {
                var_32 = ((/* implicit */long long int) (-(((/* implicit */int) var_0))));
                var_33 |= ((/* implicit */_Bool) arr_22 [i_6]);
                var_34 = ((/* implicit */signed char) 964618724);
            }
            for (int i_9 = 3; i_9 < 23; i_9 += 4) 
            {
                arr_34 [i_4] [i_4] = ((/* implicit */long long int) min((arr_32 [i_4] [3]), (((/* implicit */unsigned long long int) min((((/* implicit */short) (!(var_5)))), (var_10))))));
                /* LoopSeq 2 */
                for (short i_10 = 1; i_10 < 21; i_10 += 4) 
                {
                    arr_38 [i_4] [i_4] [(short)20] [i_4] = ((((/* implicit */_Bool) ((var_5) ? (arr_30 [i_9 + 2] [2LL] [i_4] [i_4 - 1]) : (((/* implicit */int) max((var_6), (((/* implicit */unsigned short) (unsigned char)34)))))))) ? ((+(((/* implicit */int) var_12)))) : ((-((+(-964618724))))));
                    arr_39 [i_4] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12672868991038222054ULL)) ? (((/* implicit */int) (_Bool)1)) : (arr_30 [i_10] [i_10] [i_4] [i_10])))), (min((((((/* implicit */_Bool) var_2)) ? (arr_32 [i_4] [i_4]) : (((/* implicit */unsigned long long int) arr_27 [(_Bool)1] [(_Bool)1] [i_4] [i_10])))), (((/* implicit */unsigned long long int) arr_37 [i_10] [i_10] [i_10]))))));
                    arr_40 [i_4] [i_6] [i_9] [i_10] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(arr_26 [i_9 + 1] [i_10 + 4] [i_4 - 4]))))));
                }
                /* vectorizable */
                for (unsigned char i_11 = 0; i_11 < 25; i_11 += 1) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) ((((unsigned long long int) arr_35 [24LL] [i_6] [(_Bool)0])) < (((/* implicit */unsigned long long int) ((int) arr_21 [i_4] [i_4]))))))));
                        var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7713260090995411949LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_17 [5U] [i_9])))) ? (((/* implicit */int) arr_44 [24] [i_6] [24LL] [(short)11] [i_11] [i_11] [16LL])) : (((((/* implicit */_Bool) arr_43 [13LL] [i_4] [13LL])) ? (((/* implicit */int) (unsigned short)5707)) : (arr_42 [i_4] [i_4] [8ULL] [i_11] [i_12] [(signed char)24])))));
                    }
                    for (unsigned long long int i_13 = 1; i_13 < 24; i_13 += 2) 
                    {
                        var_37 = arr_26 [(_Bool)1] [0LL] [(short)10];
                        var_38 = ((/* implicit */unsigned char) (+(7681365479553604482LL)));
                        var_39 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_24 [i_4]))))));
                    }
                    for (unsigned int i_14 = 0; i_14 < 25; i_14 += 2) 
                    {
                        var_40 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) arr_44 [20U] [(unsigned char)4] [20] [i_11] [i_14] [i_11] [i_11]))) ? (((/* implicit */long long int) arr_41 [i_4] [i_6] [i_9] [i_4 - 2] [(unsigned char)12])) : (((((/* implicit */_Bool) 399668531)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_24 [i_6])))));
                        var_41 = ((/* implicit */int) min((var_41), (((arr_35 [i_4 - 4] [i_14] [i_9 + 1]) + (arr_35 [i_4 - 4] [i_6] [i_9 + 2])))));
                        var_42 = ((/* implicit */unsigned int) min((var_42), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_33 [i_4] [i_14] [i_4])))) ? (((/* implicit */unsigned long long int) var_4)) : (var_3))))));
                        var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)39))))) ? (887980583770450817LL) : (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_4] [i_4 - 3] [i_4 - 1] [i_9 - 2] [i_14]))))))));
                    }
                    var_44 = ((/* implicit */int) min((var_44), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((long long int) (signed char)-77))) > (arr_32 [i_6] [i_4 - 4]))))));
                    arr_49 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4] = ((/* implicit */unsigned short) (~(((arr_36 [i_4] [i_4] [i_4] [(short)11] [i_4]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)140)))))));
                    var_45 = ((/* implicit */int) ((var_2) > (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                }
                /* LoopNest 2 */
                for (unsigned short i_15 = 0; i_15 < 25; i_15 += 3) 
                {
                    for (unsigned char i_16 = 0; i_16 < 25; i_16 += 1) 
                    {
                        {
                            var_46 += ((/* implicit */unsigned int) ((((var_8) - (((/* implicit */long long int) max((163116289U), (((/* implicit */unsigned int) 237554149))))))) | (((/* implicit */long long int) -237554149))));
                            arr_55 [(short)15] [(short)15] [(_Bool)1] [i_4] [(short)15] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) (short)-14938)) ? (18446744073709551593ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_4 - 2] [i_4] [12ULL]))))));
                            arr_56 [i_4] [i_6] [i_4] [i_15] [i_16] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) arr_53 [18LL] [i_6] [(short)18] [i_15] [8LL])) << (((((/* implicit */int) (short)32743)) - (32738)))))) == (((((/* implicit */_Bool) arr_33 [i_4] [i_4] [i_15])) ? (((/* implicit */long long int) 0U)) : (5331682326703244635LL)))))), (min((min((arr_19 [(_Bool)1]), (((/* implicit */unsigned int) var_15)))), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)53)))))))));
                        }
                    } 
                } 
            }
            arr_57 [(signed char)3] [i_4] = ((/* implicit */int) 16666422269154024911ULL);
            var_47 = ((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_4] [i_4] [i_6])) ? (arr_50 [(_Bool)1] [i_4] [i_6] [i_6]) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((short) var_5))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32744))) : (arr_26 [i_4] [10U] [i_4]))))))));
        }
    }
    /* vectorizable */
    for (long long int i_17 = 0; i_17 < 12; i_17 += 4) 
    {
        var_48 ^= ((/* implicit */short) (_Bool)0);
        /* LoopNest 2 */
        for (unsigned long long int i_18 = 0; i_18 < 12; i_18 += 2) 
        {
            for (unsigned int i_19 = 1; i_19 < 11; i_19 += 2) 
            {
                {
                    var_49 = (((!(((/* implicit */_Bool) var_3)))) || (var_5));
                    var_50 = ((/* implicit */unsigned int) (+(arr_62 [i_19 + 1] [i_19 + 1] [i_19 - 1])));
                    var_51 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_44 [i_17] [i_17] [i_18] [i_18] [i_18] [i_19] [i_19 + 1])) > (((/* implicit */int) arr_44 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]))));
                    var_52 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_16)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_17] [i_18]))))) + (((/* implicit */long long int) ((/* implicit */int) ((short) arr_65 [i_17] [i_19 - 1] [i_19]))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_20 = 3; i_20 < 10; i_20 += 1) 
        {
            var_53 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_9 [11LL] [i_20] [i_17] [i_17]) ? (1630419891U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_17] [i_17])))))) ? (((/* implicit */long long int) arr_41 [i_20 + 1] [i_20] [i_20] [i_20 - 1] [i_20 - 3])) : (((((/* implicit */_Bool) var_17)) ? (arr_33 [i_17] [i_20] [i_20]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
            /* LoopNest 2 */
            for (int i_21 = 0; i_21 < 12; i_21 += 1) 
            {
                for (long long int i_22 = 0; i_22 < 12; i_22 += 3) 
                {
                    {
                        var_54 = ((/* implicit */signed char) ((arr_45 [i_17] [i_20] [i_20 - 1] [(_Bool)1] [i_20 + 2]) & (((/* implicit */unsigned long long int) arr_67 [i_20]))));
                        var_55 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)73))));
                        arr_73 [i_20] = ((/* implicit */int) ((((((/* implicit */_Bool) -4987353442176725048LL)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (signed char)56))))) == (((/* implicit */long long int) ((((/* implicit */_Bool) arr_64 [i_21] [i_17] [(short)4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_11))))));
                    }
                } 
            } 
            arr_74 [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2076330607)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-32743))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_51 [i_20] [i_20])));
            var_56 = ((/* implicit */short) min((var_56), (((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_17] [i_20 - 2])) ? (8094985903316353036ULL) : (((/* implicit */unsigned long long int) arr_1 [i_17] [i_17])))))));
        }
    }
    /* vectorizable */
    for (unsigned char i_23 = 0; i_23 < 11; i_23 += 1) 
    {
        arr_79 [i_23] [i_23] = ((/* implicit */long long int) (+((+(((/* implicit */int) arr_12 [i_23] [i_23] [i_23] [i_23] [i_23]))))));
        var_57 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_15)))) && (((_Bool) var_7))));
        /* LoopSeq 1 */
        for (_Bool i_24 = 0; i_24 < 0; i_24 += 1) 
        {
            arr_82 [i_23] [i_23] [i_24] = ((/* implicit */signed char) ((int) ((arr_0 [i_23] [(signed char)13]) * (var_19))));
            var_58 = ((/* implicit */long long int) (+(((2664547405U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
            var_59 = ((int) ((((/* implicit */_Bool) var_17)) ? (-4987353442176725041LL) : (var_8)));
            var_60 += ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_24] [i_24 + 1]))) : (var_11)))));
        }
        var_61 = ((/* implicit */short) min((var_61), (((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_23] [22U] [i_23])) ? (arr_10 [i_23] [i_23] [i_23]) : (((/* implicit */long long int) arr_27 [i_23] [i_23] [10] [i_23])))))));
        arr_83 [i_23] = ((/* implicit */_Bool) (+(((/* implicit */int) var_9))));
    }
    /* vectorizable */
    for (long long int i_25 = 4; i_25 < 20; i_25 += 2) 
    {
        arr_86 [i_25 - 2] [17] = ((/* implicit */signed char) (-(arr_17 [i_25] [i_25])));
        var_62 *= ((/* implicit */unsigned int) (((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_25] [i_25] [10LL]))) : (var_8))) << ((((~(((/* implicit */int) (signed char)(-127 - 1))))) - (127)))));
        var_63 = ((/* implicit */signed char) arr_44 [i_25] [i_25 - 2] [i_25] [i_25] [i_25] [i_25] [(unsigned char)3]);
    }
}
