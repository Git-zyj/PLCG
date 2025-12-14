/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130181
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
    var_10 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((int) var_8))), (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) var_5)), (var_1)))), (((unsigned long long int) var_4))))));
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) max((max((var_3), (((/* implicit */unsigned long long int) var_8)))), (((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */unsigned long long int) var_4))))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (var_0))), (min((var_0), (var_0)))))) : (var_3)));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 + 1] [i_0])))), (((/* implicit */int) var_1))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_0 + 2] [2]))));
        var_13 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 + 2])) ? (((/* implicit */int) arr_1 [20ULL])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))), (var_9))), (((/* implicit */unsigned long long int) ((long long int) min((arr_0 [15ULL] [19]), (((/* implicit */short) arr_1 [7]))))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_2 = 1; i_2 < 18; i_2 += 4) 
        {
            var_14 = ((/* implicit */unsigned short) arr_5 [i_1] [i_2]);
            /* LoopNest 3 */
            for (short i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    for (short i_5 = 4; i_5 < 21; i_5 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */short) arr_4 [i_2 + 4] [(unsigned short)16] [i_5 - 4]);
                            arr_13 [i_1] [i_2 + 2] [i_5] [i_4] [i_5 - 1] = var_0;
                        }
                    } 
                } 
            } 
        }
        for (short i_6 = 1; i_6 < 21; i_6 += 3) 
        {
            var_16 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) var_1)) >= (((/* implicit */int) var_1)))));
            arr_16 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) var_1))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_1] [i_6 + 1]))) : (var_3))) : (arr_8 [i_1] [i_6 - 1] [(unsigned char)3] [(signed char)14])));
            arr_17 [i_6] = ((/* implicit */unsigned short) arr_9 [(signed char)6]);
            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) arr_7 [i_1] [i_1] [i_1]))));
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 4) 
                {
                    {
                        arr_23 [i_1] [(_Bool)1] [(unsigned short)6] [i_6] [i_8] = arr_10 [i_8] [i_8] [i_7] [i_6 - 1] [i_6] [15];
                        arr_24 [i_6] [(_Bool)1] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) -1386612555338940775LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_10 [i_8] [i_7] [i_7] [i_6 + 1] [11LL] [i_1])))) : (arr_4 [i_6 + 1] [i_7] [i_8])));
                        arr_25 [i_6] [i_6 - 1] [i_6] [i_6 + 1] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) var_8)) || (arr_18 [i_1] [i_7] [0]))));
                    }
                } 
            } 
        }
        arr_26 [(signed char)10] = ((/* implicit */int) ((((((/* implicit */int) arr_14 [13] [14LL])) / (arr_9 [i_1]))) >= (((/* implicit */int) arr_3 [i_1]))));
    }
    for (short i_9 = 0; i_9 < 11; i_9 += 3) 
    {
        var_18 = ((min((((((/* implicit */_Bool) arr_22 [i_9] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [(unsigned short)4]))) : (var_3))), (((/* implicit */unsigned long long int) arr_1 [i_9])))) | (((((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (arr_19 [21] [i_9])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_2)), (arr_10 [7LL] [i_9] [i_9] [i_9] [i_9] [i_9])))) : (min((((/* implicit */unsigned long long int) arr_1 [i_9])), (var_6))))));
        arr_30 [i_9] [i_9] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */int) var_8)) >> (((var_7) - (348184647)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_9] [i_9] [i_9]))) : (((((/* implicit */_Bool) arr_0 [16ULL] [i_9])) ? (var_4) : (var_4))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_9) >= (((/* implicit */unsigned long long int) var_4)))))) : (min((arr_4 [i_9] [i_9] [(short)5]), (((/* implicit */unsigned int) arr_3 [(_Bool)1]))))))));
        arr_31 [i_9] = ((signed char) arr_29 [i_9]);
        /* LoopNest 2 */
        for (signed char i_10 = 0; i_10 < 11; i_10 += 3) 
        {
            for (long long int i_11 = 0; i_11 < 11; i_11 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 0; i_12 < 11; i_12 += 4) 
                    {
                        for (unsigned short i_13 = 4; i_13 < 10; i_13 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) min((min((((/* implicit */int) max((arr_1 [i_12]), (((/* implicit */signed char) arr_42 [i_9] [i_10] [0] [9]))))), (((((/* implicit */_Bool) arr_12 [i_9] [i_13] [i_13] [(short)20] [i_13] [(short)14] [i_13])) ? (arr_39 [i_9] [i_9] [i_9] [i_9]) : (((/* implicit */int) var_1)))))), (((/* implicit */int) var_5))));
                                var_20 += ((/* implicit */unsigned char) arr_33 [i_9] [i_10] [(unsigned short)4]);
                            }
                        } 
                    } 
                    arr_43 [i_9] [10] = ((signed char) max((arr_29 [i_9]), (arr_10 [i_9] [i_9] [i_9] [(short)1] [3LL] [5ULL])));
                    arr_44 [i_9] [i_10] [i_11] = ((/* implicit */int) min((((/* implicit */unsigned short) arr_14 [i_9] [i_10])), (min((max((arr_21 [11] [i_10] [i_9] [i_10] [i_10] [i_10]), (((/* implicit */unsigned short) arr_11 [(short)17] [(signed char)5] [i_9] [i_11] [i_11])))), (arr_21 [i_9] [(unsigned short)9] [i_9] [(unsigned char)13] [i_9] [7ULL])))));
                    arr_45 [(_Bool)1] [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_9]))) >= (arr_37 [i_9] [i_9] [i_10] [(_Bool)1])));
                }
            } 
        } 
        var_21 ^= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) min((arr_5 [i_9] [i_9]), (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [(unsigned char)18] [(unsigned short)2])))));
    }
    for (unsigned int i_14 = 0; i_14 < 22; i_14 += 4) 
    {
        var_22 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) min((arr_4 [(_Bool)1] [(short)7] [i_14]), (((/* implicit */unsigned int) arr_6 [i_14] [i_14] [i_14]))))), (arr_8 [i_14] [i_14] [i_14] [i_14]))), (((/* implicit */unsigned long long int) ((short) ((var_6) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [9] [i_14] [0])))))))));
        arr_50 [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_14] [10U] [i_14] [(short)20] [i_14] [i_14] [i_14])) || (((((/* implicit */_Bool) arr_8 [i_14] [(signed char)16] [i_14] [i_14])) || (((/* implicit */_Bool) ((unsigned char) arr_46 [i_14])))))));
        var_23 += ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_12 [i_14] [6] [i_14] [i_14] [i_14] [(short)2] [i_14])), (min((arr_4 [i_14] [i_14] [i_14]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_14])) >= (((/* implicit */int) arr_49 [i_14])))))))));
        var_24 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) ((var_3) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(_Bool)0])))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_6 [i_14] [i_14] [2])) : (((/* implicit */int) arr_11 [6ULL] [i_14] [i_14] [14] [i_14])))))));
    }
}
