/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130564
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
    var_18 += ((/* implicit */short) max((var_8), (((/* implicit */long long int) var_12))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_19 = ((/* implicit */signed char) max((arr_0 [(signed char)21] [i_0]), (min((max((arr_1 [i_0]), (arr_0 [i_0] [i_0]))), (max((arr_1 [i_0]), (arr_0 [3U] [i_0])))))));
        var_20 += ((/* implicit */short) max((max((arr_1 [i_0]), (arr_1 [i_0]))), (max((arr_0 [i_0] [i_0]), (max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [4LL])))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) >= (arr_2 [i_1])));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1])) || (((/* implicit */_Bool) arr_2 [i_1]))));
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_17 [i_1] [i_2] [i_3] [i_1] [i_5] = ((/* implicit */unsigned long long int) ((arr_7 [i_1] [i_1] [i_3]) == (((/* implicit */unsigned int) arr_1 [i_1]))));
                            arr_18 [i_1] [i_1] [i_3] [i_1] [(signed char)6] [i_4] = ((/* implicit */unsigned short) arr_0 [i_5] [i_2]);
                            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) arr_5 [i_5] [i_4] [i_3]))));
                            arr_19 [i_1] [i_1] [i_1] [i_4] [i_5] = ((/* implicit */unsigned int) arr_15 [i_1] [i_2] [i_1] [i_1] [i_3]);
                            arr_20 [i_1] [i_1] [i_2] = ((/* implicit */_Bool) ((arr_13 [i_1] [i_2] [i_3] [i_4] [i_3]) & (arr_4 [i_1])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 1; i_6 < 10; i_6 += 2) 
                {
                    for (int i_7 = 1; i_7 < 11; i_7 += 1) 
                    {
                        {
                            var_24 += ((/* implicit */_Bool) arr_3 [i_2]);
                            var_25 = ((/* implicit */int) arr_9 [i_1] [0LL] [i_2] [i_1]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 12; i_8 += 3) 
                {
                    for (int i_9 = 0; i_9 < 12; i_9 += 1) 
                    {
                        {
                            arr_30 [i_1] [i_2] [5] [i_2] [i_2] [i_2] [i_1] = ((/* implicit */long long int) arr_7 [i_8] [i_1] [i_2]);
                            var_26 = ((/* implicit */_Bool) arr_3 [i_8]);
                        }
                    } 
                } 
            }
            var_27 += ((/* implicit */long long int) arr_24 [i_2] [i_2] [i_2] [i_1] [i_1] [i_2] [i_1]);
        }
        for (signed char i_10 = 0; i_10 < 12; i_10 += 1) 
        {
            /* LoopSeq 3 */
            for (int i_11 = 0; i_11 < 12; i_11 += 2) /* same iter space */
            {
                var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((arr_5 [i_1] [i_10] [i_10]) % (arr_0 [i_1] [i_10]))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 2) 
                {
                    var_29 = ((/* implicit */long long int) arr_5 [i_1] [i_10] [i_1]);
                    var_30 += ((/* implicit */short) arr_7 [i_12] [i_11] [i_1]);
                    arr_39 [i_1] [i_1] = arr_1 [0LL];
                    var_31 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_33 [i_12] [i_11] [i_10])) <= (((/* implicit */int) arr_33 [i_12] [i_10] [i_1]))));
                }
                for (signed char i_13 = 0; i_13 < 12; i_13 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 3) 
                    {
                        arr_45 [i_1] [i_1] [i_14] = ((/* implicit */long long int) arr_14 [i_14] [(_Bool)0] [(_Bool)0]);
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_33 [i_10] [0] [i_14])) - (arr_1 [i_13])));
                    }
                    for (int i_15 = 4; i_15 < 9; i_15 += 2) 
                    {
                        var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_15 + 2] [i_15 + 3] [i_15] [i_15 + 1] [i_15 + 1]))) <= (arr_15 [i_1] [i_15 - 3] [i_13] [i_11] [i_11]))))));
                        var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) ((((((arr_22 [i_10] [i_11]) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_33 [i_13] [i_10] [9U])) + (145))) - (39))))) < (((/* implicit */long long int) arr_11 [i_11])))))));
                    }
                    var_35 += ((/* implicit */signed char) arr_1 [i_11]);
                    var_36 += ((((/* implicit */_Bool) arr_36 [i_13])) || (((/* implicit */_Bool) arr_36 [i_11])));
                }
                for (signed char i_16 = 0; i_16 < 12; i_16 += 2) /* same iter space */
                {
                    var_37 += ((/* implicit */long long int) arr_10 [i_1] [i_10] [i_11] [i_16]);
                    arr_50 [i_1] [(_Bool)1] [i_10] [i_1] = ((/* implicit */unsigned short) arr_46 [i_16] [i_11] [i_10] [i_1] [i_1] [6U]);
                }
                var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) ((arr_29 [i_1] [i_1] [i_10] [i_11]) <= (arr_29 [(unsigned char)10] [i_1] [i_10] [i_1]))))));
                var_39 &= ((/* implicit */int) arr_27 [i_1] [i_1] [i_10] [i_1] [i_11] [i_1]);
            }
            for (int i_17 = 0; i_17 < 12; i_17 += 2) /* same iter space */
            {
                arr_53 [i_1] [(short)3] = ((/* implicit */_Bool) arr_0 [i_10] [i_10]);
                var_40 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_10] [i_1]))) | (arr_14 [i_17] [i_10] [i_1])));
                arr_54 [i_17] [i_17] [i_17] [i_1] &= ((/* implicit */long long int) arr_0 [i_10] [4ULL]);
                /* LoopNest 2 */
                for (long long int i_18 = 3; i_18 < 10; i_18 += 4) 
                {
                    for (unsigned int i_19 = 3; i_19 < 11; i_19 += 3) 
                    {
                        {
                            var_41 += ((/* implicit */signed char) arr_5 [i_19 + 1] [i_10] [i_17]);
                            arr_59 [i_19] [i_1] [(short)6] [i_18] [i_17] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_1] [i_18 - 2])) && (arr_37 [(unsigned short)3] [i_1] [(unsigned short)3] [i_18] [i_19] [i_18])));
                            var_42 = ((/* implicit */long long int) ((arr_57 [i_18 - 2]) <= (arr_57 [i_19 + 1])));
                            arr_60 [i_18] [i_17] [i_17] [i_18] [i_1] = ((/* implicit */short) ((arr_51 [i_18 + 2] [i_1] [i_1] [i_18 + 1]) <= (arr_51 [i_18 + 2] [i_1] [i_18 + 2] [i_18])));
                        }
                    } 
                } 
            }
            for (long long int i_20 = 0; i_20 < 12; i_20 += 3) 
            {
                var_43 += ((/* implicit */short) arr_36 [(_Bool)1]);
                /* LoopNest 2 */
                for (short i_21 = 0; i_21 < 12; i_21 += 3) 
                {
                    for (short i_22 = 0; i_22 < 12; i_22 += 2) 
                    {
                        {
                            var_44 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_22] [i_21] [i_21] [(short)2] [i_1] [i_10] [i_1]))) >= (arr_25 [i_1] [i_10] [i_20] [i_21] [i_22])));
                            arr_69 [i_22] [i_1] [i_20] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_33 [i_22] [i_10] [i_20])) >= (((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_22] [i_21] [i_20] [i_10] [i_1] [i_1])) && (((/* implicit */_Bool) arr_9 [2U] [i_10] [i_1] [i_21])))))));
                            arr_70 [i_10] [i_1] [i_22] = ((/* implicit */int) arr_2 [i_1]);
                            var_45 += ((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_1])) << (((((/* implicit */int) arr_55 [i_22])) - (189)))));
                            var_46 = ((/* implicit */unsigned long long int) ((arr_36 [i_1]) / (arr_36 [i_1])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_23 = 1; i_23 < 10; i_23 += 4) 
                {
                    for (long long int i_24 = 2; i_24 < 11; i_24 += 2) 
                    {
                        {
                            var_47 = ((arr_72 [i_1] [i_10] [i_23 + 2] [i_24] [i_24 - 2] [i_24 - 2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_7 [i_20] [i_1] [i_24]) != (((/* implicit */unsigned int) arr_13 [i_24] [i_1] [i_20] [i_10] [i_1])))))));
                            var_48 = arr_74 [i_20] [i_24] [i_24 - 2] [i_24] [i_24 - 2] [i_24];
                            var_49 = ((/* implicit */short) arr_72 [i_1] [i_20] [6LL] [i_23 + 2] [i_23 + 1] [i_24 - 1]);
                        }
                    } 
                } 
            }
            var_50 = ((/* implicit */unsigned long long int) arr_36 [i_1]);
            var_51 += ((/* implicit */_Bool) arr_2 [(unsigned short)4]);
            var_52 = arr_48 [5U] [i_10] [i_1];
            var_53 = ((/* implicit */int) min((var_53), (((/* implicit */int) ((arr_6 [i_10]) % (arr_6 [i_1]))))));
        }
        var_54 = ((/* implicit */unsigned char) arr_23 [i_1] [i_1] [i_1] [i_1]);
        var_55 += ((/* implicit */unsigned short) arr_49 [8U] [6] [(short)0] [0ULL] [8U]);
    }
    for (signed char i_25 = 0; i_25 < 20; i_25 += 3) 
    {
        var_56 += ((/* implicit */short) arr_0 [2ULL] [i_25]);
        var_57 += ((/* implicit */unsigned int) ((((/* implicit */long long int) min((arr_77 [i_25]), (arr_77 [i_25])))) < (min((arr_76 [i_25] [i_25]), (max((arr_76 [i_25] [i_25]), (((/* implicit */long long int) arr_1 [i_25]))))))));
        var_58 = ((/* implicit */int) max((((/* implicit */unsigned int) arr_0 [i_25] [i_25])), (max((arr_77 [i_25]), (arr_77 [i_25])))));
    }
    var_59 = ((/* implicit */signed char) max((var_59), (((/* implicit */signed char) min((((/* implicit */long long int) var_13)), (min((max((var_8), (((/* implicit */long long int) var_14)))), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_6)), (var_14)))))))))));
    var_60 += ((/* implicit */unsigned char) var_3);
}
