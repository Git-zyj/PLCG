/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175395
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
    var_10 &= ((/* implicit */long long int) ((((((((/* implicit */long long int) ((/* implicit */int) var_7))) - (var_0))) * (((/* implicit */long long int) min((var_3), (((/* implicit */unsigned int) var_7))))))) < (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) max((var_1), (((/* implicit */unsigned char) var_5))))), (min((((/* implicit */short) var_5)), (var_9)))))))));
    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) var_1))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 ^= ((/* implicit */signed char) ((long long int) (!(((/* implicit */_Bool) var_4)))));
                var_13 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */int) min((((/* implicit */short) var_7)), (var_9)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) var_3);
}
