/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129049
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
    for (long long int i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_1 [i_1])) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) & (var_5)))))) || (((/* implicit */_Bool) ((arr_2 [i_0] [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_12)) == (arr_4 [i_0] [i_0] [i_0])))))))))))));
                var_16 += ((/* implicit */_Bool) ((((arr_3 [i_0 + 2]) % (arr_3 [i_0 - 3]))) & (((((((((/* implicit */int) var_14)) + (2147483647))) >> (((arr_0 [9]) - (6336749823780678555ULL))))) - (((/* implicit */int) var_4))))));
                var_17 |= ((/* implicit */unsigned int) var_13);
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */int) ((var_11) <= (var_1)))) >= (((((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) var_4))))) - (((/* implicit */int) ((unsigned short) var_14))))))))));
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) var_7))));
}
