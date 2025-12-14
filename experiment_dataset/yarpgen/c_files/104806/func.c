/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104806
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
    var_16 = ((/* implicit */unsigned long long int) 2150254019U);
    var_17 -= min((min((var_2), (var_5))), (((/* implicit */unsigned long long int) min((min((-1025172696), (((/* implicit */int) var_13)))), (((/* implicit */int) ((signed char) var_12)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_18 *= ((/* implicit */unsigned long long int) -1025172696);
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 9; i_2 += 4) 
                {
                    for (unsigned int i_3 = 1; i_3 < 8; i_3 += 4) 
                    {
                        for (signed char i_4 = 2; i_4 < 8; i_4 += 2) 
                        {
                            {
                                arr_12 [i_4] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 0)))) ? (((/* implicit */unsigned long long int) -1240420370)) : (6359931241104341026ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (2147352576U) : (((/* implicit */unsigned int) arr_3 [(signed char)6] [(signed char)6] [i_3])))))))) : (((((/* implicit */int) var_11)) - (((((/* implicit */_Bool) var_13)) ? (arr_9 [i_0] [i_1] [i_3] [1]) : (var_12)))))));
                                var_19 &= (((!(((/* implicit */_Bool) var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(var_7)))) && (((/* implicit */_Bool) (+(arr_3 [(signed char)0] [1U] [i_4])))))))) : (min((9102257919686296055ULL), (((/* implicit */unsigned long long int) var_10)))));
                                arr_13 [i_1] = min(((~(((((/* implicit */_Bool) var_3)) ? (9344486154023255557ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)105))))))), ((+(((unsigned long long int) var_10)))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_5 = 1; i_5 < 7; i_5 += 4) 
                {
                    arr_16 [i_5] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))));
                    arr_17 [i_5] [i_1] [i_5] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(729585270)))), (max((var_8), (var_5)))))) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_5])) : (arr_6 [i_5 + 3] [i_1] [i_0]));
                }
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_6 = 1; i_6 < 9; i_6 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 1; i_7 < 7; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 1; i_8 < 8; i_8 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) 599147339);
                                arr_26 [i_1] [i_1] [0U] [8ULL] [i_7] [0ULL] &= ((/* implicit */signed char) ((arr_22 [i_1] [i_8 + 1] [i_8] [5] [i_8]) + (-2056129748)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 9; i_9 += 2) 
                    {
                        for (signed char i_10 = 2; i_10 < 9; i_10 += 4) 
                        {
                            {
                                arr_35 [i_0 - 2] [2U] [i_1] [(signed char)8] [(signed char)8] [i_9] [4ULL] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)111))) : (((var_3) / (((/* implicit */unsigned long long int) var_7))))));
                                arr_36 [i_10] [i_9] [2U] [i_1] [4U] = ((/* implicit */signed char) ((unsigned int) 9102257919686296055ULL));
                            }
                        } 
                    } 
                    var_21 |= (+((+(arr_14 [i_0] [i_6] [i_1] [i_0]))));
                }
                for (unsigned int i_11 = 3; i_11 < 6; i_11 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_12 = 0; i_12 < 10; i_12 += 4) 
                    {
                        for (int i_13 = 3; i_13 < 7; i_13 += 3) 
                        {
                            {
                                var_22 = ((((/* implicit */_Bool) var_9)) ? (((((((/* implicit */_Bool) arr_38 [8U] [i_1] [i_13])) || (((/* implicit */_Bool) arr_37 [i_13] [i_0 + 2])))) ? (((((/* implicit */_Bool) -729585271)) ? (var_3) : (((/* implicit */unsigned long long int) arr_20 [(signed char)2] [i_1] [i_12] [7ULL])))) : ((-(arr_39 [i_1] [i_11] [i_12] [i_13 - 1]))))) : (min((arr_23 [i_0 + 2] [i_0 - 2] [i_0 - 1] [i_11 + 1] [i_11 - 1]), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_12)), (2147614719U)))))));
                                var_23 ^= ((/* implicit */signed char) max((max((min((9102257919686296030ULL), (((/* implicit */unsigned long long int) 599147339)))), (((/* implicit */unsigned long long int) max((arr_21 [i_1] [(signed char)8] [i_1] [i_13 + 1]), (((/* implicit */unsigned int) var_14))))))), (((/* implicit */unsigned long long int) (+((-2147483647 - 1)))))));
                                var_24 *= max((((((var_5) & (((/* implicit */unsigned long long int) 2147352592U)))) % (var_15))), (((/* implicit */unsigned long long int) ((signed char) (-(10747327541772248676ULL))))));
                            }
                        } 
                    } 
                    arr_45 [i_11] [i_11] [i_1] [i_0] = ((/* implicit */int) min((var_4), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_11] [i_11]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 4) 
                    {
                        arr_48 [i_14] [3U] [i_11 - 2] [i_1] [i_0 - 2] [i_0 - 2] = ((/* implicit */unsigned long long int) 4294967295U);
                        var_25 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((4611686018427387904ULL), (var_3)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 1193251278U)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-69))))))))), (((((/* implicit */_Bool) (-(var_6)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_0] [i_0] [i_11] [i_14] [i_14]))) : (arr_39 [i_11] [6ULL] [7] [i_14]))) : (var_5)))));
                        var_26 += (signed char)105;
                    }
                }
                for (unsigned int i_15 = 2; i_15 < 7; i_15 += 4) 
                {
                    var_27 |= ((/* implicit */signed char) (+(2147614720U)));
                    var_28 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) min((-1025172696), (var_12)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 1708048420)))) : (2147352598U))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_16 = 4; i_16 < 9; i_16 += 4) 
                    {
                        var_29 += ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [(signed char)5] [i_15] [i_16] [i_15])) ? (var_4) : (var_5)))) ? (12ULL) : (((/* implicit */unsigned long long int) (~(4095U)))))), (((/* implicit */unsigned long long int) arr_52 [i_0] [i_1] [i_15 - 1] [i_16]))));
                        arr_53 [0U] [5U] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_1 [2]) : (((/* implicit */unsigned long long int) arr_3 [i_16 - 3] [i_0 - 1] [i_0]))))) ? (var_3) : (((/* implicit */unsigned long long int) (~(1708048420))))));
                        var_30 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_5 [i_16 - 1] [i_15] [i_1] [i_0])) ^ (((((/* implicit */_Bool) (signed char)0)) ? (min((((/* implicit */unsigned long long int) var_9)), (arr_51 [i_1]))) : (((var_4) | (var_8)))))));
                        var_31 = ((/* implicit */signed char) var_5);
                    }
                    /* vectorizable */
                    for (int i_17 = 4; i_17 < 9; i_17 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_18 = 2; i_18 < 8; i_18 += 1) 
                        {
                            var_32 = ((/* implicit */unsigned int) (signed char)32);
                            var_33 = ((/* implicit */signed char) ((var_12) + (472265423)));
                        }
                        /* LoopSeq 2 */
                        for (signed char i_19 = 0; i_19 < 10; i_19 += 4) 
                        {
                            arr_62 [i_0] [i_1] [i_15] [(signed char)9] = ((/* implicit */int) (-(var_4)));
                            var_34 = ((/* implicit */unsigned long long int) (((+(2147614719U))) / (3084590851U)));
                        }
                        for (unsigned int i_20 = 1; i_20 < 7; i_20 += 4) 
                        {
                            var_35 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (3073203671U) : (((/* implicit */unsigned int) var_1))))) ? (26119541U) : (((/* implicit */unsigned int) var_7))));
                            var_36 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_20 + 1] [i_17 + 1] [i_15] [i_1])) ? (((/* implicit */unsigned long long int) var_7)) : (var_5)))) && (((/* implicit */_Bool) arr_34 [i_0 + 2] [i_1] [i_15] [i_0 + 2] [i_20]))));
                        }
                        arr_65 [i_17] [i_1] [i_1] [i_1] [i_0] &= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)-57)) : (131068)))));
                    }
                    for (unsigned int i_21 = 0; i_21 < 10; i_21 += 3) 
                    {
                        var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) min((((/* implicit */unsigned long long int) 4171561770U)), (arr_1 [i_1]))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_15]))))) ? (((/* implicit */unsigned long long int) (~(67092480U)))) : (((var_3) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [i_0] [i_1] [i_15] [(signed char)1]))))))) : (((((/* implicit */_Bool) (~(arr_2 [i_0] [i_1] [i_21])))) ? (max((var_15), (((/* implicit */unsigned long long int) (signed char)0)))) : (arr_51 [i_21])))));
                        arr_68 [i_0] [i_0] [i_15 + 3] [i_15] [1U] [i_21] = ((/* implicit */int) 7681965047895631225ULL);
                        arr_69 [i_21] [(signed char)2] [i_15] [(signed char)7] [i_0 - 2] &= ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) max((4115857935U), (((/* implicit */unsigned int) arr_25 [i_0]))))) | (max((((/* implicit */unsigned long long int) -729585271)), (arr_8 [i_0] [i_1] [i_1] [0]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_21])) ? (arr_23 [3] [i_15] [(signed char)3] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_0] [3ULL] [i_1] [1ULL] [i_21])))))))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_22 = 0; i_22 < 10; i_22 += 3) /* same iter space */
                        {
                            var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) ((((/* implicit */_Bool) min(((signed char)-106), ((signed char)104)))) ? (max((((/* implicit */unsigned long long int) min((arr_59 [(signed char)5] [i_0] [i_1] [0ULL] [i_21] [i_21] [0ULL]), ((signed char)-111)))), (((var_4) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-88))))))) : (var_0))))));
                            var_39 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483647)) ? (((((/* implicit */_Bool) ((295444668U) % (2147614696U)))) ? (((/* implicit */unsigned long long int) (+(var_12)))) : (8447008404483225883ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_3 [i_15 + 2] [6U] [i_22])) / (3508993211U))))));
                            arr_74 [i_22] [i_21] [i_15] [i_1] [i_0] |= ((/* implicit */int) ((((/* implicit */unsigned int) var_12)) / ((-(arr_49 [i_1] [i_1] [i_15 + 2] [i_22])))));
                            var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -425049833)) ? (max((arr_42 [i_15 - 2] [i_0 + 1]), (arr_42 [i_15 - 1] [i_0 - 2]))) : ((-(min((((/* implicit */unsigned long long int) (signed char)-14)), (18437736874454810624ULL)))))));
                        }
                        for (unsigned int i_23 = 0; i_23 < 10; i_23 += 3) /* same iter space */
                        {
                            var_41 &= ((/* implicit */unsigned long long int) arr_63 [i_0] [i_15 + 1] [i_21] [i_23]);
                            var_42 = ((/* implicit */signed char) var_14);
                            var_43 = ((signed char) ((((/* implicit */_Bool) arr_38 [i_0] [i_1] [i_21])) ? (arr_27 [i_0] [i_15 + 2] [i_21] [i_23]) : (arr_27 [i_0 - 1] [i_1] [i_21] [i_23])));
                        }
                        arr_77 [i_0] [i_0] [i_1] [i_15 + 3] [i_1] [i_21] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 18203898101156368594ULL)) ? (arr_6 [i_0] [i_0] [i_15 + 2]) : (var_6)))) ? (arr_11 [i_0] [(signed char)9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_2)))))) <= (((/* implicit */unsigned long long int) max((min((arr_60 [i_21] [2U] [(signed char)0] [i_0] [i_0]), (var_1))), (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
                    }
                    var_44 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((unsigned long long int) 901855272U))) ? (((/* implicit */unsigned int) ((var_7) / (((/* implicit */int) arr_37 [i_1] [i_15 + 1]))))) : ((+(arr_32 [i_15 + 2] [i_15] [i_1] [5] [1] [8U]))))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_64 [i_0] [i_1] [i_15] [i_15])))));
                }
                arr_78 [i_0 + 2] [5U] [i_1] = ((/* implicit */unsigned long long int) 2654434556U);
            }
        } 
    } 
}
