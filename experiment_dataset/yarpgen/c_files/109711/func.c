/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109711
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
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((_Bool) var_15)) ? (((var_10) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_7)))))))) ? (((((/* implicit */unsigned long long int) max((4294967279U), (((/* implicit */unsigned int) (unsigned char)233))))) ^ (((((/* implicit */_Bool) 4294967269U)) ? (var_16) : (((/* implicit */unsigned long long int) var_5)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) & (((/* implicit */int) var_7)))))));
    var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_15))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = var_10;
                arr_5 [i_0] = min(((~((+(((/* implicit */int) var_2)))))), (((((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) arr_2 [i_0]))))) ? (1041011411) : ((-(1041011411))))));
            }
        } 
    } 
}
