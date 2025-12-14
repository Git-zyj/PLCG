/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14285
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
    var_13 = ((/* implicit */_Bool) (+((((+(((/* implicit */int) var_7)))) + (var_9)))));
    var_14 = ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) min((arr_0 [i_0 - 2]), (var_11)))), (3540718068U))), (((/* implicit */unsigned int) var_5))));
                var_16 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (arr_4 [i_0 + 3] [i_0 - 1] [i_0 + 2]) : (arr_0 [i_0 + 1]))));
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((unsigned int) var_6)), (((/* implicit */unsigned int) (_Bool)0))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) ((4294967271U) * (((/* implicit */unsigned int) arr_0 [6ULL])))))))) : (var_11)));
            }
        } 
    } 
}
