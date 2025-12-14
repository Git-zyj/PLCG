/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112955
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
    var_19 = ((/* implicit */long long int) var_18);
    var_20 = ((/* implicit */unsigned char) var_18);
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 24; i_0 += 4) 
    {
        for (long long int i_1 = 4; i_1 < 24; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */int) var_16);
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) (~(((/* implicit */int) var_1)))))) ? (min((((/* implicit */long long int) (!(((/* implicit */_Bool) -45852374))))), (((((/* implicit */_Bool) var_12)) ? (-7690987784432535209LL) : (((/* implicit */long long int) var_18)))))) : (7690987784432535223LL)));
            }
        } 
    } 
}
