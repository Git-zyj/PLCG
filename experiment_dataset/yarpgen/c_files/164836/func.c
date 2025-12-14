/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164836
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
    var_17 = ((/* implicit */short) var_13);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)95)) && (((/* implicit */_Bool) (unsigned char)32))));
        var_19 -= ((/* implicit */unsigned char) arr_2 [i_0] [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned char)224)))) : (arr_1 [(unsigned char)2] [i_0])));
    }
    for (unsigned char i_1 = 3; i_1 < 14; i_1 += 4) 
    {
        arr_6 [i_1] [(unsigned char)11] = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned char) arr_5 [i_1 + 4])), (arr_4 [i_1] [i_1])))) <= (((/* implicit */int) (unsigned char)211))))), (((((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1])) * (((/* implicit */int) arr_4 [i_1 + 3] [i_1 + 4]))))));
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                for (long long int i_4 = 3; i_4 < 16; i_4 += 4) 
                {
                    {
                        arr_14 [i_1] [i_4] [i_2] [(unsigned char)10] [i_1] [i_4 + 1] = ((unsigned char) ((((((/* implicit */int) (unsigned char)101)) == (((/* implicit */int) arr_5 [(short)1])))) ? (((((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_3] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [(unsigned char)6] [(unsigned char)6]))) : (arr_7 [(unsigned char)15]))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_9 [i_4] [i_4])))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 3; i_5 < 14; i_5 += 4) 
                        {
                            arr_18 [i_1 + 2] [i_1] [i_4] [i_1] [i_1 + 3] [i_1] = ((/* implicit */signed char) (~(((arr_7 [i_5 + 3]) | (arr_7 [i_1 - 1])))));
                            arr_19 [i_1 + 2] [i_1 - 1] [i_1] [i_1 + 2] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) var_12)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */int) (short)-1)) >= (((/* implicit */int) (unsigned char)93)))))))) : ((-(((((/* implicit */_Bool) arr_16 [i_3] [i_4] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (short)32749))) : (arr_13 [i_4] [i_4])))))));
                            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) max(((((~(arr_7 [i_1]))) << (((((/* implicit */int) max((((/* implicit */short) (unsigned char)166)), (arr_10 [i_1] [i_2] [i_3] [8LL])))) - (166))))), (((/* implicit */long long int) ((unsigned char) (short)-31018))))))));
                            var_21 = ((/* implicit */long long int) ((short) (unsigned char)225));
                        }
                    }
                } 
            } 
        } 
        arr_20 [12LL] [12LL] = ((/* implicit */unsigned char) (+(((/* implicit */int) max((arr_4 [i_1] [i_1 - 2]), (var_4))))));
    }
    /* vectorizable */
    for (long long int i_6 = 1; i_6 < 11; i_6 += 3) 
    {
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_6 + 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -8703143560332595875LL)) ? (((/* implicit */int) arr_16 [i_6] [i_6] [i_6 + 1])) : (((/* implicit */int) arr_17 [i_6] [i_6] [i_6] [i_6] [i_6]))))) : (arr_7 [i_6 - 1])));
        /* LoopSeq 3 */
        for (signed char i_7 = 0; i_7 < 12; i_7 += 1) 
        {
            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)132)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (-127421034313205054LL))))));
            /* LoopNest 2 */
            for (unsigned char i_8 = 3; i_8 < 11; i_8 += 4) 
            {
                for (long long int i_9 = 1; i_9 < 11; i_9 += 4) 
                {
                    {
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_6 + 1])) ? ((+(((/* implicit */int) (signed char)-49)))) : (((/* implicit */int) var_7))));
                        arr_30 [(signed char)4] [i_9] [i_8] [i_8] [i_6] [i_6] = ((unsigned char) arr_13 [i_6] [i_6]);
                    }
                } 
            } 
            arr_31 [i_6] [i_7] [(unsigned char)9] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) arr_16 [i_6 + 1] [i_6] [i_6]))))));
            /* LoopSeq 2 */
            for (unsigned char i_10 = 0; i_10 < 12; i_10 += 2) 
            {
                /* LoopSeq 1 */
                for (short i_11 = 0; i_11 < 12; i_11 += 3) 
                {
                    arr_37 [i_11] [(signed char)0] [i_6] [i_6] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)32))));
                    arr_38 [i_6] = ((/* implicit */unsigned char) arr_0 [i_6 - 1]);
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_36 [i_10] [6LL] [i_6] [(unsigned char)4])) > (((/* implicit */int) (unsigned char)248)))))) == (((((/* implicit */_Bool) arr_10 [i_10] [i_10] [i_7] [(unsigned char)9])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-1LL)))));
                }
                arr_39 [i_6] [(short)5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_7])) ? (((/* implicit */int) arr_2 [i_10] [i_6 - 1])) : (((/* implicit */int) arr_21 [(unsigned char)9]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_27 [i_6 + 1] [i_6 + 1] [i_6 - 1] [i_10] [i_6 - 1] [(signed char)8])))) : (((((/* implicit */_Bool) (unsigned char)19)) ? (arr_22 [i_6] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_6] [i_7] [i_7] [i_10]))))));
                /* LoopSeq 3 */
                for (unsigned char i_12 = 0; i_12 < 12; i_12 += 4) 
                {
                    arr_42 [i_10] [i_7] [i_6] = ((unsigned char) arr_27 [i_6] [i_6 - 1] [i_6 + 1] [i_6] [i_6] [i_6]);
                    arr_43 [i_12] [i_6] [i_10] [i_7] [i_6] [(unsigned char)2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_6 - 1] [i_6] [i_6] [(unsigned char)1] [i_6 + 1])) ? (((/* implicit */int) arr_15 [i_6 - 1] [i_6 + 1] [i_6] [i_6 - 1] [i_6 - 1])) : (((/* implicit */int) arr_15 [i_6 - 1] [i_6] [i_6 - 1] [i_6 + 1] [i_6 - 1]))));
                }
                for (short i_13 = 2; i_13 < 11; i_13 += 4) 
                {
                    arr_46 [i_6] [i_6] [(short)0] [i_6] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)245))));
                    arr_47 [i_13] [i_6] [i_6] [i_6] = ((/* implicit */short) ((unsigned char) ((((/* implicit */int) var_7)) >> (((((/* implicit */int) arr_27 [i_13] [i_10] [(signed char)5] [i_7] [i_6] [i_6])) - (42))))));
                }
                for (long long int i_14 = 0; i_14 < 12; i_14 += 4) 
                {
                    arr_50 [i_6] = ((/* implicit */short) ((unsigned char) arr_22 [i_6 - 1] [i_6]));
                    arr_51 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_32 [i_6] [i_10] [i_10])) ? (((/* implicit */int) arr_27 [i_6 + 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6 + 1])) : (((((/* implicit */_Bool) arr_2 [(short)7] [(short)7])) ? (((/* implicit */int) arr_11 [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_16 [i_6] [i_6] [i_6 + 1]))))));
                    arr_52 [i_14] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)0)) / (((/* implicit */int) (short)1))));
                    var_26 = ((unsigned char) arr_41 [i_6] [i_6 - 1] [i_6] [i_6] [i_6 + 1] [i_6 - 1]);
                }
            }
            for (short i_15 = 2; i_15 < 11; i_15 += 1) 
            {
                /* LoopSeq 3 */
                for (short i_16 = 3; i_16 < 10; i_16 += 1) 
                {
                    var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_55 [i_6] [i_6] [i_7] [i_15] [(signed char)1] [i_6]) : (arr_13 [i_6] [i_6 + 1])))) ? (((arr_1 [i_7] [i_16]) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-58))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)39)) || (((/* implicit */_Bool) (unsigned char)124)))))));
                    var_28 -= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_41 [i_6 - 1] [i_6 - 1] [i_16 - 3] [i_16] [i_6 - 1] [10LL]))));
                    var_29 -= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 0LL)))) ? (((/* implicit */int) arr_26 [i_6 + 1])) : (((/* implicit */int) ((short) arr_8 [i_15 - 2] [i_7] [i_15])))));
                }
                for (unsigned char i_17 = 0; i_17 < 12; i_17 += 4) 
                {
                    arr_62 [9LL] [i_6] [i_15] [i_17] [i_7] [i_17] = arr_2 [(unsigned char)12] [i_6 - 1];
                    var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) (((+(((/* implicit */int) (short)-16)))) == (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))));
                }
                for (unsigned char i_18 = 3; i_18 < 11; i_18 += 2) 
                {
                    var_31 = ((/* implicit */long long int) ((signed char) arr_33 [i_15 - 1] [i_15 - 1] [i_15 + 1]));
                    arr_65 [1LL] [i_15 - 1] [i_15] [i_6] [i_15 - 1] [i_7] = ((/* implicit */unsigned char) arr_2 [i_6] [(short)3]);
                    /* LoopSeq 1 */
                    for (unsigned char i_19 = 1; i_19 < 9; i_19 += 4) 
                    {
                        var_32 -= ((/* implicit */short) ((signed char) arr_8 [12LL] [12LL] [12LL]));
                        arr_69 [i_18] [i_18] [i_6] [i_18] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_58 [i_6] [i_6 - 1] [(short)7] [i_6 - 1] [i_6])) ? (((/* implicit */int) ((signed char) arr_23 [i_7]))) : (((((/* implicit */int) arr_48 [i_6] [i_7] [i_15] [(unsigned char)5] [i_15] [i_7])) + (((/* implicit */int) (unsigned char)223))))));
                        var_33 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_27 [i_15 - 1] [i_15 - 1] [i_19] [i_15 - 1] [(unsigned char)6] [i_19]))));
                        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_57 [i_6 + 1] [i_15 + 1] [i_18 + 1] [i_19])) : (((/* implicit */int) arr_23 [i_6 - 1]))))))));
                    }
                }
                /* LoopSeq 4 */
                for (unsigned char i_20 = 0; i_20 < 12; i_20 += 1) 
                {
                    arr_74 [i_6] = ((/* implicit */unsigned char) arr_10 [i_20] [i_15] [i_7] [(short)4]);
                    arr_75 [i_6] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_32 [i_20] [i_15 + 1] [i_6 - 1])) || (((/* implicit */_Bool) arr_17 [i_6 - 1] [(signed char)11] [i_15 - 2] [i_15] [7LL]))));
                    var_35 -= ((/* implicit */short) ((((((/* implicit */_Bool) arr_70 [i_6 + 1] [(unsigned char)8] [i_6 + 1] [i_6])) ? (((/* implicit */int) arr_45 [i_6] [i_6])) : (((/* implicit */int) var_11)))) & (((((/* implicit */int) arr_16 [i_20] [(short)4] [i_6])) ^ (((/* implicit */int) arr_33 [i_6] [i_6] [i_6]))))));
                    arr_76 [i_6] [i_6] [i_7] [(signed char)3] [i_20] [i_6] = ((/* implicit */short) ((long long int) (unsigned char)189));
                    var_36 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_15] [i_15] [i_15 - 1] [i_15 - 2] [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)39))) : (var_2)))) ? ((~(arr_13 [i_6] [i_6]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_54 [i_6] [i_6 - 1] [i_15] [(unsigned char)0])) ? (((/* implicit */int) arr_40 [i_15] [i_6] [i_7] [i_6] [i_6])) : (((/* implicit */int) var_1))))));
                }
                for (unsigned char i_21 = 4; i_21 < 11; i_21 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_22 = 2; i_22 < 10; i_22 += 4) 
                    {
                        var_37 -= ((/* implicit */unsigned char) ((signed char) (-(((/* implicit */int) arr_79 [i_15] [i_7])))));
                        arr_81 [i_6] [i_6] [i_6] [i_21 - 2] [i_6 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (signed char)-49))));
                        var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) arr_15 [i_6] [i_7] [i_15] [i_15] [i_22 - 2]))));
                        arr_82 [i_6] [i_7] [i_15 - 2] = ((/* implicit */short) ((long long int) arr_44 [i_6]));
                        var_39 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_29 [i_6] [i_6] [i_6] [i_7]))));
                    }
                    var_40 = ((/* implicit */unsigned char) ((long long int) ((unsigned char) var_11)));
                }
                for (short i_23 = 2; i_23 < 10; i_23 += 4) /* same iter space */
                {
                    var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) ((((/* implicit */_Bool) 8703143560332595875LL)) ? (134217712LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)8))))))));
                    var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_6] [i_7] [i_7] [i_15] [i_23 - 2])) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) arr_58 [i_6] [i_23] [i_15 + 1] [i_7] [i_6]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_79 [1LL] [i_23])) : (((/* implicit */int) (unsigned char)62)))))));
                    var_43 -= ((/* implicit */unsigned char) ((arr_1 [i_6 + 1] [i_23 - 2]) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)61)))));
                    var_44 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_23])) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_6] [i_7] [i_7] [(short)3] [i_23]))) : (2166223414120664576LL)))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_56 [i_15 - 1] [i_7])))))));
                }
                for (short i_24 = 2; i_24 < 10; i_24 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_25 = 3; i_25 < 10; i_25 += 4) 
                    {
                        arr_92 [i_6] = ((/* implicit */signed char) (+(((/* implicit */int) arr_15 [i_6 - 1] [(unsigned char)12] [16LL] [i_24] [i_25]))));
                        var_45 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_61 [(short)1] [(short)1] [i_7] [i_7] [(short)6] [i_25])) > (((/* implicit */int) arr_48 [i_6] [(unsigned char)8] [i_7] [i_7] [i_24 + 2] [(unsigned char)8])))) ? (((/* implicit */int) ((unsigned char) arr_1 [i_15 + 1] [1LL]))) : (((/* implicit */int) var_6))));
                    }
                    var_46 = ((/* implicit */long long int) min((var_46), (((/* implicit */long long int) ((signed char) arr_13 [i_24] [i_24 + 2])))));
                }
            }
        }
        for (unsigned char i_26 = 0; i_26 < 12; i_26 += 4) 
        {
            var_47 = ((/* implicit */unsigned char) var_2);
            var_48 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) var_7))) || (((/* implicit */_Bool) arr_34 [i_6 + 1] [(unsigned char)8] [i_26] [i_26] [(signed char)11]))));
        }
        for (unsigned char i_27 = 1; i_27 < 10; i_27 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_28 = 1; i_28 < 11; i_28 += 4) 
            {
                /* LoopSeq 2 */
                for (short i_29 = 1; i_29 < 10; i_29 += 4) 
                {
                    var_49 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_27] [(unsigned char)12])) ? (1513975108197969402LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)109)))));
                    var_50 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_84 [i_6 - 1] [i_28 - 1] [i_28]))) & (((((/* implicit */_Bool) arr_58 [i_6] [i_28] [i_27] [i_27 + 2] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_96 [i_6] [i_6]))) : (9223372036854775807LL)))));
                    arr_103 [(unsigned char)3] [i_6] [(unsigned char)3] [i_29 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) arr_94 [i_27] [i_27] [i_6])) : (((/* implicit */int) var_3))));
                    var_51 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)52)))))));
                }
                for (unsigned char i_30 = 0; i_30 < 12; i_30 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_31 = 0; i_31 < 12; i_31 += 3) 
                    {
                        arr_108 [i_6] [i_6] [(signed char)9] [i_28 - 1] [i_30] [i_31] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_90 [i_27 - 1] [i_6 - 1] [i_27 + 2] [i_6 + 1] [i_31] [i_28 - 1]))));
                        var_52 -= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)0))));
                        arr_109 [i_31] [i_6] [i_28] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)9)) & (((/* implicit */int) arr_41 [i_31] [i_6] [i_28] [i_27 + 1] [i_6] [i_6]))))) ? (((((/* implicit */_Bool) arr_96 [i_6] [i_6])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_78 [i_6 - 1] [i_6 - 1] [(short)1])))) : (((/* implicit */int) ((unsigned char) var_6)))));
                        arr_110 [(unsigned char)5] [i_27 + 2] [i_6] [(unsigned char)5] [(unsigned char)5] [(unsigned char)11] [(short)5] = ((/* implicit */signed char) var_14);
                    }
                    var_53 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) arr_12 [(short)11])) ? (((/* implicit */int) arr_77 [i_6] [i_27] [i_30])) : (((/* implicit */int) arr_97 [(unsigned char)8])))));
                }
                var_54 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_54 [i_6 - 1] [i_28 + 1] [i_27 + 1] [i_6 - 1])) + (((/* implicit */int) var_4))));
                arr_111 [i_6] [(short)3] [i_6 + 1] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_95 [i_6])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)37))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (((((/* implicit */_Bool) var_13)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_6] [i_6] [i_6])))))));
            }
            for (unsigned char i_32 = 0; i_32 < 12; i_32 += 4) 
            {
                /* LoopSeq 2 */
                for (short i_33 = 2; i_33 < 9; i_33 += 4) 
                {
                    var_55 = arr_40 [i_32] [i_6] [i_32] [i_33] [i_33 - 1];
                    var_56 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) (unsigned char)58)) : (((/* implicit */int) (short)8192))));
                    arr_118 [i_6 - 1] [i_6] [(unsigned char)6] [i_6] [i_6] [i_6 - 1] = ((/* implicit */signed char) arr_88 [i_6] [i_6] [(unsigned char)1] [i_6]);
                    var_57 = ((/* implicit */unsigned char) arr_54 [i_27] [i_27 + 2] [i_27 + 2] [i_27 + 1]);
                }
                for (long long int i_34 = 1; i_34 < 9; i_34 += 3) 
                {
                    arr_121 [i_6] [i_6] [i_27 - 1] [i_32] [i_34 + 2] = ((signed char) arr_70 [i_6 + 1] [i_6] [(short)7] [i_6 + 1]);
                    var_58 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_102 [i_27 + 1] [i_27 + 2] [(unsigned char)10] [i_27 + 2] [i_32])) ? (-8703143560332595875LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_104 [i_32] [i_27 - 1] [(unsigned char)2] [i_34 - 1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_26 [i_32])))))));
                    arr_122 [i_6] [i_27] [i_27] [i_32] [i_34] = ((/* implicit */short) ((long long int) (-(((/* implicit */int) arr_68 [i_6])))));
                    var_59 = ((/* implicit */unsigned char) arr_35 [i_6]);
                }
                arr_123 [i_6] [i_27] [i_6] [i_6] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [i_6] [i_27] [i_27])))))));
                var_60 = ((/* implicit */long long int) (~(((/* implicit */int) arr_16 [(unsigned char)2] [i_6] [i_27 + 2]))));
            }
            for (signed char i_35 = 1; i_35 < 11; i_35 += 4) 
            {
                arr_126 [i_6] [i_6] [i_35 + 1] = ((/* implicit */unsigned char) ((short) arr_84 [i_6 + 1] [i_27 + 2] [i_35 + 1]));
                /* LoopSeq 1 */
                for (long long int i_36 = 0; i_36 < 12; i_36 += 3) 
                {
                    var_61 = (i_6 % 2 == zero) ? (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_70 [i_6] [i_6] [i_35] [i_36]) & (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_15)) >> (((((/* implicit */int) arr_16 [i_27] [i_6] [i_27])) + (32046)))))) : (((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_124 [i_35 - 1] [i_6] [i_6] [i_6])))))))) : (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_70 [i_6] [i_6] [i_35] [i_36]) & (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_15)) >> (((((((/* implicit */int) arr_16 [i_27] [i_6] [i_27])) + (32046))) - (35776)))))) : (((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_124 [i_35 - 1] [i_6] [i_6] [i_6]))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_37 = 0; i_37 < 12; i_37 += 3) 
                    {
                        arr_133 [i_6] [i_27 + 1] [(signed char)4] [i_27 + 1] [(signed char)0] = ((/* implicit */signed char) ((unsigned char) (~(((/* implicit */int) (unsigned char)0)))));
                        var_62 = ((/* implicit */short) arr_113 [i_6 - 1] [i_6 - 1] [i_27 + 2] [i_27 + 1]);
                        var_63 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_80 [i_36] [i_35 + 1] [i_35 + 1] [i_35 + 1]))));
                        arr_134 [i_37] [i_6] [i_36] [i_35] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) -2166223414120664576LL);
                    }
                    var_64 = ((/* implicit */short) ((unsigned char) arr_5 [i_27 - 1]));
                    arr_135 [i_36] [i_6] = ((/* implicit */short) (-(((/* implicit */int) ((unsigned char) (unsigned char)147)))));
                }
                /* LoopSeq 1 */
                for (short i_38 = 3; i_38 < 11; i_38 += 2) 
                {
                    arr_139 [(signed char)10] [i_6] [i_6] [i_38] [(unsigned char)4] [i_6] = ((/* implicit */long long int) arr_106 [i_38] [i_38] [i_38 + 1] [4LL] [(unsigned char)7] [i_35 - 1]);
                    var_65 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_58 [i_6] [i_27] [i_27] [i_35 - 1] [i_27])) ? (((/* implicit */int) arr_16 [(unsigned char)9] [i_6] [i_35])) : (((/* implicit */int) (unsigned char)152))))) ? (((((/* implicit */int) (unsigned char)242)) * (((/* implicit */int) (signed char)-2)))) : ((-(((/* implicit */int) (unsigned char)0))))));
                }
            }
            var_66 = ((/* implicit */short) ((((/* implicit */_Bool) arr_129 [i_6 - 1] [(unsigned char)1] [i_6 - 1] [i_6] [(unsigned char)8])) ? (((/* implicit */int) arr_88 [i_6] [i_27] [i_27] [i_27])) : (((/* implicit */int) ((unsigned char) arr_22 [(unsigned char)8] [i_6])))));
            arr_140 [i_6] = ((/* implicit */long long int) ((((/* implicit */int) arr_78 [i_6] [(signed char)3] [i_27 + 2])) > (((/* implicit */int) arr_36 [i_27] [i_27] [i_6] [1LL]))));
        }
    }
}
