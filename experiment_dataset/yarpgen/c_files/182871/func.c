/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182871
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
    var_14 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_8)) : (var_13)))) ? ((((_Bool)1) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) var_2))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_15 &= ((/* implicit */short) var_13);
                    var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))), (max((((/* implicit */unsigned long long int) arr_3 [i_0 - 1])), (var_13)))));
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        arr_11 [i_1] = ((/* implicit */short) arr_9 [(unsigned short)3] [(unsigned short)3]);
                        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (_Bool)1))));
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) arr_4 [(short)11]))));
                        var_19 = ((/* implicit */_Bool) var_8);
                    }
                    for (short i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        arr_15 [i_1] [0ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_10))))) | (var_2)))) ? (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_14 [i_0] [i_0] [i_2] [i_4] [i_0] [i_0 - 1])))) : ((-(((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_10))))))));
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                        {
                            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (_Bool)1))));
                            var_21 += ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_16 [i_4] [i_0 + 1] [i_0 + 1])), (var_0)));
                        }
                    }
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_20 [i_1] [(unsigned short)8] [i_2] [(unsigned short)8] = ((/* implicit */unsigned long long int) (((_Bool)1) && (((/* implicit */_Bool) arr_4 [(short)6]))));
                        var_22 -= ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) & (((((/* implicit */_Bool) arr_19 [(unsigned short)10] [i_2] [i_2] [i_6] [(unsigned short)2] [i_0])) ? (((/* implicit */int) arr_13 [(_Bool)1] [i_1] [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_19 [i_0] [i_2] [i_0] [i_0] [(short)0] [i_6]))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_23 [i_1] [i_1] = ((/* implicit */unsigned short) ((arr_6 [(_Bool)1] [i_1] [i_1] [i_1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) var_1))));
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((((/* implicit */unsigned long long int) ((var_5) ? ((+(((/* implicit */int) (_Bool)1)))) : (((arr_10 [(short)7] [(short)7]) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_2])) : (((/* implicit */int) arr_19 [(signed char)4] [i_2] [i_2] [12LL] [i_7] [(short)8]))))))) + ((+(arr_6 [i_0 + 1] [i_0] [i_0 + 1] [i_1])))))));
                        var_25 = ((/* implicit */short) (~(var_13)));
                        arr_24 [i_0] [i_1] [i_0] [(unsigned short)4] [i_0] = ((/* implicit */unsigned short) (_Bool)1);
                    }
                }
            } 
        } 
        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) min((((/* implicit */unsigned short) (!((!(arr_10 [(_Bool)1] [i_0])))))), ((unsigned short)34339))))));
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        arr_27 [(_Bool)1] = ((/* implicit */_Bool) max(((~(((/* implicit */int) var_7)))), (((/* implicit */int) arr_26 [i_8]))));
        var_27 &= ((/* implicit */short) var_2);
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_28 = ((/* implicit */signed char) var_11);
        /* LoopSeq 3 */
        for (short i_10 = 3; i_10 < 17; i_10 += 1) 
        {
            arr_33 [i_9] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_25 [(unsigned short)13]))));
            /* LoopNest 3 */
            for (long long int i_11 = 2; i_11 < 17; i_11 += 1) 
            {
                for (signed char i_12 = 0; i_12 < 18; i_12 += 4) 
                {
                    for (signed char i_13 = 0; i_13 < 18; i_13 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned short) (_Bool)1);
                            arr_42 [(short)12] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) max((((((arr_40 [i_9] [i_11] [i_9] [i_13]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3312))) : (var_13))) & (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))))), (((/* implicit */unsigned long long int) arr_30 [i_12] [i_11] [i_9]))));
                            var_30 = var_1;
                            var_31 = ((/* implicit */short) var_9);
                        }
                    } 
                } 
            } 
            var_32 -= ((/* implicit */_Bool) ((min((((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) (_Bool)1)))) >> (((/* implicit */int) var_1))));
            arr_43 [i_9] = ((/* implicit */signed char) arr_40 [i_9] [i_9] [i_9] [i_9]);
            /* LoopNest 3 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                {
                    for (signed char i_16 = 0; i_16 < 18; i_16 += 2) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? ((~(-8393244211938113309LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))), (((((((/* implicit */int) (short)-3691)) > (((/* implicit */int) arr_26 [i_16])))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))));
                            arr_53 [i_9] [(short)10] [i_9] [i_9] [i_16] = ((/* implicit */signed char) var_9);
                        }
                    } 
                } 
            } 
        }
        for (short i_17 = 3; i_17 < 17; i_17 += 2) 
        {
            arr_57 [i_9] [i_9] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-71))))) : (min((var_8), (((/* implicit */long long int) arr_29 [i_9]))))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))) : (min((((/* implicit */unsigned long long int) arr_54 [i_17] [i_9] [i_9])), (arr_32 [i_9])))))));
            var_34 = max((((arr_39 [(unsigned short)14] [i_9] [i_17 + 1] [17ULL]) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_9] [i_9] [i_17 + 1] [i_17]))))), (((/* implicit */long long int) max(((unsigned short)40920), (((/* implicit */unsigned short) arr_39 [i_9] [i_9] [i_17 - 2] [i_17 + 1]))))));
            /* LoopSeq 3 */
            for (short i_18 = 2; i_18 < 15; i_18 += 1) 
            {
                var_35 = (+(var_13));
                /* LoopNest 2 */
                for (short i_19 = 0; i_19 < 18; i_19 += 2) 
                {
                    for (signed char i_20 = 0; i_20 < 18; i_20 += 2) 
                    {
                        {
                            arr_64 [i_9] [i_9] = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_39 [(signed char)15] [i_9] [10LL] [(signed char)15]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))))) ? ((+(((/* implicit */int) var_9)))) : (((/* implicit */int) var_4))))), (min((arr_60 [i_9] [i_9] [i_9]), (((/* implicit */long long int) var_12))))));
                            arr_65 [i_9] [0ULL] [i_17 + 1] [i_9] = arr_31 [(_Bool)1] [i_17 - 3] [i_17 - 3];
                            arr_66 [i_9] [i_17 - 3] [i_18 + 3] [i_18] [i_19] [i_19] [i_9] = (short)3693;
                            var_36 = ((/* implicit */short) max((((/* implicit */int) min((((/* implicit */short) arr_54 [i_17] [i_9] [i_18 + 1])), (var_4)))), ((-(((/* implicit */int) arr_54 [i_17] [i_9] [i_18 + 2]))))));
                        }
                    } 
                } 
                arr_67 [i_9] [i_17] [i_9] = ((/* implicit */unsigned long long int) arr_63 [i_9] [i_17 - 1] [i_17] [i_9]);
            }
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                arr_70 [i_9] [(signed char)7] = ((/* implicit */_Bool) arr_63 [i_21] [i_21] [i_21] [i_9]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_22 = 0; i_22 < 18; i_22 += 1) 
                {
                    arr_73 [(_Bool)1] [(unsigned short)16] [i_21] [(signed char)14] &= ((/* implicit */short) arr_71 [(_Bool)1] [i_21] [(short)12] [i_9]);
                    var_37 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_55 [(unsigned short)12] [(unsigned short)12] [i_21])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)6)))))) : ((~(arr_32 [(signed char)10])))));
                    arr_74 [i_9] [i_9] [i_21] [i_9] = ((/* implicit */unsigned short) var_12);
                    arr_75 [i_9] [i_9] [i_21] [i_22] [i_9] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) (_Bool)1))))));
                }
                arr_76 [i_9] [i_9] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_7)), (var_10))))));
            }
            for (unsigned short i_23 = 3; i_23 < 15; i_23 += 3) 
            {
                var_38 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((((/* implicit */int) (short)-3693)), ((-(((/* implicit */int) arr_56 [i_23]))))))) != (var_3)));
                var_39 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40920))) : (arr_61 [i_9] [i_9] [i_17] [i_23])));
                var_40 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_58 [i_23 - 1] [i_23 - 3] [i_23 - 1]))))) ? ((~(((/* implicit */int) (!((_Bool)1)))))) : ((-(((/* implicit */int) arr_28 [i_23]))))));
            }
        }
        /* vectorizable */
        for (short i_24 = 0; i_24 < 18; i_24 += 4) 
        {
            arr_83 [i_9] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_41 [(unsigned short)0] [i_9] [i_24] [i_24] [(unsigned short)9]))) != (var_2)));
            arr_84 [i_9] = ((/* implicit */long long int) (_Bool)1);
        }
    }
    /* LoopNest 3 */
    for (unsigned short i_25 = 4; i_25 < 11; i_25 += 4) 
    {
        for (long long int i_26 = 2; i_26 < 11; i_26 += 1) 
        {
            for (short i_27 = 0; i_27 < 12; i_27 += 1) 
            {
                {
                    var_41 ^= ((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) arr_60 [i_25] [i_26 + 1] [i_25])))), (((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1))))));
                    arr_96 [(short)1] [i_25] = ((/* implicit */long long int) (((+(((/* implicit */int) (_Bool)1)))) * ((+(((/* implicit */int) var_11))))));
                }
            } 
        } 
    } 
}
