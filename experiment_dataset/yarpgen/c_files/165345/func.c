/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165345
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [(_Bool)1] |= ((/* implicit */short) var_13);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_1] [i_1] [i_0] [i_1] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (18446744073709551615ULL) : (18446744073709551615ULL)))));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1831204887)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (11816090187668743722ULL)));
                }
            } 
        } 
    }
    for (short i_3 = 0; i_3 < 17; i_3 += 2) 
    {
        arr_14 [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) max((arr_5 [i_3]), (var_7)))), (min((((/* implicit */long long int) arr_11 [12LL])), (var_5)))))) ? (((/* implicit */unsigned long long int) (+((+(var_8)))))) : (var_17)));
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 3) 
            {
                {
                    var_21 = ((/* implicit */int) ((_Bool) max((((((/* implicit */_Bool) -8139874720949571931LL)) ? (-1831204884) : (877236587))), (((/* implicit */int) arr_15 [i_4])))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 4) 
                    {
                        arr_21 [i_3] [i_4] [i_5] [i_6] [i_4] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_18 [i_3] [i_4] [i_5])) : (((/* implicit */int) arr_18 [i_3] [i_4] [i_5]))))) ? (((/* implicit */int) max((arr_18 [i_3] [i_5] [i_5]), (arr_18 [i_3] [i_4] [i_4])))) : (((((/* implicit */int) arr_18 [i_6] [i_5] [i_4])) % (((/* implicit */int) var_0))))));
                        var_22 = ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) arr_11 [i_3])), (7518945967273763319LL))) >> (((/* implicit */int) ((_Bool) (_Bool)1)))));
                        arr_22 [i_4] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 877236573)) ? (((((/* implicit */_Bool) var_11)) ? (arr_1 [i_3]) : (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_15 [i_4])) : (((/* implicit */int) (_Bool)0))))))), (((/* implicit */long long int) 1299236358))));
                    }
                }
            } 
        } 
    }
    /* LoopSeq 3 */
    for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 4) 
    {
        arr_25 [i_7] = (-(max((((/* implicit */unsigned long long int) (_Bool)1)), (min((((/* implicit */unsigned long long int) -2968192688406654252LL)), (arr_19 [i_7] [i_7] [i_7] [i_7] [i_7]))))));
        /* LoopSeq 1 */
        for (short i_8 = 0; i_8 < 17; i_8 += 4) 
        {
            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_19)), (max((33554431LL), (((/* implicit */long long int) arr_6 [i_7] [i_7] [(short)0]))))))) ? (((((/* implicit */_Bool) ((var_14) ? (((/* implicit */unsigned long long int) 5809192068477512490LL)) : (var_17)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [7ULL] [i_8])) ? (arr_3 [i_8] [i_8]) : (((/* implicit */int) arr_12 [i_8]))))) : (arr_27 [i_7]))) : (((/* implicit */unsigned long long int) (-(arr_1 [i_8]))))));
            arr_29 [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((min((var_17), (arr_16 [i_8]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [(short)13])) ? (-3664700626282296528LL) : (((/* implicit */long long int) 877236573)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((var_6) ? (14121613197950636364ULL) : (var_9))) <= (var_17))))) : (arr_24 [i_7])));
            var_24 *= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_12 [i_7])), ((~(((/* implicit */int) arr_17 [i_8] [i_8] [i_7] [i_7]))))))) ? (max((877236595), (-319225539))) : (((/* implicit */int) (short)26046))));
        }
    }
    for (short i_9 = 0; i_9 < 13; i_9 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 4) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_12 = 0; i_12 < 13; i_12 += 4) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */int) (+(var_10)));
                                arr_43 [i_9] [i_9] [i_11] [(_Bool)1] [i_13] = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_41 [i_9] [i_10])) ? (((/* implicit */int) (short)1020)) : (((/* implicit */int) arr_4 [i_12]))))), (arr_42 [i_9] [i_10] [i_11] [4] [(_Bool)1] [i_10]))) >> (((var_13) - (8235777111266221797ULL)))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        arr_46 [i_9] [i_10] [i_14] [i_10] &= ((/* implicit */short) ((((/* implicit */_Bool) (~(min((var_1), (((/* implicit */unsigned long long int) arr_8 [i_10]))))))) ? (max((((/* implicit */long long int) ((arr_11 [1ULL]) ? (((/* implicit */int) (short)-1526)) : (arr_3 [i_9] [i_9])))), (((long long int) -842471674)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_7))))) > (arr_26 [i_9] [i_14] [i_9])))))));
                        arr_47 [i_9] [(_Bool)1] [i_10] [i_11] [i_14] = ((/* implicit */_Bool) (((((+(((var_6) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_38 [1LL] [(short)8] [i_11] [1LL]))))) + (9223372036854775807LL))) >> ((((~((-(0))))) + (45)))));
                    }
                    for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 3) 
                    {
                        arr_51 [i_9] [i_10] [i_9] [i_15] = ((/* implicit */short) max((arr_27 [i_10]), (((/* implicit */unsigned long long int) (+(max((((/* implicit */int) arr_37 [i_15])), (var_8))))))));
                        /* LoopSeq 2 */
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            arr_54 [i_9] [i_10] [i_11] [i_9] [i_15] [i_16] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(max((((/* implicit */int) var_0)), (877236587)))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_19)), (var_9)))) ? (((/* implicit */unsigned long long int) -1831204887)) : (((arr_5 [i_10]) ? (arr_42 [i_9] [i_10] [6LL] [(short)9] [(_Bool)1] [i_16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
                            var_26 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_9] [i_9] [i_9])) ? (((/* implicit */int) arr_5 [i_10])) : (16383)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_14))))) : (min((var_13), (var_1)))))) ? (((long long int) arr_40 [i_9] [i_9] [i_11] [i_15] [i_11] [i_16] [i_9])) : (((/* implicit */long long int) ((/* implicit */int) var_19))));
                            arr_55 [i_9] [i_9] [i_11] [i_15] [i_16] = ((/* implicit */long long int) ((var_0) ? (arr_26 [i_9] [i_10] [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                        for (unsigned long long int i_17 = 0; i_17 < 13; i_17 += 4) 
                        {
                            var_27 = ((((/* implicit */int) (((~(arr_50 [i_9] [i_9] [3ULL] [i_15]))) <= (((((((/* implicit */int) arr_30 [i_9])) + (2147483647))) << (((/* implicit */int) arr_34 [i_9] [i_10] [i_17]))))))) < (((/* implicit */int) var_2)));
                            var_28 = ((/* implicit */long long int) min(((~(((((/* implicit */_Bool) (short)6043)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_2)))))), (((/* implicit */int) var_6))));
                        }
                        arr_58 [i_9] [i_10] [i_11] [i_15] = ((/* implicit */short) max((((/* implicit */unsigned long long int) 8005449169603186814LL)), (((min((((/* implicit */unsigned long long int) var_14)), (var_13))) ^ (((unsigned long long int) 7690310957966348581LL))))));
                    }
                    /* vectorizable */
                    for (int i_18 = 0; i_18 < 13; i_18 += 2) 
                    {
                        arr_62 [i_18] [i_11] [i_9] [i_9] [i_9] [0LL] = ((/* implicit */_Bool) arr_10 [i_18]);
                        /* LoopSeq 1 */
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            var_29 = (!((!(((/* implicit */_Bool) arr_42 [i_9] [i_10] [i_11] [i_18] [i_19] [i_19])))));
                            var_30 = ((_Bool) (_Bool)1);
                            var_31 ^= ((/* implicit */short) arr_4 [i_10]);
                        }
                    }
                    /* LoopNest 2 */
                    for (long long int i_20 = 0; i_20 < 13; i_20 += 4) 
                    {
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            {
                                arr_70 [i_9] [i_9] [i_9] = ((/* implicit */unsigned long long int) max((2305843009213693696LL), (((/* implicit */long long int) (_Bool)1))));
                                var_32 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) var_7)) : (26)));
                            }
                        } 
                    } 
                    arr_71 [i_10] = arr_8 [i_10];
                    var_33 = ((/* implicit */long long int) max((min((((/* implicit */int) arr_59 [i_9] [i_9] [i_9] [i_9] [11ULL])), (((arr_20 [i_10] [(_Bool)1] [i_10] [i_9] [i_10]) ? (arr_44 [i_9] [i_9] [8LL] [i_10] [i_11] [i_11]) : (((/* implicit */int) var_6)))))), (((((/* implicit */_Bool) 1299236358)) ? (-842471674) : (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_22 = 0; i_22 < 13; i_22 += 4) 
        {
            for (int i_23 = 0; i_23 < 13; i_23 += 4) 
            {
                for (long long int i_24 = 0; i_24 < 13; i_24 += 4) 
                {
                    {
                        arr_82 [i_9] [i_22] [i_23] [i_22] = ((/* implicit */_Bool) var_12);
                        var_34 = max((var_5), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [7ULL] [i_22] [i_23])) >> (((arr_74 [2LL] [i_23] [i_24]) - (4887781130575589838ULL)))))) ? (((/* implicit */int) var_19)) : (((/* implicit */int) max((var_19), (((/* implicit */short) arr_40 [i_9] [5LL] [i_23] [9ULL] [i_9] [i_23] [i_23])))))))));
                    }
                } 
            } 
        } 
        arr_83 [i_9] [i_9] = ((/* implicit */_Bool) ((((((/* implicit */int) (short)-13691)) + (2147483647))) << (((((-4472566832083171054LL) + (4472566832083171079LL))) - (25LL)))));
    }
    for (long long int i_25 = 0; i_25 < 11; i_25 += 3) 
    {
        arr_87 [(short)2] &= ((/* implicit */long long int) arr_30 [i_25]);
        /* LoopSeq 1 */
        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
        {
            /* LoopNest 2 */
            for (int i_27 = 0; i_27 < 11; i_27 += 3) 
            {
                for (short i_28 = 0; i_28 < 11; i_28 += 2) 
                {
                    {
                        var_35 = (!(((/* implicit */_Bool) arr_86 [i_25])));
                        arr_95 [i_25] [i_26] = arr_66 [i_27] [i_27] [i_27] [i_27];
                        var_36 = ((/* implicit */short) (-(max((((arr_0 [4]) ? (((/* implicit */int) arr_64 [i_25] [i_25] [i_25] [i_25])) : (((/* implicit */int) (short)(-32767 - 1))))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (short)-1021)))))))));
                    }
                } 
            } 
            var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) max((min((arr_36 [i_25] [i_25] [i_25]), (arr_36 [i_25] [i_25] [i_25]))), (((/* implicit */long long int) ((min((arr_27 [i_26]), (((/* implicit */unsigned long long int) arr_93 [(short)4])))) <= (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_19)), (var_5))))))))))));
            arr_96 [i_25] [i_25] = ((/* implicit */_Bool) (short)7030);
        }
        var_38 = ((((((/* implicit */_Bool) arr_48 [i_25] [i_25] [i_25] [i_25])) ? (arr_48 [i_25] [i_25] [i_25] [i_25]) : (arr_48 [i_25] [i_25] [i_25] [i_25]))) ^ (((/* implicit */long long int) ((/* implicit */int) var_2))));
    }
    /* LoopNest 2 */
    for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
    {
        for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
        {
            {
                var_39 = ((/* implicit */int) ((_Bool) ((((/* implicit */int) max((var_14), (arr_97 [i_29])))) | (((/* implicit */int) arr_98 [i_30])))));
                /* LoopSeq 2 */
                for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                {
                    var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_98 [i_29])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_14), (var_2))))) != ((+(var_17))))))));
                    arr_104 [i_29] [i_30] [i_30] [i_31] = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-5580674526130962519LL)))), (((((/* implicit */_Bool) 6295171748774756338LL)) ? (var_9) : (18446744073709551603ULL))))), (((/* implicit */unsigned long long int) min((((/* implicit */short) min((var_6), (arr_100 [i_29] [i_30] [i_30])))), (min((((/* implicit */short) var_14)), ((short)0))))))));
                }
                for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
                {
                    arr_108 [i_30] [i_30] [7LL] [i_29] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((arr_100 [i_29] [i_30] [i_30]) ? (5580674526130962516LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1)) || (((/* implicit */_Bool) arr_102 [i_29] [i_30]))))))))));
                    var_41 = ((/* implicit */unsigned long long int) arr_102 [i_30] [i_30]);
                }
                var_42 = arr_97 [i_29];
            }
        } 
    } 
    var_43 = var_2;
    var_44 = ((/* implicit */short) var_9);
}
