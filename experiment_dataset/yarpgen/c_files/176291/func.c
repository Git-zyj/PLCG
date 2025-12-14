/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176291
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
    var_20 = ((/* implicit */unsigned short) var_16);
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) (signed char)127)))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)160)) : (((/* implicit */int) var_9))))) * (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (var_7))))) : (((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))) - (var_7)))));
    var_22 = ((/* implicit */signed char) var_1);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_23 = ((/* implicit */unsigned long long int) (unsigned char)33);
                var_24 = ((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)108)), ((unsigned char)33)));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) var_19);
}
