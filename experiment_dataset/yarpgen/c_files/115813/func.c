/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115813
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
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_12 [i_2] [i_0] [i_2 - 1] [(_Bool)1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_9 [i_0] [i_2 + 4] [i_3] [i_4] [(_Bool)1] [i_4]), (((/* implicit */unsigned long long int) max((arr_11 [i_0] [(short)4] [i_3 - 1] [i_3] [i_3]), (arr_10 [(_Bool)1] [i_1] [i_1] [i_1] [i_2 - 2] [i_3] [i_1]))))))) ? (((/* implicit */unsigned long long int) min((arr_2 [i_0] [i_1] [i_3 - 1]), (arr_2 [i_0] [i_1] [i_3 - 1])))) : (max((arr_9 [i_2] [i_2] [i_2 + 2] [i_2] [i_2] [(short)7]), (arr_9 [i_2] [i_2] [i_2 + 2] [(short)2] [i_2] [i_2 - 3])))));
                                arr_13 [i_0] [i_0] [0ULL] [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2])) ? (min((arr_5 [11LL] [11LL] [i_4]), (((/* implicit */unsigned long long int) arr_0 [i_0] [11])))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_4 [i_0] [i_1] [i_1] [2ULL])), (arr_1 [(short)8])))))) | (((/* implicit */unsigned long long int) ((((arr_0 [(short)0] [i_1]) / (arr_10 [i_0] [i_0] [i_1] [i_2] [i_1] [i_3] [i_4]))) * (((arr_10 [i_4] [(unsigned char)3] [i_2 - 1] [i_2] [i_0] [i_0] [(_Bool)1]) / (arr_1 [i_2]))))))));
                                var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((int) arr_0 [i_0] [i_3 + 1])), (((((/* implicit */_Bool) arr_11 [i_0] [10ULL] [i_2] [i_2] [i_0])) ? (arr_1 [(_Bool)1]) : (((/* implicit */int) arr_8 [8] [i_1]))))))) ? (arr_10 [i_2 + 3] [i_2 + 3] [i_3 - 1] [i_3] [i_3 - 1] [i_4] [(_Bool)1]) : (((/* implicit */int) ((arr_11 [i_1] [i_3 + 1] [0] [i_3 + 1] [i_3]) <= (arr_11 [i_0] [i_3 + 1] [i_3 + 1] [2] [i_3])))))))));
                                arr_14 [i_0] [i_1] = ((/* implicit */_Bool) arr_4 [i_3] [i_3 - 1] [i_4] [i_4]);
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1] [i_1] [i_0] [i_1]);
                            }
                        } 
                    } 
                } 
                var_12 ^= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((unsigned long long int) arr_3 [2ULL] [2ULL])) == (arr_9 [i_0] [i_1] [(signed char)10] [13] [i_1] [i_1])))), (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [14ULL] [4ULL] [(short)2])) ? (((/* implicit */unsigned long long int) arr_2 [(signed char)0] [i_1] [i_1])) : (((unsigned long long int) arr_8 [6ULL] [i_1]))))));
                var_13 *= arr_8 [(signed char)4] [(signed char)4];
                arr_16 [i_0] = ((/* implicit */int) arr_6 [13] [(_Bool)1] [8U] [i_1] [i_1]);
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    for (int i_6 = 1; i_6 < 15; i_6 += 1) 
                    {
                        {
                            arr_23 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((min((arr_2 [i_0] [i_1] [i_0]), (((/* implicit */int) arr_19 [i_0] [i_1] [i_5] [i_0])))) >= (((arr_17 [i_0] [i_1] [i_5] [i_6]) ^ (((/* implicit */int) arr_6 [(unsigned char)7] [i_1] [i_1] [i_1] [i_1])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_1] [i_6 - 1])) - (min((arr_2 [i_0] [i_1] [i_0]), (arr_2 [i_0] [i_1] [i_1])))))) : (((((1031902350487614643ULL) << (((2467720542899416971ULL) - (2467720542899416934ULL))))) - (min((arr_9 [i_0] [i_6] [i_5] [i_6] [i_0] [i_6]), (((/* implicit */unsigned long long int) arr_18 [i_0] [i_0] [i_5]))))))));
                            arr_24 [i_0] [i_0] [4LL] [i_5] [i_0] [i_1] = (i_0 % 2 == zero) ? (((/* implicit */unsigned int) max((((arr_5 [(signed char)4] [i_1] [(signed char)4]) >> (((((arr_22 [i_0] [1ULL] [i_0] [i_5] [i_6]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1]))))) - (11358543132225278639ULL))))), (((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [i_5] [i_6 + 1]))))) : (((/* implicit */unsigned int) max((((arr_5 [(signed char)4] [i_1] [(signed char)4]) >> (((((((arr_22 [i_0] [1ULL] [i_0] [i_5] [i_6]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1]))))) - (11358543132225278639ULL))) - (15485895511960198493ULL))))), (((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [i_5] [i_6 + 1])))));
                            var_14 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_6 + 1])) && (((/* implicit */_Bool) ((unsigned long long int) -675408691)))))) >= (arr_2 [i_0] [9U] [i_6 + 1])));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 += ((/* implicit */_Bool) max((((((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (var_5)))) - (var_0))), (((/* implicit */int) ((short) var_3)))));
}
