/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121056
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(min((((/* implicit */long long int) var_4)), (1963978412042678123LL)))))) ? (((/* implicit */unsigned long long int) (-(((var_14) + (((/* implicit */long long int) ((/* implicit */int) var_6)))))))) : (((((/* implicit */_Bool) -3379486394091605016LL)) ? (((/* implicit */unsigned long long int) 1741013537)) : (14762398080401655636ULL)))));
    var_17 = ((/* implicit */long long int) var_7);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */long long int) (((((-(15261043067947962815ULL))) >> (((min((-3379486394091605009LL), (((/* implicit */long long int) var_0)))) + (3379486394091605071LL))))) + (((/* implicit */unsigned long long int) (+((+(1741013553))))))));
                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 1885116193)) ? (3379486394091605015LL) : (8670070781236145302LL))))))));
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) min((min((var_7), (((/* implicit */unsigned int) (-2147483647 - 1))))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_15))))))))));
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) 0ULL))));
            }
        } 
    } 
}
