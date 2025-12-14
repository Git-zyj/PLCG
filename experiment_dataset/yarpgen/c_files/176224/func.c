/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176224
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
    var_11 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))));
    var_12 = ((/* implicit */long long int) var_0);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_6 [i_0] [5ULL] [i_0] = (unsigned short)58684;
                arr_7 [4LL] = ((/* implicit */int) ((long long int) min((((((/* implicit */int) arr_2 [11ULL] [i_0])) - (((/* implicit */int) var_8)))), (((/* implicit */int) arr_2 [i_0] [i_1])))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 4) 
                {
                    /* LoopSeq 4 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((min((var_0), (((/* implicit */int) arr_8 [i_1] [10ULL] [i_1])))) - (((/* implicit */int) min((((/* implicit */signed char) var_5)), (var_7)))))) - (((((/* implicit */int) arr_8 [i_2 + 2] [i_2 + 1] [i_2 - 2])) - (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)114)), ((unsigned char)156))))))));
                        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((max((arr_9 [i_0] [i_1] [6ULL] [i_3]), (arr_9 [i_3] [i_2] [i_1] [i_0]))), (((/* implicit */unsigned short) arr_8 [i_2 + 2] [i_2 - 1] [11]))))) && (var_8)));
                        arr_13 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) min((arr_0 [i_2 - 1]), (arr_0 [i_2 - 1])))) ? (max(((~(var_10))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_9)), (arr_5 [i_2] [(unsigned char)8])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_2 + 1] [i_2 - 1] [i_2 - 2])) >> (((/* implicit */int) arr_11 [i_2 - 1] [i_2 - 2] [i_2 - 1] [i_2 - 1]))))));
                    }
                    for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        arr_16 [i_0] [i_0] [(_Bool)1] [6LL] = ((/* implicit */long long int) (((+(((/* implicit */int) arr_14 [(_Bool)1] [i_2 + 1] [i_2 - 1])))) & (((((/* implicit */_Bool) arr_14 [i_0] [i_2 - 1] [i_2 - 2])) ? (((/* implicit */int) arr_14 [i_0] [i_2 + 2] [i_2 + 1])) : (((/* implicit */int) arr_14 [i_0] [i_2 - 1] [i_2 - 2]))))));
                        arr_17 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) arr_2 [i_4] [i_1]);
                        /* LoopSeq 1 */
                        for (signed char i_5 = 3; i_5 < 18; i_5 += 2) 
                        {
                            arr_20 [i_5] [i_5] = ((/* implicit */long long int) (+(((/* implicit */int) min((arr_10 [i_2 - 2] [i_5] [i_2]), (arr_10 [i_2 + 1] [i_4] [i_2 + 1]))))));
                            arr_21 [(short)14] [i_1] [(short)14] [i_4] [i_5] = ((/* implicit */signed char) arr_2 [17LL] [i_0]);
                            arr_22 [i_5] [(unsigned char)9] [i_0] [i_4] [i_5] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) arr_18 [i_5 - 2] [i_2] [i_5] [i_2] [i_2])))));
                        }
                        arr_23 [(short)8] [i_4] [i_2] [(signed char)1] [(unsigned short)2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned char) arr_5 [(signed char)8] [i_0]))), (max((((/* implicit */unsigned long long int) arr_15 [9] [i_2] [i_1])), (var_6)))))) ? (max((var_10), (((/* implicit */unsigned long long int) arr_2 [i_4] [i_4])))) : (((/* implicit */unsigned long long int) var_0))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (int i_7 = 0; i_7 < 19; i_7 += 2) 
                        {
                            var_14 = ((/* implicit */unsigned int) min((((/* implicit */int) ((signed char) (unsigned short)3))), (min((((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_7])) || (((/* implicit */_Bool) var_0))))), (((((/* implicit */int) arr_14 [i_2] [i_1] [i_0])) >> (((((/* implicit */int) arr_9 [i_1] [(unsigned char)16] [(short)11] [i_7])) - (32834)))))))));
                            arr_30 [i_7] [i_6] [2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((arr_4 [i_1] [i_6] [i_1]) | (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ^ (var_3)))) && ((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_29 [i_7] [i_6] [(short)1] [i_1] [i_0])))))))));
                        }
                        arr_31 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) arr_15 [i_2] [i_2 + 2] [i_2 + 2])), (((((/* implicit */_Bool) arr_1 [i_1])) ? (var_3) : (((/* implicit */unsigned long long int) arr_5 [i_6] [(_Bool)1])))))), (((var_2) * (arr_28 [i_2 - 2] [i_2] [i_2 - 2] [i_2] [i_2 - 2] [i_2 + 1])))));
                        arr_32 [9ULL] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_1 [i_2 + 2])) ? (((/* implicit */int) arr_8 [i_2 + 1] [i_6] [i_6])) : (((/* implicit */int) arr_8 [i_2 + 1] [i_2 + 1] [i_2])))), (((int) arr_1 [i_2 + 1]))));
                        var_15 = ((/* implicit */long long int) min(((+(((((/* implicit */int) var_9)) * (((/* implicit */int) arr_8 [i_0] [15LL] [(unsigned char)0])))))), (((/* implicit */int) arr_9 [i_6] [i_2 + 1] [i_1] [i_0]))));
                    }
                    for (unsigned int i_8 = 0; i_8 < 19; i_8 += 2) /* same iter space */
                    {
                        arr_35 [i_8] [i_2 - 2] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_2 + 2] [i_2 - 2] [i_2])) / (((/* implicit */int) arr_29 [i_2 + 2] [i_2 - 2] [(_Bool)1] [i_2] [(unsigned short)18]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-18))) - (2922597912U))) : (max((((/* implicit */unsigned int) min(((_Bool)1), (var_1)))), (arr_3 [i_2 - 2])))));
                        /* LoopSeq 3 */
                        for (short i_9 = 0; i_9 < 19; i_9 += 1) /* same iter space */
                        {
                            var_16 = ((/* implicit */int) max((((long long int) var_0)), (((/* implicit */long long int) ((unsigned int) arr_4 [i_2 + 2] [i_1] [i_2])))));
                            arr_39 [i_9] [3] [i_2] = ((/* implicit */unsigned char) (+(arr_1 [(unsigned short)6])));
                            arr_40 [i_9] [i_8] [i_9] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_8]))) ^ (arr_18 [i_9] [(signed char)14] [(_Bool)1] [i_1] [i_0]))))), ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) | (arr_28 [i_0] [i_1] [i_2 - 1] [i_2] [i_8] [(unsigned short)13])))))));
                        }
                        /* vectorizable */
                        for (short i_10 = 0; i_10 < 19; i_10 += 1) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_8] [i_10]);
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [0] [7ULL] [i_2] [i_2 - 1] [i_2 + 1])) || (((/* implicit */_Bool) arr_19 [i_2 - 2] [i_2 - 2] [i_2 + 1] [i_2 + 1] [i_10] [i_2 + 2] [i_2 - 1]))));
                        }
                        /* vectorizable */
                        for (short i_11 = 0; i_11 < 19; i_11 += 1) /* same iter space */
                        {
                            arr_46 [i_11] [i_1] [i_2] [i_8] [i_11] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0] [i_2 - 2] [7U] [i_2 - 2] [i_2 - 2]))) / (var_6)));
                            arr_47 [i_8] [i_8] [i_11] [i_2 + 1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_2 [i_2 + 1] [i_2 + 2]))));
                            var_19 = ((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)58193)))) >> (((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) (unsigned short)7))))));
                        }
                    }
                    arr_48 [i_0] [(unsigned char)10] [i_0] [i_2] = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) >> (((((/* implicit */int) arr_37 [(signed char)14] [i_1] [i_1] [i_2 - 1])) + (123)))))), (((((/* implicit */_Bool) (unsigned char)182)) ? (arr_41 [i_0] [i_0] [2] [i_0] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0]))))))), (((/* implicit */unsigned long long int) ((((arr_45 [i_1] [i_1] [i_1] [i_1]) + (9223372036854775807LL))) >> (((((/* implicit */int) max((((/* implicit */short) arr_33 [i_1] [17])), (arr_19 [8] [i_1] [8] [i_1] [i_2] [i_1] [i_1])))) - (19050))))))));
                }
                var_20 = ((/* implicit */unsigned short) (((+(min((((/* implicit */unsigned int) arr_44 [i_1] [11ULL] [(unsigned short)8] [i_0] [11ULL])), (arr_34 [i_0]))))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_1] [i_0])))));
                var_21 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_1])) < (var_0)))), ((+(arr_1 [(unsigned short)2])))))), (((var_2) << (((var_3) - (5954475058763012736ULL)))))));
            }
        } 
    } 
}
