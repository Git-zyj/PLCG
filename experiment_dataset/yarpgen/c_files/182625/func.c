/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182625
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
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            var_10 = 6021986138736256780ULL;
                            var_11 = ((4692142404019026577ULL) + (((var_1) ^ (arr_13 [i_1 + 1]))));
                        }
                        arr_18 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_1 - 1] [i_0] [i_0 - 1] [8ULL])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_17 [i_0]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [i_3])) && (((/* implicit */_Bool) arr_7 [i_0] [i_1 + 1] [7ULL] [i_0 + 2])))))));
                        var_12 = ((10729464285277263228ULL) >> (((arr_4 [i_0 - 1]) - (396707244384690692ULL))));
                    }
                    for (unsigned long long int i_5 = 3; i_5 < 14; i_5 += 1) 
                    {
                        var_13 &= ((((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_5] [i_2] [i_5] [i_5])) ? (((((/* implicit */_Bool) (~(0ULL)))) ? (((14552773472719387224ULL) % (8891574011868358243ULL))) : (arr_5 [i_0 - 1] [i_1 + 1] [i_5 - 3]))) : (max((((6680624129307820950ULL) * (arr_21 [i_0] [i_0] [i_0] [0ULL]))), (((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_0 - 1] [i_1] [i_2] [i_5] [i_5])) ? (arr_12 [i_0] [i_1 - 1] [i_2] [8ULL] [2ULL] [i_5]) : (var_2))))));
                        arr_22 [i_5] = min((var_8), (min((7717279788432288368ULL), (0ULL))));
                    }
                    var_14 = ((max((arr_3 [i_1 - 1] [i_0 + 1]), (arr_4 [i_1 - 1]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((unsigned long long int) arr_10 [i_2])) != (min((3343138293365209325ULL), (arr_9 [i_0] [i_0] [i_0] [i_0]))))))));
                    arr_23 [i_0] [i_0] [i_0] [i_2] = min((((var_4) << (((((((/* implicit */_Bool) var_2)) ? (var_9) : (var_6))) - (8556910894559018432ULL))))), ((~(max((arr_14 [i_0]), (arr_16 [i_0] [i_1] [i_0] [i_0] [i_0] [i_2] [i_2]))))));
                }
                /* LoopSeq 3 */
                for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                {
                    var_15 = max((((((((/* implicit */_Bool) 2726543119660694626ULL)) ? (4219953079579830834ULL) : (2034649617456851548ULL))) * (arr_3 [i_0 + 1] [i_1]))), (((((/* implicit */_Bool) arr_8 [i_6] [i_1] [i_1] [i_0 + 1])) ? (arr_20 [i_0 + 2] [2ULL] [i_0] [i_0 + 2] [i_1 - 1]) : (var_2))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 4) /* same iter space */
                        {
                            var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [8ULL] [i_7] [i_8])) ? (18446744073709551615ULL) : (14420722204764089568ULL)))) ? (((((/* implicit */_Bool) var_3)) ? (var_0) : (arr_17 [i_0]))) : (var_3))))));
                            var_17 = (+(13917878553077471481ULL));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 4) /* same iter space */
                        {
                            var_18 ^= arr_5 [i_1] [5ULL] [5ULL];
                            var_19 = max(((~(((arr_11 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) & (arr_4 [i_0]))))), (((((((/* implicit */_Bool) arr_5 [i_1] [2ULL] [i_7])) ? (arr_21 [i_9] [i_7] [i_1] [i_0]) : (4446197401375721743ULL))) % (var_9))));
                            arr_35 [i_0] [i_1] [1ULL] [i_1] [i_1 - 1] [6ULL] [i_0 + 2] = min((((arr_29 [i_0] [i_0] [i_0] [i_0] [4ULL]) - (((arr_17 [i_0]) - (1041832493899636865ULL))))), (var_8));
                            arr_36 [i_0] [i_1 - 1] [i_6] [i_6] [i_6] [i_1 - 1] [i_9] |= ((((unsigned long long int) 4466013533843308942ULL)) + (max((arr_26 [i_0 - 1] [i_1] [i_1] [i_9] [i_9] [i_1]), (11902595841765849134ULL))));
                        }
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), (arr_21 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_7])));
                        var_21 *= max((((/* implicit */unsigned long long int) ((arr_25 [i_0 + 1] [i_1 - 1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_0] [i_1 - 1] [i_6] [i_7]))))))))), (var_5));
                    }
                    for (unsigned long long int i_10 = 2; i_10 < 13; i_10 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 1) 
                        {
                            arr_42 [i_0] [i_11] [i_10] = ((min((((((/* implicit */_Bool) 18446744073709551613ULL)) ? (arr_4 [i_1]) : (10310378061712580883ULL))), (max((arr_25 [i_0] [i_10 - 1]), (arr_15 [i_1] [8ULL] [i_11]))))) ^ ((~(((arr_6 [i_0 + 2] [i_1 - 1] [0ULL] [i_11]) & (arr_12 [i_11] [i_10] [i_6] [i_6] [7ULL] [i_0 + 1]))))));
                            var_22 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((2034649617456851548ULL) == (max((arr_29 [i_0 + 1] [i_0 + 1] [i_6] [i_10] [i_11]), (var_4))))))) * ((+(var_8))));
                            var_23 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_25 [i_0 - 1] [i_1 - 1]) <= (var_2))))) != (var_3)));
                        }
                        var_24 = ((((/* implicit */_Bool) arr_15 [i_1 + 1] [i_6] [i_10])) ? (((unsigned long long int) 8326309227475624879ULL)) : (((((/* implicit */_Bool) min((var_6), (arr_32 [i_0] [i_6] [i_10])))) ? (arr_19 [i_6] [i_0]) : (((((/* implicit */_Bool) 4541982240817401647ULL)) ? (13496271232087618141ULL) : (14810053301098518492ULL))))));
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (arr_6 [i_1] [i_1] [i_1] [i_1 + 1])));
                    }
                    var_26 ^= (-(((((arr_31 [i_0] [9ULL] [i_6] [i_6]) * (arr_41 [i_0 + 1] [i_0] [i_1] [i_6] [i_6] [i_6] [i_6]))) * (max((var_9), (var_0))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 4) 
                    {
                        for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 2) 
                        {
                            {
                                arr_47 [i_0] [i_0] [i_1] [i_1] [12ULL] [12ULL] = max((var_3), (((((/* implicit */_Bool) max((arr_10 [i_0]), (arr_32 [i_13] [13ULL] [i_0])))) ? (arr_11 [i_0 + 2] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_1 + 1] [i_1 - 1]) : (((((/* implicit */_Bool) 13386019827907107873ULL)) ? (arr_32 [i_1 - 1] [i_1 - 1] [i_1 - 1]) : (9266172550599529179ULL))))));
                                var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) (!(((((((/* implicit */_Bool) 9180571523110022411ULL)) ? (arr_17 [i_0 + 1]) : (14129071491323692044ULL))) != (((((/* implicit */_Bool) arr_32 [i_13] [14ULL] [14ULL])) ? (13386019827907107873ULL) : (arr_19 [i_13] [i_13]))))))))));
                                arr_48 [i_0] [i_1] [i_6] [i_12] [i_12] = var_0;
                                var_28 = ((((/* implicit */_Bool) arr_34 [i_0 + 2] [0ULL])) ? ((~(arr_34 [i_0 + 2] [i_0 + 2]))) : (var_4));
                                var_29 += max((((unsigned long long int) min((9266172550599529179ULL), (arr_28 [i_0] [i_6] [i_12] [i_13])))), ((~((-(arr_34 [i_12] [i_6]))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 3) /* same iter space */
                {
                    var_30 = ((unsigned long long int) arr_13 [i_0 + 1]);
                    var_31 |= 0ULL;
                }
                for (unsigned long long int i_15 = 0; i_15 < 16; i_15 += 3) /* same iter space */
                {
                    arr_53 [i_0] [i_15] [i_15] = min((((unsigned long long int) 11004841612029432229ULL)), (((((((/* implicit */_Bool) arr_50 [i_0 + 2] [i_15])) ? (13496271232087618140ULL) : (arr_45 [i_15] [i_1] [i_1] [i_1] [i_0] [i_0]))) % (((var_8) ^ (arr_7 [i_15] [i_15] [i_1 + 1] [i_0 + 2]))))));
                    arr_54 [i_0] [i_0 + 2] [i_0 + 2] [10ULL] &= arr_29 [i_0] [i_1] [i_1] [i_1] [2ULL];
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_16 = 0; i_16 < 16; i_16 += 3) 
                {
                    var_32 &= arr_43 [i_0] [i_1] [i_16] [i_16] [i_16];
                    var_33 = ((/* implicit */unsigned long long int) min((var_33), (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 10120434846233926740ULL)))))) == (((((/* implicit */_Bool) var_8)) ? (arr_10 [i_0]) : (arr_32 [i_16] [i_1] [i_0])))))), (arr_29 [i_0] [4ULL] [i_0] [i_0] [i_0])))));
                }
                arr_59 [i_0] [i_0] [i_1 + 1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (+(var_9)))) ? (((unsigned long long int) 18158972821666010133ULL)) : ((+(var_6))))) >= (((arr_24 [i_0 + 2]) - (14039088370159077546ULL)))));
                var_34 ^= 10729464285277263228ULL;
            }
        } 
    } 
    var_35 &= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_7) > (var_2))))) ^ (var_7));
}
