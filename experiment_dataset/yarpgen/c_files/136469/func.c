/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136469
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
    var_15 = ((/* implicit */unsigned int) min((var_15), (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))))), (var_5)))));
    var_16 = var_7;
    var_17 = 7516193918965659167LL;
    var_18 += ((/* implicit */int) var_12);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_19 *= ((/* implicit */long long int) arr_0 [i_0]);
                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 7516193918965659167LL)) ? (-7373343116032268615LL) : (((/* implicit */long long int) var_10))))))) ? (max((max((arr_2 [i_0] [i_0] [i_0]), (((/* implicit */long long int) var_13)))), ((-(8795622251188675110LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)86)) ? (3899119310U) : (((/* implicit */unsigned int) 1967453919))))))))));
            }
        } 
    } 
}
