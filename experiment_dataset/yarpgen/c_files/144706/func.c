/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144706
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
    var_17 = ((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) (short)3420)) : (((/* implicit */int) ((_Bool) var_7)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 8; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (short i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            var_18 = ((/* implicit */signed char) var_13);
                            var_19 += ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (arr_6 [i_1] [i_2 + 1] [i_3 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                        }
                        /* vectorizable */
                        for (signed char i_5 = 0; i_5 < 10; i_5 += 2) /* same iter space */
                        {
                            var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_2 + 1] [(unsigned short)5])) ? (((((/* implicit */_Bool) 5108965940015733288LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) (signed char)-123))));
                            var_21 += ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (unsigned char)98)) ? (arr_3 [i_0] [i_0] [i_0]) : (var_0))));
                            arr_13 [3LL] [i_1] [i_1] [i_1] [3LL] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (1269692964) : (arr_10 [i_0] [i_1] [(_Bool)1] [i_3 + 1] [i_5] [9LL] [i_1])))) | (((((/* implicit */unsigned long long int) var_7)) & (arr_5 [i_0] [i_0] [i_0] [i_0])))));
                        }
                        /* vectorizable */
                        for (signed char i_6 = 0; i_6 < 10; i_6 += 2) /* same iter space */
                        {
                            arr_16 [i_0] [(_Bool)1] [i_1] [i_1] [(signed char)2] [(_Bool)1] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((int) var_16))) <= (((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)78)))))));
                            var_22 = ((/* implicit */unsigned long long int) arr_14 [i_0] [i_1] [1ULL] [(unsigned char)6] [1ULL]);
                            var_23 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_1] [i_6]))) ^ (30ULL))));
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((short) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [8ULL]))) : (arr_4 [(unsigned short)7] [i_1] [i_1])))))));
                            var_25 = ((/* implicit */unsigned char) ((arr_10 [i_0] [i_0] [(unsigned short)8] [i_0] [i_0] [i_0] [i_0]) | (arr_10 [i_0] [i_1] [(short)4] [i_2 - 1] [i_3 + 1] [i_6] [i_6])));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_7 = 1; i_7 < 9; i_7 += 2) 
                        {
                            arr_20 [i_2] [5U] [i_2] [9] [i_2] [i_2 - 1] = ((/* implicit */short) ((int) 9223372036854775807LL));
                            var_26 = ((/* implicit */_Bool) ((unsigned long long int) var_12));
                            arr_21 [i_0] [i_1] [i_3] [7] |= ((/* implicit */long long int) 14447774904298073033ULL);
                            var_27 ^= ((/* implicit */unsigned char) arr_17 [i_0] [i_1] [i_2 + 2] [i_3] [i_7]);
                            var_28 = ((/* implicit */unsigned short) max((var_28), (((unsigned short) var_11))));
                        }
                        arr_22 [(signed char)2] [(signed char)6] [(signed char)2] = ((/* implicit */unsigned long long int) arr_0 [i_0] [(unsigned char)8]);
                        arr_23 [i_0] [i_1] [(short)2] [(short)2] = ((/* implicit */long long int) var_16);
                    }
                } 
            } 
        } 
        arr_24 [i_0] |= ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) (short)3114)) != (((/* implicit */int) (signed char)-81)))));
        arr_25 [i_0] = ((/* implicit */short) var_9);
        var_29 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_7 [(unsigned char)7]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0]))))) + (((/* implicit */long long int) ((/* implicit */int) max((arr_2 [i_0] [i_0] [i_0]), (((/* implicit */signed char) var_16))))))))) ? (8184539534380577433LL) : (8935141660703064064LL)));
    }
    /* vectorizable */
    for (signed char i_8 = 0; i_8 < 20; i_8 += 2) 
    {
        arr_30 [i_8] [(signed char)13] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_8])) ? (arr_26 [i_8]) : (arr_26 [i_8])));
        arr_31 [(short)18] [i_8] = ((/* implicit */_Bool) ((((int) var_16)) - (((/* implicit */int) ((_Bool) (-9223372036854775807LL - 1LL))))));
        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((unsigned int) (~(((/* implicit */int) var_1))))))));
    }
}
