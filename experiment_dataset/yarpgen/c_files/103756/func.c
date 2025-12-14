/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103756
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_14 *= ((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) arr_3 [(unsigned char)8]))));
                var_15 = ((/* implicit */_Bool) min((var_15), (((((/* implicit */long long int) ((((/* implicit */_Bool) 1813785339453391283ULL)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [16]))))) >= (((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) | (arr_0 [i_1] [i_0])))))));
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    var_16 = ((/* implicit */int) (short)12999);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (short i_4 = 1; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_17 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [16ULL]))) >= (max((((/* implicit */long long int) var_8)), (var_6))))) || (((/* implicit */_Bool) ((7657792118931574420ULL) - (arr_6 [i_4 + 2] [i_1] [i_4]))))));
                                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((max((arr_0 [i_4 + 2] [i_1]), (((/* implicit */long long int) (+(((/* implicit */int) var_4))))))) > (((/* implicit */long long int) ((/* implicit */int) ((0U) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)2659))))))))))));
                            }
                        } 
                    } 
                    arr_12 [5] [15U] [i_2] [i_2] = ((/* implicit */_Bool) ((((((((/* implicit */int) (_Bool)1)) << (((18446744073709551615ULL) - (18446744073709551597ULL))))) << (((((((/* implicit */_Bool) 1589132982)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_2 [i_2] [(unsigned short)7] [i_0])))) + (69))))) + (((/* implicit */int) arr_1 [i_0]))));
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 1; i_5 < 16; i_5 += 1) 
                {
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((arr_6 [(unsigned char)15] [4] [i_5 - 1]) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [2U])) >> (((/* implicit */int) (_Bool)1))))))))));
                    var_20 -= ((/* implicit */unsigned long long int) (unsigned short)32165);
                }
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (~(((/* implicit */int) (((~(((/* implicit */int) var_1)))) != (((-2147483647) + (((/* implicit */int) (signed char)127))))))))))));
}
