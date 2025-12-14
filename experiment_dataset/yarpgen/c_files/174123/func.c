/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174123
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
    var_20 ^= ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) min((((/* implicit */signed char) var_17)), (var_0)))), (var_8))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) min((((/* implicit */signed char) var_17)), (var_14)))) != (((/* implicit */int) var_17))))))));
    var_21 = ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) * (var_9))) <= (((/* implicit */unsigned int) ((/* implicit */int) max((var_18), (var_19)))))))) / (((/* implicit */int) ((((/* implicit */unsigned int) ((((((/* implicit */int) var_7)) + (2147483647))) >> (((/* implicit */int) var_16))))) > (min((var_10), (((/* implicit */unsigned int) var_18)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [6LL] [6LL]))) * (arr_2 [i_0] [i_0] [i_0])))) && (((/* implicit */_Bool) ((var_9) << (((/* implicit */int) var_18)))))))) + (((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_0])) <= (arr_6 [(unsigned short)8])))) / (((((/* implicit */int) arr_4 [(short)6] [i_1])) & (((/* implicit */int) var_1))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((min((((/* implicit */short) var_11)), (var_7))), (((/* implicit */short) var_5)))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_7 [i_0] [i_1] [i_2] [i_2]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) * (((arr_7 [i_0] [i_0] [i_0] [i_4]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_2])))))))));
                                var_24 ^= min((min((min((((/* implicit */unsigned int) var_7)), (arr_0 [i_3]))), (((arr_8 [i_0] [i_0] [i_4] [i_3]) - (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))), (((/* implicit */unsigned int) var_7)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        for (short i_6 = 0; i_6 < 16; i_6 += 3) 
                        {
                            {
                                arr_18 [12] [i_1] [i_1] &= min((max((min((((/* implicit */long long int) var_4)), (arr_3 [i_0] [i_0] [i_0]))), (((/* implicit */long long int) var_18)))), (((/* implicit */long long int) var_3)));
                                arr_19 [i_6] [i_2] [i_0] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */int) var_5)) == (((/* implicit */int) var_0))));
                                arr_20 [i_0] [i_0] [i_1] [4U] [i_5] [i_0] &= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((var_6) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2] [12ULL] [i_6])) && (var_16)))))))), (arr_5 [i_1] [i_1] [i_6])));
                                var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_17 [(unsigned char)6] [(unsigned char)6]) ^ (((/* implicit */long long int) ((((/* implicit */int) var_16)) << (((((/* implicit */int) var_3)) - (1236))))))))), (((max((((/* implicit */unsigned long long int) arr_12 [i_1] [i_2] [i_1])), (arr_14 [2ULL] [2ULL]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_5)), (var_6))))));
}
