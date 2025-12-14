/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110817
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
    var_16 = ((/* implicit */signed char) min((var_1), (((((/* implicit */_Bool) (unsigned short)30758)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
    var_17 = ((/* implicit */long long int) min(((+(((/* implicit */int) min((var_14), (((/* implicit */short) (_Bool)1))))))), (((/* implicit */int) var_5))));
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) var_5))));
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1102804213567716393ULL)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (3942419478U)))))) : (min((((((/* implicit */_Bool) var_14)) ? (var_11) : (var_11))), (((/* implicit */long long int) var_14))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 ^= ((/* implicit */unsigned short) (((_Bool)1) ? ((~(1102804213567716402ULL))) : ((+(min((arr_2 [i_0]), (((/* implicit */unsigned long long int) 3942419478U))))))));
                var_21 = ((/* implicit */unsigned int) ((((_Bool) min((1102804213567716389ULL), (((/* implicit */unsigned long long int) arr_1 [(_Bool)1]))))) ? (((/* implicit */unsigned long long int) min((((352547843U) / (2325125769U))), (((/* implicit */unsigned int) var_2))))) : (min((min((arr_2 [i_0]), (((/* implicit */unsigned long long int) (unsigned short)0)))), (((/* implicit */unsigned long long int) min((arr_3 [i_1]), (arr_0 [i_0] [17ULL]))))))));
            }
        } 
    } 
}
