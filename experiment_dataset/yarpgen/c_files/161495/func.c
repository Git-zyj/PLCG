/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161495
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
    var_17 = var_3;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 24; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) var_6)), (arr_2 [i_1] [i_0])))) / (max((var_1), (((/* implicit */long long int) arr_4 [i_1 - 3] [2] [2ULL]))))));
                var_19 &= ((/* implicit */signed char) var_8);
                var_20 = ((/* implicit */unsigned int) ((signed char) (!(((/* implicit */_Bool) var_2)))));
                var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned int) arr_1 [i_0])), (max((arr_4 [9] [i_0] [i_0]), (((/* implicit */unsigned int) var_13))))));
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [(unsigned char)21] [i_0])) ? (((/* implicit */unsigned long long int) ((min((var_3), (((/* implicit */long long int) 1846567375)))) * (((((/* implicit */long long int) ((/* implicit */int) var_16))) / (arr_0 [i_1])))))) : (((15048120225018858777ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)37)))))));
            }
        } 
    } 
}
