/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178242
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 15; i_0 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0 - 2])))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 3; i_2 < 15; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    {
                        var_21 = ((long long int) arr_7 [i_1 - 1] [i_2 - 1]);
                        var_22 = ((/* implicit */unsigned int) (((-(arr_3 [i_0] [i_0] [i_3]))) <= (((/* implicit */long long int) (~(((/* implicit */int) arr_8 [(short)0] [8ULL] [i_2])))))));
                        arr_10 [i_0] [i_3] [i_1] [i_3] = ((((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) (~(3563163784U)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [(short)6] [(signed char)11]))) * (var_16))));
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 4; i_4 < 15; i_4 += 1) 
                        {
                            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 - 2] [i_4 - 2]))) < (17233878288060489162ULL))))));
                            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) arr_2 [i_0 - 1]))));
                        }
                        for (int i_5 = 0; i_5 < 16; i_5 += 3) /* same iter space */
                        {
                            var_25 = ((/* implicit */long long int) (~(((/* implicit */int) arr_13 [i_2 + 1] [i_1] [i_2] [i_3] [i_3] [i_1 - 1]))));
                            var_26 = ((/* implicit */unsigned int) arr_0 [13ULL]);
                            arr_17 [0ULL] [6] [i_2] [i_0] [i_5] &= ((/* implicit */int) arr_3 [i_2 - 3] [i_2 - 2] [i_2 - 2]);
                        }
                        for (int i_6 = 0; i_6 < 16; i_6 += 3) /* same iter space */
                        {
                            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) 731803516U)) : (11841852400097729930ULL)))) ? (var_18) : (((/* implicit */long long int) (~(((/* implicit */int) (short)30590))))))))));
                            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_6] [i_6] [0])) ? (arr_0 [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [12] [8LL] [i_2] [0LL] [8ULL] [i_6]))))))));
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)23376)) ? (((/* implicit */unsigned long long int) 1643661822U)) : (16129061959009944727ULL)));
                        }
                        var_30 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)13741))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (signed char i_7 = 0; i_7 < 16; i_7 += 3) /* same iter space */
            {
                var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((var_16) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3563163779U)) ? (arr_19 [i_7] [i_7] [i_1] [i_0] [i_1] [i_1] [i_0]) : (2651305487U)))))))));
                var_32 = ((/* implicit */signed char) arr_6 [i_0] [13ULL]);
                arr_23 [i_0] [i_0] [i_7] [i_0] = ((/* implicit */signed char) var_18);
                arr_24 [13U] [13U] = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
            }
            for (signed char i_8 = 0; i_8 < 16; i_8 += 3) /* same iter space */
            {
                var_33 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (731803516U) : (arr_5 [i_8] [i_0] [i_0])));
                var_34 &= ((/* implicit */signed char) arr_4 [i_0] [i_0] [7LL] [i_0]);
                var_35 *= ((((((/* implicit */int) arr_1 [i_0])) + (2147483647))) >> (((((/* implicit */int) (signed char)74)) - (57))));
            }
            var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 4186354132U)) ? (7140476404408126864ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [2U] [2U]))))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_9 = 2; i_9 < 14; i_9 += 2) 
            {
                for (signed char i_10 = 0; i_10 < 16; i_10 += 3) 
                {
                    {
                        arr_32 [i_10] [i_1] [14LL] [i_1] = ((/* implicit */unsigned char) ((arr_16 [i_0] [i_0] [i_0]) / (((/* implicit */unsigned long long int) (-(var_4))))));
                        /* LoopSeq 1 */
                        for (signed char i_11 = 0; i_11 < 16; i_11 += 2) 
                        {
                            var_37 = ((/* implicit */signed char) var_2);
                            var_38 ^= ((((/* implicit */_Bool) arr_4 [i_9] [i_9 - 2] [i_9] [i_9 - 2])) ? (arr_4 [i_9] [i_9 + 1] [3ULL] [i_9]) : (arr_4 [8LL] [i_9 - 1] [i_9] [7U]));
                            var_39 *= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_34 [i_9 + 1] [i_9 + 1]))));
                            arr_36 [i_0] [3U] [i_1] [i_9] [i_10] [i_10] [i_11] = ((/* implicit */unsigned int) -8235541662075112425LL);
                        }
                        arr_37 [i_10] [i_9] [i_1] [i_10] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 9664888542111671250ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_9]))) : (var_13))) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)22)))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned int i_12 = 0; i_12 < 16; i_12 += 3) 
            {
                var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) ((_Bool) (+(((/* implicit */int) (_Bool)0))))))));
                var_41 = (+(((((/* implicit */_Bool) -766036112)) ? (arr_7 [(unsigned char)5] [(unsigned char)5]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [13ULL] [i_1] [i_1]))))));
            }
        }
    }
    for (unsigned char i_13 = 3; i_13 < 15; i_13 += 3) /* same iter space */
    {
        var_42 = ((/* implicit */unsigned long long int) ((short) ((unsigned int) ((((((/* implicit */int) (short)-32761)) + (2147483647))) << (((((/* implicit */int) (signed char)99)) - (99)))))));
        var_43 = ((/* implicit */_Bool) arr_4 [i_13] [10ULL] [i_13] [i_13]);
    }
    for (unsigned char i_14 = 3; i_14 < 15; i_14 += 3) /* same iter space */
    {
        var_44 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_14]))) / ((~(arr_45 [i_14 + 1])))));
        var_45 = ((/* implicit */unsigned short) min((var_45), (((/* implicit */unsigned short) (~((+(((/* implicit */int) ((signed char) 2317682114699606888ULL))))))))));
        var_46 = ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_13 [12LL] [i_14] [i_14] [i_14] [2ULL] [12ULL]))))), (((((/* implicit */_Bool) arr_29 [i_14])) ? (arr_2 [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1)))))))));
    }
    for (unsigned char i_15 = 3; i_15 < 15; i_15 += 3) /* same iter space */
    {
        var_47 = ((/* implicit */signed char) (-((+(1643661824U)))));
        arr_49 [i_15] = ((/* implicit */signed char) min((arr_45 [i_15]), (((((/* implicit */_Bool) (unsigned char)149)) ? (((/* implicit */long long int) (+(3858785072U)))) : (arr_46 [i_15])))));
    }
    /* LoopNest 3 */
    for (unsigned char i_16 = 0; i_16 < 14; i_16 += 3) 
    {
        for (short i_17 = 0; i_17 < 14; i_17 += 2) 
        {
            for (unsigned long long int i_18 = 1; i_18 < 12; i_18 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (long long int i_19 = 0; i_19 < 14; i_19 += 2) /* same iter space */
                    {
                        var_48 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(arr_55 [i_18 + 2] [(short)6] [i_18] [4ULL]))))));
                        var_49 = ((/* implicit */unsigned int) min((var_49), (((/* implicit */unsigned int) (~((+(((/* implicit */int) ((((/* implicit */int) arr_8 [i_19] [i_18] [i_16])) >= (((/* implicit */int) arr_9 [i_16] [i_16] [5U] [i_19]))))))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_20 = 0; i_20 < 14; i_20 += 4) 
                        {
                            var_50 = ((/* implicit */long long int) min(((-(3563163779U))), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)87)))))));
                            var_51 |= ((/* implicit */_Bool) (-((-(arr_18 [i_19] [i_16] [i_18] [i_18 - 1] [i_20])))));
                        }
                        var_52 = ((/* implicit */signed char) var_12);
                    }
                    for (long long int i_21 = 0; i_21 < 14; i_21 += 2) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (signed char i_22 = 1; i_22 < 12; i_22 += 1) 
                        {
                            arr_66 [i_16] [i_17] [i_18] [i_21] [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_18 + 2] [i_18] [i_18] [i_18] [i_18 + 2] [i_21] [i_22 - 1]))) * (arr_21 [i_18 - 1] [i_18] [i_18] [i_18 - 1])))) ? (((/* implicit */unsigned int) ((arr_35 [i_18 + 1] [i_18 + 1] [i_18] [i_18] [i_18 - 1] [i_18] [i_22 + 1]) ? (((/* implicit */int) arr_35 [i_18 - 1] [i_18] [i_18] [i_18] [i_18 + 2] [i_21] [i_22 - 1])) : (((/* implicit */int) arr_35 [i_18 - 1] [i_18 - 1] [i_18] [i_18] [i_18 + 1] [i_18] [i_22 + 1]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_18 - 1] [6ULL] [10LL] [i_18] [i_18 + 2] [i_18] [i_22 + 1]))) - (arr_21 [i_18 - 1] [i_18] [i_18] [i_18])))));
                            var_53 = ((/* implicit */long long int) max((var_53), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_21 [i_18] [i_18] [5LL] [i_18])))) ? (((((/* implicit */_Bool) arr_34 [i_21] [i_17])) ? (((/* implicit */long long int) var_11)) : (7234975652960882938LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_21] [i_21] [i_21])))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)59065))))) : (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)53))) / (287104476244869120ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2047))))))))));
                            var_54 = ((/* implicit */long long int) min((var_54), (((/* implicit */long long int) (~((((!(((/* implicit */_Bool) var_4)))) ? (min((((/* implicit */unsigned int) arr_50 [i_22] [3LL])), (2651305492U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [2LL]))))))))));
                            var_55 = ((/* implicit */long long int) (~(((var_17) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [i_18 + 2] [i_18 + 1] [i_18] [i_22 + 2] [i_16])))))));
                        }
                        for (short i_23 = 0; i_23 < 14; i_23 += 1) /* same iter space */
                        {
                            var_56 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) arr_4 [i_18] [i_18 + 2] [i_18 - 1] [i_18])) ? (((/* implicit */int) arr_35 [i_18] [i_18 + 2] [i_18 - 1] [i_18] [(unsigned char)11] [i_18] [i_18 + 1])) : (((/* implicit */int) arr_35 [i_18] [i_18 + 2] [i_18 - 1] [i_18] [i_18] [i_18] [i_18 + 1])))));
                            var_57 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_56 [i_16]))));
                            arr_69 [i_16] [4LL] [8] [4LL] [i_17] |= ((/* implicit */int) min(((~(arr_0 [i_18 - 1]))), (((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)57344)) ? (2250893552U) : (((/* implicit */unsigned int) 6))))) * (((arr_7 [i_16] [i_16]) / (((/* implicit */long long int) 2250893574U))))))));
                            arr_70 [i_16] [i_17] [i_16] [i_17] = ((/* implicit */unsigned long long int) max((((/* implicit */short) arr_26 [i_16] [i_16])), (min((arr_14 [i_18 + 2] [i_18 - 1] [i_18] [i_18 + 2] [(signed char)12]), (arr_14 [i_18 - 1] [i_18 + 2] [i_18] [i_18 - 1] [i_18 - 1])))));
                            var_58 = ((/* implicit */int) ((short) ((short) arr_5 [i_18 + 1] [i_18] [i_18 - 1])));
                        }
                        for (short i_24 = 0; i_24 < 14; i_24 += 1) /* same iter space */
                        {
                            var_59 = min((((/* implicit */unsigned long long int) (short)32640)), (min((((((/* implicit */_Bool) (short)-22436)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)221))) : (6419718830884559766ULL))), (((/* implicit */unsigned long long int) (_Bool)1)))));
                            arr_73 [i_16] [i_16] [i_16] [i_16] [i_16] = ((((arr_61 [i_18 + 1] [i_18 + 1] [i_18 - 1] [i_18 + 1] [i_18 + 1] [i_16]) > (((/* implicit */int) (_Bool)1)))) ? (arr_61 [i_18 + 1] [i_18 + 1] [i_18 - 1] [i_18 + 1] [i_18 + 1] [i_16]) : (((/* implicit */int) ((arr_61 [i_18 + 1] [i_18 + 1] [i_18 - 1] [i_18 + 1] [i_18 + 1] [i_16]) <= (arr_61 [i_18 + 1] [i_18 + 1] [i_18 - 1] [i_18 + 1] [i_18 + 1] [i_16])))));
                        }
                        for (long long int i_25 = 0; i_25 < 14; i_25 += 1) 
                        {
                            var_60 = ((/* implicit */unsigned long long int) min((var_60), (((/* implicit */unsigned long long int) arr_2 [i_21]))));
                            arr_77 [i_16] [(short)3] [i_16] = ((/* implicit */unsigned short) 1643661810U);
                            var_61 = ((/* implicit */int) min((var_61), (((/* implicit */int) var_18))));
                            var_62 = ((((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) arr_43 [i_16]))))) - (((arr_46 [i_25]) % (((/* implicit */long long int) ((/* implicit */int) var_19)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_54 [(signed char)7] [i_17])) % (arr_72 [i_16] [i_16] [i_17] [(short)5] [i_21] [i_25])))) ? (min((arr_19 [i_16] [i_17] [i_18] [i_18] [i_17] [(unsigned char)9] [i_25]), (((/* implicit */unsigned int) (unsigned char)13)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) : (99595154268635789ULL));
                        }
                        arr_78 [i_16] [i_17] [i_16] [(unsigned char)2] = ((/* implicit */short) ((((_Bool) (short)19797)) ? (((((/* implicit */_Bool) arr_65 [i_21] [i_17] [(unsigned short)1] [i_16] [10] [i_21] [5ULL])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (arr_52 [i_18] [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) 35180860847036464LL)) ? (arr_51 [i_16]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_17] [i_16]))))))) : (((/* implicit */long long int) max((2044073748U), (((/* implicit */unsigned int) ((unsigned short) var_18))))))));
                        var_63 &= ((/* implicit */short) (+(((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19789))) + (arr_75 [i_16] [i_16] [i_18] [8ULL] [i_21]))) * (((((/* implicit */_Bool) arr_15 [6LL] [i_17] [i_17])) ? (((/* implicit */unsigned long long int) 4294967295U)) : (arr_47 [i_21])))))));
                    }
                    for (long long int i_26 = 0; i_26 < 14; i_26 += 2) /* same iter space */
                    {
                        arr_82 [i_16] [i_26] = ((/* implicit */short) arr_29 [13ULL]);
                        var_64 *= ((/* implicit */unsigned int) var_14);
                    }
                    for (signed char i_27 = 4; i_27 < 13; i_27 += 1) 
                    {
                        var_65 = ((/* implicit */long long int) max((var_65), (((/* implicit */long long int) var_10))));
                        arr_86 [i_16] [i_16] [i_16] = ((/* implicit */long long int) ((unsigned long long int) (unsigned char)27));
                        var_66 = ((/* implicit */long long int) max((var_66), (min((((((/* implicit */_Bool) min((35180860847036470LL), (((/* implicit */long long int) (unsigned char)6))))) ? (((/* implicit */long long int) min((arr_31 [i_18] [(_Bool)1] [i_17] [i_27]), (((/* implicit */int) (_Bool)1))))) : (var_18))), (((/* implicit */long long int) 536862720U))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_28 = 0; i_28 < 14; i_28 += 1) 
                    {
                        for (_Bool i_29 = 1; i_29 < 1; i_29 += 1) 
                        {
                            {
                                var_67 &= ((/* implicit */unsigned int) (-(min(((((_Bool)1) ? (arr_48 [i_16] [i_16]) : (((/* implicit */unsigned long long int) arr_20 [i_16] [9] [(signed char)5])))), (((/* implicit */unsigned long long int) (+(arr_45 [i_16]))))))));
                                var_68 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_6 [i_29 - 1] [i_18 + 2])) ? (((/* implicit */int) arr_6 [i_29 - 1] [i_18 + 1])) : (((/* implicit */int) (unsigned short)55913))))));
                            }
                        } 
                    } 
                    var_69 = ((/* implicit */int) (~((+(arr_19 [i_16] [6] [i_17] [i_17] [i_16] [6] [i_18])))));
                    var_70 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) min((-1152921504606846976LL), (((/* implicit */long long int) arr_84 [i_16] [12ULL] [i_16] [i_16]))))) ? ((~(15627494051778013318ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (short)-1)))))));
                }
            } 
        } 
    } 
    var_71 = ((/* implicit */signed char) ((unsigned long long int) (+(((var_16) / (((/* implicit */unsigned long long int) -1LL)))))));
    var_72 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_15)) ? (var_1) : (((((/* implicit */int) var_2)) * (((/* implicit */int) var_5))))))));
    var_73 = ((/* implicit */long long int) 2044073746U);
}
