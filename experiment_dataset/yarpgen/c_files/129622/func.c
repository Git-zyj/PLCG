/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129622
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 2; i_3 < 19; i_3 += 4) 
                    {
                        arr_11 [5] [(unsigned short)7] [i_2] [i_3 + 1] [i_2] [(unsigned char)14] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -1LL)) / (arr_3 [i_0] [i_1])))) ? (((((/* implicit */_Bool) (signed char)-105)) ? (17218651693702064912ULL) : (((/* implicit */unsigned long long int) 19LL)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0]))))))));
                        var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_5 [(signed char)13] [i_3] [i_3] [i_3 + 1]), (arr_10 [i_2] [i_2] [i_2] [(short)10]))))) == (((unsigned int) arr_5 [(unsigned char)1] [17ULL] [(short)12] [3ULL]))));
                    }
                    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) arr_0 [i_0]))));
                    var_13 ^= ((/* implicit */_Bool) ((13229478676365815573ULL) ^ (((((/* implicit */unsigned long long int) ((-4247522363062558108LL) | (-1LL)))) | (((((/* implicit */_Bool) (unsigned char)161)) ? (((/* implicit */unsigned long long int) 19LL)) : (5217265397343736042ULL)))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */long long int) min((max((((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_6))))), (((signed char) var_2)))), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_9)) + (((/* implicit */int) var_4))))))))));
}
