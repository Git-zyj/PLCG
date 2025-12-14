/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151446
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
    var_13 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) ((14450251869861694090ULL) * (3996492203847857526ULL))))) ? (max((var_4), (var_11))) : (((int) max((-481628653622456576LL), (((/* implicit */long long int) var_3)))))));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_11)))) ? (var_1) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_6) : ((+(((/* implicit */int) var_3)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (max((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))))), (5198325682374942679ULL))), (max((13248418391334608925ULL), (3996492203847857526ULL)))))));
                var_16 = ((/* implicit */long long int) (~((~(((/* implicit */int) var_0))))));
                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((unsigned short) min((var_9), (((/* implicit */long long int) var_7))))))));
            }
        } 
    } 
}
