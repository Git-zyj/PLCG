/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175853
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
    var_13 = ((/* implicit */unsigned int) ((signed char) var_9));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_2 = 1; i_2 < 21; i_2 += 2) 
                {
                    var_14 = ((/* implicit */unsigned short) max((var_14), (((unsigned short) ((((/* implicit */int) arr_0 [i_2])) ^ (((/* implicit */int) arr_1 [i_0])))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        arr_11 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0 + 4])) & (((/* implicit */int) arr_0 [i_0 + 2]))));
                        arr_12 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_2 + 3] [i_0 + 3])) && (((/* implicit */_Bool) arr_8 [i_2 + 3] [i_0 + 2]))));
                        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((arr_7 [i_0 + 2] [i_0 + 2] [i_0 + 2] [(unsigned short)9]) / (((/* implicit */unsigned long long int) arr_4 [(signed char)8] [i_0] [i_0])))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_2 + 2] [i_3])) ? (((/* implicit */int) arr_0 [i_0 - 3])) : (((/* implicit */int) arr_1 [i_1]))))))))));
                    }
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1]))) : (arr_7 [i_1] [i_1] [i_2 + 2] [i_0]))) / (((/* implicit */unsigned long long int) (+(arr_9 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0])))))))));
                }
                for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) /* same iter space */
                {
                    arr_16 [i_0] [i_0] [i_1] [i_4] = ((/* implicit */signed char) (~(arr_9 [i_0] [(signed char)13] [i_0] [i_1] [i_4] [i_4])));
                    arr_17 [i_0 - 2] [i_0 - 2] [i_0] [i_0 - 2] = ((/* implicit */_Bool) (~(min((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4] [i_0]))) : (arr_4 [(signed char)1] [i_1] [(signed char)1]))), (((/* implicit */unsigned int) max((arr_1 [i_1]), (((/* implicit */unsigned short) arr_13 [3ULL])))))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (signed char i_5 = 2; i_5 < 21; i_5 += 3) /* same iter space */
                    {
                        var_17 += ((/* implicit */unsigned long long int) ((unsigned short) arr_0 [i_4]));
                        arr_21 [i_5] [i_4] [i_4] [i_5] [i_5] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_4])) && (arr_5 [i_1] [i_4]))) ? (((arr_18 [i_5] [i_4] [i_1] [i_0]) ? (arr_10 [i_4] [i_4]) : (arr_7 [i_5 - 2] [i_4] [i_1] [(unsigned short)3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))));
                    }
                    /* vectorizable */
                    for (signed char i_6 = 2; i_6 < 21; i_6 += 3) /* same iter space */
                    {
                        arr_25 [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? (((arr_7 [i_0 - 3] [i_1] [i_4] [i_6 + 1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 + 1] [(signed char)13]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_24 [i_6] [i_6])) << (((/* implicit */int) arr_13 [i_0])))))));
                        arr_26 [i_0] [i_1] [(signed char)19] [i_6] [i_4] = ((/* implicit */signed char) arr_5 [i_0] [i_0 + 4]);
                        arr_27 [(signed char)6] [i_0] [i_6] [i_4] [i_6 - 2] = ((/* implicit */unsigned short) (+(arr_3 [i_1] [i_4] [i_4])));
                        var_18 -= ((/* implicit */unsigned short) ((signed char) arr_0 [i_0 - 3]));
                        var_19 -= ((/* implicit */signed char) ((unsigned long long int) (+(((/* implicit */int) arr_24 [i_1] [(signed char)14])))));
                    }
                    /* vectorizable */
                    for (signed char i_7 = 2; i_7 < 21; i_7 += 3) /* same iter space */
                    {
                        var_20 = ((((/* implicit */_Bool) ((unsigned int) arr_5 [i_4] [i_7]))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_1]))))) : (arr_22 [i_0 + 4] [i_7 - 1] [1ULL] [i_7 - 1]));
                        var_21 = ((/* implicit */_Bool) ((unsigned int) arr_7 [i_0] [i_7 + 1] [i_7] [i_7]));
                    }
                    for (signed char i_8 = 2; i_8 < 21; i_8 += 3) /* same iter space */
                    {
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) arr_18 [i_8 - 2] [i_1] [i_1] [i_0 - 1]))));
                        arr_33 [i_0] [(signed char)22] [(signed char)22] [i_0 + 3] [i_0] &= ((/* implicit */unsigned long long int) (~(min((((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [(unsigned short)0]))) ^ (arr_6 [i_8] [i_4] [7ULL]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_8 - 1] [i_8 - 2] [i_8])) >> (((/* implicit */int) arr_23 [17U] [i_1] [i_1] [i_1])))))))));
                    }
                    var_23 = ((/* implicit */unsigned long long int) arr_31 [i_0 - 2]);
                }
                for (unsigned short i_9 = 0; i_9 < 24; i_9 += 1) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (+(((((/* implicit */unsigned long long int) min((arr_6 [(_Bool)1] [(unsigned short)7] [(_Bool)1]), (((/* implicit */unsigned int) arr_35 [i_0] [i_1]))))) ^ (arr_22 [i_0 - 3] [i_0 - 2] [i_0] [i_0]))))))));
                    var_25 = ((/* implicit */signed char) ((arr_28 [i_0 - 3] [i_0 - 2]) != (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_0 + 4] [(_Bool)1] [i_0])) ^ (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0] [i_9])) ? (((/* implicit */int) arr_34 [i_0 + 2] [i_1] [i_9])) : (((/* implicit */int) arr_24 [i_9] [i_1])))))))));
                    arr_36 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned int) arr_5 [i_0] [i_1])), (arr_6 [i_0] [i_0] [(unsigned short)21]))) >> (((/* implicit */int) ((arr_28 [i_0] [i_9]) == (((/* implicit */unsigned long long int) arr_32 [i_0] [i_0 + 4] [i_0 + 3] [i_1] [i_1] [i_9])))))))) ? (((((/* implicit */_Bool) (~(arr_3 [i_0] [i_1] [i_9])))) ? (((unsigned long long int) arr_31 [i_9])) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [16ULL] [16ULL] [i_9] [(unsigned short)18]))) - (arr_7 [i_9] [i_1] [i_1] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_28 [i_0 - 1] [i_1]))))));
                    arr_37 [(_Bool)1] [i_1] &= ((/* implicit */signed char) (((+(((/* implicit */int) arr_1 [i_0 - 1])))) & (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) && (((/* implicit */_Bool) arr_1 [i_0 + 1])))))));
                    var_26 = arr_34 [i_9] [i_1] [i_0];
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_10 = 0; i_10 < 24; i_10 += 1) 
                {
                    arr_41 [i_0] [(unsigned short)14] [i_10] = ((((/* implicit */unsigned long long int) arr_32 [i_10] [i_10] [i_1] [i_0] [i_0] [i_0])) > (((((/* implicit */_Bool) arr_20 [i_10] [i_1] [7ULL] [i_0] [i_10] [i_0])) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0])) : (arr_10 [i_0 + 1] [(_Bool)1]))));
                    var_27 -= ((/* implicit */signed char) ((((/* implicit */int) ((arr_13 [i_0 + 1]) && (((/* implicit */_Bool) arr_19 [i_1]))))) * (((((/* implicit */int) arr_38 [i_0 + 2] [i_1] [i_10])) + (((/* implicit */int) arr_0 [i_0]))))));
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (signed char i_12 = 0; i_12 < 24; i_12 += 3) 
                        {
                            {
                                arr_46 [16U] [i_11] = ((/* implicit */unsigned short) ((((arr_28 [i_10] [i_11]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_0] [i_1]))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_11])) ? (((/* implicit */int) arr_24 [i_11] [i_11])) : (((/* implicit */int) arr_8 [i_0 - 3] [i_1])))))));
                                arr_47 [i_12] [i_11] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_2 [(unsigned short)19] [i_1]))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_38 [(signed char)17] [i_10] [i_10])) || (((/* implicit */_Bool) arr_14 [i_10] [i_11] [i_12]))))) : (((arr_15 [i_11] [(signed char)6] [(signed char)6]) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_24 [i_11] [i_10]))))));
                                var_28 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0 - 2] [i_0 + 1] [i_0] [i_0]))) / (arr_28 [i_12] [i_1])))) ? (((/* implicit */unsigned long long int) arr_19 [i_0 + 2])) : (arr_28 [(signed char)13] [(signed char)13])));
                                arr_48 [i_0 + 3] [i_10] [i_11] [i_11] [i_12] [i_0 - 2] [i_10] = ((/* implicit */_Bool) ((unsigned short) arr_34 [i_0 + 4] [i_0 + 2] [(signed char)7]));
                            }
                        } 
                    } 
                }
                arr_49 [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [(signed char)3]))) & (arr_28 [i_1] [i_0]))) > (((((/* implicit */_Bool) arr_14 [i_0 + 1] [i_1] [i_1])) ? (arr_22 [i_0] [i_0 - 1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_0] [(unsigned short)5] [(unsigned short)5]))))))))));
                arr_50 [(signed char)12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_30 [0U] [i_1] [i_1] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */int) arr_31 [i_0])) / (((/* implicit */int) arr_8 [i_0] [i_0 - 2]))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)15))) * (4225668146U)))));
                arr_51 [2ULL] = ((/* implicit */signed char) ((((((((/* implicit */int) arr_35 [i_0 + 3] [i_1])) <= (((/* implicit */int) arr_43 [i_0] [i_0] [i_0] [i_1] [i_0])))) ? ((+(arr_10 [i_1] [6U]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0 + 1] [i_0] [i_0] [i_0 - 3]))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((arr_10 [(unsigned short)13] [(unsigned short)13]) + (((/* implicit */unsigned long long int) arr_19 [i_1])))))))));
            }
        } 
    } 
}
