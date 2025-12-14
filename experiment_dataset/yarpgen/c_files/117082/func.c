/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117082
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((int) ((long long int) var_1))))));
                /* LoopSeq 4 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    var_17 *= ((/* implicit */unsigned long long int) arr_5 [i_2] [i_1] [i_2]);
                    var_18 = ((/* implicit */unsigned int) ((min((arr_6 [i_0] [i_1] [i_0]), (arr_6 [i_0] [i_1] [i_0]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) 2461222800U);
                                var_20 = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) var_3)) > (((/* implicit */int) arr_4 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((arr_0 [i_2] [i_2]) ? (((/* implicit */int) (unsigned char)236)) : (((/* implicit */int) var_14))))) : (2461222800U))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [(unsigned char)12])))));
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((arr_9 [i_2]) ? (((((/* implicit */int) var_6)) / (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_3 [i_2] [i_0] [i_3])), (arr_5 [i_2] [i_1] [i_0])))))) : (((/* implicit */int) ((signed char) ((unsigned char) arr_7 [i_3] [i_2] [i_2] [i_1]))))));
                            }
                        } 
                    } 
                    var_22 *= ((/* implicit */_Bool) ((unsigned short) (((!(((/* implicit */_Bool) arr_10 [i_2] [i_0] [i_1] [i_1] [i_2])))) ? (var_8) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (arr_10 [i_2] [i_1] [i_1] [i_2] [i_2]) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_1]))))))));
                }
                /* vectorizable */
                for (long long int i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        arr_16 [i_5] [i_6] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_5] [i_5] [i_0])) ? (arr_8 [i_0] [i_1] [i_1] [i_5] [i_6]) : (arr_8 [i_0] [0U] [i_0] [i_5] [i_0])));
                        arr_17 [i_0] [i_1] [i_5] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [i_5] [i_6])) ? (arr_8 [i_0] [i_1] [i_5] [i_0] [i_1]) : (((((/* implicit */_Bool) arr_8 [i_5] [i_5] [i_5] [i_0] [i_5])) ? (arr_12 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))));
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (+(((((/* implicit */long long int) ((/* implicit */int) (signed char)38))) - (arr_13 [i_6]))))))));
                        /* LoopSeq 3 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            arr_20 [i_0] [(unsigned char)6] [i_5] [(unsigned char)1] [i_6] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))) != (((var_10) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_7]))) : (((((/* implicit */_Bool) arr_14 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_15 [i_0] [i_1] [i_5] [i_7] [i_7] [i_6])))));
                            var_25 = ((/* implicit */long long int) (unsigned char)100);
                            var_26 *= ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_5] [i_5])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-18))))) > (((((/* implicit */_Bool) arr_12 [i_1] [i_5] [i_5])) ? (arr_13 [i_7]) : (((/* implicit */long long int) arr_12 [i_0] [i_5] [i_0]))))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_5])) ? (((/* implicit */int) arr_14 [i_0])) : (((/* implicit */int) (signed char)17))))) ? (((/* implicit */int) arr_14 [i_1])) : (((/* implicit */int) arr_14 [i_8]))));
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_12))) ? (arr_13 [i_5]) : (((/* implicit */long long int) ((var_12) ? (((/* implicit */int) arr_2 [i_0] [(unsigned char)11])) : (((/* implicit */int) arr_18 [(short)13] [2ULL] [i_1])))))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            arr_25 [i_6] [i_6] [i_1] [i_5] [i_0] [i_5] [(unsigned char)0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_5] [i_6] [i_9] [i_9])) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) (short)15872)) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_0]))))));
                            var_29 = ((/* implicit */long long int) ((((arr_6 [i_0] [i_5] [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_9 [i_1]))));
                            arr_26 [i_0] [13ULL] [i_6] [i_0] = ((/* implicit */unsigned long long int) var_5);
                            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((((/* implicit */int) arr_7 [i_0] [i_5] [i_6] [i_5])) + (((/* implicit */int) arr_5 [i_6] [i_1] [i_0])))) - (arr_10 [i_5] [(unsigned char)0] [i_5] [(unsigned char)12] [i_5]))))));
                        }
                        var_31 = ((/* implicit */int) min((var_31), (((var_1) ? (((arr_22 [i_6] [i_5] [i_1] [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_5 [16LL] [i_1] [i_1])) : (((/* implicit */int) var_12)))) : (((/* implicit */int) arr_19 [i_5] [i_1] [i_1] [i_1]))))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 17; i_10 += 3) 
                    {
                        var_32 = ((/* implicit */long long int) arr_6 [i_0] [i_1] [i_0]);
                        arr_29 [i_0] = ((/* implicit */_Bool) ((short) var_14));
                        arr_30 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_0 [(short)4] [14ULL]) ? (((/* implicit */int) arr_5 [0LL] [0LL] [0LL])) : (((/* implicit */int) arr_24 [i_10] [i_0] [i_0] [i_0] [i_0]))))) && (((/* implicit */_Bool) var_7))));
                    }
                    arr_31 [i_0] [i_1] = ((/* implicit */unsigned char) arr_19 [i_0] [i_1] [i_0] [i_1]);
                }
                for (short i_11 = 0; i_11 < 17; i_11 += 4) 
                {
                    /* LoopSeq 4 */
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        var_33 = ((/* implicit */_Bool) var_7);
                        var_34 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) max((((/* implicit */int) arr_1 [i_0])), (arr_35 [1] [i_1] [i_11] [i_0])))))) < (arr_15 [(unsigned char)16] [i_1] [(unsigned char)6] [i_1] [i_12] [i_12])));
                    }
                    for (short i_13 = 0; i_13 < 17; i_13 += 3) 
                    {
                        arr_40 [i_0] [i_0] = ((/* implicit */signed char) max((arr_34 [i_0] [i_13] [i_13]), (((/* implicit */unsigned long long int) arr_39 [i_0] [12ULL] [12ULL] [i_13] [i_11]))));
                        var_35 = arr_28 [0LL] [i_0] [(short)4];
                    }
                    for (unsigned char i_14 = 0; i_14 < 17; i_14 += 1) 
                    {
                        var_36 = ((unsigned int) var_4);
                        var_37 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((long long int) arr_28 [i_0] [i_11] [4LL])) : (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_14] [i_1] [i_1])) - (((/* implicit */int) arr_1 [i_11])))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(arr_39 [i_0] [i_0] [i_14] [i_14] [i_0]))))));
                        arr_44 [i_14] [i_0] [i_14] = ((/* implicit */unsigned int) arr_32 [i_11]);
                        arr_45 [i_0] [i_1] [i_0] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_13 [i_11])))) ? (((arr_33 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [7U] [i_11] [i_1] [i_11] [i_0]))) : (min((arr_21 [i_0] [i_14] [i_11] [i_14] [(unsigned char)4]), (((/* implicit */unsigned long long int) var_14)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [i_0] [i_0] [(signed char)13])) ? (((arr_15 [i_14] [3U] [i_11] [i_11] [i_1] [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_28 [i_0] [i_0] [i_1])))))))));
                    }
                    for (long long int i_15 = 0; i_15 < 17; i_15 += 3) 
                    {
                        var_38 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_15])) ? (((/* implicit */int) arr_28 [i_0] [i_0] [i_11])) : (((/* implicit */int) arr_28 [i_0] [i_0] [(signed char)4]))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_0] [i_0] [(short)4]))) + (var_8)))));
                        arr_48 [i_15] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) var_11);
                        var_39 = ((/* implicit */unsigned char) ((arr_27 [i_0]) ? (((/* implicit */int) ((arr_37 [i_1] [i_0] [i_1] [i_15] [i_15] [i_11]) == (arr_37 [i_0] [i_0] [i_1] [i_11] [i_1] [i_15])))) : (((((/* implicit */int) var_7)) << (((arr_37 [i_0] [i_0] [i_11] [i_11] [i_15] [i_15]) - (4762823167538423581ULL)))))));
                        var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) var_0))));
                    }
                    /* LoopSeq 1 */
                    for (short i_16 = 0; i_16 < 17; i_16 += 2) 
                    {
                        var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) arr_47 [i_0] [i_1] [i_1] [i_0] [i_1]))));
                        var_42 = ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_42 [i_0] [i_1] [i_11] [i_0]), (arr_42 [(short)12] [i_1] [(unsigned char)3] [i_0])))) != (((/* implicit */int) arr_4 [i_0] [i_0]))));
                        var_43 ^= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_41 [i_16] [(short)14] [i_11] [i_16])) ? (((/* implicit */int) arr_41 [i_11] [i_16] [i_16] [i_16])) : (((arr_35 [6U] [14U] [i_11] [i_16]) | (((/* implicit */int) var_3)))))), ((~(((/* implicit */int) arr_0 [i_11] [i_11]))))));
                    }
                    var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)35)) ? (11334733018066187204ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)29)))));
                    var_45 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_19 [i_11] [i_11] [i_11] [i_11])) - (((/* implicit */int) ((((/* implicit */int) (unsigned char)51)) < (((/* implicit */int) ((signed char) var_14))))))));
                    arr_52 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_24 [i_11] [i_0] [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) (short)-21777)) ? (((/* implicit */int) (unsigned char)41)) : (((/* implicit */int) (_Bool)1))))));
                }
                for (unsigned int i_17 = 0; i_17 < 17; i_17 += 1) 
                {
                    arr_55 [i_0] [i_1] = ((/* implicit */long long int) max((max((arr_41 [i_0] [i_1] [i_17] [i_17]), (arr_41 [i_0] [i_1] [2LL] [i_17]))), (((unsigned char) min((arr_8 [i_17] [i_0] [i_17] [i_0] [i_0]), (((/* implicit */unsigned int) var_0)))))));
                    arr_56 [(signed char)2] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_13 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_54 [14LL] [i_1] [i_1] [i_17]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_4 [i_0] [(unsigned char)0]), (arr_4 [12LL] [4U]))))) : (max((arr_21 [i_0] [i_1] [i_17] [i_17] [i_17]), (arr_21 [i_17] [i_1] [i_1] [i_1] [i_17])))));
                }
                arr_57 [i_0] = ((/* implicit */unsigned char) arr_23 [i_0] [i_1] [i_1]);
            }
        } 
    } 
    var_46 = ((max((((unsigned long long int) var_2)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (var_9))))) + (((/* implicit */unsigned long long int) var_8)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_18 = 0; i_18 < 11; i_18 += 1) 
    {
        var_47 = ((/* implicit */signed char) arr_4 [16LL] [6]);
        arr_60 [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_49 [i_18] [i_18] [i_18] [(unsigned char)6] [(_Bool)1])) ? (((/* implicit */int) (unsigned char)83)) : (arr_35 [i_18] [i_18] [(unsigned char)0] [(signed char)12])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_8 [i_18] [i_18] [i_18] [(short)4] [i_18])));
        arr_61 [i_18] = ((/* implicit */unsigned long long int) ((((unsigned long long int) (unsigned char)51)) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_28 [i_18] [(signed char)8] [i_18]))))));
        var_48 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_18] [i_18] [(unsigned char)4])) ? (arr_58 [i_18]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [12] [12])))))) ? (((/* implicit */int) arr_11 [8U] [i_18] [8U])) : (((/* implicit */int) arr_7 [15ULL] [i_18] [i_18] [(_Bool)1]))));
    }
}
