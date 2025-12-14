/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139896
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
    var_13 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) min(((unsigned short)12053), (((/* implicit */unsigned short) var_11))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)119))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */signed char) ((((/* implicit */int) max((var_12), (var_0)))) << (((((/* implicit */int) ((signed char) var_5))) + (13)))));
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (signed char)32))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((((/* implicit */int) var_11)) >> (((var_10) - (17317272695070933257ULL)))))) : (var_9)))));
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) max((((((((/* implicit */int) var_1)) != (((/* implicit */int) var_2)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5)))), (((/* implicit */int) var_5)))))));
}
