/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187156
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
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_2] [i_2] = ((/* implicit */long long int) min((2786361811U), (((/* implicit */unsigned int) (-(arr_7 [i_1] [i_2]))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_2] = ((/* implicit */unsigned long long int) var_8);
                        arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((signed char) var_6))) ? (((/* implicit */unsigned long long int) ((int) var_10))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) / (((/* implicit */unsigned long long int) arr_7 [i_3] [i_3 - 1]))));
                        var_15 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_5 [i_0 + 3] [i_3])) ? (arr_5 [i_0 - 3] [i_0 - 3]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [(unsigned char)11] [i_0]))))));
                        arr_14 [(unsigned char)12] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_6 [i_0] [i_0] [i_0 + 2] [i_0 - 1]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))))) != ((-(((/* implicit */int) (signed char)0))))));
                    }
                    for (int i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        var_16 = ((short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_0] [(unsigned short)8] [i_0]))))) ? (5867613606984374667LL) : (((/* implicit */long long int) max((((/* implicit */unsigned int) var_2)), (arr_16 [i_4] [0LL] [i_1] [i_0]))))));
                        var_17 = ((/* implicit */unsigned int) max(((-(max((var_6), (((/* implicit */unsigned long long int) 7925641626015726098LL)))))), (((((/* implicit */unsigned long long int) ((arr_2 [i_1]) ^ (((/* implicit */int) (signed char)105))))) | (var_6)))));
                        arr_19 [i_0] [i_1] [i_1] [i_4] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
                        arr_20 [i_0] [i_0] [2] [i_4] = ((((/* implicit */_Bool) (-(((arr_6 [i_0] [i_0] [(unsigned short)4] [(unsigned short)4]) + (arr_16 [i_0] [i_0] [i_0] [1ULL])))))) ? (((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 + 3])) ? (min((((/* implicit */long long int) 1022)), (arr_4 [i_0] [7] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)13)), ((unsigned char)152))))))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0 - 1])) ? (arr_5 [i_0] [i_0 + 2]) : (arr_5 [i_0] [i_0 - 1]))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        var_18 = ((/* implicit */short) (((+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_9 [i_0])) : (arr_21 [8ULL] [8ULL] [8ULL] [i_0] [i_1]))))) - (((/* implicit */unsigned long long int) max((min((arr_4 [i_0] [i_2] [i_0]), (((/* implicit */long long int) (-2147483647 - 1))))), (((/* implicit */long long int) arr_18 [(_Bool)1] [3] [i_1] [(unsigned char)4])))))));
                        arr_23 [10LL] [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) (signed char)50);
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)9))))) ? (((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0])) ? (arr_9 [i_0]) : (((/* implicit */unsigned int) var_12)))) : (((/* implicit */unsigned int) var_14))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_1))) ? (((arr_15 [i_1] [(_Bool)1] [i_0] [i_1]) ? (arr_5 [11U] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-120)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-68))) : (1664249416U))))))) : ((~(1ULL)))));
                        arr_24 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_5))))) : (arr_4 [i_0 - 2] [i_1] [i_5]))) & (((/* implicit */long long int) ((((915052353U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)131))))) ^ ((~(arr_9 [9ULL]))))))));
                    }
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((unsigned int) 1259604779));
}
