/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11379
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
    var_16 &= ((unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (((/* implicit */int) max((var_15), (var_15)))) : (((/* implicit */int) ((signed char) 2514498105008742703ULL)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((short) ((short) var_7))))));
                arr_4 [i_0] [(unsigned short)18] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_0 + 1])), (((int) (signed char)75))))) ? (max((min((((/* implicit */unsigned long long int) -7980605925988723459LL)), (arr_2 [7LL]))), (((/* implicit */unsigned long long int) ((var_9) || (((/* implicit */_Bool) arr_1 [(short)19]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((int) arr_2 [i_1])))))));
                arr_5 [i_0] = ((unsigned int) (+((~(var_4)))));
            }
        } 
    } 
    var_18 += ((/* implicit */short) ((signed char) ((unsigned int) var_13)));
}
