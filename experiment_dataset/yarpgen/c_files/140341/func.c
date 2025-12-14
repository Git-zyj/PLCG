/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140341
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_2] [i_3]);
                        var_11 = ((/* implicit */unsigned short) min((arr_3 [i_0]), (((/* implicit */int) (short)-29904))));
                    }
                } 
            } 
        } 
        arr_11 [6U] [(short)14] = ((/* implicit */unsigned long long int) var_4);
    }
    for (unsigned int i_4 = 3; i_4 < 17; i_4 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_5 = 4; i_5 < 18; i_5 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_6 = 0; i_6 < 19; i_6 += 2) 
            {
                /* LoopSeq 1 */
                for (long long int i_7 = 3; i_7 < 15; i_7 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 3) 
                    {
                        var_12 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_18 [i_6] [i_7] [i_8])) ? (((/* implicit */int) arr_21 [i_4 - 1] [i_5 + 1] [i_5] [i_7 - 2] [i_8] [18])) : (((/* implicit */int) var_10))))));
                        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (arr_20 [i_5] [i_4 - 2] [i_6] [i_5 - 2]) : ((~(((unsigned long long int) (signed char)0))))));
                        arr_24 [i_4] [i_8] [i_4] [i_5] [0LL] = ((/* implicit */int) var_2);
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 3) 
                    {
                        arr_27 [i_4] [i_5] [i_6] [16] [i_9] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned long long int) 4190208U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_25 [i_7 + 3] [i_7 - 2] [i_7] [13ULL] [i_7 + 2] [i_7 - 2] [i_7 - 2]) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)19175))))))) : (min((max((arr_17 [i_5]), (arr_22 [i_4] [i_4] [i_5] [i_5 - 2] [i_5]))), (((/* implicit */unsigned long long int) (~(arr_19 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))))))));
                        var_14 |= ((/* implicit */signed char) (~((+(var_0)))));
                        var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))));
                        var_16 = var_0;
                        var_17 = ((((/* implicit */_Bool) var_3)) ? (arr_22 [i_5 + 1] [i_4 - 2] [i_5 + 1] [i_7 - 3] [14LL]) : (((((((/* implicit */_Bool) (unsigned char)50)) ? (((/* implicit */unsigned long long int) -6483302045448628608LL)) : (3623246675233103372ULL))) / (17902531805014524772ULL))));
                    }
                    arr_28 [i_5] [i_5] [i_6] = ((/* implicit */short) (+((-(-807656755504458757LL)))));
                    /* LoopSeq 2 */
                    for (int i_10 = 3; i_10 < 18; i_10 += 2) 
                    {
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_23 [i_4] [i_4] [i_6] [i_6] [i_5] [i_10])) ? (((/* implicit */unsigned long long int) var_4)) : (var_2)))))) ? (((((/* implicit */_Bool) (-(var_5)))) ? (((/* implicit */unsigned long long int) (~(var_6)))) : (((var_7) + (((/* implicit */unsigned long long int) arr_30 [i_4] [i_5] [i_5] [8ULL] [i_10 - 2])))))) : (((/* implicit */unsigned long long int) ((((var_4) ^ (arr_30 [i_4] [i_4] [i_5] [i_5] [i_5]))) / (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
                        arr_32 [i_4] [i_5] [i_5] [i_7 + 1] [i_5] = ((/* implicit */unsigned int) min((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_23 [i_4] [i_4] [i_6] [i_4] [i_5] [i_7]))) - (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_16 [i_5] [i_5])), (var_4)))))), (min((((/* implicit */unsigned long long int) (+(arr_15 [i_6])))), (((var_0) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
                    }
                    for (long long int i_11 = 0; i_11 < 19; i_11 += 2) 
                    {
                        var_19 = ((/* implicit */short) ((unsigned long long int) min((((/* implicit */unsigned long long int) arr_19 [i_4 - 3] [i_7 - 1] [i_7 - 1] [i_7] [i_7 - 1] [i_4])), (12661215326271167553ULL))));
                        var_20 |= ((/* implicit */unsigned char) min((18446744073709551615ULL), (min((min((((/* implicit */unsigned long long int) 8380379591742734867LL)), (6276140488577259476ULL))), (var_7)))));
                        arr_35 [i_4] [i_4] [i_5] [i_6] [i_11] [i_5 - 4] [i_5 - 1] = ((/* implicit */int) var_7);
                        var_21 = var_7;
                        var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1073739776ULL))));
                    }
                    var_23 &= ((/* implicit */long long int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_34 [i_4] [i_6])), (var_9)))) ? (var_1) : (arr_29 [i_5 - 2] [i_5 - 3] [i_6] [i_5] [i_5 - 2]))) >= (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16087303702192610881ULL)) || (((/* implicit */_Bool) 624265708U))))), (16196228957792280892ULL)))));
                }
                /* LoopSeq 1 */
                for (short i_12 = 0; i_12 < 19; i_12 += 2) 
                {
                    var_24 &= ((/* implicit */short) arr_37 [10ULL] [10ULL]);
                    arr_38 [i_5] = ((/* implicit */unsigned long long int) arr_30 [i_4] [i_4] [i_5] [i_12] [i_12]);
                    var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) var_8))));
                    var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((-1827244264), (((/* implicit */int) (unsigned short)18879))))) ? (arr_20 [i_5] [i_4 - 1] [i_4 + 2] [i_5 - 4]) : (15875603667082412536ULL)))) ? (var_2) : (((/* implicit */unsigned long long int) -1278693249))));
                    var_27 = ((/* implicit */long long int) min((var_27), ((-(((((/* implicit */_Bool) arr_16 [i_12] [i_5])) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_9)) : (arr_30 [i_12] [i_5 - 3] [i_6] [i_6] [0ULL]))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
                }
                var_28 += ((/* implicit */signed char) ((unsigned long long int) (-(var_1))));
            }
            for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_14 = 0; i_14 < 19; i_14 += 2) 
                {
                    var_29 = ((/* implicit */short) (-(((((/* implicit */_Bool) min((var_2), (var_2)))) ? (min((((/* implicit */unsigned long long int) var_4)), (var_8))) : (((/* implicit */unsigned long long int) -1646898220))))));
                    /* LoopSeq 1 */
                    for (short i_15 = 3; i_15 < 18; i_15 += 2) 
                    {
                        arr_49 [(short)12] [i_5] [i_13] [(short)12] [13] = ((/* implicit */unsigned long long int) (~(853405358)));
                        var_30 = (-(((((/* implicit */_Bool) arr_23 [i_5 - 4] [i_15 - 2] [i_13] [i_15] [i_5] [i_14])) ? (arr_23 [i_5 - 4] [i_15 - 3] [i_13] [i_13] [i_5] [i_5 - 3]) : (arr_23 [i_5 - 3] [i_15 - 1] [i_13] [i_14] [i_5] [i_13]))));
                        var_31 = ((/* implicit */unsigned long long int) ((long long int) ((unsigned long long int) arr_39 [i_5] [i_5] [i_13] [i_5])));
                    }
                    var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-10386)) ? (2479031547901182481LL) : (((/* implicit */long long int) -251566623))))) ? (((/* implicit */int) var_3)) : (((int) (+(((/* implicit */int) arr_13 [12] [i_14])))))));
                    var_33 = ((/* implicit */int) ((((/* implicit */_Bool) 2920167540308828747ULL)) ? (((/* implicit */unsigned long long int) 27)) : (((9783763556383966533ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-65)))))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_16 = 0; i_16 < 19; i_16 += 2) 
                {
                    for (unsigned short i_17 = 0; i_17 < 19; i_17 += 3) 
                    {
                        {
                            arr_54 [i_16] [i_5] [i_13] [i_16] [i_17] = max((((((/* implicit */_Bool) arr_14 [i_4 - 2] [i_5] [i_17])) ? (var_8) : (arr_17 [i_5]))), (((unsigned long long int) ((long long int) arr_33 [i_4 - 2] [i_5] [i_13] [i_4 - 2] [i_16] [i_17]))));
                            var_34 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)0)))))));
                            arr_55 [(short)12] [i_5] [2ULL] [i_13] [i_16] [i_17] = ((((/* implicit */_Bool) max((arr_42 [i_4 - 1] [i_5 - 2] [i_13]), (arr_42 [i_4 + 2] [i_5] [i_4 + 2])))) ? ((+(arr_42 [i_4 - 3] [i_16] [i_17]))) : ((~(arr_42 [i_4] [i_4] [i_16]))));
                        }
                    } 
                } 
                arr_56 [8ULL] [i_5] [i_13] = ((/* implicit */unsigned char) ((int) ((signed char) min((((/* implicit */unsigned long long int) arr_15 [i_5 - 1])), (var_7)))));
            }
            for (short i_18 = 0; i_18 < 19; i_18 += 3) 
            {
                var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) (+(((((/* implicit */_Bool) (short)-17637)) ? (max((((/* implicit */unsigned long long int) -4775313887455386740LL)), (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)108))))))))));
                var_36 = ((/* implicit */unsigned long long int) (unsigned short)5);
                var_37 = min((((((/* implicit */_Bool) ((unsigned char) arr_58 [i_4] [i_5 - 3] [i_18]))) ? (var_2) : (min((var_2), (((/* implicit */unsigned long long int) var_9)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_5] [i_4] [i_4 + 1] [i_4 + 1])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_5] [13ULL] [i_4 - 3] [i_4])))))));
                /* LoopNest 2 */
                for (signed char i_19 = 0; i_19 < 19; i_19 += 3) 
                {
                    for (signed char i_20 = 1; i_20 < 16; i_20 += 2) 
                    {
                        {
                            var_38 = ((/* implicit */short) (+(((((/* implicit */_Bool) (+(var_6)))) ? (max((((/* implicit */unsigned long long int) var_10)), (arr_43 [11LL] [i_5] [i_18] [i_19] [i_5]))) : ((+(var_1)))))));
                            var_39 -= ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) 7035504610238699627ULL)) ? (((/* implicit */int) arr_45 [i_18] [i_18] [i_18] [(signed char)14] [i_20] [i_5 - 3])) : (((/* implicit */int) arr_45 [i_4] [i_4] [i_20] [6ULL] [i_20] [i_5 - 3])))));
                            var_40 |= ((/* implicit */long long int) ((signed char) arr_46 [i_4 - 1] [i_4 - 1] [i_18] [(signed char)17] [i_4 - 1] [i_20 + 3]));
                        }
                    } 
                } 
                var_41 = ((/* implicit */unsigned long long int) max((-8381072606928993464LL), (((/* implicit */long long int) arr_53 [i_5]))));
            }
            arr_65 [(unsigned char)2] [14ULL] |= ((/* implicit */long long int) var_8);
            arr_66 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_5)))) ? (((/* implicit */unsigned long long int) 3394311346U)) : (11586126702032041242ULL)));
            var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) ((((/* implicit */_Bool) (+((-(var_2)))))) ? (((((/* implicit */_Bool) ((var_5) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4] [i_4])))))) ? (min((((/* implicit */unsigned long long int) (unsigned short)32512)), (arr_62 [i_4] [i_5] [i_4] [i_5] [i_4 + 1]))) : (arr_26 [i_4] [i_4] [i_5] [i_4] [i_4] [i_4] [(signed char)15]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) min((var_7), (arr_12 [i_5])))))))))));
        }
        arr_67 [i_4] = ((/* implicit */short) arr_57 [i_4] [i_4] [i_4] [i_4 - 2]);
        /* LoopSeq 3 */
        for (unsigned long long int i_21 = 0; i_21 < 19; i_21 += 3) 
        {
            arr_72 [i_4 + 1] [i_4] [i_4] = ((/* implicit */signed char) arr_16 [16LL] [i_21]);
            arr_73 [i_4] [i_4] &= ((/* implicit */long long int) ((unsigned char) min(((-(var_2))), (((/* implicit */unsigned long long int) arr_46 [i_4] [i_4] [i_4] [i_4 - 2] [i_4] [i_21])))));
            arr_74 [(short)9] = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_4)), ((-(arr_43 [i_4] [(unsigned short)18] [i_21] [(unsigned short)18] [i_21]))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_4 + 1] [i_4] [6ULL] [6ULL] [i_4] [i_4])))));
            arr_75 [(unsigned short)15] [i_21] [i_21] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min((var_9), (((/* implicit */unsigned int) (signed char)0))))) <= (min((arr_14 [i_4 + 2] [(unsigned short)18] [i_4 - 2]), (13426622459641859620ULL)))));
        }
        for (unsigned long long int i_22 = 0; i_22 < 19; i_22 += 2) 
        {
            var_43 = ((/* implicit */int) arr_46 [i_4 + 1] [i_22] [i_4] [i_4] [i_4] [i_22]);
            /* LoopNest 2 */
            for (int i_23 = 1; i_23 < 16; i_23 += 2) 
            {
                for (unsigned long long int i_24 = 0; i_24 < 19; i_24 += 2) 
                {
                    {
                        var_44 = ((/* implicit */unsigned long long int) var_9);
                        var_45 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-34)) ^ (((/* implicit */int) (unsigned char)58))))), (var_0))), (((/* implicit */unsigned long long int) var_4))));
                        arr_85 [i_4] [i_22] [i_22] [i_24] = ((/* implicit */int) var_4);
                    }
                } 
            } 
            var_46 = ((/* implicit */short) (~((~(((/* implicit */int) (short)-32744))))));
            /* LoopNest 2 */
            for (int i_25 = 0; i_25 < 19; i_25 += 2) 
            {
                for (int i_26 = 0; i_26 < 19; i_26 += 2) 
                {
                    {
                        arr_90 [i_4] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_64 [i_4 - 3] [i_22] [i_25] [i_22] [i_26])))))));
                        var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) ((int) arr_62 [i_4] [i_22] [i_25] [i_22] [i_4])))) ? (max(((-(274877906943ULL))), (min((5817086084196037475ULL), (arr_62 [i_25] [0] [i_25] [i_26] [i_26]))))) : (min((max((arr_14 [i_4 + 1] [i_26] [i_4]), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) arr_45 [i_4 - 3] [i_22] [i_25] [i_22] [i_4] [i_4]))))));
                        var_48 = ((/* implicit */long long int) min((var_48), (arr_30 [i_4 + 2] [i_22] [i_25] [i_26] [i_22])));
                        var_49 = ((/* implicit */signed char) var_2);
                    }
                } 
            } 
        }
        for (unsigned short i_27 = 0; i_27 < 19; i_27 += 3) 
        {
            var_50 = 3673530122548178521ULL;
            var_51 = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) var_3)), (arr_40 [i_4 - 1] [i_4 - 3] [i_4 - 1]))), (((/* implicit */unsigned long long int) var_10))));
            var_52 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (807904234941238393LL))))) ? ((~(var_0))) : (var_1)));
            var_53 = ((/* implicit */unsigned long long int) (~(min((arr_63 [i_4] [i_4 + 2] [i_4 + 2] [(signed char)14] [i_27]), (arr_63 [8ULL] [i_4 + 1] [i_4] [(unsigned short)4] [i_4])))));
            var_54 = ((/* implicit */unsigned long long int) ((signed char) min((arr_46 [i_27] [i_4 - 2] [i_27] [i_27] [i_27] [i_27]), (var_9))));
        }
    }
    var_55 = var_6;
}
