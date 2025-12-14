/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176108
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
    var_13 = ((/* implicit */short) (~(((/* implicit */int) var_12))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_0] [i_0]))));
        var_15 = ((/* implicit */_Bool) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 2])) ? (((/* implicit */int) var_11)) : (var_2)))) : (((/* implicit */unsigned long long int) (+(((int) var_7)))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        {
                            var_16 &= min((min((5594825552110885840ULL), (((/* implicit */unsigned long long int) (short)4080)))), (arr_12 [2U]));
                            arr_13 [3ULL] [(unsigned char)5] [i_0] [i_0] [(unsigned char)6] [i_0 - 1] = ((/* implicit */long long int) ((unsigned long long int) 5594825552110885851ULL));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 3592071227497012679ULL)) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_11)))) + (((/* implicit */int) arr_2 [6ULL] [i_1]))))) : ((-((-(18446744073709551610ULL))))))))));
                arr_14 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) min((arr_5 [i_0] [i_1] [i_2]), (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) var_10)) ? (9777913340601391984ULL) : (((/* implicit */unsigned long long int) 579370738U))))));
            }
            /* LoopSeq 1 */
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_6 = 4; i_6 < 18; i_6 += 3) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_7 = 2; i_7 < 17; i_7 += 3) 
                    {
                        arr_23 [i_0] = ((/* implicit */short) ((((/* implicit */int) var_4)) == (((/* implicit */int) ((unsigned char) (short)4080)))));
                        arr_24 [i_0] [i_0] = ((/* implicit */unsigned short) (_Bool)0);
                        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) & (arr_5 [i_1] [i_5] [i_5])))) ? (9662580119309786519ULL) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_7] [i_6 + 2] [i_0]))) ^ (9777913340601391984ULL)))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        var_19 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) arr_7 [i_6] [i_0])))))) | (((((/* implicit */_Bool) (signed char)114)) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)30720)))))));
                        arr_27 [i_0] [i_1] [i_0] [i_6] [i_8] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) > (-5249827554253165242LL)));
                    }
                    for (unsigned long long int i_9 = 4; i_9 < 19; i_9 += 3) 
                    {
                        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (-(((/* implicit */int) arr_4 [i_5 + 1] [(_Bool)1] [i_9 - 1])))))));
                        arr_31 [(unsigned char)16] [i_1] [16] [i_6] [i_0] [i_9 - 1] [i_9] = ((/* implicit */short) var_11);
                        var_21 ^= ((/* implicit */signed char) ((arr_22 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_1]) << (((arr_22 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 2] [i_9]) - (2016752588U)))));
                        var_22 = (~(((/* implicit */int) arr_0 [i_0])));
                    }
                    arr_32 [i_0] [i_0] [i_0] [9] [i_0] [i_6] = ((/* implicit */signed char) (~(((/* implicit */int) var_11))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_10 = 1; i_10 < 19; i_10 += 3) 
                    {
                        arr_35 [i_0] [i_5] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_34 [i_10] [i_10 + 1] [i_5 + 1] [i_6 + 2] [i_5 + 1] [i_1]))));
                        var_23 = ((/* implicit */unsigned char) arr_10 [i_0] [i_0] [i_6 - 4] [i_10] [i_10]);
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_40 [i_0 - 2] [i_1] [i_1] [i_0 - 2] [i_6] [i_11] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 3487989479318854018LL)) ? (arr_30 [(_Bool)1] [i_6] [i_6 + 1] [i_6 + 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_5 + 1] [i_5 + 1] [i_0]))))))));
                        arr_41 [(unsigned char)10] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3592071227497012692ULL)) ? (((/* implicit */int) arr_25 [i_5] [i_5 + 1] [i_5] [(_Bool)1] [i_11])) : (((/* implicit */int) arr_25 [i_5 + 1] [i_5 + 1] [i_6] [i_6] [i_6]))));
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_6 - 4] [i_6 - 4] [i_0] [i_0])) + (arr_5 [(unsigned char)16] [i_5 + 1] [i_6 + 1])))) ? (((/* implicit */unsigned long long int) arr_17 [i_0] [i_1] [i_0] [12ULL] [i_11])) : ((-(17327540651340826246ULL))))))));
                    }
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_0] [i_0] [i_6])) || (((/* implicit */_Bool) 2528419170933518656ULL))))) / (((/* implicit */int) arr_15 [11ULL] [(unsigned char)11] [i_0 - 1]))));
                }
                for (unsigned int i_12 = 0; i_12 < 20; i_12 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 3) 
                    {
                        var_26 = ((/* implicit */_Bool) min((var_26), ((!(arr_9 [i_13] [i_12] [i_5] [i_1] [i_0 - 1])))));
                        arr_48 [i_0] [(unsigned char)8] [i_0] [i_0] [(unsigned char)8] = ((((unsigned int) arr_0 [i_0])) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_36 [i_0 - 2] [i_1] [(unsigned short)0] [i_5 + 1] [(_Bool)1] [i_5 + 1] [i_12])) ? (((/* implicit */int) arr_36 [i_0] [i_0] [i_5] [i_5 + 1] [i_13] [i_13] [i_5])) : (((/* implicit */int) arr_36 [(unsigned short)10] [(unsigned short)10] [(_Bool)1] [i_5 + 1] [i_5 + 1] [3LL] [i_12]))))));
                    }
                    arr_49 [i_0 + 1] [i_0] [i_5] = ((/* implicit */unsigned char) (-((~(arr_30 [i_5 + 1] [i_0 - 2] [i_1] [i_1] [i_0 - 2])))));
                    var_27 -= ((/* implicit */signed char) arr_7 [i_0] [i_5]);
                }
                /* vectorizable */
                for (unsigned int i_14 = 0; i_14 < 20; i_14 += 3) /* same iter space */
                {
                    var_28 = ((/* implicit */short) (-(var_3)));
                    var_29 |= ((/* implicit */unsigned char) var_9);
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 9662580119309786509ULL)))) <= ((~(2880823800607898146LL)))));
                    arr_52 [5ULL] [i_0] [18ULL] [i_0] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_36 [i_0] [i_1] [i_1] [i_5] [(short)18] [i_14] [i_14])) : (((/* implicit */int) var_10))))));
                }
                var_31 += ((/* implicit */long long int) (unsigned char)250);
                var_32 *= ((/* implicit */unsigned short) min((var_0), (((/* implicit */unsigned char) arr_19 [i_0 + 1] [i_1] [i_0 + 1] [i_5 + 1]))));
                /* LoopNest 2 */
                for (unsigned int i_15 = 0; i_15 < 20; i_15 += 3) 
                {
                    for (unsigned int i_16 = 1; i_16 < 19; i_16 += 3) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned int) ((unsigned short) arr_6 [i_0] [i_0] [i_5] [i_16]));
                            arr_59 [i_0 - 2] [i_1] [i_0] [(unsigned char)3] [i_0 - 2] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (!(arr_45 [i_16 + 1] [i_1] [i_5] [(signed char)14] [i_16 + 1]))))));
                            var_34 = ((/* implicit */unsigned short) ((arr_45 [i_0 - 2] [i_1] [i_1] [i_15] [i_16 - 1]) ? (((/* implicit */int) var_12)) : (min(((~(((/* implicit */int) var_1)))), (((/* implicit */int) max((var_7), (arr_43 [i_0] [i_0] [i_0] [i_15] [i_0]))))))));
                        }
                    } 
                } 
                var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) -5249827554253165251LL))));
            }
            arr_60 [i_0] = ((/* implicit */signed char) (~(((max((((/* implicit */long long int) arr_2 [i_0] [i_0])), (arr_46 [2U] [2U] [i_1] [i_1]))) | (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_19 [i_0] [i_0] [i_1] [i_1])), (arr_42 [i_1] [i_1] [i_1] [i_0])))))))));
        }
        /* vectorizable */
        for (signed char i_17 = 0; i_17 < 20; i_17 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_18 = 2; i_18 < 19; i_18 += 3) 
            {
                for (int i_19 = 2; i_19 < 19; i_19 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (long long int i_20 = 0; i_20 < 20; i_20 += 3) 
                        {
                            var_36 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-39)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 + 1] [(_Bool)1] [16LL] [16LL] [16LL]))) : (((((/* implicit */_Bool) arr_55 [i_17] [i_18] [i_19] [i_20])) ? (-5249827554253165223LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
                            var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) var_3))));
                            arr_70 [i_0] [i_17] [11] [11] [(_Bool)1] [i_20] = ((/* implicit */short) var_0);
                        }
                        for (short i_21 = 1; i_21 < 19; i_21 += 3) 
                        {
                            var_38 = ((/* implicit */short) (((_Bool)1) ? (arr_6 [i_0 + 1] [i_0 + 1] [i_18 - 1] [i_21 + 1]) : (((/* implicit */unsigned int) var_9))));
                            var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) var_2))));
                            arr_74 [i_0 - 2] [i_0] = ((((((/* implicit */int) (signed char)-114)) >= (var_3))) ? (((((/* implicit */_Bool) var_2)) ? (arr_46 [i_19 - 1] [i_18] [i_17] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_54 [i_17] [i_18] [i_19 - 2]) != (((/* implicit */long long int) arr_6 [i_0] [i_19] [5LL] [i_0])))))));
                            var_40 = ((/* implicit */long long int) (-(((/* implicit */int) arr_56 [i_0 - 1] [i_19 + 1] [i_19 + 1] [i_19 + 1]))));
                        }
                        for (int i_22 = 0; i_22 < 20; i_22 += 3) 
                        {
                            var_41 = ((/* implicit */int) ((long long int) arr_34 [i_0 + 1] [i_18 - 1] [i_18] [i_19 - 1] [i_18] [i_19 + 1]));
                            arr_77 [3U] [i_22] [i_0] [i_0] [i_17] [i_0 - 1] = ((/* implicit */unsigned short) ((((_Bool) arr_51 [i_0] [i_17] [i_0] [i_19] [2ULL] [16U])) ? (arr_51 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_17] [i_19]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-5249827554253165242LL))))));
                            arr_78 [6ULL] [i_0] = ((/* implicit */unsigned int) var_5);
                        }
                        var_42 = ((/* implicit */signed char) (-(((((/* implicit */int) (_Bool)1)) + (var_9)))));
                        arr_79 [i_19] [i_17] [i_18] [i_19 + 1] [i_0] = ((/* implicit */_Bool) arr_55 [14U] [i_19] [(unsigned char)8] [i_19 - 1]);
                    }
                } 
            } 
            var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (arr_76 [i_0 - 1] [(_Bool)1] [i_0 - 2] [i_0] [i_0] [i_0 - 2] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0]))))))));
            arr_80 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 16051512540538816685ULL)) ? (arr_67 [i_0 - 1] [i_0 - 2] [(signed char)5] [i_0]) : (arr_67 [i_0 - 2] [i_0 - 2] [i_0] [i_0])));
            arr_81 [i_0] [i_0] = ((/* implicit */_Bool) ((arr_68 [i_0] [i_0 + 1] [i_17] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_39 [i_0] [i_0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) : (arr_62 [i_0] [i_0])));
        }
    }
}
