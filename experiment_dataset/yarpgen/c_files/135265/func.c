/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135265
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_19 = ((((/* implicit */_Bool) ((int) -2023634017))) ? (((((/* implicit */long long int) arr_4 [i_0] [i_1] [i_0])) / (var_5))) : ((-(min((((/* implicit */long long int) var_18)), (5182778209219754573LL))))));
                var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5182778209219754562LL)) ? (9223372036854775807LL) : (9223372036854775807LL)))) ? (((((((((/* implicit */_Bool) var_3)) ? (-1761148288) : (var_10))) + (2147483647))) >> (((min((((/* implicit */long long int) var_6)), (5182778209219754580LL))) - (46216650LL))))) : (var_10));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) 2023634043);
    var_22 = ((/* implicit */long long int) var_18);
    var_23 = var_9;
}
