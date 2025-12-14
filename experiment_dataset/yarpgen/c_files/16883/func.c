/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16883
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_18 = (_Bool)1;
                    var_19 = ((/* implicit */signed char) min((var_13), (((/* implicit */unsigned int) (_Bool)1))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (var_9))))))), (var_6)));
}
