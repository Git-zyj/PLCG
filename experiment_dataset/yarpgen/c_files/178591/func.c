/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178591
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    arr_7 [i_1] [i_2] = ((/* implicit */_Bool) (((-(((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) + (var_4))))) + (min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) : (5892952401929525655LL))), (((/* implicit */long long int) ((((/* implicit */int) var_2)) + (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])))))))));
                    arr_8 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_1] [i_0])) : (((/* implicit */int) arr_2 [i_2] [i_1])))), (((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (signed char i_4 = 2; i_4 < 6; i_4 += 3) 
                        {
                            {
                                var_12 = min((max((((/* implicit */long long int) var_11)), (max((4860687120187073189LL), (((/* implicit */long long int) var_7)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5))))) ? (min((arr_1 [i_0]), (((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_4])))) : (((((/* implicit */_Bool) (signed char)-50)) ? (1365942482U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [2LL] [2LL] [i_2] [i_1] [i_1])))))))));
                                var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) -4860687120187073190LL)) || (((((/* implicit */int) arr_5 [(signed char)8] [i_1] [i_2])) == (((/* implicit */int) arr_2 [i_4 + 1] [i_2])))))))));
                                var_14 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)45))));
                                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */int) (short)32754)) | (((/* implicit */int) (signed char)86)))), (((((/* implicit */int) var_5)) & (((/* implicit */int) var_11))))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_8)), (arr_4 [i_0])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-91)) : (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_1 [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_0 [i_1] [i_3]))))));
                                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) ((long long int) arr_9 [i_4] [i_1] [i_1] [(signed char)4])))) ? (((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), (arr_11 [i_4] [i_0] [i_2] [i_3] [i_0])))) ? (((((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_2] [i_2])) | (((/* implicit */int) arr_9 [i_0] [i_3] [i_2] [i_3])))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_0 [i_0] [1U])))))) : (((((/* implicit */int) (unsigned char)0)) & (((/* implicit */int) (_Bool)0)))))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0] [i_0]))))) : (((long long int) var_1)))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))) ? (((((/* implicit */int) (signed char)124)) + (((/* implicit */int) arr_2 [i_0] [i_1])))) : (((/* implicit */int) arr_0 [i_0] [i_1]))))))))));
                    arr_13 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1] [(unsigned char)8] [(signed char)9]))))) ? (((((/* implicit */_Bool) (signed char)-24)) ? (((/* implicit */long long int) ((/* implicit */int) (short)28901))) : (var_4))) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_2] [(signed char)6]))))) - (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((signed char) arr_6 [i_0])))))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (signed char i_6 = 1; i_6 < 9; i_6 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_7 = 1; i_7 < 9; i_7 += 3) 
                        {
                            arr_22 [i_6] = ((/* implicit */short) ((_Bool) 8017459537108658235LL));
                            var_18 = ((/* implicit */short) ((arr_10 [i_1] [i_1] [i_7 + 1] [(signed char)9] [i_6 - 1] [(signed char)8]) ? (((/* implicit */int) arr_10 [i_7] [i_1] [i_7 - 1] [i_6 - 1] [i_6 + 1] [i_5])) : (((/* implicit */int) arr_10 [i_7] [i_1] [i_7 - 1] [i_6] [i_6 + 1] [i_7]))));
                            arr_23 [i_6] [0U] [i_5] [(signed char)3] [i_7 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_6 - 1])) ? (arr_1 [i_6 + 1]) : (arr_1 [i_6 - 1])));
                            arr_24 [i_0] [i_0] [i_0] [(unsigned char)0] [i_7] &= ((/* implicit */_Bool) ((((/* implicit */int) var_3)) - (((/* implicit */int) arr_14 [i_0] [i_1] [i_6 - 1] [i_7 + 1]))));
                            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) arr_19 [(unsigned short)0]))));
                        }
                        var_20 |= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [(signed char)0] [i_1] [i_5] [i_5] [i_5] [i_6])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0] [i_1] [(unsigned char)4] [i_6] [i_1] [i_0])))))) || ((!(((/* implicit */_Bool) var_4)))))), (((((/* implicit */_Bool) (((_Bool)0) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_6] [i_5] [i_5] [i_1] [i_0] [i_0])))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_1 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))));
                        var_21 *= ((/* implicit */_Bool) (((~(((/* implicit */int) arr_5 [i_0] [i_1] [i_5])))) | (((/* implicit */int) arr_15 [i_0] [i_0] [i_5]))));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned char) max((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)45)), ((unsigned short)13678)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (arr_6 [i_0])))) : (((/* implicit */int) min(((unsigned short)58354), (((/* implicit */unsigned short) (signed char)122)))))))));
                        arr_28 [i_0] [i_0] [i_8] [i_5] [i_5] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (((_Bool)1) ? (1796236767818791017LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)50)))))) ? (((((/* implicit */_Bool) -666568171968770440LL)) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) arr_20 [i_0] [i_1] [4LL] [i_1] [i_5])))) : (((/* implicit */int) arr_25 [i_8])))) / (((((/* implicit */_Bool) max((((/* implicit */short) arr_17 [(unsigned short)3] [i_8] [i_5] [i_8])), (arr_15 [i_0] [i_5] [i_5])))) ? ((~(((/* implicit */int) var_1)))) : ((-(((/* implicit */int) arr_14 [i_0] [i_1] [i_5] [(_Bool)1]))))))));
                        var_23 = ((/* implicit */signed char) (~(((/* implicit */int) max((((/* implicit */unsigned char) arr_2 [i_5] [i_8])), (arr_16 [i_8] [(unsigned char)1] [i_1] [i_8]))))));
                        var_24 = ((/* implicit */unsigned int) ((((((_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_18 [(signed char)5] [i_1])) : (((/* implicit */int) var_2)))) + (((((/* implicit */_Bool) max((var_8), (var_10)))) ? (((arr_2 [i_0] [(short)8]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))))));
                    }
                    for (unsigned short i_9 = 4; i_9 < 9; i_9 += 2) 
                    {
                        arr_32 [i_0] [i_0] [(signed char)0] [i_5] [i_9] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)218)) << (((((/* implicit */int) max((min((var_2), ((short)-8185))), (((/* implicit */short) arr_31 [i_9 - 4] [i_9 + 1] [i_9 + 1] [(_Bool)1] [i_5] [i_0]))))) - (146)))));
                        arr_33 [i_5] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0] [2LL] [i_1] [i_5] [(signed char)2] [(unsigned char)9])) ? (((((((/* implicit */int) var_7)) + (2147483647))) << (((((((var_6) ? (((/* implicit */int) (short)-13512)) : (((/* implicit */int) arr_6 [i_9])))) + (13536))) - (24))))) : (((/* implicit */int) ((((/* implicit */int) (signed char)95)) == (((/* implicit */int) (unsigned char)199)))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_10 = 3; i_10 < 6; i_10 += 3) 
                    {
                        arr_36 [i_0] [i_0] [i_0] [i_0] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [(signed char)0] [i_1] [i_1] [i_10] [i_10] [i_10])) && (var_3)))), (min((var_4), (((/* implicit */long long int) arr_0 [i_0] [i_5]))))))) ? (((((/* implicit */long long int) (~(((/* implicit */int) arr_19 [i_0]))))) & (((((/* implicit */_Bool) 1796236767818791010LL)) ? (1544115685359989574LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-13512))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) max((((/* implicit */signed char) var_3)), (arr_20 [i_0] [(signed char)2] [i_5] [i_5] [i_5])))) : (((((/* implicit */_Bool) (signed char)-95)) ? (((/* implicit */int) (unsigned char)76)) : (((/* implicit */int) (unsigned char)45)))))))));
                        arr_37 [i_0] &= ((/* implicit */signed char) arr_34 [i_1] [i_10]);
                    }
                    for (unsigned short i_11 = 0; i_11 < 10; i_11 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_12 = 1; i_12 < 8; i_12 += 2) 
                        {
                            arr_44 [i_12] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) max((((/* implicit */unsigned short) (short)20791)), (max(((unsigned short)30065), (((/* implicit */unsigned short) (unsigned char)217)))))))));
                            arr_45 [i_0] [i_1] [2LL] [i_5] [i_12] = ((/* implicit */unsigned char) arr_35 [i_0] [(short)4] [2LL] [(short)4] [i_11] [(_Bool)1]);
                            var_25 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)45)) ? (((/* implicit */int) (unsigned char)77)) : (((/* implicit */int) (_Bool)1)))) & ((~((~(((/* implicit */int) arr_43 [i_12 - 1] [i_0] [(_Bool)1] [i_0] [(_Bool)0]))))))));
                        }
                        /* vectorizable */
                        for (signed char i_13 = 0; i_13 < 10; i_13 += 1) 
                        {
                            arr_48 [i_0] = ((/* implicit */long long int) var_0);
                            arr_49 [(unsigned char)8] [i_13] [i_5] [i_11] [i_13] = ((/* implicit */unsigned short) ((var_1) ? (((/* implicit */int) arr_25 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                            var_26 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)178)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)60))));
                        }
                        /* vectorizable */
                        for (unsigned short i_14 = 2; i_14 < 7; i_14 += 3) 
                        {
                            arr_54 [i_14] [i_14] [i_14] = ((/* implicit */long long int) var_0);
                            arr_55 [i_5] [i_14] [i_14 - 1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_11] [(unsigned short)1])) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
                            arr_56 [i_14] [i_11] [i_14] [i_5] [i_14] [i_0] [i_0] = ((/* implicit */long long int) (signed char)-87);
                        }
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) (~(max((var_0), (((/* implicit */unsigned int) (_Bool)1))))))) : (min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))))), (((arr_52 [i_0] [i_0] [i_11] [i_5] [i_5] [i_11] [i_1]) / (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_5] [i_5] [i_5])))))))));
                        arr_57 [i_0] [i_0] [i_5] [(unsigned short)3] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) (signed char)21)) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_1]))) : (-980490437017399433LL))));
                        var_28 = ((/* implicit */signed char) (((~(((/* implicit */int) arr_17 [i_5] [i_1] [i_5] [i_11])))) << (((((/* implicit */int) min((arr_17 [i_0] [i_1] [i_5] [i_11]), (((/* implicit */signed char) (_Bool)1))))) + (65)))));
                        arr_58 [i_0] [i_1] [(short)4] &= arr_30 [i_11] [i_5] [i_5] [i_1] [i_1] [i_0];
                    }
                }
                arr_59 [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) max((arr_25 [i_1]), (((/* implicit */unsigned short) (_Bool)1))))) < (((/* implicit */int) ((short) arr_50 [i_0] [i_1] [i_0] [(unsigned char)8] [i_1] [i_0] [i_0]))))) ? (((/* implicit */int) var_5)) : ((((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)43))))) : ((-(((/* implicit */int) var_8))))))));
                var_29 = ((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0]);
            }
        } 
    } 
    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11)))), (((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10))))))) ? (max((max((((/* implicit */long long int) var_3)), (7681420152545287808LL))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_9))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)199)), (var_5)))) ? (((/* implicit */unsigned int) ((var_1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))) : (((var_0) << (((var_0) - (753480182U))))))))));
    /* LoopSeq 3 */
    for (unsigned char i_15 = 0; i_15 < 14; i_15 += 2) 
    {
        arr_64 [(signed char)13] = ((/* implicit */short) max((((/* implicit */int) min((min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)213))), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) (unsigned short)22902)))))))), (max((((((/* implicit */_Bool) 7485700755720483852LL)) ? (((/* implicit */int) (unsigned short)42633)) : (((/* implicit */int) arr_60 [(unsigned char)13])))), (((/* implicit */int) (_Bool)1))))));
        var_31 = ((/* implicit */signed char) max((var_31), (((signed char) arr_60 [i_15]))));
        /* LoopSeq 2 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            var_32 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((unsigned short) arr_66 [(unsigned short)2] [i_15] [i_16]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) (_Bool)1))))))) >= (((/* implicit */int) ((signed char) arr_65 [i_15] [i_16] [i_16])))));
            var_33 *= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_62 [(signed char)3])), (max((((/* implicit */unsigned int) (signed char)64)), (var_0)))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_65 [i_15] [(unsigned short)6] [i_15]))))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (1498585963616501337LL))))) : (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_62 [(_Bool)1])) <= (((/* implicit */int) (signed char)-1))))) ^ (((/* implicit */int) (signed char)87)))))));
            var_34 |= ((/* implicit */long long int) var_11);
            /* LoopNest 2 */
            for (signed char i_17 = 0; i_17 < 14; i_17 += 4) 
            {
                for (unsigned int i_18 = 3; i_18 < 13; i_18 += 3) 
                {
                    {
                        var_35 &= ((/* implicit */short) max((((/* implicit */int) ((_Bool) arr_67 [(unsigned char)12] [i_17] [i_16]))), (((((((/* implicit */_Bool) (unsigned char)92)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)163)))) ^ (((((/* implicit */int) var_3)) >> (((((/* implicit */int) var_5)) - (64851)))))))));
                        arr_71 [i_15] [i_16] [(_Bool)1] [i_16] = ((((/* implicit */_Bool) ((signed char) (signed char)-27))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_65 [i_16] [i_16] [i_16])) ? (((/* implicit */int) arr_65 [i_16] [i_16] [i_17])) : (((/* implicit */int) var_9))))) : (min((((/* implicit */long long int) var_5)), (((((/* implicit */_Bool) arr_62 [i_18])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_68 [i_15] [i_15]))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (long long int i_19 = 0; i_19 < 14; i_19 += 2) 
        {
            var_36 *= ((/* implicit */signed char) (-((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_70 [i_15] [i_19] [i_19] [i_19] [0LL])))));
            var_37 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-116)) - (((/* implicit */int) (unsigned short)13507))));
        }
    }
    for (unsigned char i_20 = 0; i_20 < 22; i_20 += 1) 
    {
        arr_79 [i_20] = ((/* implicit */signed char) min((((long long int) arr_75 [i_20] [i_20])), (((/* implicit */long long int) ((((/* implicit */int) arr_75 [i_20] [(_Bool)1])) | (((/* implicit */int) arr_75 [i_20] [i_20])))))));
        arr_80 [i_20] [(signed char)14] = ((/* implicit */signed char) ((((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) var_9)))) % (min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)12288)))), (((((/* implicit */_Bool) arr_77 [i_20])) ? (((/* implicit */int) arr_75 [i_20] [(unsigned short)13])) : (((/* implicit */int) var_8))))))));
    }
    /* vectorizable */
    for (signed char i_21 = 0; i_21 < 18; i_21 += 1) 
    {
        var_38 = ((/* implicit */long long int) ((((/* implicit */int) arr_82 [i_21])) < (((/* implicit */int) arr_78 [i_21]))));
        /* LoopSeq 2 */
        for (long long int i_22 = 0; i_22 < 18; i_22 += 2) 
        {
            var_39 ^= ((/* implicit */long long int) ((((/* implicit */long long int) ((var_0) * (((/* implicit */unsigned int) ((/* implicit */int) arr_86 [i_21])))))) >= (((((/* implicit */_Bool) (unsigned short)22903)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)92)))))));
            var_40 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_85 [i_21])) : (((/* implicit */int) (signed char)(-127 - 1)))));
            arr_87 [i_21] [i_21] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)22903))));
            arr_88 [i_22] = ((/* implicit */unsigned char) var_7);
        }
        for (unsigned short i_23 = 3; i_23 < 17; i_23 += 2) 
        {
            arr_91 [10LL] [i_23] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (signed char)87)) ? (((/* implicit */int) (unsigned short)46802)) : (((/* implicit */int) (signed char)0))))));
            var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) ((((/* implicit */int) arr_86 [i_23 + 1])) <= (((/* implicit */int) arr_86 [i_23 - 2])))))));
        }
        arr_92 [i_21] = ((/* implicit */signed char) (~((~(((/* implicit */int) var_5))))));
        var_42 = ((/* implicit */signed char) min((var_42), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_90 [i_21])) : (((/* implicit */int) arr_90 [i_21])))))));
    }
}
