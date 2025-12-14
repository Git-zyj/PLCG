/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16972
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 6271557250454165772LL)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)63)) < (((/* implicit */int) (unsigned char)63))))) : (((/* implicit */int) ((-1281599622) <= (((/* implicit */int) (signed char)86))))))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((((~(((/* implicit */int) arr_2 [i_0] [i_0])))) + (2147483647))) << (((((/* implicit */int) (unsigned char)74)) - (74)))))) ? (((min((((/* implicit */long long int) (unsigned char)149)), (-1LL))) ^ (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)149)) ^ (-1322799608)))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0])))))));
    }
    /* LoopSeq 3 */
    for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 988058513U)) ? (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_1] [i_1])) << (((/* implicit */int) (unsigned char)9))))) : (min((arr_0 [i_1]), (((/* implicit */long long int) var_9)))))))));
        /* LoopSeq 2 */
        for (unsigned short i_2 = 2; i_2 < 12; i_2 += 3) 
        {
            arr_8 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (-(max((((((/* implicit */_Bool) (signed char)72)) ? (((/* implicit */int) (unsigned char)164)) : (((/* implicit */int) arr_4 [i_2 + 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)108)))))))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 14; i_3 += 1) 
            {
                for (long long int i_4 = 1; i_4 < 12; i_4 += 3) 
                {
                    {
                        var_14 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_2 + 1])) ? (var_8) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)182)) ? (((/* implicit */int) (unsigned char)36)) : (((/* implicit */int) (_Bool)0))))))) < (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)388), (((/* implicit */unsigned short) arr_1 [i_2 - 1]))))))));
                        arr_13 [i_1] [i_1] = min((((((/* implicit */_Bool) max((arr_5 [i_1] [i_1]), (((/* implicit */long long int) arr_11 [i_1] [i_1] [i_2] [i_3] [i_4] [i_4]))))) ? ((~(((/* implicit */int) (unsigned char)38)))) : (((/* implicit */int) ((((/* implicit */int) arr_10 [i_1] [i_2] [i_3] [i_4])) < (((/* implicit */int) (_Bool)1))))))), (((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1] [i_4 + 1] [i_3] [i_2 + 2])) ? (((/* implicit */int) max((((/* implicit */short) (unsigned char)91)), (arr_9 [i_1] [i_2 - 2] [i_1])))) : (((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */int) arr_1 [i_4])) : (((/* implicit */int) arr_4 [i_1])))))));
                        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) var_0))));
                        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_4] [i_4 + 2] [i_3] [i_4 - 1] [i_2] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4] [i_3] [0ULL] [i_1]))) : (3181300241918205960ULL)));
                    }
                } 
            } 
            arr_14 [i_1] [i_2] [(unsigned char)0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */signed char) ((((/* implicit */_Bool) 3232185765U)) || (((/* implicit */_Bool) var_2))))), ((signed char)71)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) max(((unsigned char)74), (((/* implicit */unsigned char) (_Bool)1)))))));
            arr_15 [i_1] [i_2] = max((((/* implicit */long long int) (unsigned short)65148)), (-6063014334773095267LL));
            var_17 = ((/* implicit */_Bool) arr_4 [i_1]);
        }
        for (long long int i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_6 = 3; i_6 < 13; i_6 += 1) 
            {
                var_18 ^= ((/* implicit */unsigned short) min((min(((~(var_6))), (((/* implicit */long long int) -1711545032)))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(short)6] [(signed char)12])) ? (((/* implicit */int) (unsigned char)158)) : (((/* implicit */int) var_1))))) ? ((-(((/* implicit */int) (signed char)25)))) : (((/* implicit */int) arr_10 [i_6 - 2] [i_5] [i_6] [i_5])))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 3) 
                {
                    var_19 |= min((max((max((((/* implicit */unsigned long long int) arr_22 [i_1] [i_5] [i_1] [i_1])), (arr_16 [i_6]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)58)) ? (((/* implicit */int) (short)13486)) : (((/* implicit */int) (signed char)-51))))))), (((/* implicit */unsigned long long int) arr_20 [i_1] [i_5])));
                    arr_24 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_19 [i_1] [i_5] [i_6] [i_1])) ? (2633516603452908510LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) <= (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_6 [i_1])), ((unsigned char)107))))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-56)), ((unsigned char)199)))) : (((/* implicit */int) arr_4 [i_1]))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    arr_28 [i_1] = ((/* implicit */long long int) (unsigned short)388);
                    var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(-203294358)))) ? (((/* implicit */int) (short)20161)) : (((/* implicit */int) max((arr_12 [i_6 - 2] [i_6 - 1] [i_6] [i_6 - 1] [i_6] [(_Bool)1]), (((/* implicit */short) max(((unsigned char)148), (((/* implicit */unsigned char) (_Bool)1))))))))));
                    arr_29 [i_1] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 536870912)) ? (((/* implicit */int) (unsigned char)156)) : (-1711545032))) << (((((((/* implicit */long long int) (-(((/* implicit */int) (short)-4210))))) ^ (min((((/* implicit */long long int) var_4)), (arr_5 [(short)9] [i_1]))))) - (1320909428LL)))));
                }
            }
            /* LoopNest 2 */
            for (unsigned char i_9 = 4; i_9 < 12; i_9 += 1) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        arr_34 [0ULL] [0ULL] [i_9] |= ((/* implicit */unsigned int) max((((/* implicit */int) min(((short)-837), (((/* implicit */short) arr_10 [i_1] [i_5] [(_Bool)1] [i_10]))))), (((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */int) (unsigned char)156)) : (((/* implicit */int) (unsigned char)56))))));
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)156)) ? (((/* implicit */int) max(((unsigned char)199), (((/* implicit */unsigned char) (signed char)124))))) : ((-(((((/* implicit */int) arr_12 [i_1] [i_5] [i_5] [i_9 - 3] [i_10] [i_10])) / (((/* implicit */int) (unsigned char)158))))))));
                        arr_35 [i_1] [i_1] [i_5] [i_5] [i_9] [i_10] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (((_Bool)0) ? (5693646555043684530LL) : (((/* implicit */long long int) ((/* implicit */int) (short)836)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59591))) : (max((arr_11 [i_1] [i_1] [i_5] [i_1] [i_9] [i_1]), (((/* implicit */unsigned int) arr_30 [i_1] [i_5])))))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_9 [i_1] [i_5] [i_1])), (-1711545032)))) ? (((/* implicit */int) ((arr_31 [i_1] [i_5] [i_5] [i_10]) < (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) : (((/* implicit */int) arr_12 [i_10] [i_10] [i_9 + 1] [i_5] [i_5] [i_1])))))));
                    }
                } 
            } 
        }
    }
    for (unsigned int i_11 = 0; i_11 < 14; i_11 += 1) /* same iter space */
    {
        var_22 *= ((/* implicit */unsigned int) ((((/* implicit */long long int) max(((-(-1711545032))), ((~(((/* implicit */int) arr_19 [0LL] [i_11] [i_11] [i_11]))))))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_11])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)178))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-124))))) : ((+(var_6)))))));
        /* LoopSeq 2 */
        for (int i_12 = 0; i_12 < 14; i_12 += 4) 
        {
            /* LoopNest 2 */
            for (short i_13 = 0; i_13 < 14; i_13 += 3) 
            {
                for (signed char i_14 = 0; i_14 < 14; i_14 += 3) 
                {
                    {
                        arr_49 [i_11] [i_12] [i_13] [i_11] = ((/* implicit */signed char) arr_45 [i_11] [i_11] [i_11]);
                        var_23 *= ((/* implicit */unsigned short) min((((/* implicit */unsigned char) (signed char)-125)), ((unsigned char)3)));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_15 = 0; i_15 < 14; i_15 += 3) 
                        {
                            arr_52 [i_12] [i_11] = ((/* implicit */unsigned short) var_11);
                            var_24 += (!(((/* implicit */_Bool) arr_51 [i_12] [i_12] [i_13] [i_15])));
                            var_25 = ((/* implicit */signed char) ((((((/* implicit */int) (short)18519)) << (((2083741204227823820LL) - (2083741204227823805LL))))) != (((((/* implicit */int) (unsigned short)54714)) + (((/* implicit */int) (unsigned char)169))))));
                        }
                    }
                } 
            } 
            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_12] [i_11] [i_11] [i_12])) << (((((((/* implicit */_Bool) (unsigned char)183)) || (((/* implicit */_Bool) (unsigned char)76)))) ? (max((var_6), (((/* implicit */long long int) arr_43 [i_11] [i_12] [i_12])))) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))))));
            arr_53 [i_11] [i_12] = ((/* implicit */int) (-(((((((/* implicit */unsigned int) 315865966)) % (arr_11 [i_11] [i_11] [i_11] [4ULL] [i_12] [i_12]))) >> (((max((4672080149992277383LL), (((/* implicit */long long int) (unsigned char)116)))) - (4672080149992277358LL)))))));
            /* LoopSeq 3 */
            for (int i_16 = 0; i_16 < 14; i_16 += 3) 
            {
                var_27 |= ((/* implicit */long long int) (short)30994);
                arr_56 [i_11] [i_11] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_11] [i_11] [i_16] [i_11])) % (((/* implicit */int) (unsigned char)72))))) ? (max((((/* implicit */unsigned long long int) var_11)), (arr_26 [i_11] [i_12] [i_16] [i_12]))) : (((/* implicit */unsigned long long int) max((max((arr_37 [3] [i_11]), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) ((unsigned short) arr_41 [i_11] [6LL] [i_12]))))))));
            }
            for (short i_17 = 1; i_17 < 12; i_17 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (short i_18 = 0; i_18 < 14; i_18 += 2) 
                {
                    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_17] [i_17 + 1] [i_17] [i_18])) ? (arr_31 [i_11] [i_17 + 1] [10LL] [i_18]) : (arr_31 [i_18] [i_17 + 1] [i_17 - 1] [i_18])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_17] [i_17 - 1] [i_17] [i_17 - 1])) && (((/* implicit */_Bool) arr_31 [i_11] [i_17 + 2] [i_17] [i_18])))))) : (arr_31 [i_17] [i_17 + 1] [i_17] [i_17])));
                    var_29 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)232)) / (2147483647)))) ? (arr_58 [i_11] [i_12] [i_17 - 1] [i_18]) : (((arr_57 [i_11]) ? (((/* implicit */int) arr_9 [(short)0] [i_17] [i_18])) : (((/* implicit */int) (short)8856))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-124))) : (((((((/* implicit */_Bool) (unsigned short)27476)) ? (var_2) : (((/* implicit */unsigned long long int) arr_31 [i_18] [i_17] [0U] [i_11])))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_46 [6] [i_17] [i_12] [i_11])) << (((((/* implicit */int) (unsigned char)173)) - (169))))))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_19 = 3; i_19 < 13; i_19 += 1) 
                    {
                        var_30 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)170))) - ((-(5792253961433987798LL)))))) && (((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-28909)) ^ (((/* implicit */int) (short)-28909))))))))));
                        var_31 = ((/* implicit */signed char) min((var_31), (arr_20 [i_11] [i_11])));
                    }
                    for (unsigned long long int i_20 = 0; i_20 < 14; i_20 += 2) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned char) min((var_32), ((unsigned char)99)));
                        var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)8074)) ? (((/* implicit */int) (unsigned short)34661)) : (((/* implicit */int) (_Bool)1)))))));
                        arr_68 [i_20] [i_11] [i_12] [i_12] [i_17] [(unsigned short)6] [i_12] |= ((/* implicit */signed char) arr_67 [i_11] [i_12] [i_18] [i_18] [i_20]);
                        var_34 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_45 [i_17 - 1] [i_17] [i_17 + 1]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_21 [(_Bool)1] [i_20] [(unsigned short)3]), (((/* implicit */signed char) (_Bool)1))))) ? (max((((/* implicit */int) var_3)), (arr_51 [i_20] [i_17] [i_18] [i_18]))) : (((/* implicit */int) var_3)))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_21 = 0; i_21 < 14; i_21 += 2) /* same iter space */
                    {
                        var_35 = ((/* implicit */int) (-(arr_31 [i_17] [i_17 + 2] [i_17 + 2] [i_17 + 2])));
                        arr_72 [i_11] [i_12] [i_17] [i_11] [i_21] = ((((/* implicit */_Bool) (signed char)-61)) ? (arr_66 [i_11] [i_17] [i_17]) : (arr_66 [i_12] [i_12] [i_12]));
                        var_36 = ((/* implicit */long long int) ((((/* implicit */int) arr_43 [i_11] [i_11] [i_17 - 1])) < (((/* implicit */int) arr_41 [i_11] [i_17] [i_17 + 1]))));
                    }
                }
                var_37 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_32 [i_12] [i_17 + 2]))))) < (((((/* implicit */_Bool) arr_32 [i_17] [i_17 + 1])) ? (17448754967469504049ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_12] [i_17 + 2])))))));
                /* LoopNest 2 */
                for (unsigned int i_22 = 0; i_22 < 14; i_22 += 1) 
                {
                    for (long long int i_23 = 0; i_23 < 14; i_23 += 3) 
                    {
                        {
                            arr_77 [i_11] [i_12] [i_12] [i_22] [8ULL] [i_12] [i_23] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */int) (_Bool)1)) ^ (var_4)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)130)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)0))))) != ((((_Bool)1) ? (arr_26 [i_11] [i_12] [i_12] [i_23]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_22]))))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_66 [i_17] [i_17] [i_17])))))) ^ (max((997696299U), (((/* implicit */unsigned int) (unsigned char)155))))))));
                            var_38 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_64 [i_11] [i_12] [i_17])) && (((/* implicit */_Bool) arr_73 [i_12]))))) < (((/* implicit */int) min(((unsigned short)34625), (((/* implicit */unsigned short) arr_23 [i_11] [i_11] [i_11] [i_11])))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) - (min((((/* implicit */unsigned long long int) 4294967284U)), (9983792729478203776ULL)))))));
                            arr_78 [i_11] [i_12] [i_17] [i_22] [i_11] [i_22] = ((/* implicit */int) ((((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)34625))))) / ((~(arr_0 [i_11]))))) & (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_11] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_26 [i_11] [i_11] [i_11] [0LL])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_12] [i_23]))) : (arr_31 [i_11] [i_23] [i_17] [i_17 + 1]))))));
                            var_39 = ((/* implicit */unsigned int) min((7748004360569119444ULL), (13420900400875781718ULL)));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (short i_24 = 1; i_24 < 12; i_24 += 4) /* same iter space */
            {
                arr_82 [i_11] [i_11] [i_12] [i_24 - 1] = ((/* implicit */signed char) ((((/* implicit */int) arr_36 [i_24 + 2])) < (((/* implicit */int) arr_36 [i_24 + 1]))));
                var_40 += ((/* implicit */long long int) arr_51 [i_12] [i_24] [i_24] [i_12]);
                var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)9951)) : (((/* implicit */int) arr_42 [2U] [i_12] [i_24]))))) ? (((unsigned int) (unsigned short)43638)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_12])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_30 [i_11] [i_24])))))));
            }
            var_42 = ((/* implicit */int) max((((((/* implicit */_Bool) ((arr_30 [i_11] [(unsigned char)12]) ? (((/* implicit */int) (unsigned char)130)) : (((/* implicit */int) (unsigned short)61414))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)17))))) : (arr_71 [i_11]))), (((/* implicit */unsigned long long int) (-(min((262143LL), (((/* implicit */long long int) arr_65 [i_11] [i_11])))))))));
        }
        /* vectorizable */
        for (unsigned int i_25 = 0; i_25 < 14; i_25 += 4) 
        {
            var_43 = ((/* implicit */signed char) arr_59 [i_11]);
            arr_87 [i_11] [i_25] [i_25] &= ((/* implicit */long long int) arr_80 [i_11] [(short)13] [i_25]);
            var_44 = ((/* implicit */signed char) (_Bool)1);
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
        {
            var_45 ^= ((/* implicit */short) ((((/* implicit */_Bool) 1579057490U)) ? (((((/* implicit */_Bool) (short)-14253)) ? (5298383250834032340ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_11] [i_26] [(signed char)6]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((9983792729478203771ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
            var_46 = ((/* implicit */signed char) var_6);
            /* LoopSeq 2 */
            for (unsigned int i_27 = 0; i_27 < 14; i_27 += 1) 
            {
                var_47 = ((/* implicit */short) ((((/* implicit */_Bool) arr_74 [i_11] [i_26])) || (((/* implicit */_Bool) arr_74 [i_11] [i_27]))));
                var_48 = ((/* implicit */unsigned short) arr_89 [i_11] [i_26] [i_27]);
                var_49 -= ((/* implicit */unsigned long long int) -1);
            }
            for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
            {
                var_50 = ((/* implicit */signed char) (_Bool)1);
                arr_96 [i_11] = ((/* implicit */short) ((-1) % (((/* implicit */int) arr_17 [i_11] [i_28]))));
            }
        }
    }
    /* vectorizable */
    for (unsigned int i_29 = 0; i_29 < 14; i_29 += 1) /* same iter space */
    {
        arr_100 [i_29] = ((/* implicit */_Bool) 9983792729478203788ULL);
        var_51 = ((/* implicit */int) ((arr_38 [(_Bool)1]) + (arr_38 [(short)8])));
        var_52 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (13420900400875781718ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [i_29] [i_29])))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (short)14267)) ? (((/* implicit */int) arr_44 [i_29])) : (((/* implicit */int) var_11)))));
    }
}
