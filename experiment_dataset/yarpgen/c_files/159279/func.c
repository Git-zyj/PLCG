/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159279
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(4852390695617769801LL)))) - (((var_0) + (((/* implicit */unsigned long long int) ((4090668861U) + (2463612220U))))))));
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1831355076U)) ? (16041773940936502175ULL) : (((/* implicit */unsigned long long int) 5809623237541416943LL))))) ? (((((/* implicit */_Bool) var_9)) ? (3638892662U) : (max((((/* implicit */unsigned int) (short)29600)), (1674628726U))))) : (2278546649U)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */short) min(((~(1674628719U))), (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-29605)))))));
                var_22 -= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 + 2])) : (((/* implicit */int) arr_0 [i_0 - 1])))), ((+(((/* implicit */int) (short)29600))))));
            }
        } 
    } 
}
