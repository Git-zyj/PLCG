/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119353
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
    for (int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = arr_0 [i_1] [i_0];
                arr_6 [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((arr_1 [i_0 - 1] [i_0 - 1]) > (((/* implicit */unsigned long long int) arr_0 [i_1] [i_0])))))))), (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_0]))))), (max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])), (arr_2 [i_0])))))));
                var_16 ^= ((/* implicit */signed char) ((min((0ULL), (((/* implicit */unsigned long long int) -571065132)))) | (min((max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])), (arr_1 [i_1] [i_0]))), (((/* implicit */unsigned long long int) arr_0 [i_0 - 1] [i_0 + 1]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 4) 
                            {
                                arr_16 [(short)9] [i_1] [(short)9] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0 - 1] [(signed char)9] [i_4 - 1] [(signed char)9] [i_4 - 1] [i_4 + 1])) ? (arr_15 [i_0 + 1] [i_2] [i_4 - 1] [i_4] [i_4 - 1] [i_4]) : (arr_15 [i_0 + 1] [i_0] [i_4 - 2] [i_4 + 1] [i_4 - 2] [i_4 + 1])))) ? (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_3] [i_3] [i_3]))))), (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1] [i_3] [i_3] [i_0])) ? (arr_2 [(signed char)8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_3]))))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_4 - 2] [i_0 - 1] [4] [i_1])))))));
                                arr_17 [i_0 + 1] [i_3] [i_0 + 1] [i_3] [i_4] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_2]))))) ? (((/* implicit */int) ((arr_10 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [8]) != (((/* implicit */unsigned long long int) arr_15 [i_4 - 1] [i_4] [i_4 - 2] [i_4] [4] [i_4]))))) : (max((((/* implicit */int) arr_3 [i_0 - 1])), (arr_14 [2LL] [i_0 - 1] [i_0 - 1] [i_0] [(short)1] [i_0])))));
                                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) arr_0 [i_0] [i_0]))));
                            }
                            for (short i_5 = 0; i_5 < 11; i_5 += 2) 
                            {
                                arr_20 [i_0] [i_1] [i_2] [(unsigned char)3] [i_3] [i_5] = ((/* implicit */int) (~(arr_2 [i_0])));
                                var_18 = ((/* implicit */short) ((max((((/* implicit */int) arr_8 [i_0] [i_0 - 1] [i_0] [i_0])), (arr_4 [i_0] [i_0 - 1]))) + (((((/* implicit */_Bool) (-(arr_10 [i_0] [i_1] [i_2] [i_0] [i_5])))) ? (((/* implicit */int) max((arr_8 [i_0] [i_1] [i_2] [i_1]), (((/* implicit */unsigned short) arr_12 [i_0] [i_0 + 1] [i_0] [i_0]))))) : (arr_15 [i_2] [i_1] [i_2] [i_1] [7] [i_0])))));
                            }
                            for (unsigned long long int i_6 = 4; i_6 < 7; i_6 += 2) 
                            {
                                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (!(((/* implicit */_Bool) max(((-(((/* implicit */int) arr_3 [i_0])))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_6 - 4]))) != (arr_10 [i_6] [i_3] [i_0 + 1] [i_1] [i_0 + 1]))))))))))));
                                arr_24 [i_0] [i_0 - 1] [i_0] [i_0 + 1] [i_0 - 1] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_10 [i_0 - 1] [i_6 + 3] [i_1] [i_0 - 1] [i_0])))) ? ((~(((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [1] [1] [1])) ? (arr_4 [i_0] [i_1]) : (((/* implicit */int) arr_11 [i_0] [(unsigned char)2] [i_1] [9LL] [i_3] [i_0])))))) : (max((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 + 1]))))), (((((/* implicit */_Bool) arr_19 [i_6])) ? (((/* implicit */int) arr_11 [(unsigned char)0] [i_0 + 1] [9ULL] [i_0 + 1] [i_1] [i_0 + 1])) : (((/* implicit */int) arr_3 [i_0]))))))));
                            }
                            /* vectorizable */
                            for (signed char i_7 = 3; i_7 < 10; i_7 += 2) 
                            {
                                arr_28 [i_0] [i_0] [i_0] [i_7] [2LL] [i_0 + 1] [i_7] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_23 [3] [(signed char)8] [i_2] [i_3] [i_7 + 1]))));
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_0 + 1] [i_7 + 1] [i_0 + 1] [i_7 - 3] [i_7])) ? (arr_23 [i_7 - 1] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_7 + 1])))));
                            }
                            var_21 ^= ((/* implicit */signed char) min(((~(((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [1LL] [i_3])) ? (arr_9 [i_3] [1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_3] [i_2] [i_1] [i_1] [i_0])))))))))));
                            arr_29 [i_0 + 1] [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0 - 1])) | (((/* implicit */int) arr_21 [i_0 + 1] [i_0 + 1] [8ULL] [i_0 - 1] [i_2]))))) < (max((max((arr_26 [(unsigned char)2] [(unsigned char)2] [i_2] [i_3] [i_3] [i_1]), (arr_26 [(short)2] [i_0] [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) var_1);
}
