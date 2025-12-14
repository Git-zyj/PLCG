/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173369
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
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_12 *= ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_2] [i_3] [i_2] [i_3]))))) && (((/* implicit */_Bool) arr_1 [i_1] [i_0 - 1]))))), (((unsigned int) max((((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0] [i_0 - 1])), (arr_6 [i_0] [i_0] [i_0]))))));
                                var_13 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1512885205795479898LL)) ? (((/* implicit */unsigned long long int) 1835858272)) : (((((/* implicit */_Bool) 0LL)) ? (18302628885633695744ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)1))))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [(unsigned char)8])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2] [i_2])) ? (arr_3 [i_2]) : (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))))) ? (arr_3 [i_1 + 1]) : (arr_3 [i_1]))) : (max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_11 [i_0 + 3] [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_15 [i_2] [i_1] [i_0])))), (min((arr_14 [i_0 + 3] [i_0 + 3] [i_0] [(signed char)0] [i_0] [i_0 + 2]), (arr_14 [i_0] [i_0] [i_0] [4LL] [4LL] [i_2])))))));
                    /* LoopSeq 1 */
                    for (signed char i_5 = 1; i_5 < 14; i_5 += 4) 
                    {
                        var_15 *= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_0] [i_5])), (arr_8 [4LL] [4LL])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1 - 1] [i_2] [2])) && (((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [10])))))) : (min((arr_0 [i_0] [i_0]), (((/* implicit */long long int) arr_10 [2U] [2U] [i_2] [2LL])))))), (((((((/* implicit */_Bool) arr_12 [i_0 - 1] [(unsigned char)2] [i_5] [(_Bool)1] [i_0 - 1])) && (((/* implicit */_Bool) arr_16 [i_0 + 3] [i_0] [i_0] [14ULL] [i_0])))) ? (((/* implicit */long long int) ((arr_11 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 + 3] [i_0]) ? (arr_12 [i_5] [i_1] [i_2] [i_1] [(_Bool)1]) : (arr_2 [i_5 - 1] [i_1])))) : (min((((/* implicit */long long int) arr_10 [12] [i_2] [i_0] [12])), (arr_13 [i_0] [i_0] [i_2] [i_2] [i_5])))))));
                        var_16 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_5] [12LL])) && (((/* implicit */_Bool) (~(arr_3 [i_0]))))))), ((+((-(arr_4 [2])))))));
                        var_17 = ((/* implicit */short) (-((~(4611686001247518720LL)))));
                        arr_18 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [i_0 - 1] [i_0 - 1])), (arr_16 [i_0] [i_0 + 2] [i_0 - 1] [i_1] [i_0])))) ? (max((arr_6 [i_0] [i_1] [i_2]), (arr_17 [i_1] [i_1] [(unsigned char)0] [i_5]))) : ((-(5051416643734908005LL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [4] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_1]))) : (arr_4 [i_1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2] [(signed char)8])) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (arr_2 [i_0] [i_1 + 1])))) : (((arr_16 [i_0 - 1] [i_1] [i_1] [i_1] [i_5]) ^ (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0 + 1] [i_0])))))) : (((/* implicit */unsigned long long int) (-((-(arr_17 [i_1] [i_1] [i_2] [i_1]))))))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        for (unsigned int i_7 = 0; i_7 < 16; i_7 += 2) 
        {
            {
                arr_25 [i_6] = ((unsigned int) ((unsigned long long int) ((((/* implicit */int) arr_23 [i_6] [i_7])) ^ (((/* implicit */int) arr_22 [i_6] [i_7] [i_6])))));
                var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_19 [i_6 - 1] [i_7]), (arr_19 [i_6 - 1] [i_7])))) ? (((((/* implicit */_Bool) arr_19 [i_6 - 1] [i_7])) ? (((/* implicit */int) arr_19 [i_6 - 1] [i_7])) : (((/* implicit */int) arr_19 [i_6 - 1] [i_7])))) : (((/* implicit */int) arr_19 [i_6 - 1] [i_7]))));
                var_19 *= ((/* implicit */short) min((((/* implicit */int) arr_19 [i_6] [i_7])), (((((/* implicit */_Bool) arr_19 [i_6 - 1] [i_7])) ? (((((/* implicit */int) arr_23 [i_7] [i_7])) >> (((((/* implicit */int) arr_19 [(short)14] [i_7])) - (24956))))) : (((/* implicit */int) max((arr_19 [i_7] [i_7]), (((/* implicit */short) arr_24 [i_7] [i_7] [i_7])))))))));
            }
        } 
    } 
}
