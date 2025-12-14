/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159953
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) ^ (var_12)));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        var_15 = arr_0 [i_0];
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [(short)11]) : (arr_0 [i_0])))) ? (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 1415960131U)) && (((/* implicit */_Bool) arr_0 [i_0])))))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_2 [i_0]) < (arr_1 [i_0]))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [i_0]) : (arr_1 [i_0]))))))))));
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] [8ULL] &= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))) / (arr_5 [i_1])));
        var_17 += ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) arr_1 [i_1])) : (arr_5 [i_1]))) : (arr_5 [i_1]))))));
        /* LoopNest 3 */
        for (unsigned int i_2 = 2; i_2 < 10; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                for (unsigned int i_4 = 0; i_4 < 13; i_4 += 1) 
                {
                    {
                        arr_17 [i_1] [i_3] [i_4] = ((/* implicit */long long int) arr_12 [i_3] [i_2]);
                        arr_18 [i_1] [i_1] [i_1] [8ULL] [4U] = ((/* implicit */long long int) ((arr_12 [i_1] [i_1]) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_2 - 1] [12LL] [i_2] [i_2 - 1] [12LL])) ? (((((/* implicit */_Bool) arr_3 [i_1] [i_2])) ? (arr_13 [i_2] [i_2] [i_3]) : (((/* implicit */long long int) arr_15 [i_2 + 2] [i_3] [(short)1])))) : (((/* implicit */long long int) arr_11 [i_1] [i_1])))))));
                        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_1 [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_7 [i_1]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_2 - 1] [i_2 + 2] [i_2 + 2])) ? (((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_3] [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) arr_2 [i_1])) : (arr_8 [i_1] [i_2]))) : (arr_8 [i_2] [(short)5])))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [10LL]))) & (((((/* implicit */_Bool) arr_10 [i_2] [i_3] [i_2])) ? (arr_4 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [7U] [i_4]))))))))))));
                        var_19 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_7 [(short)0])) ? (arr_15 [i_1] [i_2] [i_4]) : (arr_0 [i_4]))))) ? (arr_8 [i_2 - 1] [i_2 - 1]) : (arr_13 [i_1] [i_2 + 1] [i_4])));
                        var_20 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (arr_13 [i_3] [i_2] [i_1]) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)29)) << (((562949953421312ULL) - (562949953421302ULL))))))));
                    }
                } 
            } 
        } 
        arr_19 [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) 18446181123756130279ULL)) ? (2041253238U) : (4294967295U))) != (((/* implicit */unsigned int) ((/* implicit */int) ((arr_13 [i_1] [i_1] [i_1]) != (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_1])))))))));
        var_21 = arr_15 [i_1] [i_1] [i_1];
    }
    for (short i_5 = 0; i_5 < 13; i_5 += 4) /* same iter space */
    {
        arr_23 [i_5] [(short)8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) arr_1 [i_5])) : (arr_21 [i_5])))) ? (((((/* implicit */_Bool) arr_21 [i_5])) ? (((/* implicit */long long int) arr_2 [i_5])) : (((arr_5 [i_5]) << (((arr_5 [i_5]) - (2318216105199375511LL))))))) : (arr_5 [i_5])));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            arr_26 [i_5] [i_6] = ((/* implicit */unsigned int) arr_4 [i_5]);
            var_22 ^= ((((/* implicit */_Bool) ((short) arr_12 [i_6] [i_6]))) ? (arr_24 [i_5]) : (((/* implicit */unsigned long long int) ((arr_11 [i_5] [(signed char)1]) << (((arr_8 [i_5] [i_6]) + (3676471070595275537LL)))))));
            arr_27 [i_6] [i_5] [i_5] = ((/* implicit */long long int) ((((unsigned long long int) arr_20 [i_5] [i_6])) >> (((arr_24 [i_5]) - (12351160479024375985ULL)))));
        }
        var_23 = ((/* implicit */unsigned int) arr_13 [i_5] [i_5] [i_5]);
    }
    var_24 -= ((/* implicit */long long int) ((unsigned long long int) ((unsigned int) var_12)));
}
