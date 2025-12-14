/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131700
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
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) -713564893785488519LL))));
    var_18 = ((/* implicit */unsigned long long int) var_3);
    var_19 &= ((/* implicit */long long int) ((((((/* implicit */_Bool) max((((/* implicit */int) var_5)), (-615757822)))) ? (((/* implicit */unsigned long long int) min((-615757845), (((/* implicit */int) var_10))))) : (((5315714487255709876ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))) >= (((/* implicit */unsigned long long int) var_1))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_15))) - (((7388487690512372082LL) - (((/* implicit */long long int) 1586262044U))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-14))) : (min((min((((/* implicit */unsigned int) 1197897673)), (2708705257U))), (((/* implicit */unsigned int) var_2))))));
                var_21 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */int) var_6)) * (((/* implicit */int) arr_1 [i_0]))))), (((5715528524001553873LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
}
