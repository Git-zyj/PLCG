/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137090
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
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned int) arr_3 [(unsigned char)0] [(signed char)2] [2LL]);
                arr_4 [i_0] [1U] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) ((unsigned int) arr_1 [2U])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_10)))) : (max((((/* implicit */unsigned long long int) var_17)), (max((((/* implicit */unsigned long long int) var_14)), (arr_2 [i_0] [i_1])))))));
                var_21 += ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((int) var_9)) >= (((/* implicit */int) ((unsigned char) var_5)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(unsigned short)9] [i_1])) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_1])) : (((/* implicit */int) var_10))))) ? (((((/* implicit */unsigned long long int) arr_1 [i_0])) ^ (arr_2 [i_0] [7ULL]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [(short)7]), (((/* implicit */short) var_0))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            for (unsigned char i_4 = 1; i_4 < 19; i_4 += 4) 
            {
                {
                    var_22 += ((/* implicit */signed char) ((var_0) ? (((/* implicit */long long int) min((min((arr_12 [i_3] [(unsigned short)10] [i_4] [(_Bool)1]), (var_18))), (max((var_8), (((/* implicit */int) arr_7 [i_4]))))))) : (max((max((((/* implicit */long long int) var_13)), (var_7))), (((/* implicit */long long int) min((var_16), (arr_7 [(unsigned char)20]))))))));
                    var_23 ^= ((/* implicit */signed char) max((((/* implicit */int) ((min((((/* implicit */unsigned int) var_16)), (arr_11 [i_4] [i_3] [i_3] [i_2]))) != (((/* implicit */unsigned int) ((var_0) ? (arr_12 [i_3] [i_3] [i_4] [i_4]) : (((/* implicit */int) arr_10 [i_2] [i_2] [i_4])))))))), (max((max((arr_12 [i_3] [i_3] [i_3] [i_3]), (((/* implicit */int) var_5)))), (min((var_17), (((/* implicit */int) var_0))))))));
                }
            } 
        } 
    } 
}
