/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162804
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned char) min((min((arr_4 [i_1 - 2] [i_1 - 1] [i_1 - 3]), (arr_4 [i_1 - 2] [i_1 - 1] [i_1 - 3]))), (min((arr_4 [i_1 - 2] [i_1 - 1] [i_1 - 3]), (arr_4 [i_1 - 2] [i_1 - 1] [i_1 - 3])))));
                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_5 [(signed char)6] [15LL] [(short)5])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) var_9)))), (((/* implicit */int) arr_1 [i_0]))))) : (max((((/* implicit */unsigned long long int) arr_2 [i_0])), (((((/* implicit */_Bool) arr_4 [(unsigned char)7] [i_1 - 1] [(unsigned char)7])) ? (arr_4 [i_0] [(unsigned char)8] [(unsigned char)8]) : (var_7)))))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        for (long long int i_4 = 3; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) min((((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_3])) && (arr_11 [7] [i_1] [i_1] [i_3] [i_4]))) ? (((((/* implicit */_Bool) arr_10 [i_0] [17] [17ULL] [i_1] [10LL])) ? (arr_4 [(_Bool)1] [(_Bool)1] [i_3 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1 - 3] [i_1 - 3] [i_2] [i_1 - 3] [(unsigned short)11]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) arr_3 [(_Bool)1])), (arr_9 [i_0] [i_0]))))))), (((unsigned long long int) var_11)))))));
                                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */short) var_6)), (arr_1 [i_1 - 3])))) <= (((/* implicit */int) arr_2 [i_3 - 1]))));
                                arr_12 [i_2] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_7 [i_3 - 1] [i_2] [i_1 - 1] [(unsigned char)16])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_12)))), (((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_5 [i_1] [i_2] [i_4 + 4]))))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((signed char) min((((/* implicit */unsigned long long int) var_12)), (arr_4 [8ULL] [i_3] [i_4])))))));
                                arr_13 [i_2] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_10))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_2])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_11 [i_0] [i_0] [6LL] [i_3] [i_1 + 1])))) : (((/* implicit */int) arr_2 [i_3 + 1]))))), (arr_4 [i_3] [13LL] [i_0])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 4 */
    for (long long int i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
    {
        arr_16 [i_5] = ((/* implicit */unsigned char) arr_5 [i_5] [i_5] [i_5]);
        arr_17 [7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) arr_8 [i_5] [0ULL] [(signed char)13] [i_5])), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_8 [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) var_6))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 802205558)) ? (-4178615685345616548LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6555)))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) - (((unsigned long long int) var_4))))));
        arr_18 [i_5] = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((((/* implicit */short) var_5)), (arr_5 [i_5] [16ULL] [i_5])))) ? (((/* implicit */int) min((var_0), (((/* implicit */unsigned char) var_8))))) : (arr_6 [(unsigned short)8] [i_5]))) | ((((!(var_9))) ? (((/* implicit */int) arr_10 [17U] [(signed char)14] [i_5] [i_5] [i_5])) : (((((/* implicit */int) var_3)) & (((/* implicit */int) arr_10 [14ULL] [i_5] [i_5] [i_5] [3LL]))))))));
        var_20 |= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)255)), (-3316824697548299710LL)))) ? (((/* implicit */unsigned long long int) ((long long int) -1229226565))) : (((((/* implicit */_Bool) ((signed char) arr_14 [9LL] [3ULL]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [(short)0] [i_5])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_5 [i_5] [i_5] [i_5]))))) : (((((/* implicit */_Bool) arr_4 [(unsigned char)0] [i_5] [i_5])) ? (arr_4 [i_5] [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_5] [i_5])))))))));
        var_21 = ((/* implicit */unsigned char) ((unsigned short) (+(((/* implicit */int) ((short) var_8))))));
    }
    for (long long int i_6 = 0; i_6 < 16; i_6 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) max((((arr_4 [i_6] [(short)15] [i_6]) - (((/* implicit */unsigned long long int) arr_6 [12] [i_6])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_6])) ? (arr_6 [i_6] [i_6]) : (((/* implicit */int) arr_11 [i_6] [i_6] [i_6] [i_6] [i_6])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (-1229226577) : (((/* implicit */int) (signed char)21))))) : (max((min((arr_4 [i_6] [i_6] [(unsigned short)9]), (((/* implicit */unsigned long long int) arr_5 [i_6] [(unsigned char)12] [i_6])))), (arr_7 [i_6] [i_6] [(_Bool)1] [i_6])))));
        arr_23 [4ULL] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_9 [(short)14] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_21 [(unsigned char)6] [i_6]))));
        arr_24 [i_6] [i_6] = ((/* implicit */short) var_0);
        var_23 = ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_22 [i_6])), (((((long long int) arr_22 [i_6])) ^ (((/* implicit */long long int) ((/* implicit */int) ((arr_6 [i_6] [i_6]) > (((/* implicit */int) arr_11 [i_6] [i_6] [i_6] [i_6] [(unsigned char)5]))))))))));
    }
    for (long long int i_7 = 0; i_7 < 16; i_7 += 2) /* same iter space */
    {
        arr_27 [i_7] = ((/* implicit */unsigned long long int) ((((_Bool) arr_3 [i_7])) ? (((/* implicit */int) arr_3 [i_7])) : (((((/* implicit */int) var_0)) - (((/* implicit */int) arr_3 [i_7]))))));
        var_24 ^= ((/* implicit */_Bool) arr_8 [i_7] [i_7] [i_7] [i_7]);
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_25 += ((/* implicit */unsigned short) ((arr_31 [i_8] [7LL]) != (arr_31 [i_8] [i_8])));
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 3) 
        {
            for (signed char i_10 = 2; i_10 < 21; i_10 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 3) 
                    {
                        for (signed char i_12 = 2; i_12 < 21; i_12 += 2) 
                        {
                            {
                                var_26 += ((/* implicit */long long int) arr_37 [12ULL] [i_10 - 1] [(short)17]);
                                arr_43 [i_8] [i_8] [i_10] [i_11] [i_8] [i_9] [i_8] = ((/* implicit */unsigned int) var_11);
                                var_27 = ((/* implicit */signed char) (+(((/* implicit */int) arr_40 [i_8] [i_9] [15U] [i_11] [i_12]))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */short) arr_40 [i_8] [i_10 + 1] [i_10 - 1] [i_10 + 2] [i_8]);
                }
            } 
        } 
    }
}
