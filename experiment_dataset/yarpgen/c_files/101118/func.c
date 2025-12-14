/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101118
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
    var_11 = ((/* implicit */long long int) var_4);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 3; i_4 < 19; i_4 += 3) 
                        {
                            var_12 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_0 [i_0] [18])))) ^ (((/* implicit */int) min((var_10), ((unsigned short)35131))))));
                            var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_2 [i_0] [5])))) ? (max((-697808028755734628LL), (-697808028755734627LL))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30404))) ^ (var_3))))))) ? (arr_1 [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_0))))))))))))));
                            var_14 = ((/* implicit */_Bool) var_8);
                        }
                        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) -1)) ? (((/* implicit */int) max((((/* implicit */short) var_9)), (var_7)))) : (((((/* implicit */int) (unsigned char)26)) * (-2))))))))));
                        arr_12 [i_0 + 1] [i_0] [17] [10ULL] = (unsigned short)35131;
                        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)55)) > (((/* implicit */int) (unsigned short)7495)))))));
                    }
                    for (unsigned char i_5 = 2; i_5 < 20; i_5 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            arr_21 [i_0] [i_5] [i_2] [i_2] [3] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) var_2)) ^ ((-2147483647 - 1))))) ? (4047535771652663001ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5 + 1] [i_1 - 1]))))) & (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)30404)))))));
                            arr_22 [(unsigned char)20] [(unsigned short)13] [i_0] [i_5] [i_1] = ((/* implicit */unsigned short) -564227409639301550LL);
                            var_17 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_0)), (min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) & (var_8))), (((/* implicit */unsigned long long int) arr_14 [i_5]))))));
                            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */long long int) (-(((/* implicit */int) arr_10 [i_0 + 1] [2U] [10LL] [i_5] [i_6]))))) ^ (arr_20 [i_0] [i_0] [(unsigned short)19] [i_0] [(short)1] [i_0] [i_0]))))));
                            var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_6] [i_0] [i_0] [i_0]))));
                        }
                        for (int i_7 = 0; i_7 < 21; i_7 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned short) (-(max((var_5), (((/* implicit */unsigned long long int) arr_19 [i_7] [(signed char)15] [i_7] [i_2] [13ULL] [i_0 + 1] [i_0]))))));
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) max((((((/* implicit */int) arr_3 [i_1])) ^ (((/* implicit */int) arr_3 [i_1])))), (((/* implicit */int) ((((/* implicit */int) arr_5 [i_1] [i_1 - 2] [i_7])) <= (((((/* implicit */_Bool) -697808028755734627LL)) ? (((/* implicit */int) (signed char)25)) : (((/* implicit */int) arr_6 [i_1 - 1] [i_2] [(signed char)16] [i_7]))))))))))));
                        }
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_9 [i_0 - 1] [i_5 + 1] [i_5] [i_0] [i_5 - 1] [i_5])), (arr_18 [i_5 - 2] [i_1 - 1] [i_1 - 2] [(signed char)0] [i_0 + 1])))) ? (((/* implicit */int) ((arr_18 [i_5 - 1] [i_1 + 1] [i_1 - 2] [i_0] [i_0 + 1]) >= (arr_18 [i_5 + 1] [i_1 + 1] [i_1 + 1] [i_0 - 1] [i_0 - 1])))) : ((-(arr_18 [i_5 + 1] [i_1 + 1] [i_1 - 1] [i_0 - 1] [i_0 + 1])))));
                        var_23 = ((/* implicit */unsigned char) ((4294967295U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))));
                    }
                    var_24 |= ((/* implicit */signed char) var_9);
                }
            } 
        } 
    } 
}
