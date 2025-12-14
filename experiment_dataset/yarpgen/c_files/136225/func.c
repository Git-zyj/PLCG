/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136225
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)118))) <= (arr_3 [i_0]))))) * (max((arr_3 [(signed char)9]), (((/* implicit */unsigned long long int) var_4)))))) == (((arr_2 [i_1]) * (arr_3 [i_1])))));
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_2 [i_1]) : (((/* implicit */unsigned long long int) var_13))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (+(1797702431)))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)11030)), (1164813717U)))) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) 1164813716U)) : (139611588448485376ULL)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) var_0);
}
