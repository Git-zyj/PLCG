/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183031
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 23; i_0 += 3) /* same iter space */
    {
        var_10 |= ((/* implicit */unsigned int) arr_0 [i_0 + 1]);
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 24; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            var_11 -= ((/* implicit */unsigned char) ((unsigned long long int) arr_1 [i_0 + 1]));
                            arr_13 [i_0] [24ULL] [i_2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3] [2ULL] [i_2])) ? (((/* implicit */long long int) arr_12 [(unsigned short)22] [5ULL])) : (1512267880512225455LL)))) ? (((/* implicit */unsigned long long int) arr_12 [i_2 - 3] [(unsigned short)18])) : (((((/* implicit */_Bool) arr_6 [(signed char)21] [(signed char)21] [(signed char)21] [(signed char)21])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(unsigned short)23] [(signed char)23] [i_2] [2U] [i_3] [i_2]))) : (arr_2 [i_3]))));
                            var_12 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)25955)) ? (((/* implicit */int) arr_6 [(unsigned short)21] [i_2] [(signed char)14] [i_3])) : (arr_12 [i_2] [i_0])))) % (arr_3 [i_0] [18ULL] [i_2 - 3])));
                        }
                        for (unsigned char i_5 = 1; i_5 < 21; i_5 += 4) 
                        {
                            var_13 -= ((/* implicit */short) ((signed char) arr_7 [i_0] [i_1] [2U]));
                            var_14 += ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [18ULL] [i_1] [i_5 + 1])) % (((/* implicit */int) arr_7 [i_0 - 1] [i_1] [i_1]))));
                            var_15 -= ((/* implicit */short) 5103260812971839063LL);
                            var_16 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3] [(unsigned short)4])) ? (((arr_14 [i_5] [i_2] [(_Bool)1] [i_2] [13] [21U] [10]) - (arr_2 [i_5]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0 + 2])))));
                        }
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            var_17 = ((/* implicit */int) arr_0 [(unsigned short)6]);
                            var_18 = ((unsigned short) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_6] [i_0] [i_6] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(short)16] [i_0] [i_2]))) : (arr_18 [i_1] [i_2] [i_2] [i_6])));
                            var_19 &= ((/* implicit */int) arr_11 [i_0] [i_0] [9ULL] [i_3] [i_3] [i_6]);
                        }
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_2])) ? (((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 1] [i_2 - 3] [i_3] [16ULL] [i_2])) : (((/* implicit */int) arr_9 [i_0 + 2] [i_0 + 2] [i_2 - 2] [21] [i_2] [i_2]))));
                    }
                } 
            } 
        } 
        arr_19 [(unsigned char)13] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_5 [(unsigned short)6] [i_0] [i_0] [(signed char)24])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [0U]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)218)))))) : (arr_18 [(short)10] [(unsigned char)14] [20] [i_0]));
        var_21 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) (unsigned short)26690)) ? (((/* implicit */int) arr_8 [6] [6] [20ULL])) : (1412962476))));
    }
    for (int i_7 = 1; i_7 < 23; i_7 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [24ULL])))))) ^ (((((/* implicit */_Bool) arr_18 [i_7] [i_7 + 2] [(short)22] [i_7 + 2])) ? (((/* implicit */unsigned long long int) -1412962477)) : (arr_18 [16ULL] [i_7 + 1] [(signed char)0] [i_7 - 1]))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 4) 
        {
            for (unsigned int i_9 = 4; i_9 < 22; i_9 += 4) 
            {
                {
                    var_23 = ((/* implicit */int) ((long long int) arr_3 [(unsigned char)4] [22U] [i_9]));
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 25; i_10 += 1) 
                    {
                        for (unsigned char i_11 = 3; i_11 < 23; i_11 += 3) 
                        {
                            {
                                var_24 *= ((/* implicit */short) ((((/* implicit */_Bool) 2306564346U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_7] [i_9] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_9] [i_9] [i_7]))) : (arr_21 [i_7]))))))) : (((/* implicit */int) arr_8 [i_7] [20U] [i_9]))));
                                var_25 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_3 [i_7 - 1] [i_7 + 2] [i_7])))) ? (min((arr_3 [i_7 + 2] [i_7 + 2] [i_9 - 3]), (arr_3 [i_7 - 1] [i_8] [i_10]))) : (max((arr_3 [i_7] [i_7] [(unsigned char)13]), (arr_3 [i_10] [i_9 - 2] [i_8])))));
                            }
                        } 
                    } 
                    arr_35 [15ULL] [i_8] = ((/* implicit */unsigned long long int) arr_31 [i_7 + 1] [i_7] [i_7] [i_7] [4U] [1ULL]);
                }
            } 
        } 
        arr_36 [i_7] [i_7] = ((unsigned int) arr_6 [7LL] [i_7 + 2] [(unsigned short)14] [20LL]);
    }
    for (int i_12 = 1; i_12 < 23; i_12 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
        {
            for (unsigned short i_14 = 0; i_14 < 25; i_14 += 1) 
            {
                {
                    var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((/* implicit */_Bool) (-(2306564346U)))) || (((/* implicit */_Bool) max((max((arr_38 [i_12 + 1] [i_12 + 1]), (((/* implicit */long long int) arr_1 [i_12])))), (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_12] [i_12] [18U] [i_12] [i_12] [(unsigned char)12])) / (((/* implicit */int) arr_43 [(unsigned short)17] [(_Bool)1] [(_Bool)1] [(short)2])))))))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_15 = 0; i_15 < 25; i_15 += 1) 
                    {
                        arr_50 [i_12] [i_12] [(unsigned short)13] [(signed char)20] [i_15] = ((/* implicit */unsigned char) min((((/* implicit */int) min((arr_23 [i_13 - 1]), (arr_23 [i_13 - 1])))), ((-(((/* implicit */int) arr_23 [i_13 - 1]))))));
                        arr_51 [i_12] [11ULL] [(short)18] [i_12] = max((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_27 [i_12])), ((+(arr_41 [i_12])))))), (arr_14 [i_14] [i_12 + 2] [i_12] [14ULL] [i_12 - 1] [18ULL] [i_12]));
                        arr_52 [i_13] [i_12] = ((unsigned long long int) max((((/* implicit */unsigned short) ((unsigned char) arr_15 [i_12]))), (arr_47 [i_12] [i_13] [i_13] [i_13])));
                    }
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned long long int i_16 = 4; i_16 < 23; i_16 += 1) 
        {
            arr_57 [(unsigned short)24] [10LL] [(unsigned short)24] |= ((/* implicit */unsigned char) ((unsigned int) min((((/* implicit */long long int) max((arr_33 [i_12] [i_12 + 1] [i_12] [i_12 + 1] [i_16] [i_16]), (((/* implicit */unsigned char) arr_20 [i_16]))))), (((((/* implicit */_Bool) arr_32 [i_12] [(signed char)7])) ? (-5103260812971839063LL) : (((/* implicit */long long int) 2700311450U)))))));
            arr_58 [i_12] [(unsigned char)3] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_22 [i_16] [(unsigned char)19]))));
        }
        for (short i_17 = 0; i_17 < 25; i_17 += 3) 
        {
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) ((max((arr_40 [i_12]), (((/* implicit */unsigned long long int) 1988402949U)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_12 + 2])))))) + (((/* implicit */int) arr_49 [(signed char)0] [i_17] [i_12]))));
            var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((min((((/* implicit */unsigned long long int) -830408918)), (arr_14 [i_12 + 1] [i_12] [i_12] [i_12] [i_12] [(unsigned char)17] [i_12]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [(_Bool)0])) ? (((/* implicit */int) arr_45 [i_17] [(short)12] [1] [i_12])) : (((/* implicit */int) (signed char)104))))) < (max((arr_40 [(unsigned short)2]), (((/* implicit */unsigned long long int) arr_29 [i_12] [i_12] [(_Bool)1] [i_17] [(signed char)6] [(_Bool)1])))))))))))));
            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) -1412962477))));
        }
        arr_61 [i_12] = ((/* implicit */unsigned short) -830408913);
        arr_62 [i_12] [i_12] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_27 [(short)14])) / (arr_1 [i_12])))) ? (((((/* implicit */_Bool) arr_42 [i_12] [i_12] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_12] [i_12] [18ULL] [i_12]))) : (arr_26 [3U] [i_12]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)83))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [i_12 + 1] [i_12 - 1])) ? (((((((/* implicit */int) arr_49 [i_12] [i_12] [i_12])) + (2147483647))) >> (((2964837525U) - (2964837524U))))) : (((((/* implicit */_Bool) arr_27 [20])) ? (((/* implicit */int) arr_7 [i_12] [i_12] [i_12])) : (((/* implicit */int) arr_15 [i_12])))))))));
    }
    var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) (signed char)-63))));
}
